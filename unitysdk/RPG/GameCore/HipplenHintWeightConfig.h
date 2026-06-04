#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HipplenRequireStatGrade; }

#define RPG_GAMECORE_HIPPLENHINTWEIGHTCONFIG_METHOD_2_76AE44B0A75AE613_OFFSET UNITYSDK_OFFSET(0x19834E00)
#define RPG_GAMECORE_HIPPLENHINTWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19834F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenHintWeightConfig_TypeDefinitionIndex = 15946;

	class HipplenHintWeightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HipplenRequireStatGrade* RequireStatGrade; // 0x10
		::System::UInt32 WorstAnswerWeight; // 0x18
		::System::UInt32 ApproximateAnswerWeight; // 0x1C
		::System::UInt32 CorrectAnswerWeight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENHINTWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_76AE44B0A75AE613(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenHintWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenHintWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENHINTWEIGHTCONFIG_METHOD_2_76AE44B0A75AE613_OFFSET))(a1, a2);
		}
	};
}
