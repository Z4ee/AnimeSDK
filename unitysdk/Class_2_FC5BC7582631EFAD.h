#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_2A3859B4230FECE9.h"
#include "unitysdk/Enum_3_63CBB842CA136655.h"
#include "unitysdk/Struct_2_7E9A981C4706FCC7.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_1_832D46E76C8F7302;
class Class_2_F73C68CA4C4A5728;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole::Cameras { class CameraAvatarPrepareData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Cameras { class NapVirtualCutSceneCamera; }

#define CLASS_2_FC5BC7582631EFAD_METHOD_2_002A3C2EF46C74CF_OFFSET UNITYSDK_OFFSET(0x18B9BC00)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_3432859576FFF31F_OFFSET UNITYSDK_OFFSET(0x18B9BCC0)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_34D285BE9B3F417F_OFFSET UNITYSDK_OFFSET(0x18B99770)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_3D536D7BE2D40C07_OFFSET UNITYSDK_OFFSET(0x18B9A980)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_4147D731A50593B6_1_OFFSET UNITYSDK_OFFSET(0x18B9B120)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_4147D731A50593B6_2_OFFSET UNITYSDK_OFFSET(0x18B9A690)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_4147D731A50593B6_OFFSET UNITYSDK_OFFSET(0x18B9B2E0)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_422E4D06A3C7DF36_1_OFFSET UNITYSDK_OFFSET(0x18B9BB10)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_422E4D06A3C7DF36_OFFSET UNITYSDK_OFFSET(0x18B9B970)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_70B3739FE2875938_OFFSET UNITYSDK_OFFSET(0x18B99340)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x18B9B840)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_9E68A0871110703F_OFFSET UNITYSDK_OFFSET(0x18B995A0)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x18B9A850)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18B99330)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18B9BA20)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_DA624ED5E7AFDE43_1_OFFSET UNITYSDK_OFFSET(0x18B9B790)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_DA624ED5E7AFDE43_OFFSET UNITYSDK_OFFSET(0x18B99710)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_EDBFE3C4D4F7A857_OFFSET UNITYSDK_OFFSET(0x18B9B870)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_F343EB366B5A896D_1_OFFSET UNITYSDK_OFFSET(0x18B9BA70)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_F343EB366B5A896D_OFFSET UNITYSDK_OFFSET(0x18B99550)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x18B9B010)
#define CLASS_2_FC5BC7582631EFAD_METHOD_2_FFFEA3B2FB2730AD_OFFSET UNITYSDK_OFFSET(0x18B9B920)
#define CLASS_2_FC5BC7582631EFAD__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9B4A0)

inline static constexpr unsigned int Class_2_FC5BC7582631EFAD_TypeDefinitionIndex = 45079;

class Class_2_FC5BC7582631EFAD : public ::Class_1_2A3859B4230FECE9
{
public:
	// static const ::System::Single Field_2_7; // 0x0
	// static const ::System::Single Field_2_6; // 0x0
	::MoleMole::Cameras::NapVirtualCutSceneCamera* Field_2_3; // 0x38
	::Class_2_F73C68CA4C4A5728* Field_2_0; // 0x40
	::Cinemachine::CameraState Field_2_2; // 0x48
	::System::Boolean Field_2_1; // 0x130

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD__CTOR_OFFSET))(this);
	}

	::Enum_3_63CBB842CA136655 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_63CBB842CA136655(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_70B3739FE2875938(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_70B3739FE2875938_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9E68A0871110703F(::Cinemachine::CameraState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_9E68A0871110703F_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA624ED5E7AFDE43(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2, ::MoleMole::Cameras::CameraAvatarPrepareData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_DA624ED5E7AFDE43_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_34D285BE9B3F417F(::System::Single a1, ::Cinemachine::CameraState& a2, ::Struct_2_7E9A981C4706FCC7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_34D285BE9B3F417F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DA624ED5E7AFDE43_1(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2, ::MoleMole::Cameras::CameraAvatarPrepareData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_DA624ED5E7AFDE43_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F343EB366B5A896D(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_F343EB366B5A896D_OFFSET))(this, a1, a2);
	}

	::Class_1_832D46E76C8F7302* Method_2_9C06C768B25E4E13()
	{
		return ((::Class_1_832D46E76C8F7302*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_9C06C768B25E4E13_OFFSET))(this);
	}

	::System::Void Method_2_EDBFE3C4D4F7A857(::System::Single a1, ::Cinemachine::CameraState& a2, ::Struct_2_7E9A981C4706FCC7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_EDBFE3C4D4F7A857_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4147D731A50593B6(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_4147D731A50593B6_OFFSET))(this, a1, a2);
	}

	::Cinemachine::CameraState Method_2_FFFEA3B2FB2730AD()
	{
		return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_FFFEA3B2FB2730AD_OFFSET))(this);
	}

	::System::Void Method_2_4147D731A50593B6_1(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_4147D731A50593B6_1_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Rect Method_2_422E4D06A3C7DF36()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_422E4D06A3C7DF36_OFFSET))(this);
	}

	::System::Void Method_2_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_A5ADA4706DA592FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F343EB366B5A896D_1(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_F343EB366B5A896D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4147D731A50593B6_2(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_4147D731A50593B6_2_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Rect Method_2_422E4D06A3C7DF36_1()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_422E4D06A3C7DF36_1_OFFSET))(this);
	}

	::System::Void Method_2_002A3C2EF46C74CF(::Cinemachine::CameraState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_002A3C2EF46C74CF_OFFSET))(this, a1);
	}

	::Cinemachine::CameraState Method_2_3432859576FFF31F()
	{
		return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_3432859576FFF31F_OFFSET))(this);
	}

	::System::Void Method_2_3D536D7BE2D40C07(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_3D536D7BE2D40C07_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC5BC7582631EFAD_METHOD_2_FD7514C64FB1B043_OFFSET))(this, a1);
	}
};
