#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7EE2012A32ADD2BD;

#define CLASS_1_7EE2012A32ADD2BD___C__DISPLAYCLASS77_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18820580)
#define CLASS_1_7EE2012A32ADD2BD___C__DISPLAYCLASS77_0___HANDLESYNCDYNAMICBORNCATMESSAGE_B__0_OFFSET UNITYSDK_OFFSET(0x18821960)

inline static constexpr unsigned int Class_1_7EE2012A32ADD2BD___c__DisplayClass77_0_TypeDefinitionIndex = 77547;

class Class_1_7EE2012A32ADD2BD___c__DisplayClass77_0 : public ::System::Object
{
public:
	::Class_1_7EE2012A32ADD2BD* __4__this; // 0x10
	::System::Boolean originStop; // 0x18
	::UnityEngine::Vector3 originalLookAtPosition; // 0x1C
	::System::Single moveTimeSec; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EE2012A32ADD2BD___C__DISPLAYCLASS77_0__CTOR_OFFSET))(this);
	}

	::System::Void __HandleSyncDynamicBornCatMessage_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EE2012A32ADD2BD___C__DISPLAYCLASS77_0___HANDLESYNCDYNAMICBORNCATMESSAGE_B__0_OFFSET))(this);
	}
};
