#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarTagConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A64BBF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C__CREATE_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A64BC30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C__CREATE_B__0_1_OFFSET UNITYSDK_OFFSET(0x1A64BC40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A64BC20)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonConfig___c_TypeDefinitionIndex = 71592;

	class IdleLiveDungeonConfig___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*, ::System::Boolean>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonConfig___c_TypeDefinitionIndex)->GetStaticField(0x3E520);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveDungeonConfig___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveDungeonConfig___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonConfig___c_TypeDefinitionIndex)->GetStaticField(0x3E528);
		}
		static ::System::Func_2<::RPG::GameCore::ILBattleAvatarTag, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::GameCore::ILBattleAvatarTag, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonConfig___c_TypeDefinitionIndex)->GetStaticField(0x3E530);
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
