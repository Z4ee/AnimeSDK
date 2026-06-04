#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVariableShort.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMLEVELVARIABLESHORT_METHOD_4_3A56F540516279C3_OFFSET UNITYSDK_OFFSET(0x197454F0)
#define RPG_GAMECORE_FIVEDIMLEVELVARIABLESHORT_METHOD_4_8F7E9E3BFA75CB43_OFFSET UNITYSDK_OFFSET(0x19745530)
#define RPG_GAMECORE_FIVEDIMLEVELVARIABLESHORT__CTOR_OFFSET UNITYSDK_OFFSET(0x19745520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLevelVariableShort_TypeDefinitionIndex = 17606;

	class FiveDimLevelVariableShort : public ::RPG::GameCore::LittleGameLevelVariableShort
	{
	public:
		::System::Boolean ResetOnExit; // 0x30
		::System::UInt32 PuzzleID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELVARIABLESHORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3A56F540516279C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLevelVariableShort*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLevelVariableShort*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELVARIABLESHORT_METHOD_4_3A56F540516279C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F7E9E3BFA75CB43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLevelVariableShort* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLevelVariableShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELVARIABLESHORT_METHOD_4_8F7E9E3BFA75CB43_OFFSET))(a1, a2);
		}
	};
}
