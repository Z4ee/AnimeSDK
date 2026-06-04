#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveGiftDanmu; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB14E200)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB14E240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER___C___CLEANENDEDDANMUS_B__18_0_OFFSET UNITYSDK_OFFSET(0xB14E250)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGiftDanmuSpawner___c_TypeDefinitionIndex = 70052;

	class IdleLiveGiftDanmuSpawner___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityIdleLive::IdleLiveGiftDanmuSpawner___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveGiftDanmuSpawner___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveGiftDanmuSpawner___c_TypeDefinitionIndex)->GetStaticField(0x53450);
		}
		static ::System::Predicate_1<::RPG::Client::ActivityIdleLive::IdleLiveGiftDanmu*>** StaticGet___9__18_0()
		{
			return (::System::Predicate_1<::RPG::Client::ActivityIdleLive::IdleLiveGiftDanmu*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveGiftDanmuSpawner___c_TypeDefinitionIndex)->GetStaticField(0x53458);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __CleanEndedDanmus_b__18_0(::RPG::Client::ActivityIdleLive::IdleLiveGiftDanmu* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGiftDanmu*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER___C___CLEANENDEDDANMUS_B__18_0_OFFSET))(this, a1);
		}
	};
}
