#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RESETACTIONDELAY_METHOD_3_0E77CF49700CCEA8_OFFSET UNITYSDK_OFFSET(0x18CA92F0)
#define RPG_GAMECORE_RESETACTIONDELAY_METHOD_3_9DED3DFE360A0D2A_OFFSET UNITYSDK_OFFSET(0x18CA9370)
#define RPG_GAMECORE_RESETACTIONDELAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA9340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetActionDelay_TypeDefinitionIndex = 22255;

	class ResetActionDelay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean SkipTargetTurn; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETACTIONDELAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E77CF49700CCEA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetActionDelay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetActionDelay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETACTIONDELAY_METHOD_3_0E77CF49700CCEA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9DED3DFE360A0D2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetActionDelay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETACTIONDELAY_METHOD_3_9DED3DFE360A0D2A_OFFSET))(a1, a2);
		}
	};
}
