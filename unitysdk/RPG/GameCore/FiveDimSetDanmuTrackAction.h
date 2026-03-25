#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION_METHOD_3_7F459651D7968AC4_OFFSET UNITYSDK_OFFSET(0x172094E0)
#define RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION_METHOD_3_A4512F649F61769F_OFFSET UNITYSDK_OFFSET(0x17209550)
#define RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17209530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetDanmuTrackAction_TypeDefinitionIndex = 17169;

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

		static ::System::Void Method_3_7F459651D7968AC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetDanmuTrackAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetDanmuTrackAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION_METHOD_3_7F459651D7968AC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A4512F649F61769F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetDanmuTrackAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetDanmuTrackAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION_METHOD_3_A4512F649F61769F_OFFSET))(a1, a2);
		}
	};
}
