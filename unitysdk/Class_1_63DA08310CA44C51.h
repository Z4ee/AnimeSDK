#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_63DA08310CA44C51_Class_1_0768C4BEC10E6AAD;
class Class_1_B2388953D46D7EF4;
class Class_1_D27BF54F25500E5F;
class Class_2_4C3F9D9CF221EFEC;
class Class_2_FC72C0D3E1F3C11B;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateOrbitCruiseConfig; }
namespace RPG::Client { class CameraFightStateOrbitCruiseConfigData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_63DA08310CA44C51_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x17F113C0)
#define CLASS_1_63DA08310CA44C51_GET_MARKDISABLE_OFFSET UNITYSDK_OFFSET(0x17F0E9C0)
#define CLASS_1_63DA08310CA44C51_INIT_OFFSET UNITYSDK_OFFSET(0x17F0E9E0)
#define CLASS_1_63DA08310CA44C51_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x17F12540)
#define CLASS_1_63DA08310CA44C51_METHOD_1_1B8A7D152370AD2C_OFFSET UNITYSDK_OFFSET(0x17F10B70)
#define CLASS_1_63DA08310CA44C51_METHOD_1_1D897375118954FE_OFFSET UNITYSDK_OFFSET(0x17F125A0)
#define CLASS_1_63DA08310CA44C51_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17F11400)
#define CLASS_1_63DA08310CA44C51_METHOD_1_49085A3FC0F13F5E_OFFSET UNITYSDK_OFFSET(0x17F0EA80)
#define CLASS_1_63DA08310CA44C51_METHOD_1_5F1978205E005603_OFFSET UNITYSDK_OFFSET(0x17F0F080)
#define CLASS_1_63DA08310CA44C51_METHOD_1_5F9F5EB6A660BE4E_OFFSET UNITYSDK_OFFSET(0x17F11470)
#define CLASS_1_63DA08310CA44C51_METHOD_1_75099E32C09384D8_OFFSET UNITYSDK_OFFSET(0x17F11200)
#define CLASS_1_63DA08310CA44C51_METHOD_1_862ACF0AE239B7AE_OFFSET UNITYSDK_OFFSET(0x17F100E0)
#define CLASS_1_63DA08310CA44C51_METHOD_1_920DE8F4A8DAE754_OFFSET UNITYSDK_OFFSET(0x17F0FF60)
#define CLASS_1_63DA08310CA44C51_METHOD_1_9954350F2A957B60_OFFSET UNITYSDK_OFFSET(0x17F12790)
#define CLASS_1_63DA08310CA44C51_METHOD_1_999B8B439422C7E7_OFFSET UNITYSDK_OFFSET(0x17F12700)
#define CLASS_1_63DA08310CA44C51_METHOD_1_A6D2AE0067E9DC62_OFFSET UNITYSDK_OFFSET(0x17F0FFC0)
#define CLASS_1_63DA08310CA44C51_METHOD_1_CC324EA2E7C18FE7_OFFSET UNITYSDK_OFFSET(0x17F0F1D0)
#define CLASS_1_63DA08310CA44C51_METHOD_1_E0B3448CE3F4D36A_OFFSET UNITYSDK_OFFSET(0x17F0EC60)
#define CLASS_1_63DA08310CA44C51_METHOD_1_E1C8EBE68635D7A7_OFFSET UNITYSDK_OFFSET(0x17F0F0D0)
#define CLASS_1_63DA08310CA44C51_METHOD_1_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0x17F0F420)
#define CLASS_1_63DA08310CA44C51_REFRESH_OFFSET UNITYSDK_OFFSET(0x17F0F4E0)
#define CLASS_1_63DA08310CA44C51_RESET_OFFSET UNITYSDK_OFFSET(0x17F0EDD0)
#define CLASS_1_63DA08310CA44C51_SET_MARKDISABLE_OFFSET UNITYSDK_OFFSET(0x17F0E9D0)
#define CLASS_1_63DA08310CA44C51__CTOR_OFFSET UNITYSDK_OFFSET(0x17F12A70)

inline static constexpr unsigned int Class_1_63DA08310CA44C51_TypeDefinitionIndex = 66471;

