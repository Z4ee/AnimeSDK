#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_63E7C24ABD5B7FB1.h"
#include "unitysdk/Class_3_37738F4372A852AF_Enum_3_3E8508FFF5901590.h"
#include "unitysdk/Class_3_37738F4372A852AF_Enum_3_6E0DDBC37145F2BE.h"
#include "unitysdk/Enum_3_63CBB842CA136655.h"
#include "unitysdk/Enum_3_8252736F97D4CFA3_1.h"
#include "unitysdk/MoleMole/Cameras/CameraFollowCalcData.h"
#include "unitysdk/MoleMole/Cameras/FollowData.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2A3859B4230FECE9;
class Class_1_CB7F0487F7A6164A;
class Class_2_292DBB78EBC97A79;
class Class_3_7472FB6CC4015359;
class Class_3_DFD5D1FDB9D2A4AC;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole { class CameraLockTargetConfig; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole { class CameraModuleLockRotateData; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_37738F4372A852AF_METHOD_3_04DC58A6E3312864_1_OFFSET UNITYSDK_OFFSET(0x1A0DBB80)
#define CLASS_3_37738F4372A852AF_METHOD_3_04DC58A6E3312864_OFFSET UNITYSDK_OFFSET(0x1A0D9970)
#define CLASS_3_37738F4372A852AF_METHOD_3_07837442FF259ACF_OFFSET UNITYSDK_OFFSET(0x1A0DB700)
#define CLASS_3_37738F4372A852AF_METHOD_3_0F4885840B05315B_OFFSET UNITYSDK_OFFSET(0x1A0D9D00)
#define CLASS_3_37738F4372A852AF_METHOD_3_0F56D5DC9847C4D5_OFFSET UNITYSDK_OFFSET(0x1A0D9F80)
#define CLASS_3_37738F4372A852AF_METHOD_3_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x1A0D9840)
#define CLASS_3_37738F4372A852AF_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1A0D9340)
#define CLASS_3_37738F4372A852AF_METHOD_3_184D2FD010EC25FA_OFFSET UNITYSDK_OFFSET(0x1A0D9C70)
#define CLASS_3_37738F4372A852AF_METHOD_3_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x1A0D9F90)
#define CLASS_3_37738F4372A852AF_METHOD_3_28EA8B68176735B0_OFFSET UNITYSDK_OFFSET(0x1A0DB090)
#define CLASS_3_37738F4372A852AF_METHOD_3_3B60F5DA0C05A71E_OFFSET UNITYSDK_OFFSET(0x1A0DBC10)
#define CLASS_3_37738F4372A852AF_METHOD_3_50E79F918E942F5E_OFFSET UNITYSDK_OFFSET(0x1A0DB9B0)
#define CLASS_3_37738F4372A852AF_METHOD_3_539F62B8C39C297F_OFFSET UNITYSDK_OFFSET(0x1A0DAFC0)
#define CLASS_3_37738F4372A852AF_METHOD_3_54E006C624DBA246_OFFSET UNITYSDK_OFFSET(0x1A0DBD80)
#define CLASS_3_37738F4372A852AF_METHOD_3_6B3FCA8F07DA46D0_OFFSET UNITYSDK_OFFSET(0x1A0D9A70)
#define CLASS_3_37738F4372A852AF_METHOD_3_8ED0296A3A9490A1_OFFSET UNITYSDK_OFFSET(0x1A0D9150)
#define CLASS_3_37738F4372A852AF_METHOD_3_92B540916F43AC48_OFFSET UNITYSDK_OFFSET(0x1A0DB460)
#define CLASS_3_37738F4372A852AF_METHOD_3_9E950EEFE9A3C454_OFFSET UNITYSDK_OFFSET(0x1A0DBD70)
#define CLASS_3_37738F4372A852AF_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A0D9140)
#define CLASS_3_37738F4372A852AF_METHOD_3_C561FF611C07A44C_1_OFFSET UNITYSDK_OFFSET(0x1A0DBD60)
#define CLASS_3_37738F4372A852AF_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x1A0D9CF0)
#define CLASS_3_37738F4372A852AF_METHOD_3_C5FECF76FA727C1A_OFFSET UNITYSDK_OFFSET(0x1A0D9D70)
#define CLASS_3_37738F4372A852AF_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1A0DBCD0)
#define CLASS_3_37738F4372A852AF_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A0D92F0)
#define CLASS_3_37738F4372A852AF_METHOD_3_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x1A0DBFD0)
#define CLASS_3_37738F4372A852AF_METHOD_3_E529A9AE3C2C2501_OFFSET UNITYSDK_OFFSET(0x1A0DB500)
#define CLASS_3_37738F4372A852AF_METHOD_3_EA93FA42C2E337C0_OFFSET UNITYSDK_OFFSET(0x1A0D9DF0)
#define CLASS_3_37738F4372A852AF_METHOD_3_F400341543EC12EE_OFFSET UNITYSDK_OFFSET(0x1A0D94C0)
#define CLASS_3_37738F4372A852AF_METHOD_3_F402FF0F998A4FB2_OFFSET UNITYSDK_OFFSET(0x1A0DAAF0)
#define CLASS_3_37738F4372A852AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D99D0)

inline static constexpr unsigned int Class_3_37738F4372A852AF_TypeDefinitionIndex = 62298;

class Class_3_37738F4372A852AF : public ::Class_2_63E7C24ABD5B7FB1
{
public:
	// static const ::System::Single Field_3_6; // 0x0
	// static const ::System::Single Field_3_7; // 0x0
	::Struct_2_FA5F50563E60AFBA Field_3_5; // 0x50
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_3_0; // 0x68
	::Class_3_DFD5D1FDB9D2A4AC* Field_3_2; // 0x70
	::Class_3_7472FB6CC4015359* Field_3_3; // 0x78
	::Class_2_292DBB78EBC97A79* Field_3_1; // 0x80
	::System::Collections::Generic::List_1<::System::Single>* Field_3_24; // 0x88
	::UnityEngine::Transform* Field_3_4; // 0x90
	::UnityEngine::Vector3 Field_3_10; // 0x98
	::System::Single Field_3_19; // 0xA4
	::System::Single Field_3_14; // 0xA8
	::Class_3_37738F4372A852AF_Enum_3_6E0DDBC37145F2BE Field_3_27; // 0xAC
	::Class_3_37738F4372A852AF_Enum_3_3E8508FFF5901590 Field_3_26; // 0xB0
	::System::Single Field_3_9; // 0xB4
	::System::Single Field_3_15; // 0xB8
	::MoleMole::Cameras::FollowData Field_3_8; // 0xBC
	::System::Single Field_3_11; // 0xF8
	::System::Single Field_3_21; // 0xFC
	::System::Boolean Field_3_28; // 0x100
	::System::Boolean Field_3_16; // 0x101
	::System::Boolean Field_3_30; // 0x102
	::System::Boolean Field_3_17; // 0x103
	::System::Boolean Field_3_18; // 0x104
	::System::Boolean Field_3_23; // 0x105
	::System::Single Field_3_22; // 0x108
	::UnityEngine::Vector3 Field_3_12; // 0x10C
	::Class_3_37738F4372A852AF_Enum_3_3E8508FFF5901590 Field_3_25; // 0x118
	::System::Single Field_3_13; // 0x11C
	::System::Int32 Field_3_29; // 0x120
	::System::Single Field_3_20; // 0x124

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF__CTOR_OFFSET))(this);
	}

	::Enum_3_63CBB842CA136655 Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_63CBB842CA136655(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_3_8ED0296A3A9490A1(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Class_1_2A3859B4230FECE9* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Class_1_2A3859B4230FECE9*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_8ED0296A3A9490A1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void Method_3_04DC58A6E3312864(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_04DC58A6E3312864_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_6B3FCA8F07DA46D0(::MoleMole::CameraLockTargetConfig* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::MoleMole::CameraLockTargetConfig*, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_6B3FCA8F07DA46D0_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_184D2FD010EC25FA(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_184D2FD010EC25FA_OFFSET))(a1);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_0F4885840B05315B()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_0F4885840B05315B_OFFSET))(this);
	}

	static ::System::Single Method_3_C5FECF76FA727C1A(::MoleMole::CameraLockTargetConfig* a1, ::Class_1_CB7F0487F7A6164A* a2)
	{
		return ((::System::Single(*)(::MoleMole::CameraLockTargetConfig*, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_C5FECF76FA727C1A_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_EA93FA42C2E337C0(::MoleMole::CameraLockTargetConfig* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::MoleMole::CameraLockTargetConfig*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_EA93FA42C2E337C0_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_F400341543EC12EE(::Struct_2_FA5F50563E60AFBA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_F400341543EC12EE_OFFSET))(this, a1);
	}

	::System::Void Method_3_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Boolean Method_3_92B540916F43AC48(::Enum_3_8252736F97D4CFA3_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_8252736F97D4CFA3_1))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_92B540916F43AC48_OFFSET))(this, a1);
	}

	::System::Void Method_3_E529A9AE3C2C2501(::System::Single a1, ::System::Boolean a2, ::Enum_3_8252736F97D4CFA3_1 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::Enum_3_8252736F97D4CFA3_1))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_E529A9AE3C2C2501_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::CameraModuleLockRotateData* Method_3_50E79F918E942F5E(::System::Single a1)
	{
		return ((::MoleMole::CameraModuleLockRotateData*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_50E79F918E942F5E_OFFSET))(this, a1);
	}

	::System::Void Method_3_04DC58A6E3312864_1(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_04DC58A6E3312864_1_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_3B60F5DA0C05A71E(::MoleMole::CameraLockTargetConfig* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::MoleMole::CameraLockTargetConfig*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_3B60F5DA0C05A71E_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_C561FF611C07A44C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_C561FF611C07A44C_1_OFFSET))(this);
	}

	::System::Void Method_3_9E950EEFE9A3C454(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Class_1_2A3859B4230FECE9* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Class_1_2A3859B4230FECE9*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_9E950EEFE9A3C454_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_CB7F0487F7A6164A* Method_3_0F56D5DC9847C4D5()
	{
		return ((::Class_1_CB7F0487F7A6164A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_0F56D5DC9847C4D5_OFFSET))(this);
	}

	static ::System::Boolean Method_3_28EA8B68176735B0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_28EA8B68176735B0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_539F62B8C39C297F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_539F62B8C39C297F_OFFSET))(a1, a2, a3);
	}

	::System::Single Method_3_54E006C624DBA246(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_54E006C624DBA246_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F402FF0F998A4FB2(::MoleMole::Cameras::CameraFollowCalcData a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraFollowCalcData))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_F402FF0F998A4FB2_OFFSET))(this, a1);
	}

	::System::Void Method_3_07837442FF259ACF(::System::Single a1, ::System::Boolean a2, ::Enum_3_8252736F97D4CFA3_1 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::Enum_3_8252736F97D4CFA3_1))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_07837442FF259ACF_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_3_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_D64FD9A228A1C4E0_OFFSET))(this);
	}
};
