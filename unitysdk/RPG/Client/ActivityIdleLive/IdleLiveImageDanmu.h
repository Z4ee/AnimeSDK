#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDanmuBase.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuContentData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGEDANMU_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1C0F4D70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGEDANMU_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C0F4C20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGEDANMU_METHOD_6_66C47ED41C56178D_OFFSET UNITYSDK_OFFSET(0x1C0F4D00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGEDANMU_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1C0F4B40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGEDANMU__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0F4DD0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveImageDanmu_TypeDefinitionIndex = 74882;

	class IdleLiveImageDanmu : public ::RPG::Client::ActivityIdleLive::IdleLiveDanmuBase
	{
	public:
		::UnityEngine::UI::Image* JLHDCKNHDJH; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGEDANMU__CTOR_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGEDANMU_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Initialize(::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGEDANMU_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void Method_6_66C47ED41C56178D(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGEDANMU_METHOD_6_66C47ED41C56178D_OFFSET))(this, a1);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGEDANMU_DESPAWNED_OFFSET))(this);
		}
	};
}
