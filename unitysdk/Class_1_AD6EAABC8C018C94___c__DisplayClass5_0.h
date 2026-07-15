#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AD6EAABC8C018C94;
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_AD6EAABC8C018C94___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17CAD0E0)
#define CLASS_1_AD6EAABC8C018C94___C__DISPLAYCLASS5_0___SHOWWORLDFINISHTOAST_B__0_OFFSET UNITYSDK_OFFSET(0x17CAD180)

inline static constexpr unsigned int Class_1_AD6EAABC8C018C94___c__DisplayClass5_0_TypeDefinitionIndex = 63966;

class Class_1_AD6EAABC8C018C94___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_AD6EAABC8C018C94* __4__this; // 0x10
	::System::Boolean isShowAfterReconnect; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD6EAABC8C018C94___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* __ShowWorldFinishToast_b__0()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD6EAABC8C018C94___C__DISPLAYCLASS5_0___SHOWWORLDFINISHTOAST_B__0_OFFSET))(this);
	}
};
