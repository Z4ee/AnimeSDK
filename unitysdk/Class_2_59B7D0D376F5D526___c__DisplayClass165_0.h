#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"

class Class_2_59B7D0D376F5D526_Class_0_16E7307DCC43CB2C_25;

#define CLASS_2_59B7D0D376F5D526___C__DISPLAYCLASS165_0__CTOR_OFFSET UNITYSDK_OFFSET(0x171EF8F0)
#define CLASS_2_59B7D0D376F5D526___C__DISPLAYCLASS165_0___TRYSETUPMARKPANEL_B__0_OFFSET UNITYSDK_OFFSET(0x171F15D0)

inline static constexpr unsigned int Class_2_59B7D0D376F5D526___c__DisplayClass165_0_TypeDefinitionIndex = 69097;

class Class_2_59B7D0D376F5D526___c__DisplayClass165_0 : public ::System::Object
{
public:
	::RPG::Client::UIFloatingTextType textType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526___C__DISPLAYCLASS165_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TrySetupMarkPanel_b__0(::Class_2_59B7D0D376F5D526_Class_0_16E7307DCC43CB2C_25* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_59B7D0D376F5D526_Class_0_16E7307DCC43CB2C_25*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526___C__DISPLAYCLASS165_0___TRYSETUPMARKPANEL_B__0_OFFSET))(this, a1);
	}
};
