#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
class Class_2_F3D22185E562ED08;

#define CLASS_2_F3D22185E562ED08___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D1180)
#define CLASS_2_F3D22185E562ED08___C__DISPLAYCLASS5_0__POSTSFX_B__0_OFFSET UNITYSDK_OFFSET(0x1A0D1390)

inline static constexpr unsigned int Class_2_F3D22185E562ED08___c__DisplayClass5_0_TypeDefinitionIndex = 49295;

class Class_2_F3D22185E562ED08___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_2_F3D22185E562ED08* __4__this; // 0x10
	::System::UInt32 sfxID; // 0x18
	::System::Double endTime; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3D22185E562ED08___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _PostSFX_b__0(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_F3D22185E562ED08___C__DISPLAYCLASS5_0__POSTSFX_B__0_OFFSET))(this, a1, a2, a3);
	}
};
