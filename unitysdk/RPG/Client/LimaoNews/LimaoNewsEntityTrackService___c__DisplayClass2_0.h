#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F917B69C2E81F61E;
namespace RPG::Client::LimaoNews { class LimaoNewsEntityTrackService; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSENTITYTRACKSERVICE___C__DISPLAYCLASS2_0__BEGINTRACKENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xD450860)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSENTITYTRACKSERVICE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD44EDA0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsEntityTrackService___c__DisplayClass2_0_TypeDefinitionIndex = 78997;

	class LimaoNewsEntityTrackService___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsEntityTrackService* __4__this; // 0x10
		::Class_1_F917B69C2E81F61E* trackData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSENTITYTRACKSERVICE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _BeginTrackEntity_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSENTITYTRACKSERVICE___C__DISPLAYCLASS2_0__BEGINTRACKENTITY_B__0_OFFSET))(this);
		}
	};
}