class Class_1_63DA08310CA44C51 : public ::System::Object
{
public:
	static ::RPG::Client::CameraFightStateOrbitCruiseConfig** StaticGet_Field_1_0()
	{
		return (::RPG::Client::CameraFightStateOrbitCruiseConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_63DA08310CA44C51_TypeDefinitionIndex)->GetStaticField(0x6C360);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_63DA08310CA44C51_TypeDefinitionIndex)->GetStaticField(0x14BF0);
	}
	::UnityEngine::AnimationCurve* Field_1_2; // 0x10
	::System::String* Field_1_3; // 0x18
	::UnityEngine::Transform* Field_1_4; // 0x20
	::Class_1_63DA08310CA44C51_Class_1_0768C4BEC10E6AAD* Field_1_5; // 0x28
	::RPG::Client::CameraDataAndFlags* Field_1_6; // 0x30
	::UnityEngine::AnimationCurve* Field_1_7; // 0x38
	::System::String* Field_1_8; // 0x40
	::Class_1_B2388953D46D7EF4* Field_1_9; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* Field_1_10; // 0x50
	::RPG::Client::CameraFightStateOrbitCruiseConfig* Field_1_11; // 0x58
	::UnityEngine::AnimationCurve* Field_1_12; // 0x60
	::Class_1_D27BF54F25500E5F* Field_1_13; // 0x68
	::Class_2_4C3F9D9CF221EFEC* Field_1_14; // 0x70
	::UnityEngine::Transform* Field_1_15; // 0x78
	::Class_1_B2388953D46D7EF4* Field_1_16; // 0x80
	::UnityEngine::AnimationCurve* Field_1_17; // 0x88
	::UnityEngine::Transform* Field_1_18; // 0x90
	::System::String* Field_1_19; // 0x98
	::RPG::Client::CameraFightStateOrbitCruiseConfigData* Field_1_20; // 0xA0
	::System::Boolean _MarkDisable_k__BackingField; // 0xA8
	::System::Boolean Field_1_22; // 0xA9
	::RPG::MVector3 Field_1_23; // 0xAC
	::UnityEngine::Vector3 Field_1_24; // 0xB8
	::UnityEngine::Vector3 Field_1_25; // 0xC4
	::System::Single Field_1_26; // 0xD0
	::UnityEngine::Quaternion Field_1_27; // 0xD4
	::UnityEngine::Vector3 Field_1_28; // 0xE4
	::System::Single Field_1_29; // 0xF0
	::System::Single Field_1_30; // 0xF4
	::System::Int32 Field_1_31; // 0xF8
	::System::Single Field_1_32; // 0xFC
	::System::Int32 Field_1_33; // 0x100
	::RPG::MVector3 Field_1_34; // 0x104
	::System::Int32 Field_1_35; // 0x110
	::System::Boolean Field_1_36; // 0x114
	::System::Boolean Field_1_37; // 0x115
	::System::Boolean Field_1_38; // 0x116
	::System::Boolean Field_1_39; // 0x117
	::System::Single Field_1_40; // 0x118
	::System::Single Field_1_41; // 0x11C
	::UnityEngine::Vector3 Field_1_42; // 0x120

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51__CTOR_OFFSET))(this);
	}

	::System::Boolean get_MarkDisable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_GET_MARKDISABLE_OFFSET))(this);
	}

	::System::Void set_MarkDisable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_SET_MARKDISABLE_OFFSET))(this, a1);
	}

	::System::Void Init(::Class_2_4C3F9D9CF221EFEC* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4C3F9D9CF221EFEC*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_49085A3FC0F13F5E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_49085A3FC0F13F5E_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* Method_1_E0B3448CE3F4D36A(::System::String* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_E0B3448CE3F4D36A_OFFSET))(this, a1);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_RESET_OFFSET))(this);
	}

	::System::Void Method_1_5F1978205E005603(::RPG::Client::CameraFightStateOrbitCruiseConfigData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFightStateOrbitCruiseConfigData*))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_5F1978205E005603_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_E1C8EBE68635D7A7()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_E1C8EBE68635D7A7_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_1_CC324EA2E7C18FE7(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_CC324EA2E7C18FE7_OFFSET))(a1, a2);
	}

	::System::Void Method_1_ED79705457B92B5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_ED79705457B92B5C_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_A6D2AE0067E9DC62(::Class_2_FC72C0D3E1F3C11B* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FC72C0D3E1F3C11B*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_A6D2AE0067E9DC62_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_75099E32C09384D8(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_75099E32C09384D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B8A7D152370AD2C(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_1B8A7D152370AD2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_862ACF0AE239B7AE(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single& a4, ::System::Single& a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_862ACF0AE239B7AE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_5F9F5EB6A660BE4E(::UnityEngine::Camera* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_5F9F5EB6A660BE4E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::CameraFightStateOrbitCruiseConfigData* Method_1_920DE8F4A8DAE754()
	{
		return ((::RPG::Client::CameraFightStateOrbitCruiseConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_920DE8F4A8DAE754_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_1D897375118954FE(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_1D897375118954FE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_999B8B439422C7E7(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_999B8B439422C7E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9954350F2A957B60(::System::Boolean a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4, ::System::String* a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_63DA08310CA44C51_METHOD_1_9954350F2A957B60_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
