#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonAssistData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonFriendSoltData; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0D05B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0D05F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__TRYADDASSISTDATA_B__4_2_OFFSET UNITYSDK_OFFSET(0x1C0D0600)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C___GETASSISTDATAS_B__12_0_OFFSET UNITYSDK_OFFSET(0x1C0D06A0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonData___c_TypeDefinitionIndex = 74900;

	class IdleLiveDungeonData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveDungeonData___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonData___c_TypeDefinitionIndex)->GetStaticField(0x58B60);
		}
		static ::System::Predicate_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData*>** StaticGet___9__4_2()
		{
			return (::System::Predicate_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonData___c_TypeDefinitionIndex)->GetStaticField(0x58B68);
		}
		static ::System::Comparison_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonData___c_TypeDefinitionIndex)->GetStaticField(0x58B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryAddAssistData_b__4_2(::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__TRYADDASSISTDATA_B__4_2_OFFSET))(this, a1);
		}

		::System::Int32 __GetAssistDatas_b__12_0(::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData*, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C___GETASSISTDATAS_B__12_0_OFFSET))(this, a1, a2);
		}
	};
}
