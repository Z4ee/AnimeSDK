#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"
#include "unitysdk/RPG/GameCore/SO_PositionType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SO_MOVETO_METHOD_4_DF7E136865B9FAD6_OFFSET UNITYSDK_OFFSET(0x18DDFD10)
#define RPG_GAMECORE_SO_MOVETO_METHOD_4_E479E51F9D0612B3_OFFSET UNITYSDK_OFFSET(0x18DE0C10)
#define RPG_GAMECORE_SO_MOVETO__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDFCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_MoveTo_TypeDefinitionIndex = 18980;

	class SO_MoveTo : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::RPG::GameCore::SO_PositionType PositionType; // 0x18
		::RPG::GameCore::CharacterMotionFlag MoveStance; // 0x1C
		::System::Boolean SkipStartTurn; // 0x20
		::System::Boolean FinishAfterStop; // 0x21
		::System::Boolean AccurateStop; // 0x22
		::System::Boolean AlignRotation; // 0x23

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_MOVETO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E479E51F9D0612B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_MoveTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_MoveTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_MOVETO_METHOD_4_E479E51F9D0612B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DF7E136865B9FAD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_MoveTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_MoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_MOVETO_METHOD_4_DF7E136865B9FAD6_OFFSET))(a1, a2);
		}
	};
}
