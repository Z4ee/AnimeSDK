#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineTransposer_BindingMode.h"
#include "unitysdk/Class_1_CD9533418F3B6F39_VCameraType.h"
#include "unitysdk/RPG/GameCore/FreelookCameraDragMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7ACD8E31992CDE1A;
namespace Cinemachine { class AxisState_IInputAxisProvider; }
namespace Cinemachine { class CinemachineFreeLook; }
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class Freelook3rdRigParams; }
namespace RPG::Client { class RPGCinemachineOldFreelook3rdBlend; }
namespace RPG::Client { class RPGCinemachineZoom; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_CDAD1C4D78702C93_GET_AXISVALUEXCHANGESPEED_OFFSET UNITYSDK_OFFSET(0xE48AC30)
#define CLASS_1_CDAD1C4D78702C93_GET_CAMERATYPE_OFFSET UNITYSDK_OFFSET(0xE48AA90)
#define CLASS_1_CDAD1C4D78702C93_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xE48AB50)
#define CLASS_1_CDAD1C4D78702C93_GET_FREELOOKDRAGMODE_OFFSET UNITYSDK_OFFSET(0xE48AC50)
#define CLASS_1_CDAD1C4D78702C93_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xE48AAF0)
#define CLASS_1_CDAD1C4D78702C93_GET_ISAVAILABLEFORREUSE_OFFSET UNITYSDK_OFFSET(0xE48AB30)
#define CLASS_1_CDAD1C4D78702C93_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0xE48AAD0)
#define CLASS_1_CDAD1C4D78702C93_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xE48AB10)
#define CLASS_1_CDAD1C4D78702C93_GET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xE48AB70)
#define CLASS_1_CDAD1C4D78702C93_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE48AAB0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_03E2B9212B4B6EAF_1_OFFSET UNITYSDK_OFFSET(0xE487930)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0xE4878F0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_07A25883744F618C_OFFSET UNITYSDK_OFFSET(0xE488970)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_1658BEB5EC339408_OFFSET UNITYSDK_OFFSET(0xE489960)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_19CCC07C980409E4_1_OFFSET UNITYSDK_OFFSET(0xE486CE0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xE486C80)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xE488800)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xE4887A0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0xE48A130)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xE48AC80)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0xE48A320)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xE48ABE0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_3A9C03366E936C66_OFFSET UNITYSDK_OFFSET(0xE489AC0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_3F5F0BE9AFB2990C_OFFSET UNITYSDK_OFFSET(0xE487D50)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE487540)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xE48A690)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_46D5C4F0EA172C6A_OFFSET UNITYSDK_OFFSET(0xE488640)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_4E66CC6A96439F85_OFFSET UNITYSDK_OFFSET(0xE488180)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_5D895A5456A4B9BA_OFFSET UNITYSDK_OFFSET(0xE488720)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_60A0F5EC9777EFB9_OFFSET UNITYSDK_OFFSET(0xE487470)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_6105334A729F22E3_1_OFFSET UNITYSDK_OFFSET(0xE487A00)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_6105334A729F22E3_2_OFFSET UNITYSDK_OFFSET(0xE487AE0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_6105334A729F22E3_3_OFFSET UNITYSDK_OFFSET(0xE487B70)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_6105334A729F22E3_4_OFFSET UNITYSDK_OFFSET(0xE4881F0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_6105334A729F22E3_5_OFFSET UNITYSDK_OFFSET(0xE48A440)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0xE487970)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_684E8D76BF9D5255_OFFSET UNITYSDK_OFFSET(0xE48A400)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_7301533EE4FBBAD2_OFFSET UNITYSDK_OFFSET(0xE488090)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0xE487640)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_7F612AA2F04984D6_OFFSET UNITYSDK_OFFSET(0xE48AC70)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_7F84ACCEA43BC283_OFFSET UNITYSDK_OFFSET(0xE4894F0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0xE48A580)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_86914B28476494AF_1_OFFSET UNITYSDK_OFFSET(0xE4893D0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_86914B28476494AF_OFFSET UNITYSDK_OFFSET(0xE4892B0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_96347D126BE5AFBC_OFFSET UNITYSDK_OFFSET(0xE48A760)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_96DCADC783ACF0D4_OFFSET UNITYSDK_OFFSET(0xE488E70)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_9C66B07446448FC6_OFFSET UNITYSDK_OFFSET(0xE488280)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_A03C765EBC5D1677_OFFSET UNITYSDK_OFFSET(0xE48A4F0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xE48AB90)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_AF001DB8752C7089_OFFSET UNITYSDK_OFFSET(0xE4883F0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_B2A8785E9E1BD2C1_OFFSET UNITYSDK_OFFSET(0xE487EE0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_B3895AA881B3EBB9_OFFSET UNITYSDK_OFFSET(0xE488860)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_B74D29C43104A205_OFFSET UNITYSDK_OFFSET(0xE487C50)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_B7D0EA531AB98E94_OFFSET UNITYSDK_OFFSET(0xE486FB0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0xE4873D0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0xE4875A0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_C411E5881DF297DE_OFFSET UNITYSDK_OFFSET(0xE487DD0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_C98BEB16ED641BC0_1_OFFSET UNITYSDK_OFFSET(0xE488010)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_C98BEB16ED641BC0_OFFSET UNITYSDK_OFFSET(0xE487F90)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE4886B0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_CA6BDDCC5F7CE11E_1_OFFSET UNITYSDK_OFFSET(0xE488D20)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xE488C50)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_CAAD3899EE103AC7_OFFSET UNITYSDK_OFFSET(0xE486160)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xE4875E0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_CF0080D9D0A33EA9_1_OFFSET UNITYSDK_OFFSET(0xE488DE0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_CF0080D9D0A33EA9_OFFSET UNITYSDK_OFFSET(0xE4888E0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xE48A2C0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0xE486D40)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_D920CA000FAB6C31_OFFSET UNITYSDK_OFFSET(0xE4890A0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_DDF4E6AEE2216B17_OFFSET UNITYSDK_OFFSET(0xE4885E0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_E7E9C69965F5C461_OFFSET UNITYSDK_OFFSET(0xE4884B0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_E7F61176CF07E702_OFFSET UNITYSDK_OFFSET(0xE487E70)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_F28136982D1084AB_OFFSET UNITYSDK_OFFSET(0xE488BB0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0xE4877A0)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0xE488D90)
#define CLASS_1_CDAD1C4D78702C93_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xE488CC0)
#define CLASS_1_CDAD1C4D78702C93_SET_AXISVALUEXCHANGESPEED_OFFSET UNITYSDK_OFFSET(0xE48AC40)
#define CLASS_1_CDAD1C4D78702C93_SET_CAMERATYPE_OFFSET UNITYSDK_OFFSET(0xE48AAA0)
#define CLASS_1_CDAD1C4D78702C93_SET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xE48AB60)
#define CLASS_1_CDAD1C4D78702C93_SET_FREELOOKDRAGMODE_OFFSET UNITYSDK_OFFSET(0xE48AC60)
#define CLASS_1_CDAD1C4D78702C93_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xE48AB00)
#define CLASS_1_CDAD1C4D78702C93_SET_ISAVAILABLEFORREUSE_OFFSET UNITYSDK_OFFSET(0xE48AB40)
#define CLASS_1_CDAD1C4D78702C93_SET_ISCREATED_OFFSET UNITYSDK_OFFSET(0xE48AAE0)
#define CLASS_1_CDAD1C4D78702C93_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xE48AB20)
#define CLASS_1_CDAD1C4D78702C93_SET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xE48AB80)
#define CLASS_1_CDAD1C4D78702C93_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE48AAC0)
#define CLASS_1_CDAD1C4D78702C93__CTOR_OFFSET UNITYSDK_OFFSET(0xE486140)

inline static constexpr unsigned int Class_1_CDAD1C4D78702C93_TypeDefinitionIndex = 65209;

class Class_1_CDAD1C4D78702C93 : public ::System::Object
{
public:
	::UnityEngine::Transform* _FollowTarget_k__BackingField; // 0x10
	::RPG::Client::RPGCinemachineOldFreelook3rdBlend* Field_1_1; // 0x18
	::UnityEngine::GameObject* Field_1_2; // 0x20
	::RPG::Client::RPGCinemachineZoom* Field_1_3; // 0x28
	::UnityEngine::GameObject* Field_1_4; // 0x30
	::Cinemachine::CinemachineFreeLook* Field_1_5; // 0x38
	::Class_1_7ACD8E31992CDE1A* Field_1_6; // 0x40
	::UnityEngine::Transform* _LookAtTarget_k__BackingField; // 0x48
	::RPG::Client::CameraBlendCurve* Field_1_8; // 0x50
	::System::Single Field_1_9; // 0x58
	::System::Boolean Field_1_10; // 0x5C
	::System::Boolean _IsActive_k__BackingField; // 0x5D
	::System::Boolean _IsDestroyed_k__BackingField; // 0x5E
	::System::Boolean _FreelookDragMode_k__BackingField; // 0x5F
	::System::Boolean _IsAvailableForReuse_k__BackingField; // 0x60
	::System::Boolean Field_1_15; // 0x61
	::System::Boolean _IsCreated_k__BackingField; // 0x62
	::System::Single Field_1_17; // 0x64
	::System::Single Field_1_18; // 0x68
	::System::Int32 Field_1_19; // 0x6C
	::System::Nullable_1<::UnityEngine::Vector2> Field_1_20; // 0x70
	::System::Single Field_1_21; // 0x7C
	::System::UInt32 _RuntimeID_k__BackingField; // 0x80
	::Class_1_CD9533418F3B6F39_VCameraType _CameraType_k__BackingField; // 0x84
	::System::Single _AxisValueXChangeSpeed_k__BackingField; // 0x88
	::System::Nullable_1<::UnityEngine::Vector2> Field_1_25; // 0x8C

