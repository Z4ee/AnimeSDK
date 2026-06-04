#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VCameraChangeDataState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace System { class String; }

#define CLASS_1_C33A6A0F83B7A2E0_GET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0xAC46AE0)
#define CLASS_1_C33A6A0F83B7A2E0_GET_STATE_OFFSET UNITYSDK_OFFSET(0xAC46A70)
#define CLASS_1_C33A6A0F83B7A2E0_GET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0xAC46AA0)
#define CLASS_1_C33A6A0F83B7A2E0_GET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0xAC46AC0)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0xAC46720)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0xAC46940)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0xAC469A0)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_2685B6183E614529_3_OFFSET UNITYSDK_OFFSET(0xAC466B0)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xAC468E0)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_3D610397D980D25C_OFFSET UNITYSDK_OFFSET(0xAC46060)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_549390661C81F7F4_OFFSET UNITYSDK_OFFSET(0xAC45DE0)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_5E5FAAAE21B44BAE_1_OFFSET UNITYSDK_OFFSET(0xAC46260)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0xAC46490)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_6F9C2FDD9C04B44A_OFFSET UNITYSDK_OFFSET(0xAC45F30)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_B03D6532FCBFB0EE_OFFSET UNITYSDK_OFFSET(0xAC467F0)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAC46890)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC45EE0)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xAC46A00)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAC46A90)
#define CLASS_1_C33A6A0F83B7A2E0_SET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0xAC46AF0)
#define CLASS_1_C33A6A0F83B7A2E0_SET_STATE_OFFSET UNITYSDK_OFFSET(0xAC46A80)
#define CLASS_1_C33A6A0F83B7A2E0_SET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0xAC46AB0)
#define CLASS_1_C33A6A0F83B7A2E0_SET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0xAC46AD0)
#define CLASS_1_C33A6A0F83B7A2E0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC45DD0)

inline static constexpr unsigned int Class_1_C33A6A0F83B7A2E0_TypeDefinitionIndex = 65009;

class Class_1_C33A6A0F83B7A2E0 : public ::System::Object
{
public:
	::RPG::Client::CameraBlendCurve* Field_1_0; // 0x10
	::RPG::Client::CameraBlendCurve* Field_1_1; // 0x18
	::UnityEngine::Matrix4x4 Field_1_2; // 0x20
	::System::Single _KeepDuration_k__BackingField; // 0x60
	::System::Single _TransitOutTime_k__BackingField; // 0x64
	::System::Single _TransitInTime_k__BackingField; // 0x68
	::RPG::Client::VCameraChangeDataState _State_k__BackingField; // 0x6C
	::UnityEngine::Matrix4x4 Field_1_7; // 0x70
	::System::Single Field_1_8; // 0xB0
	::UnityEngine::Matrix4x4 Field_1_9; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_549390661C81F7F4(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_549390661C81F7F4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6F9C2FDD9C04B44A(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_6F9C2FDD9C04B44A_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Matrix4x4 Method_1_3D610397D980D25C(::System::Single a1)
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_3D610397D980D25C_OFFSET))(this, a1);
	}

	::System::Void Method_1_B03D6532FCBFB0EE(::UnityEngine::Matrix4x4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_B03D6532FCBFB0EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_2685B6183E614529_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_5E5FAAAE21B44BAE_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_2685B6183E614529_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_0E142E3463F30350_OFFSET))(this);
	}

	::RPG::Client::VCameraChangeDataState get_State()
	{
		return ((::RPG::Client::VCameraChangeDataState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::VCameraChangeDataState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::VCameraChangeDataState))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_SET_STATE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single get_TransitInTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_GET_TRANSITINTIME_OFFSET))(this);
	}

	::System::Void set_TransitInTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_SET_TRANSITINTIME_OFFSET))(this, a1);
	}

	::System::Single get_TransitOutTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_GET_TRANSITOUTTIME_OFFSET))(this);
	}

	::System::Void set_TransitOutTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_SET_TRANSITOUTTIME_OFFSET))(this, a1);
	}

	::System::Single get_KeepDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_GET_KEEPDURATION_OFFSET))(this);
	}

	::System::Void set_KeepDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_SET_KEEPDURATION_OFFSET))(this, a1);
	}
};
