#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPG/Client/CameraPushType.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8A0D924C14430663_3;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_2_8F18326B34D3A83D_METHOD_2_0AAC3DE499CAD432_OFFSET UNITYSDK_OFFSET(0x8AB10A0)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x8AB02F0)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_30FDF547F32DA56B_OFFSET UNITYSDK_OFFSET(0x8AAEF10)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x8AAFAA0)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8AB47B0)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_625FBF14AF26EF8B_OFFSET UNITYSDK_OFFSET(0x8AAF030)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_6828C34A483313B0_OFFSET UNITYSDK_OFFSET(0x8AAF380)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_743EBB24C9ECF8BC_OFFSET UNITYSDK_OFFSET(0x8AB0C90)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_9A0D1D8CA9375AD6_OFFSET UNITYSDK_OFFSET(0x8AB1890)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_9C141224A9C73EDC_OFFSET UNITYSDK_OFFSET(0x8AB21D0)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_AFDBE2353EC32F1F_OFFSET UNITYSDK_OFFSET(0x8AB4710)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_B07FF7EFB49C5F84_OFFSET UNITYSDK_OFFSET(0x8AB0700)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0x8AB0450)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8AB1060)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8AAF2E0)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_CF812C8F5E7668B3_OFFSET UNITYSDK_OFFSET(0x8AB1DE0)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_E8BD76429D2CF671_OFFSET UNITYSDK_OFFSET(0x8AAF330)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x8AB1E50)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_F2B4C8D6D56758AC_OFFSET UNITYSDK_OFFSET(0x8AB0790)
#define CLASS_2_8F18326B34D3A83D_METHOD_2_FA4C1FA8992C8412_OFFSET UNITYSDK_OFFSET(0x8AB1ED0)
#define CLASS_2_8F18326B34D3A83D__CCTOR_OFFSET UNITYSDK_OFFSET(0x8AB46F0)
#define CLASS_2_8F18326B34D3A83D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8AAEE10)
#define CLASS_2_8F18326B34D3A83D__CTOR_OFFSET UNITYSDK_OFFSET(0x8AAED60)

inline static constexpr unsigned int Class_2_8F18326B34D3A83D_TypeDefinitionIndex = 56934;

class Class_2_8F18326B34D3A83D : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_28()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8F18326B34D3A83D_TypeDefinitionIndex)->GetStaticField(0x464A0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_27()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8F18326B34D3A83D_TypeDefinitionIndex)->GetStaticField(0x464A8);
	}
	// static const ::System::Int32 Field_2_10 = 0x4; // 0x0
	// static const ::System::Single Field_2_12; // 0x0
	// static const ::System::Single Field_2_13; // 0x0
	::Il2CppArray<::System::Boolean>* Field_2_5; // 0x38
	::UnityEngine::Transform* Field_2_26; // 0x40
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_6; // 0x48
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_3; // 0x50
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_2_11; // 0x58
	::UnityEngine::Camera* Field_2_20; // 0x60
	::Class_1_8A0D924C14430663_3* Field_2_15; // 0x68
	::Il2CppArray<::System::Boolean>* Field_2_4; // 0x70
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_2; // 0x78
	::System::Single Field_2_7; // 0x80
	::System::Single Field_2_8; // 0x84
	::System::Single Field_2_9; // 0x88
	::UnityEngine::Vector3 Field_2_18; // 0x8C
	::UnityEngine::Vector3 Field_2_19; // 0x98
	::UnityEngine::Ray Field_2_0; // 0xA4
	::System::Boolean Field_2_16; // 0xBC
	::System::Boolean Field_2_21; // 0xBD
	::System::Boolean Field_2_22; // 0xBE
	::System::Boolean Field_2_23; // 0xBF
	::System::Int32 Field_2_14; // 0xC0
	::System::Single Field_2_25; // 0xC4
	::RPG::Client::CameraPushType Field_2_17; // 0xC8
	::System::Single Field_2_24; // 0xCC
	::UnityEngine::RaycastHit Field_2_1; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D__CCTOR_OFFSET))();
	}

	::System::Void Method_2_30FDF547F32DA56B(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_30FDF547F32DA56B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_625FBF14AF26EF8B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_625FBF14AF26EF8B_OFFSET))(this);
	}

	::System::Void Method_2_E8BD76429D2CF671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_E8BD76429D2CF671_OFFSET))(this);
	}

	::System::Void Method_2_6828C34A483313B0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_6828C34A483313B0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F2B4C8D6D56758AC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_F2B4C8D6D56758AC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_743EBB24C9ECF8BC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_743EBB24C9ECF8BC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_CF812C8F5E7668B3(::RPG::Client::CameraPushType& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraPushType&))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_CF812C8F5E7668B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_FA4C1FA8992C8412()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_FA4C1FA8992C8412_OFFSET))(this);
	}

	::System::Void Method_2_0AAC3DE499CAD432(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::Class_1_8A0D924C14430663_3* a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::Class_1_8A0D924C14430663_3*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_0AAC3DE499CAD432_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Boolean Method_2_9C141224A9C73EDC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single& a6, ::System::Single& a7, ::System::Single& a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_9C141224A9C73EDC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_2_9A0D1D8CA9375AD6(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_9A0D1D8CA9375AD6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Single Method_2_B07FF7EFB49C5F84(::UnityEngine::Transform* a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_B07FF7EFB49C5F84_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFDBE2353EC32F1F(::RPG::Client::PipelineCameraEngine* P0, ::RPG::Client::CameraModuleConfigCollection* P1, ::RPG::Client::PipelineCameraGlobalConfig* P2, ::RPG::Client::CameraDataAndFlags* P3, ::RPG::Client::CameraModuleType P4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_AFDBE2353EC32F1F_OFFSET))(this, P0, P1, P2, P3, P4);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F18326B34D3A83D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
