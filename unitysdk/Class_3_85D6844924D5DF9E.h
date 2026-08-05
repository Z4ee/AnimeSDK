#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_63E7C24ABD5B7FB1.h"
#include "unitysdk/Class_3_85D6844924D5DF9E_Enum_3_3E8508FFF5901590.h"
#include "unitysdk/Class_3_85D6844924D5DF9E_Enum_3_6E0DDBC37145F2BE.h"
#include "unitysdk/Enum_3_63CBB842CA136655.h"
#include "unitysdk/Enum_3_8252736F97D4CFA3_2.h"
#include "unitysdk/MoleMole/Cameras/CameraFollowCalcData.h"
#include "unitysdk/MoleMole/Cameras/FollowData.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2A3859B4230FECE9;
class Class_1_CB7F0487F7A6164A;
class Class_2_292DBB78EBC97A79;
class Class_3_7472FB6CC4015359;
class Class_3_C93CC3D2C2AC4067;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole { class CameraLockTargetConfig; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole { class CameraModuleLockRotateData; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_85D6844924D5DF9E_METHOD_3_04DC58A6E3312864_1_OFFSET UNITYSDK_OFFSET(0x12D9FD10)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_04DC58A6E3312864_OFFSET UNITYSDK_OFFSET(0x12D9D3C0)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_07837442FF259ACF_OFFSET UNITYSDK_OFFSET(0x12D9DFF0)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_0F1F4EDF1F6C7ADC_OFFSET UNITYSDK_OFFSET(0x12D9F660)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_0F4885840B05315B_OFFSET UNITYSDK_OFFSET(0x12D9FCA0)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_0F56D5DC9847C4D5_OFFSET UNITYSDK_OFFSET(0x12D9FAE0)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12D9CA50)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_184D2FD010EC25FA_OFFSET UNITYSDK_OFFSET(0x12D9DF70)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x12D9E8B0)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_3B60F5DA0C05A71E_OFFSET UNITYSDK_OFFSET(0x12D9DA20)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_47790C8D050ECBF7_OFFSET UNITYSDK_OFFSET(0x12D9DAF0)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_50E79F918E942F5E_OFFSET UNITYSDK_OFFSET(0x12D9E4E0)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_54E006C624DBA246_OFFSET UNITYSDK_OFFSET(0x12D9E290)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_63320E40C83A8B11_OFFSET UNITYSDK_OFFSET(0x12D9DEB0)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_6B3FCA8F07DA46D0_OFFSET UNITYSDK_OFFSET(0x12D9D770)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_7EB92509DFEBBD19_OFFSET UNITYSDK_OFFSET(0x12D9CD10)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_8ED0296A3A9490A1_OFFSET UNITYSDK_OFFSET(0x12D9C870)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_92B540916F43AC48_OFFSET UNITYSDK_OFFSET(0x12D9FE50)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_9E950EEFE9A3C454_OFFSET UNITYSDK_OFFSET(0x12D9FDB0)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x12D9C860)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x12D9D090)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_C561FF611C07A44C_1_OFFSET UNITYSDK_OFFSET(0x12D9FDA0)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x12D9DAE0)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_C5FECF76FA727C1A_OFFSET UNITYSDK_OFFSET(0x12D9FAF0)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12D9FDC0)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12D9CA00)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x12D9D970)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_E529A9AE3C2C2501_OFFSET UNITYSDK_OFFSET(0x12D9E6B0)
#define CLASS_3_85D6844924D5DF9E_METHOD_3_EA93FA42C2E337C0_OFFSET UNITYSDK_OFFSET(0x12D9D5D0)
#define CLASS_3_85D6844924D5DF9E__CTOR_OFFSET UNITYSDK_OFFSET(0x12D9D420)

inline static constexpr unsigned int Class_3_85D6844924D5DF9E_TypeDefinitionIndex = 83088;

