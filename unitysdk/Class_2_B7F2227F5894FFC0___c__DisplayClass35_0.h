#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
class Class_1_495BD7C43746BF8B;

#define CLASS_2_B7F2227F5894FFC0___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12408C60)
#define CLASS_2_B7F2227F5894FFC0___C__DISPLAYCLASS35_0___PLAYNPCTRIGGERSOUND_B__0_OFFSET UNITYSDK_OFFSET(0x124091D0)

inline static constexpr unsigned int Class_2_B7F2227F5894FFC0___c__DisplayClass35_0_TypeDefinitionIndex = 52601;

class Class_2_B7F2227F5894FFC0___c__DisplayClass35_0 : public ::System::Object
{
public:
	::Class_1_495BD7C43746BF8B* info; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
	}

	::System::Void __PlayNPCTriggerSound_b__0(::System::UInt32 eventID, ::AkCallbackType cbType, ::AkCallbackInfo* cbInfo)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0___C__DISPLAYCLASS35_0___PLAYNPCTRIGGERSOUND_B__0_OFFSET))(this, eventID, cbType, cbInfo);
	}
};
