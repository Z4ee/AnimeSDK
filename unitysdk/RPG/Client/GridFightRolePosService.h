#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightMemberTransformInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_GETTRANSFORMBYUID_OFFSET UNITYSDK_OFFSET(0xA575550)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA575170)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_REMOVEUID_OFFSET UNITYSDK_OFFSET(0xA5754F0)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_SETTRANSFORMBYUID_OFFSET UNITYSDK_OFFSET(0xA575330)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5752A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRolePosService_TypeDefinitionIndex = 59707;

	class GridFightRolePosService : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightRolePosService** StaticGet__Instance()
		{
			return (::RPG::Client::GridFightRolePosService**)Il2CppClass::FromTypeDefinitionIndex(GridFightRolePosService_TypeDefinitionIndex)->GetStaticField(0x18180);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightMemberTransformInfo*>* _TransByUID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightRolePosService* get_Instance()
		{
			return ((::RPG::Client::GridFightRolePosService*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_GET_INSTANCE_OFFSET))();
		}

		::System::Void SetTransformByUID(::System::UInt32 uid, ::UnityEngine::Transform* trans, ::System::Boolean isPerspective)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_SETTRANSFORMBYUID_OFFSET))(this, uid, trans, isPerspective);
		}

		::System::Void RemoveUID(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_REMOVEUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightMemberTransformInfo* GetTransformByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightMemberTransformInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_GETTRANSFORMBYUID_OFFSET))(this, uid);
		}
	};
}
