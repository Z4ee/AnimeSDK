#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Class_1_3979F23DE6A08606.h"
#include "unitysdk/Enum_3_29C0F9DD2D79B68D.h"
#include "unitysdk/MoleMole/CameraShotData_Enum_3_7A9BE3F971E88471.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/Struct_2_455336A079B58DD3.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_329;
class Class_0_16E4307DCC419505_330;
class Class_0_16E4307DCC419505_377;
class Class_2_B37764AC37787BA1;
namespace Foundation { template <typename T> class AggregateObject_1; }
namespace System { class Action; }

#define CLASS_2_BA1D1EDC45C7614A_METHOD_2_0DD17B42459855A2_OFFSET UNITYSDK_OFFSET(0xD916250)
#define CLASS_2_BA1D1EDC45C7614A_METHOD_2_1EECC05CD95AF755_OFFSET UNITYSDK_OFFSET(0xD916C90)
#define CLASS_2_BA1D1EDC45C7614A_METHOD_2_3BC4F26FA1AA9C5D_OFFSET UNITYSDK_OFFSET(0xD916D10)
#define CLASS_2_BA1D1EDC45C7614A_METHOD_2_4EF4EC216B184993_OFFSET UNITYSDK_OFFSET(0xD9172D0)
#define CLASS_2_BA1D1EDC45C7614A_METHOD_2_741DDF759DAB7138_OFFSET UNITYSDK_OFFSET(0xD9171B0)
#define CLASS_2_BA1D1EDC45C7614A_METHOD_2_7C2F406C30440E64_OFFSET UNITYSDK_OFFSET(0xD916710)
#define CLASS_2_BA1D1EDC45C7614A_METHOD_2_84A9358A026DA23C_OFFSET UNITYSDK_OFFSET(0xD916890)
#define CLASS_2_BA1D1EDC45C7614A_METHOD_2_8FD0952225841B46_OFFSET UNITYSDK_OFFSET(0xD917520)
#define CLASS_2_BA1D1EDC45C7614A_METHOD_2_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0xD917240)
#define CLASS_2_BA1D1EDC45C7614A_METHOD_2_C50B93169B85DAEA_2_OFFSET UNITYSDK_OFFSET(0xD917490)
#define CLASS_2_BA1D1EDC45C7614A_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xD917120)
#define CLASS_2_BA1D1EDC45C7614A_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xD917480)
#define CLASS_2_BA1D1EDC45C7614A_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0xD915E10)
#define CLASS_2_BA1D1EDC45C7614A__CTOR_OFFSET UNITYSDK_OFFSET(0xD917110)

inline static constexpr unsigned int Class_2_BA1D1EDC45C7614A_TypeDefinitionIndex = 60047;

class Class_2_BA1D1EDC45C7614A : public ::Class_1_3979F23DE6A08606
{
public:
	::System::Action* Field_2_0; // 0x10
	::System::Nullable_1<::Cinemachine::CinemachineBlendDefinition> Field_2_1; // 0x18
	::Class_2_B37764AC37787BA1* Field_2_6; // 0x30
	::MoleMole::CameraShotData_Enum_3_7A9BE3F971E88471 Field_2_4; // 0x38
	::System::Boolean Field_2_3; // 0x3C
	::System::Single Field_2_5; // 0x40
	::PipelineCamera::WorldBasicCameraDataDeltaFlag Field_2_2; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA1D1EDC45C7614A__CTOR_OFFSET))(this);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>*))((::PBYTE)hIl2Cpp + CLASS_2_BA1D1EDC45C7614A_ONINITIALIZED_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DD17B42459855A2(::Class_0_16E4307DCC419505_329* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_329*))((::PBYTE)hIl2Cpp + CLASS_2_BA1D1EDC45C7614A_METHOD_2_0DD17B42459855A2_OFFSET))(this, a1);
	}

	::System::Void Method_2_84A9358A026DA23C(::Class_0_16E4307DCC419505_330* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_330*))((::PBYTE)hIl2Cpp + CLASS_2_BA1D1EDC45C7614A_METHOD_2_84A9358A026DA23C_OFFSET))(this, a1);
	}

	::System::Void Method_2_1EECC05CD95AF755(::Class_0_16E4307DCC419505_377* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_377*))((::PBYTE)hIl2Cpp + CLASS_2_BA1D1EDC45C7614A_METHOD_2_1EECC05CD95AF755_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_330* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_330*))((::PBYTE)hIl2Cpp + CLASS_2_BA1D1EDC45C7614A_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_741DDF759DAB7138(::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>*))((::PBYTE)hIl2Cpp + CLASS_2_BA1D1EDC45C7614A_METHOD_2_741DDF759DAB7138_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_329* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_329*))((::PBYTE)hIl2Cpp + CLASS_2_BA1D1EDC45C7614A_METHOD_2_C50B93169B85DAEA_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C2F406C30440E64(::Cinemachine::CinemachineBlendDefinition a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlendDefinition))((::PBYTE)hIl2Cpp + CLASS_2_BA1D1EDC45C7614A_METHOD_2_7C2F406C30440E64_OFFSET))(this, a1);
	}

	static ::Struct_2_455336A079B58DD3 Method_2_4EF4EC216B184993(::Cinemachine::CinemachineBlendDefinition& a1, ::PipelineCamera::WorldBasicCameraDataDeltaFlag a2)
	{
		return ((::Struct_2_455336A079B58DD3(*)(::Cinemachine::CinemachineBlendDefinition&, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + CLASS_2_BA1D1EDC45C7614A_METHOD_2_4EF4EC216B184993_OFFSET))(a1, a2);
	}

	::System::Void Method_2_3BC4F26FA1AA9C5D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BA1D1EDC45C7614A_METHOD_2_3BC4F26FA1AA9C5D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA1D1EDC45C7614A_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C50B93169B85DAEA_2(::Class_0_16E4307DCC419505_377* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_377*))((::PBYTE)hIl2Cpp + CLASS_2_BA1D1EDC45C7614A_METHOD_2_C50B93169B85DAEA_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FD0952225841B46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA1D1EDC45C7614A_METHOD_2_8FD0952225841B46_OFFSET))(this);
	}
};
