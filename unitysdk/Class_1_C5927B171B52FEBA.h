#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Struct_2_7E9A981C4706FCC7.h"
#include "unitysdk/System/Object.h"

class Class_1_11F0E0D52D9FF574;
class Class_1_8FB027E4F0CF7ACD;
class Class_2_EF480C3F09B3116B;

#define CLASS_1_C5927B171B52FEBA_METHOD_1_230E4ECF40B59202_OFFSET UNITYSDK_OFFSET(0x18D9EFA0)
#define CLASS_1_C5927B171B52FEBA_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18D9F220)
#define CLASS_1_C5927B171B52FEBA_METHOD_1_96961B86F4961D17_OFFSET UNITYSDK_OFFSET(0x18D9F190)
#define CLASS_1_C5927B171B52FEBA__CTOR_OFFSET UNITYSDK_OFFSET(0x18D9EF90)

inline static constexpr unsigned int Class_1_C5927B171B52FEBA_TypeDefinitionIndex = 42179;

class Class_1_C5927B171B52FEBA : public ::System::Object
{
public:
	::Cinemachine::CameraState Field_1_6; // 0x10
	::Class_2_EF480C3F09B3116B* Field_1_7; // 0xF8
	::Class_1_8FB027E4F0CF7ACD* Field_1_0; // 0x100
	::Struct_2_7E9A981C4706FCC7 Field_1_5; // 0x108

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5927B171B52FEBA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_230E4ECF40B59202(::Class_1_11F0E0D52D9FF574* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11F0E0D52D9FF574*))((::PBYTE)hIl2Cpp + CLASS_1_C5927B171B52FEBA_METHOD_1_230E4ECF40B59202_OFFSET))(this, a1);
	}

	::System::Void Method_1_96961B86F4961D17(::Class_1_11F0E0D52D9FF574* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11F0E0D52D9FF574*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C5927B171B52FEBA_METHOD_1_96961B86F4961D17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5927B171B52FEBA_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
