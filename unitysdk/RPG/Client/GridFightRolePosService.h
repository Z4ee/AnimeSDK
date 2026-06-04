#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightMemberTransformInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_GETTRANSFORMBYUID_OFFSET UNITYSDK_OFFSET(0xBBE2FC0)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xBBE2BE0)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_REMOVEUID_OFFSET UNITYSDK_OFFSET(0xBBE2F30)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_SETTRANSFORMBYUID_OFFSET UNITYSDK_OFFSET(0xBBE2DA0)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xBBE2D10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRolePosService_TypeDefinitionIndex = 60642;

	class GridFightRolePosService : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightRolePosService** StaticGet__Instance()
		{
			return (::RPG::Client::GridFightRolePosService**)Il2CppClass::FromTypeDefinitionIndex(GridFightRolePosService_TypeDefinitionIndex)->GetStaticField(0x36770);
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

		::System::Void SetTransformByUID(::System::UInt32 a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_SETTRANSFORMBYUID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_REMOVEUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMemberTransformInfo* GetTransformByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightMemberTransformInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_GETTRANSFORMBYUID_OFFSET))(this, a1);
		}
	};
}
