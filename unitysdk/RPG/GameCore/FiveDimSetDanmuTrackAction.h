#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION_METHOD_4_76FED96EFCED067A_OFFSET UNITYSDK_OFFSET(0x1D6D95D0)
#define RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION_METHOD_4_C742F5FAD038DC25_OFFSET UNITYSDK_OFFSET(0x1D6D9590)
#define RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D95C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetDanmuTrackAction_TypeDefinitionIndex = 18705;

	class FiveDimSetDanmuTrackAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* DanmuName; // 0x10
		::System::UInt32 TrackID; // 0x18
		::System::Boolean Enable; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C742F5FAD038DC25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetDanmuTrackAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetDanmuTrackAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION_METHOD_4_C742F5FAD038DC25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_76FED96EFCED067A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetDanmuTrackAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetDanmuTrackAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION_METHOD_4_76FED96EFCED067A_OFFSET))(a1, a2);
		}
	};
}
