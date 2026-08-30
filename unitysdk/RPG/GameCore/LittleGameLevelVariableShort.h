#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupPropertySide.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVariable.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLESHORT_METHOD_3_45B7C02A8915F961_OFFSET UNITYSDK_OFFSET(0x1D2048F0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLESHORT_METHOD_3_EF562EAC1AB692B1_OFFSET UNITYSDK_OFFSET(0x1D204320)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLESHORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D204310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVariableShort_TypeDefinitionIndex = 18675;

	class LittleGameLevelVariableShort : public ::RPG::GameCore::LittleGameLevelVariable
	{
	public:
		::System::Int16 DefaultValue; // 0x20
		::RPG::GameCore::GroupPropertySide Side; // 0x24
		::System::Int16 MinValue; // 0x28
		::System::Int16 MaxValue; // 0x2A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLESHORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_45B7C02A8915F961(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVariableShort*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVariableShort*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLESHORT_METHOD_3_45B7C02A8915F961_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EF562EAC1AB692B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVariableShort* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVariableShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLESHORT_METHOD_3_EF562EAC1AB692B1_OFFSET))(a1, a2);
		}
	};
}
