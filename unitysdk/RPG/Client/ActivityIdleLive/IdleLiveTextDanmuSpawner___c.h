#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuBase; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB175160)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB1751A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER___C___CLEANENDEDDANMUS_B__38_0_OFFSET UNITYSDK_OFFSET(0xB1751B0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTextDanmuSpawner___c_TypeDefinitionIndex = 70061;

	class IdleLiveTextDanmuSpawner___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityIdleLive::IdleLiveTextDanmuSpawner___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveTextDanmuSpawner___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTextDanmuSpawner___c_TypeDefinitionIndex)->GetStaticField(0x55190);
		}
		static ::System::Predicate_1<::RPG::Client::ActivityIdleLive::IdleLiveDanmuBase*>** StaticGet___9__38_0()
		{
			return (::System::Predicate_1<::RPG::Client::ActivityIdleLive::IdleLiveDanmuBase*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTextDanmuSpawner___c_TypeDefinitionIndex)->GetStaticField(0x55198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __CleanEndedDanmus_b__38_0(::RPG::Client::ActivityIdleLive::IdleLiveDanmuBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDanmuBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER___C___CLEANENDEDDANMUS_B__38_0_OFFSET))(this, a1);
		}
	};
}
