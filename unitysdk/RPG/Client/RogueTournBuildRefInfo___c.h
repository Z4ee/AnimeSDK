#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDF35C60)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDF35CA0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__SYNCINTERACTDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0xDF35CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefInfo___c_TypeDefinitionIndex = 67526;

	class RogueTournBuildRefInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournBuildRefInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournBuildRefInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefInfo___c_TypeDefinitionIndex)->GetStaticField(0xFF60);
		}
		static ::System::Func_2<::System::String*, ::RPG::Client::MongoObjectId>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::String*, ::RPG::Client::MongoObjectId>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefInfo___c_TypeDefinitionIndex)->GetStaticField(0xFF68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::MongoObjectId _SyncInteractData_b__5_0(::System::String* a1)
		{
			return ((::RPG::Client::MongoObjectId(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__SYNCINTERACTDATA_B__5_0_OFFSET))(this, a1);
		}
	};
}
