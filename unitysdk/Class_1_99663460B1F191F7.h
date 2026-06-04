#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_99663460B1F191F7_VCameraDialogChangeState.h"
#include "unitysdk/System/Object.h"

class Class_1_2B55159CDDD73374;
namespace RPG::Client { class CameraBlendCurve; }

#define CLASS_1_99663460B1F191F7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138113E0)
#define CLASS_1_99663460B1F191F7_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x13811C40)
#define CLASS_1_99663460B1F191F7_METHOD_1_7A2A022FB5DF8954_OFFSET UNITYSDK_OFFSET(0x13811630)
#define CLASS_1_99663460B1F191F7_METHOD_1_8E03F0165E995519_OFFSET UNITYSDK_OFFSET(0x13811430)
#define CLASS_1_99663460B1F191F7_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x13811560)
#define CLASS_1_99663460B1F191F7_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x138115E0)
#define CLASS_1_99663460B1F191F7_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x13811A50)
#define CLASS_1_99663460B1F191F7_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x13811C50)
#define CLASS_1_99663460B1F191F7__CTOR_OFFSET UNITYSDK_OFFSET(0x13811C60)

inline static constexpr unsigned int Class_1_99663460B1F191F7_TypeDefinitionIndex = 65006;

class Class_1_99663460B1F191F7 : public ::System::Object
{
public:
	::Class_1_2B55159CDDD73374* Field_1_0; // 0x10
	::RPG::Client::CameraBlendCurve* Field_1_1; // 0x18
	::RPG::Client::CameraBlendCurve* Field_1_2; // 0x20
	::Class_1_2B55159CDDD73374* Field_1_3; // 0x28
	::Class_1_2B55159CDDD73374* Field_1_4; // 0x30
	::Class_1_99663460B1F191F7_VCameraDialogChangeState _CurrentState_k__BackingField; // 0x38
	::System::Boolean Field_1_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99663460B1F191F7__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99663460B1F191F7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8E03F0165E995519(::Class_1_2B55159CDDD73374* a1, ::Class_1_2B55159CDDD73374* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B55159CDDD73374*, ::Class_1_2B55159CDDD73374*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_99663460B1F191F7_METHOD_1_8E03F0165E995519_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_2B55159CDDD73374* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B55159CDDD73374*))((::PBYTE)hIl2Cpp + CLASS_1_99663460B1F191F7_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::Class_1_2B55159CDDD73374* Method_1_7A2A022FB5DF8954(::System::Single a1)
	{
		return ((::Class_1_2B55159CDDD73374*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_99663460B1F191F7_METHOD_1_7A2A022FB5DF8954_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99663460B1F191F7_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99663460B1F191F7_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::Class_1_99663460B1F191F7_VCameraDialogChangeState get_CurrentState()
	{
		return ((::Class_1_99663460B1F191F7_VCameraDialogChangeState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99663460B1F191F7_GET_CURRENTSTATE_OFFSET))(this);
	}

	::System::Void set_CurrentState(::Class_1_99663460B1F191F7_VCameraDialogChangeState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99663460B1F191F7_VCameraDialogChangeState))((::PBYTE)hIl2Cpp + CLASS_1_99663460B1F191F7_SET_CURRENTSTATE_OFFSET))(this, a1);
	}
};
