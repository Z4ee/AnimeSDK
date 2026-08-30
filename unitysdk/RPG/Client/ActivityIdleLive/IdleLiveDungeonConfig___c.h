#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarTagConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0CEA50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C__CREATE_B__0_0_OFFSET UNITYSDK_OFFSET(0x1C0CEA90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C__CREATE_B__0_1_OFFSET UNITYSDK_OFFSET(0x1C0CEAA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0CEA80)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonConfig___c_TypeDefinitionIndex = 74898;

	class IdleLiveDungeonConfig___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::ILBattleAvatarTag, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::GameCore::ILBattleAvatarTag, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonConfig___c_TypeDefinitionIndex)->GetStaticField(0x580E0);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveDungeonConfig___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveDungeonConfig___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonConfig___c_TypeDefinitionIndex)->GetStaticField(0x580E8);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*, ::System::Boolean>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonConfig___c_TypeDefinitionIndex)->GetStaticField(0x580F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig* _Create_b__0_0(::RPG::GameCore::ILBattleAvatarTag a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C__CREATE_B__0_0_OFFSET))(this, a1);
		}

		::System::Boolean _Create_b__0_1(::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C__CREATE_B__0_1_OFFSET))(this, a1);
		}
	};
}
