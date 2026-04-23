#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_987;

#define CLASS_1_E22C39997EAAEB02_GET_TARGETELEMENTID_OFFSET UNITYSDK_OFFSET(0x9064180)
#define CLASS_1_E22C39997EAAEB02_METHOD_1_218F2836DA51D562_OFFSET UNITYSDK_OFFSET(0x90642C0)
#define CLASS_1_E22C39997EAAEB02_METHOD_1_EF7FF4D68C8A0DF5_OFFSET UNITYSDK_OFFSET(0x90641A0)
#define CLASS_1_E22C39997EAAEB02_SET_TARGETELEMENTID_OFFSET UNITYSDK_OFFSET(0x9064190)
#define CLASS_1_E22C39997EAAEB02__CTOR_OFFSET UNITYSDK_OFFSET(0x9064310)

inline static constexpr unsigned int Class_1_E22C39997EAAEB02_TypeDefinitionIndex = 66739;

class Class_1_E22C39997EAAEB02 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_987* Field_1_0; // 0x10
	::System::UInt32 _TargetElementID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22C39997EAAEB02__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_TargetElementID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22C39997EAAEB02_GET_TARGETELEMENTID_OFFSET))(this);
	}

	::System::Void set_TargetElementID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E22C39997EAAEB02_SET_TARGETELEMENTID_OFFSET))(this, value);
	}

	::System::Void Method_1_EF7FF4D68C8A0DF5(::Class_0_16E4307DCC419505_987* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_987*))((::PBYTE)hIl2Cpp + CLASS_1_E22C39997EAAEB02_METHOD_1_EF7FF4D68C8A0DF5_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_987* Method_1_218F2836DA51D562()
	{
		return ((::Class_0_16E4307DCC419505_987*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22C39997EAAEB02_METHOD_1_218F2836DA51D562_OFFSET))(this);
	}
};
