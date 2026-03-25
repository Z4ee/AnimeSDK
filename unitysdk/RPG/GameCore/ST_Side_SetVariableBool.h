#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_SETVARIABLEBOOL_METHOD_4_B56FFABBD669899F_OFFSET UNITYSDK_OFFSET(0x1768FAA0)
#define RPG_GAMECORE_ST_SIDE_SETVARIABLEBOOL_METHOD_4_FAC58DBEB569CC1E_OFFSET UNITYSDK_OFFSET(0x17699EB0)
#define RPG_GAMECORE_ST_SIDE_SETVARIABLEBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1768FA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_SetVariableBool_TypeDefinitionIndex = 18390;

	class ST_Side_SetVariableBool : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean OnEnter; // 0x18
		::System::String* EnterName; // 0x20
		::System::Boolean EnterValue; // 0x28
		::System::Boolean OnExit; // 0x29
		::System::String* ExitName; // 0x30
		::System::Boolean ExitValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_SETVARIABLEBOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FAC58DBEB569CC1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_SetVariableBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_SetVariableBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_SETVARIABLEBOOL_METHOD_4_FAC58DBEB569CC1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B56FFABBD669899F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_SetVariableBool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_SetVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_SETVARIABLEBOOL_METHOD_4_B56FFABBD669899F_OFFSET))(a1, a2);
		}
	};
}
