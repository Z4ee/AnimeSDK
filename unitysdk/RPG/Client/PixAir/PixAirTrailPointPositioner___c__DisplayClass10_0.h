#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client::PixAir { class PixAirTrailPointPositioner; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC3ED1C0)
#define RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER___C__DISPLAYCLASS10_0__PLAY_B__0_OFFSET UNITYSDK_OFFSET(0xC3ED1E0)
#define RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER___C__DISPLAYCLASS10_0__PLAY_B__1_OFFSET UNITYSDK_OFFSET(0xC3ED220)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirTrailPointPositioner___c__DisplayClass10_0_TypeDefinitionIndex = 73716;

	class PixAirTrailPointPositioner___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::Client::MonoAnimationTrigger* animTrigger; // 0x10
		::System::Action_1<::System::String*>* onAnimEvent; // 0x18
		::System::Action_1<::System::String*>* animationCallback; // 0x20
		::RPG::Client::PixAir::PixAirTrailPointPositioner* __4__this; // 0x28
		::System::Action* onComplete; // 0x30
		::RPG::Client::RPGAnimationEvent* animEventCmpt; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _Play_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER___C__DISPLAYCLASS10_0__PLAY_B__0_OFFSET))(this, a1);
		}

		::System::Void _Play_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER___C__DISPLAYCLASS10_0__PLAY_B__1_OFFSET))(this);
		}
	};
}
