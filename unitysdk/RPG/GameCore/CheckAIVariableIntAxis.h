#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHECKAIVARIABLEINTAXIS_METHOD_3_6CE74C73D13E08A6_OFFSET UNITYSDK_OFFSET(0x1E002740)
#define RPG_GAMECORE_CHECKAIVARIABLEINTAXIS_METHOD_3_7EFCE6822B91760F_OFFSET UNITYSDK_OFFSET(0x1E002780)
#define RPG_GAMECORE_CHECKAIVARIABLEINTAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E002770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckAIVariableIntAxis_TypeDefinitionIndex = 15340;

	class CheckAIVariableIntAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::System::String* VarName; // 0x10
		::RPG::GameCore::CompareType EquationType; // 0x18
		::System::Int32 TargetValue; // 0x1C
		::RPG::GameCore::FixPoint CheckScore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKAIVARIABLEINTAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6CE74C73D13E08A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckAIVariableIntAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckAIVariableIntAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKAIVARIABLEINTAXIS_METHOD_3_6CE74C73D13E08A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7EFCE6822B91760F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckAIVariableIntAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckAIVariableIntAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKAIVARIABLEINTAXIS_METHOD_3_7EFCE6822B91760F_OFFSET))(a1, a2);
		}
	};
}
