#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYSTOPLOOKAT_METHOD_3_14254510A3674B5C_OFFSET UNITYSDK_OFFSET(0x1CDC8E10)
#define RPG_GAMECORE_ADVENTITYSTOPLOOKAT_METHOD_3_21E5586A4FE83269_OFFSET UNITYSDK_OFFSET(0x1CDC8DD0)
#define RPG_GAMECORE_ADVENTITYSTOPLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC8E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityStopLookAt_TypeDefinitionIndex = 20310;

	class AdvEntityStopLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean StopImmediately; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPLOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_21E5586A4FE83269(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityStopLookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityStopLookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPLOOKAT_METHOD_3_21E5586A4FE83269_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_14254510A3674B5C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityStopLookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityStopLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPLOOKAT_METHOD_3_14254510A3674B5C_OFFSET))(a1, a2);
		}
	};
}