class Class_3_85D6844924D5DF9E : public ::Class_2_63E7C24ABD5B7FB1
{
public:
	// static const ::System::Single Field_3_4; // 0x0
	// static const ::System::Single Field_3_11; // 0x0
	::Struct_2_FA5F50563E60AFBA Field_3_5; // 0x50
	::Class_2_292DBB78EBC97A79* Field_3_1; // 0x68
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_3_2; // 0x70
	::Class_3_7472FB6CC4015359* Field_3_7; // 0x78
	::UnityEngine::Transform* Field_3_6; // 0x80
	::System::Collections::Generic::List_1<::System::Single>* Field_3_26; // 0x88
	::Class_3_C93CC3D2C2AC4067* Field_3_0; // 0x90
	::System::Single Field_3_22; // 0x98
	::UnityEngine::Vector3 Field_3_14; // 0x9C
	::System::Single Field_3_20; // 0xA8
	::System::Single Field_3_9; // 0xAC
	::System::Boolean Field_3_30; // 0xB0
	::System::Boolean Field_3_16; // 0xB1
	::System::Single Field_3_15; // 0xB4
	::UnityEngine::Vector3 Field_3_8; // 0xB8
	::Class_3_85D6844924D5DF9E_Enum_3_3E8508FFF5901590 Field_3_24; // 0xC4
	::MoleMole::Cameras::FollowData Field_3_10; // 0xC8
	::System::Single Field_3_12; // 0x104
	::System::Single Field_3_19; // 0x108
	::System::Boolean Field_3_27; // 0x10C
	::System::Boolean Field_3_17; // 0x10D
	::System::Boolean Field_3_18; // 0x10E
	::System::Boolean Field_3_28; // 0x10F
	::System::Single Field_3_21; // 0x110
	::System::Single Field_3_23; // 0x114
	::Class_3_85D6844924D5DF9E_Enum_3_3E8508FFF5901590 Field_3_25; // 0x118
	::System::Single Field_3_13; // 0x11C
	::System::Int32 Field_3_29; // 0x120
	::Class_3_85D6844924D5DF9E_Enum_3_6E0DDBC37145F2BE Field_3_31; // 0x124

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E__CTOR_OFFSET))(this);
	}

	::Enum_3_63CBB842CA136655 Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_63CBB842CA136655(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_3_8ED0296A3A9490A1(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Class_1_2A3859B4230FECE9* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Class_1_2A3859B4230FECE9*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_8ED0296A3A9490A1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_3_04DC58A6E3312864(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_04DC58A6E3312864_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_EA93FA42C2E337C0(::MoleMole::CameraLockTargetConfig* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::MoleMole::CameraLockTargetConfig*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_EA93FA42C2E337C0_OFFSET))(a1, a2, a3);
	}

	::System::Single Method_3_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_D64FD9A228A1C4E0_OFFSET))(this);
	}

	static ::System::Single Method_3_3B60F5DA0C05A71E(::MoleMole::CameraLockTargetConfig* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::MoleMole::CameraLockTargetConfig*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_3B60F5DA0C05A71E_OFFSET))(a1, a2);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}

	static ::System::Boolean Method_3_47790C8D050ECBF7(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_47790C8D050ECBF7_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_184D2FD010EC25FA(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_184D2FD010EC25FA_OFFSET))(a1);
	}

	::System::Void Method_3_07837442FF259ACF(::System::Single a1, ::System::Boolean a2, ::Enum_3_8252736F97D4CFA3_2 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::Enum_3_8252736F97D4CFA3_2))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_07837442FF259ACF_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_3_54E006C624DBA246(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_54E006C624DBA246_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_3_63320E40C83A8B11(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_63320E40C83A8B11_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_E529A9AE3C2C2501(::System::Single a1, ::System::Boolean a2, ::Enum_3_8252736F97D4CFA3_2 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::Enum_3_8252736F97D4CFA3_2))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_E529A9AE3C2C2501_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_19844080C13BA28F_OFFSET))(this);
	}

	::Class_1_CB7F0487F7A6164A* Method_3_0F56D5DC9847C4D5()
	{
		return ((::Class_1_CB7F0487F7A6164A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_0F56D5DC9847C4D5_OFFSET))(this);
	}

	::System::Void Method_3_7EB92509DFEBBD19(::Struct_2_FA5F50563E60AFBA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_7EB92509DFEBBD19_OFFSET))(this, a1);
	}

	::System::Void Method_3_04DC58A6E3312864_1(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_04DC58A6E3312864_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_C561FF611C07A44C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_C561FF611C07A44C_1_OFFSET))(this);
	}

	::MoleMole::CameraModuleLockRotateData* Method_3_50E79F918E942F5E(::System::Single a1)
	{
		return ((::MoleMole::CameraModuleLockRotateData*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_50E79F918E942F5E_OFFSET))(this, a1);
	}

	::System::Void Method_3_9E950EEFE9A3C454(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Class_1_2A3859B4230FECE9* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Class_1_2A3859B4230FECE9*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_9E950EEFE9A3C454_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_3_92B540916F43AC48(::Enum_3_8252736F97D4CFA3_2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_8252736F97D4CFA3_2))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_92B540916F43AC48_OFFSET))(this, a1);
	}

	::System::Void Method_3_0F1F4EDF1F6C7ADC(::MoleMole::Cameras::CameraFollowCalcData a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraFollowCalcData))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_0F1F4EDF1F6C7ADC_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_6B3FCA8F07DA46D0(::MoleMole::CameraLockTargetConfig* a1, ::Class_3_C93CC3D2C2AC4067* a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::MoleMole::CameraLockTargetConfig*, ::Class_3_C93CC3D2C2AC4067*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_6B3FCA8F07DA46D0_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_C5FECF76FA727C1A(::MoleMole::CameraLockTargetConfig* a1, ::Class_1_CB7F0487F7A6164A* a2)
	{
		return ((::System::Single(*)(::MoleMole::CameraLockTargetConfig*, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_C5FECF76FA727C1A_OFFSET))(a1, a2);
	}

	::MoleMole::Battle::Entity* Method_3_0F4885840B05315B()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E_METHOD_3_0F4885840B05315B_OFFSET))(this);
	}
};
