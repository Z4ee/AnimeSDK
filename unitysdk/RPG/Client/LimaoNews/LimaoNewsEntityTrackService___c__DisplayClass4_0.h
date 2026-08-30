#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F917B69C2E81F61E;
namespace RPG::Client::LimaoNews { class LimaoNewsEntityTrackService; }
namespace RPG::Client::NavMap { class ICartography; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSENTITYTRACKSERVICE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C530D80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSENTITYTRACKSERVICE___C__DISPLAYCLASS4_0___OPENTRACKMAPPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x1C530D90)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsEntityTrackService___c__DisplayClass4_0_TypeDefinitionIndex = 78997;

	class LimaoNewsEntityTrackService___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsEntityTrackService* __4__this; // 0x10
		::Class_1_F917B69C2E81F61E* trackData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSENTITYTRACKSERVICE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void __OpenTrackMapPage_b__0(::RPG::Client::NavMap::ICartography* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSENTITYTRACKSERVICE___C__DISPLAYCLASS4_0___OPENTRACKMAPPAGE_B__0_OFFSET))(this, a1);
		}
	};
}
