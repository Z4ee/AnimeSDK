#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_2_63E7C24ABD5B7FB1.h"
#include "unitysdk/Class_3_EE718512BF4B01F4_Enum_3_C7BE316486E8D1C1.h"
#include "unitysdk/Enum_3_63CBB842CA136655.h"
#include "unitysdk/MoleMole/CameraAxis.h"
#include "unitysdk/MoleMole/Cameras/VCameraAxisState.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/Struct_2_7E9A981C4706FCC7.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_2A3859B4230FECE9;
class Class_1_8289F2785D9AA990;
class Class_2_292DBB78EBC97A79;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole { class CameraScreenDragConfig; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }

#define CLASS_3_EE718512BF4B01F4_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11E7DF70)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x11E7E290)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x11E7E700)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11E7CA30)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x11E7E170)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11E7CD10)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_3B0D01A30F6EC764_OFFSET UNITYSDK_OFFSET(0x11E7E0D0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0x11E7E200)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_52E6B4E4EEB3098D_OFFSET UNITYSDK_OFFSET(0x11E7E3B0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_65810D41598FEE43_OFFSET UNITYSDK_OFFSET(0x11E7E640)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_7889E856344009E9_1_OFFSET UNITYSDK_OFFSET(0x11E7DED0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_7889E856344009E9_2_OFFSET UNITYSDK_OFFSET(0x11E7E2F0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0x11E7DDC0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_9E950EEFE9A3C454_OFFSET UNITYSDK_OFFSET(0x11E7DF60)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_A27DC2C5A103933A_1_OFFSET UNITYSDK_OFFSET(0x11E7CD50)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x11E7CB00)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x11E7C5C0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_B2809C8E0B7D79BF_OFFSET UNITYSDK_OFFSET(0x11E7CF50)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_C561FF611C07A44C_1_OFFSET UNITYSDK_OFFSET(0x11E7E3A0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x11E7DF50)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_C5F9823D509784CD_OFFSET UNITYSDK_OFFSET(0x11E7DFC0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11E7E040)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x11E7E5B0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11E7DE40)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_DEB7D04EE9D67260_OFFSET UNITYSDK_OFFSET(0x11E7CFC0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_EDBFE3C4D4F7A857_OFFSET UNITYSDK_OFFSET(0x11E7E500)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x11E7C9C0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_F6B04F5B9B9F0225_OFFSET UNITYSDK_OFFSET(0x11E7C5D0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_FD3E18181650F432_OFFSET UNITYSDK_OFFSET(0x11E7CDF0)
#define CLASS_3_EE718512BF4B01F4__CTOR_OFFSET UNITYSDK_OFFSET(0x11E7DE30)

inline static constexpr unsigned int Class_3_EE718512BF4B01F4_TypeDefinitionIndex = 63540;

class Class_3_EE718512BF4B01F4 : public ::Class_2_63E7C24ABD5B7FB1
{
public:
	::Class_2_292DBB78EBC97A79* Field_3_1; // 0x50
	::MoleMole::CameraScreenDragConfig* Field_3_10; // 0x58
	::Class_1_8289F2785D9AA990* Field_3_18; // 0x60
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_3_2; // 0x68
	::MoleMole::Cameras::VCameraAxisState Field_3_0; // 0x70
	::MoleMole::Cameras::VCameraAxisState Field_3_7; // 0x98
	::System::Boolean Field_3_14; // 0xC0
	::System::Boolean Field_3_8; // 0xC1
	::UnityEngine::Vector2 Field_3_13; // 0xC4
	::MoleMole::Config::CameraDelayMoveMode Field_3_9; // 0xCC
	::System::Single Field_3_11; // 0xD0
	::System::Single Field_3_4; // 0xD4
	::System::Single Field_3_19; // 0xD8
	::System::Int32 Field_3_15; // 0xDC
	::MoleMole::CameraAxis Field_3_5; // 0xE0
	::MoleMole::CameraAxis Field_3_6; // 0xF0
	::Class_3_EE718512BF4B01F4_Enum_3_C7BE316486E8D1C1 Field_3_17; // 0x100
	::System::Single Field_3_12; // 0x104

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4__CTOR_OFFSET))(this);
	}

	::Enum_3_63CBB842CA136655 Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_63CBB842CA136655(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_3_F6B04F5B9B9F0225(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Class_1_2A3859B4230FECE9* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Class_1_2A3859B4230FECE9*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_F6B04F5B9B9F0225_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_3_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_A27DC2C5A103933A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_A27DC2C5A103933A_1_OFFSET))(this);
	}

	::System::Void Method_3_FD3E18181650F432(::System::Single a1, ::Cinemachine::CameraState& a2, ::Struct_2_7E9A981C4706FCC7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_FD3E18181650F432_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_7889E856344009E9_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_7889E856344009E9_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_3_9E950EEFE9A3C454(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Class_1_2A3859B4230FECE9* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Class_1_2A3859B4230FECE9*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_9E950EEFE9A3C454_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Single Method_3_C5F9823D509784CD(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_C5F9823D509784CD_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_3B0D01A30F6EC764(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_3B0D01A30F6EC764_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Single Method_3_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_43E290A0B26B39F6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_7889E856344009E9_2(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_7889E856344009E9_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C561FF611C07A44C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_C561FF611C07A44C_1_OFFSET))(this);
	}

	::System::Void Method_3_DEB7D04EE9D67260(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_DEB7D04EE9D67260_OFFSET))(this, a1);
	}

	::System::Void Method_3_B2809C8E0B7D79BF(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_B2809C8E0B7D79BF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EDBFE3C4D4F7A857(::System::Single a1, ::Cinemachine::CameraState& a2, ::Struct_2_7E9A981C4706FCC7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_EDBFE3C4D4F7A857_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_52E6B4E4EEB3098D(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_52E6B4E4EEB3098D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_65810D41598FEE43(::MoleMole::CameraAxis a1, ::MoleMole::CameraAxis a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraAxis, ::MoleMole::CameraAxis))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_65810D41598FEE43_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_2C95AFAD0256302F_OFFSET))(this);
	}
};
