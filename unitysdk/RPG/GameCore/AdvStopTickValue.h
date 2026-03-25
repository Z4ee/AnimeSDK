#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSTOPTICKVALUE_METHOD_3_1748A6D17DB6DA3F_OFFSET UNITYSDK_OFFSET(0x16F44FC0)
#define RPG_GAMECORE_ADVSTOPTICKVALUE_METHOD_3_F1D324691D98AA12_OFFSET UNITYSDK_OFFSET(0x16F44EF0)
#define RPG_GAMECORE_ADVSTOPTICKVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F44F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvStopTickValue_TypeDefinitionIndex = 19354;

	class AdvStopTickValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::DynamicString* ConfigName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTOPTICKVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F1D324691D98AA12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvStopTickValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvStopTickValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTOPTICKVALUE_METHOD_3_F1D324691D98AA12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1748A6D17DB6DA3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvStopTickValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvStopTickValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTOPTICKVALUE_METHOD_3_1748A6D17DB6DA3F_OFFSET))(a1, a2);
		}
	};
}
