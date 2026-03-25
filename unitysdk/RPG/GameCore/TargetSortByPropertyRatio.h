#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityPropertyRatio.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_METHOD_3_1A32BDA9438001C8_OFFSET UNITYSDK_OFFSET(0x177D38F0)
#define RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_METHOD_3_F68B031937003FCA_OFFSET UNITYSDK_OFFSET(0x177D27C0)
#define RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x177D27A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByPropertyRatio_TypeDefinitionIndex = 22272;

	class TargetSortByPropertyRatio : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::AbilityPropertyRatio PropertyRatioType; // 0x10
		::System::Boolean HighestFirst; // 0x14
		::System::Boolean AliveOnly; // 0x15

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1A32BDA9438001C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByPropertyRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByPropertyRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_METHOD_3_1A32BDA9438001C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F68B031937003FCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByPropertyRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByPropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_METHOD_3_F68B031937003FCA_OFFSET))(a1, a2);
		}
	};
}
