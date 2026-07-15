#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_BlendHint.h"
#include "unitysdk/Class_1_CD9533418F3B6F39_VCameraType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineDollyCart; }
namespace Cinemachine { class CinemachinePathBase; }
namespace Cinemachine { class CinemachineSmoothPath; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class NoiseSettings; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E34FF29EE1CCACD4_GET_CAMERATYPE_OFFSET UNITYSDK_OFFSET(0x17AE4CD0)
#define CLASS_1_E34FF29EE1CCACD4_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x17AE4D10)
#define CLASS_1_E34FF29EE1CCACD4_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x17AE4B60)
#define CLASS_1_E34FF29EE1CCACD4_GET_ISAVAILABLEFORREUSE_OFFSET UNITYSDK_OFFSET(0x17AE4BA0)
#define CLASS_1_E34FF29EE1CCACD4_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0x17AE4B40)
#define CLASS_1_E34FF29EE1CCACD4_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x17AE4B80)
#define CLASS_1_E34FF29EE1CCACD4_GET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x17AE4D30)
#define CLASS_1_E34FF29EE1CCACD4_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x17AE4CF0)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_03E2B9212B4B6EAF_1_OFFSET UNITYSDK_OFFSET(0x17AE4470)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_03E2B9212B4B6EAF_2_OFFSET UNITYSDK_OFFSET(0x17AE4850)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0x17AE4430)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_1EE29503A058E3F2_OFFSET UNITYSDK_OFFSET(0x17AE3590)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_227D8735CFBC7FDD_OFFSET UNITYSDK_OFFSET(0x17AE2F30)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x17AE34A0)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_2DC57A98C12C3B08_1_OFFSET UNITYSDK_OFFSET(0x17AE3E50)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_2DC57A98C12C3B08_OFFSET UNITYSDK_OFFSET(0x17AE3C20)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0x17AE3FC0)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_2F2B436D8A949630_OFFSET UNITYSDK_OFFSET(0x17AE2DE0)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_30E55933ADDC0E72_OFFSET UNITYSDK_OFFSET(0x17AE4B00)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x17AE3520)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x17AE3F00)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_6105334A729F22E3_1_OFFSET UNITYSDK_OFFSET(0x17AE3840)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_6105334A729F22E3_2_OFFSET UNITYSDK_OFFSET(0x17AE3920)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_6105334A729F22E3_3_OFFSET UNITYSDK_OFFSET(0x17AE39B0)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x17AE37B0)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_6CF0F87E00B5D8CE_OFFSET UNITYSDK_OFFSET(0x17AE2E90)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_78D8834CF2B0C4E5_OFFSET UNITYSDK_OFFSET(0x17AE43C0)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x17AE3CD0)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_9F59C088ACADFAC2_OFFSET UNITYSDK_OFFSET(0x17AE44B0)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x17AE3420)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x17AE36D0)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_B247C6D88E785B91_OFFSET UNITYSDK_OFFSET(0x17AE4220)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x17AE3240)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x17AE2EF0)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17AE4900)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17AE4600)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_CA6BDDCC5F7CE11E_1_OFFSET UNITYSDK_OFFSET(0x17AE3B00)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_CA6BDDCC5F7CE11E_2_OFFSET UNITYSDK_OFFSET(0x17AE4890)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x17AE3A90)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x17AE4670)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_DBE66EA33A3A7353_OFFSET UNITYSDK_OFFSET(0x17AE46D0)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_DCC3DD08888A13A8_OFFSET UNITYSDK_OFFSET(0x17AE28D0)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_F011FE82F2197681_OFFSET UNITYSDK_OFFSET(0x17AE4D50)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_F55AB1828190CAE1_OFFSET UNITYSDK_OFFSET(0x17AE4950)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_F8EFD0FECAE4BDAF_OFFSET UNITYSDK_OFFSET(0x17AE3D70)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_FCC03EED62BB2D98_OFFSET UNITYSDK_OFFSET(0x17AE4020)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x17AE3BD0)
#define CLASS_1_E34FF29EE1CCACD4_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x17AE3B70)
#define CLASS_1_E34FF29EE1CCACD4_SET_CAMERATYPE_OFFSET UNITYSDK_OFFSET(0x17AE4CE0)
#define CLASS_1_E34FF29EE1CCACD4_SET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x17AE4D20)
#define CLASS_1_E34FF29EE1CCACD4_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x17AE4B70)
#define CLASS_1_E34FF29EE1CCACD4_SET_ISCREATED_OFFSET UNITYSDK_OFFSET(0x17AE4B50)
#define CLASS_1_E34FF29EE1CCACD4_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x17AE4B90)
#define CLASS_1_E34FF29EE1CCACD4_SET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x17AE4D40)
#define CLASS_1_E34FF29EE1CCACD4_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x17AE4D00)
#define CLASS_1_E34FF29EE1CCACD4__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE2890)

inline static constexpr unsigned int Class_1_E34FF29EE1CCACD4_TypeDefinitionIndex = 66618;

class Class_1_E34FF29EE1CCACD4 : public ::System::Object
{
public:
	::Cinemachine::CinemachineSmoothPath* Field_1_0; // 0x10
	::UnityEngine::Transform* _LookAtTarget_k__BackingField; // 0x18
	::Cinemachine::CinemachineDollyCart* Field_1_2; // 0x20
	::Cinemachine::CinemachineVirtualCamera* Field_1_3; // 0x28
	::Cinemachine::CinemachineVirtualCameraBase* Field_1_4; // 0x30
	::UnityEngine::Transform* Field_1_5; // 0x38
	::UnityEngine::GameObject* Field_1_6; // 0x40
	::UnityEngine::GameObject* Field_1_7; // 0x48
	::UnityEngine::Transform* _FollowTarget_k__BackingField; // 0x50
	::Cinemachine::NoiseSettings* Field_1_9; // 0x58
	::System::Single Field_1_10; // 0x60
	::System::UInt32 Field_1_11; // 0x64
	::System::Single Field_1_12; // 0x68
	::System::Single Field_1_13; // 0x6C
	::System::Boolean Field_1_14; // 0x70
	::System::Boolean _IsDestroyed_k__BackingField; // 0x71
	::System::Int32 Field_1_16; // 0x74
	::System::UInt32 _RuntimeID_k__BackingField; // 0x78
	::System::Boolean _IsActive_k__BackingField; // 0x7C
	::System::Boolean _IsCreated_k__BackingField; // 0x7D
	::System::Boolean Field_1_20; // 0x7E
	::Class_1_CD9533418F3B6F39_VCameraType _CameraType_k__BackingField; // 0x80
	::System::Single Field_1_22; // 0x84

