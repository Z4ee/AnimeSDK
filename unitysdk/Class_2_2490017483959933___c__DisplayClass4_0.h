#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
class Class_2_2490017483959933;

#define CLASS_2_2490017483959933___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10C94720)
#define CLASS_2_2490017483959933___C__DISPLAYCLASS4_0__POSTVOICE_B__0_OFFSET UNITYSDK_OFFSET(0x10C94730)

inline static constexpr unsigned int Class_2_2490017483959933___c__DisplayClass4_0_TypeDefinitionIndex = 39607;

class Class_2_2490017483959933___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_2_2490017483959933* __4__this; // 0x10
	::System::Double endTime; // 0x18
	::System::UInt32 voiceID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2490017483959933___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _PostVoice_b__0(::System::UInt32 eventID, ::AkCallbackType cbType, ::AkCallbackInfo* cbInfo)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_2490017483959933___C__DISPLAYCLASS4_0__POSTVOICE_B__0_OFFSET))(this, eventID, cbType, cbInfo);
	}
};
