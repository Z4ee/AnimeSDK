#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityPropertyRatio.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_METHOD_3_2C57CFF910399D34_OFFSET UNITYSDK_OFFSET(0x1D5BB7C0)
#define RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_METHOD_3_B05B3CC2ED309E52_OFFSET UNITYSDK_OFFSET(0x1D5BB790)
#define RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_METHOD_3_C8249FCE004B2345_OFFSET UNITYSDK_OFFSET(0x1D5BB5C0)
#define RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_METHOD_3_F68B031937003FCA_OFFSET UNITYSDK_OFFSET(0x1D5BB600)
#define RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BB5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByPropertyRatio_TypeDefinitionIndex = 23721;

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

		static ::System::Void Method_3_C8249FCE004B2345(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByPropertyRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByPropertyRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_METHOD_3_C8249FCE004B2345_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F68B031937003FCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByPropertyRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByPropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_METHOD_3_F68B031937003FCA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B05B3CC2ED309E52(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPropertyRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPropertyRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_METHOD_3_B05B3CC2ED309E52_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2C57CFF910399D34(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPropertyRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_METHOD_3_2C57CFF910399D34_OFFSET))(a1, a2);
		}
	};
}
