#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
class Class_2_F3D22185E562ED08;

#define CLASS_2_F3D22185E562ED08___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C88C60)
#define CLASS_2_F3D22185E562ED08___C__DISPLAYCLASS4_0__POSTVOICE_B__0_OFFSET UNITYSDK_OFFSET(0x18C88F80)

inline static constexpr unsigned int Class_2_F3D22185E562ED08___c__DisplayClass4_0_TypeDefinitionIndex = 47038;

class Class_2_F3D22185E562ED08___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_2_F3D22185E562ED08* __4__this; // 0x10
	::System::Double endTime; // 0x18
	::System::UInt32 voiceID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3D22185E562ED08___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _PostVoice_b__0(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_F3D22185E562ED08___C__DISPLAYCLASS4_0__POSTVOICE_B__0_OFFSET))(this, a1, a2, a3);
	}
};
