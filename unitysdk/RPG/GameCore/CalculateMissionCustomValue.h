#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionCustomValueCalculation.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionCustomValue; }
namespace RPG::GameCore { class MissionCustomValuePair; }

#define RPG_GAMECORE_CALCULATEMISSIONCUSTOMVALUE_METHOD_3_0266B18C4DE46FEF_OFFSET UNITYSDK_OFFSET(0x187B6430)
#define RPG_GAMECORE_CALCULATEMISSIONCUSTOMVALUE_METHOD_3_29A11CFB89905436_OFFSET UNITYSDK_OFFSET(0x187B63B0)
#define RPG_GAMECORE_CALCULATEMISSIONCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x187B6400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CalculateMissionCustomValue_TypeDefinitionIndex = 19398;

	class CalculateMissionCustomValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TargetSubmissionID; // 0x18
		::RPG::GameCore::MissionCustomValue* TargetMissionCustomValue; // 0x20
		::RPG::GameCore::MissionCustomValuePair* ValueA; // 0x28
		::RPG::GameCore::MissionCustomValuePair* ValueB; // 0x30
		::RPG::GameCore::MissionCustomValueCalculation Calculation; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCULATEMISSIONCUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_29A11CFB89905436(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CalculateMissionCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CalculateMissionCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCULATEMISSIONCUSTOMVALUE_METHOD_3_29A11CFB89905436_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0266B18C4DE46FEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CalculateMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CalculateMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCULATEMISSIONCUSTOMVALUE_METHOD_3_0266B18C4DE46FEF_OFFSET))(a1, a2);
		}
	};
}