	::System::Void _ctor(::Class_1_CD9533418F3B6F39_VCameraType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD9533418F3B6F39_VCameraType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DCC3DD08888A13A8(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_DCC3DD08888A13A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_6CF0F87E00B5D8CE(::Cinemachine::CinemachineVirtualCameraBase* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_6CF0F87E00B5D8CE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_BC46FCF99873D9DD_OFFSET))(this);
	}

	::System::Void Method_1_227D8735CFBC7FDD(::RPG::Client::CameraDataAndFlags* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_227D8735CFBC7FDD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_1_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_1_1EE29503A058E3F2(::System::Boolean a1, ::Cinemachine::NoiseSettings* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Cinemachine::NoiseSettings*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_1EE29503A058E3F2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_1_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_6105334A729F22E3_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_6105334A729F22E3_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6105334A729F22E3_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_6105334A729F22E3_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_6105334A729F22E3_3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_6105334A729F22E3_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_CA6BDDCC5F7CE11E_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Void Method_1_2DC57A98C12C3B08(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_2DC57A98C12C3B08_OFFSET))(this, a1);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8EFD0FECAE4BDAF(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_F8EFD0FECAE4BDAF_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DC57A98C12C3B08_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_2DC57A98C12C3B08_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_2E47F09A457E7E05(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_2E47F09A457E7E05_OFFSET))(this, a1);
	}

	::System::Void Method_1_78D8834CF2B0C4E5(::Cinemachine::CinemachineVirtualCameraBase_BlendHint a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase_BlendHint))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_78D8834CF2B0C4E5_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF_1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_03E2B9212B4B6EAF_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_9F59C088ACADFAC2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_9F59C088ACADFAC2_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineDollyCart* Method_1_DBE66EA33A3A7353(::Cinemachine::CinemachinePathBase* a1)
	{
		return ((::Cinemachine::CinemachineDollyCart*(*)(::PVOID, ::Cinemachine::CinemachinePathBase*))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_DBE66EA33A3A7353_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF_2()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_03E2B9212B4B6EAF_2_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_CA6BDDCC5F7CE11E_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_F55AB1828190CAE1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_F55AB1828190CAE1_OFFSET))(this, a1, a2);
	}

	::Cinemachine::CinemachineDollyCart* Method_1_30E55933ADDC0E72()
	{
		return ((::Cinemachine::CinemachineDollyCart*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_30E55933ADDC0E72_OFFSET))(this);
	}

	::System::Boolean get_IsCreated()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_GET_ISCREATED_OFFSET))(this);
	}

	::System::Void set_IsCreated(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_SET_ISCREATED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_SET_ISACTIVE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDestroyed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_GET_ISDESTROYED_OFFSET))(this);
	}

	::System::Void set_IsDestroyed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_SET_ISDESTROYED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAvailableForReuse()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_GET_ISAVAILABLEFORREUSE_OFFSET))(this);
	}

	::Class_1_CD9533418F3B6F39_VCameraType get_CameraType()
	{
		return ((::Class_1_CD9533418F3B6F39_VCameraType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_GET_CAMERATYPE_OFFSET))(this);
	}

	::System::Void set_CameraType(::Class_1_CD9533418F3B6F39_VCameraType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD9533418F3B6F39_VCameraType))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_SET_CAMERATYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_RuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_GET_RUNTIMEID_OFFSET))(this);
	}

	::System::Void set_RuntimeID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_SET_RUNTIMEID_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_FollowTarget()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_GET_FOLLOWTARGET_OFFSET))(this);
	}

	::System::Void set_FollowTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_SET_FOLLOWTARGET_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_LookAtTarget()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_GET_LOOKATTARGET_OFFSET))(this);
	}

	::System::Void set_LookAtTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_SET_LOOKATTARGET_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCamera* Method_1_F011FE82F2197681()
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_F011FE82F2197681_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_2F2B436D8A949630()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_2F2B436D8A949630_OFFSET))(this);
	}

	::System::Void Method_1_FCC03EED62BB2D98()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_FCC03EED62BB2D98_OFFSET))(this);
	}

	::System::Void Method_1_B247C6D88E785B91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E34FF29EE1CCACD4_METHOD_1_B247C6D88E785B91_OFFSET))(this);
	}
};
