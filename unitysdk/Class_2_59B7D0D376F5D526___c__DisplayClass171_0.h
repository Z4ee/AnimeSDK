#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"

class Class_2_59B7D0D376F5D526_Class_0_16E7307DCC43CB2C_33;

#define CLASS_2_59B7D0D376F5D526___C__DISPLAYCLASS171_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1588B520)
#define CLASS_2_59B7D0D376F5D526___C__DISPLAYCLASS171_0___TRYSETUPMARKPANEL_B__0_OFFSET UNITYSDK_OFFSET(0x1588D270)

inline static constexpr unsigned int Class_2_59B7D0D376F5D526___c__DisplayClass171_0_TypeDefinitionIndex = 72370;

class Class_2_59B7D0D376F5D526___c__DisplayClass171_0 : public ::System::Object
{
public:
	::RPG::Client::UIFloatingTextType textType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526___C__DISPLAYCLASS171_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TrySetupMarkPanel_b__0(::Class_2_59B7D0D376F5D526_Class_0_16E7307DCC43CB2C_33* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_59B7D0D376F5D526_Class_0_16E7307DCC43CB2C_33*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526___C__DISPLAYCLASS171_0___TRYSETUPMARKPANEL_B__0_OFFSET))(this, a1);
	}
};
