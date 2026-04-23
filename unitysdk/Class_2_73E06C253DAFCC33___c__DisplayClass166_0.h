#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"

class Class_2_73E06C253DAFCC33_Class_0_16E7307DCC43CB2C_21;

#define CLASS_2_73E06C253DAFCC33___C__DISPLAYCLASS166_0__CTOR_OFFSET UNITYSDK_OFFSET(0x118EB9E0)
#define CLASS_2_73E06C253DAFCC33___C__DISPLAYCLASS166_0___TRYSETUPMARKPANEL_B__0_OFFSET UNITYSDK_OFFSET(0x118ECE70)

inline static constexpr unsigned int Class_2_73E06C253DAFCC33___c__DisplayClass166_0_TypeDefinitionIndex = 66673;

class Class_2_73E06C253DAFCC33___c__DisplayClass166_0 : public ::System::Object
{
public:
	::RPG::Client::UIFloatingTextType textType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33___C__DISPLAYCLASS166_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TrySetupMarkPanel_b__0(::Class_2_73E06C253DAFCC33_Class_0_16E7307DCC43CB2C_21* config)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_73E06C253DAFCC33_Class_0_16E7307DCC43CB2C_21*))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33___C__DISPLAYCLASS166_0___TRYSETUPMARKPANEL_B__0_OFFSET))(this, config);
	}
};
