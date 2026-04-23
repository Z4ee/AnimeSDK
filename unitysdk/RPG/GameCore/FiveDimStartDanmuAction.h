#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimDanmuTrackAlignment.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSTARTDANMUACTION_METHOD_3_2BF505E96F17AA0A_OFFSET UNITYSDK_OFFSET(0x1891F670)
#define RPG_GAMECORE_FIVEDIMSTARTDANMUACTION_METHOD_3_99A740A7120D38DF_OFFSET UNITYSDK_OFFSET(0x1891F600)
#define RPG_GAMECORE_FIVEDIMSTARTDANMUACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1891F650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartDanmuAction_TypeDefinitionIndex = 17769;

	class FiveDimStartDanmuAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* DanmuName; // 0x10
		::System::String* EntityPreset; // 0x18
		::System::UInt32 TrackGroupID; // 0x20
		::System::Single Speed; // 0x24
		::System::Int32 Number; // 0x28
		::System::Boolean IsRandomTrack; // 0x2C
		::System::Boolean IsFollowCamera; // 0x2D
		::RPG::GameCore::FiveDimDanmuTrackAlignment TrackAlignment; // 0x30
		::System::Single BufferDistance; // 0x34
		::System::Single IntervalMin; // 0x38
		::System::Single IntervalMax; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTDANMUACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_99A740A7120D38DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartDanmuAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartDanmuAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTDANMUACTION_METHOD_3_99A740A7120D38DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2BF505E96F17AA0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartDanmuAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartDanmuAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTDANMUACTION_METHOD_3_2BF505E96F17AA0A_OFFSET))(a1, a2);
		}
	};
}
