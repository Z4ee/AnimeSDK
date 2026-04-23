#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarTagConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B2D340)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG___C__CREATE_B__0_0_OFFSET UNITYSDK_OFFSET(0x9B2D390)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B2D380)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAvatarConfig___c_TypeDefinitionIndex = 69128;

	class IdleLiveAvatarConfig___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::ILBattleAvatarTag, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::GameCore::ILBattleAvatarTag, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveAvatarConfig___c_TypeDefinitionIndex)->GetStaticField(0x29050);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveAvatarConfig___c_TypeDefinitionIndex)->GetStaticField(0x29058);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig* _Create_b__0_0(::RPG::GameCore::ILBattleAvatarTag tagId)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG___C__CREATE_B__0_0_OFFSET))(this, tagId);
		}
	};
}