	::System::Void _ctor(::Class_1_CD9533418F3B6F39_VCameraType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD9533418F3B6F39_VCameraType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CAAD3899EE103AC7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_CAAD3899EE103AC7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D87A7D8243E04FD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_D87A7D8243E04FD7_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_BC46FCF99873D9DD_OFFSET))(this);
	}

	::System::Void Method_1_BA904CAFF6C7217F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_BA904CAFF6C7217F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_1_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_FD7514C64FB1B043_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF_1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_03E2B9212B4B6EAF_1_OFFSET))(this);
	}

	::System::Void Method_1_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_6105334A729F22E3_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_6105334A729F22E3_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6105334A729F22E3_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_6105334A729F22E3_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_6105334A729F22E3_3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_6105334A729F22E3_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_B74D29C43104A205(::System::Int32 a1, ::RPG::Client::Freelook3rdRigParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::Freelook3rdRigParams*))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_B74D29C43104A205_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_3F5F0BE9AFB2990C(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_3F5F0BE9AFB2990C_OFFSET))(this, a1);
	}

	::System::Void Method_1_C411E5881DF297DE(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_C411E5881DF297DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_19CCC07C980409E4_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_19CCC07C980409E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7F61176CF07E702(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_E7F61176CF07E702_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2A8785E9E1BD2C1(::System::Single a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_B2A8785E9E1BD2C1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C98BEB16ED641BC0(::System::Single& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_C98BEB16ED641BC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C98BEB16ED641BC0_1(::System::Single& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_C98BEB16ED641BC0_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_60A0F5EC9777EFB9(::Cinemachine::AxisState_IInputAxisProvider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::AxisState_IInputAxisProvider*))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_60A0F5EC9777EFB9_OFFSET))(this, a1);
	}

	::System::Void Method_1_7301533EE4FBBAD2(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_7301533EE4FBBAD2_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E66CC6A96439F85(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_4E66CC6A96439F85_OFFSET))(this, a1);
	}

	::System::Void Method_1_6105334A729F22E3_4(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_6105334A729F22E3_4_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C66B07446448FC6(::Class_1_CDAD1C4D78702C93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CDAD1C4D78702C93*))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_9C66B07446448FC6_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF001DB8752C7089(::Cinemachine::CinemachineTransposer_BindingMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineTransposer_BindingMode))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_AF001DB8752C7089_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7D0EA531AB98E94(::System::Boolean a1, ::RPG::GameCore::FreelookCameraDragMode a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::FreelookCameraDragMode))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_B7D0EA531AB98E94_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E7E9C69965F5C461(::UnityEngine::Vector2 a1, ::System::Single a2, ::RPG::Client::CameraBlendCurve* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::RPG::Client::CameraBlendCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_E7E9C69965F5C461_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_46D5C4F0EA172C6A(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_46D5C4F0EA172C6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_5D895A5456A4B9BA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_5D895A5456A4B9BA_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_DDF4E6AEE2216B17()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_DDF4E6AEE2216B17_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_B3895AA881B3EBB9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_B3895AA881B3EBB9_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF0080D9D0A33EA9(::System::Boolean a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_CF0080D9D0A33EA9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_07A25883744F618C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_07A25883744F618C_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_F28136982D1084AB()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_F28136982D1084AB_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_CA6BDDCC5F7CE11E_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Void Method_1_CF0080D9D0A33EA9_1(::System::Boolean a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_CF0080D9D0A33EA9_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_96DCADC783ACF0D4(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_96DCADC783ACF0D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_D920CA000FAB6C31(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_D920CA000FAB6C31_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_86914B28476494AF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_86914B28476494AF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_86914B28476494AF_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_86914B28476494AF_1_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_7F84ACCEA43BC283(::UnityEngine::Quaternion a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_7F84ACCEA43BC283_OFFSET))(this, a1);
	}

	::System::Void Method_1_1658BEB5EC339408(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_1658BEB5EC339408_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3A9C03366E936C66(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_3A9C03366E936C66_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_2ED6C3773AA1E488()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_2ED6C3773AA1E488_OFFSET))(this);
	}

	::RPG::Client::RPGCinemachineZoom* Method_1_684E8D76BF9D5255()
	{
		return ((::RPG::Client::RPGCinemachineZoom*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_684E8D76BF9D5255_OFFSET))(this);
	}

	::System::Void Method_1_6105334A729F22E3_5(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_6105334A729F22E3_5_OFFSET))(this, a1);
	}

	::System::Void Method_1_A03C765EBC5D1677(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_A03C765EBC5D1677_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_84516C3E776F194F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_84516C3E776F194F_OFFSET))(this, a1);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_96347D126BE5AFBC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_96347D126BE5AFBC_OFFSET))(this, a1);
	}

	::Class_1_CD9533418F3B6F39_VCameraType get_CameraType()
	{
		return ((::Class_1_CD9533418F3B6F39_VCameraType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_GET_CAMERATYPE_OFFSET))(this);
	}

	::System::Void set_CameraType(::Class_1_CD9533418F3B6F39_VCameraType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD9533418F3B6F39_VCameraType))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_SET_CAMERATYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_RuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_GET_RUNTIMEID_OFFSET))(this);
	}

	::System::Void set_RuntimeID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_SET_RUNTIMEID_OFFSET))(this, a1);
	}

	::System::Boolean get_IsCreated()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_GET_ISCREATED_OFFSET))(this);
	}

	::System::Void set_IsCreated(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_SET_ISCREATED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_SET_ISACTIVE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDestroyed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_GET_ISDESTROYED_OFFSET))(this);
	}

	::System::Void set_IsDestroyed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_SET_ISDESTROYED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAvailableForReuse()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_GET_ISAVAILABLEFORREUSE_OFFSET))(this);
	}

	::System::Void set_IsAvailableForReuse(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_SET_ISAVAILABLEFORREUSE_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_FollowTarget()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_GET_FOLLOWTARGET_OFFSET))(this);
	}

	::System::Void set_FollowTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_SET_FOLLOWTARGET_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_LookAtTarget()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_GET_LOOKATTARGET_OFFSET))(this);
	}

	::System::Void set_LookAtTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_SET_LOOKATTARGET_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Single get_AxisValueXChangeSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_GET_AXISVALUEXCHANGESPEED_OFFSET))(this);
	}

	::System::Void set_AxisValueXChangeSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_SET_AXISVALUEXCHANGESPEED_OFFSET))(this, a1);
	}

	::System::Boolean get_FreelookDragMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_GET_FREELOOKDRAGMODE_OFFSET))(this);
	}

	::System::Void set_FreelookDragMode(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_SET_FREELOOKDRAGMODE_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineFreeLook* Method_1_7F612AA2F04984D6()
	{
		return ((::Cinemachine::CinemachineFreeLook*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_7F612AA2F04984D6_OFFSET))(this);
	}

	::Class_1_7ACD8E31992CDE1A* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7ACD8E31992CDE1A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDAD1C4D78702C93_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}
};
