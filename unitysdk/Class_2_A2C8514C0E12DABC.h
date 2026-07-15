#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
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

#define CLASS_2_A2C8514C0E12DABC_METHOD_2_23EFCEB999C1D825_OFFSET UNITYSDK_OFFSET(0x16EDB3C0)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x16EDB260)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16EDB7C0)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_30FDF547F32DA56B_OFFSET UNITYSDK_OFFSET(0x16ED9CF0)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_46D00CDA382F43BF_OFFSET UNITYSDK_OFFSET(0x16EDC960)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_4F02AFF8FD3DA7D3_OFFSET UNITYSDK_OFFSET(0x16EDC0D0)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x16EDAA10)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_6828C34A483313B0_OFFSET UNITYSDK_OFFSET(0x16EDA2F0)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_743EBB24C9ECF8BC_OFFSET UNITYSDK_OFFSET(0x16EDBCC0)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x16EDF900)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_9C141224A9C73EDC_OFFSET UNITYSDK_OFFSET(0x16EDD2F0)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_B07FF7EFB49C5F84_OFFSET UNITYSDK_OFFSET(0x16EDB730)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16EDC090)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16EDA250)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_CF812C8F5E7668B3_OFFSET UNITYSDK_OFFSET(0x16EDCEE0)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_E8BD76429D2CF671_OFFSET UNITYSDK_OFFSET(0x16EDA2A0)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16EDD2D0)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x16EDCF50)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_F2B4C8D6D56758AC_OFFSET UNITYSDK_OFFSET(0x16EDB820)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_F51528A3F33BED1B_OFFSET UNITYSDK_OFFSET(0x16EDCFD0)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_FC9C90581678A5D9_OFFSET UNITYSDK_OFFSET(0x16ED9E10)
#define CLASS_2_A2C8514C0E12DABC__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EDF960)
#define CLASS_2_A2C8514C0E12DABC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16ED9AE0)
#define CLASS_2_A2C8514C0E12DABC__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED9A10)

inline static constexpr unsigned int Class_2_A2C8514C0E12DABC_TypeDefinitionIndex = 66510;

class Class_2_A2C8514C0E12DABC : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A2C8514C0E12DABC_TypeDefinitionIndex)->GetStaticField(0x43C80);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_1()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A2C8514C0E12DABC_TypeDefinitionIndex)->GetStaticField(0x43C88);
	}
	// static const ::System::Int32 Field_2_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_2_3 = 0x4; // 0x0
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::Single Field_2_5; // 0x0
	::Il2CppArray<::System::Boolean>* Field_2_6; // 0x38
	::Il2CppArray<::System::Boolean>* Field_2_7; // 0x40
	::Class_1_8A0D924C14430663_3* Field_2_8; // 0x48
	::UnityEngine::Camera* Field_2_9; // 0x50
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_10; // 0x58
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_11; // 0x60
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_2_12; // 0x68
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_13; // 0x70
	::UnityEngine::Transform* Field_2_14; // 0x78
	::System::Single Field_2_15; // 0x80
	::RPG::Client::CameraPushType Field_2_16; // 0x84
	::System::Int32 Field_2_17; // 0x88
	::System::Single Field_2_18; // 0x8C
	::UnityEngine::RaycastHit Field_2_19; // 0x90
	::System::Single Field_2_20; // 0xC0
	::System::Boolean Field_2_21; // 0xC4
	::UnityEngine::Vector3 Field_2_22; // 0xC8
	::UnityEngine::Vector3 Field_2_23; // 0xD4
	::System::Boolean Field_2_24; // 0xE0
	::System::Boolean Field_2_25; // 0xE1
	::System::Boolean Field_2_26; // 0xE2
	::System::Boolean Field_2_27; // 0xE3
	::System::Single Field_2_28; // 0xE4
	::UnityEngine::Ray Field_2_29; // 0xE8
	::System::Single Field_2_30; // 0x100
	::System::Single Field_2_31; // 0x104
	::System::Int32 Field_2_32; // 0x108

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC__CCTOR_OFFSET))();
	}

	::System::Void Method_2_30FDF547F32DA56B(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_30FDF547F32DA56B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_FC9C90581678A5D9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_FC9C90581678A5D9_OFFSET))(this);
	}

	::System::Void Method_2_E8BD76429D2CF671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_E8BD76429D2CF671_OFFSET))(this);
	}

	::System::Void Method_2_6828C34A483313B0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_6828C34A483313B0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_F2B4C8D6D56758AC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_F2B4C8D6D56758AC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_743EBB24C9ECF8BC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_743EBB24C9ECF8BC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_CF812C8F5E7668B3(::RPG::Client::CameraPushType& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraPushType&))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_CF812C8F5E7668B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_23EFCEB999C1D825(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_23EFCEB999C1D825_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F51528A3F33BED1B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_F51528A3F33BED1B_OFFSET))(this);
	}

	::System::Void Method_2_4F02AFF8FD3DA7D3(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::Class_1_8A0D924C14430663_3* a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::Class_1_8A0D924C14430663_3*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_4F02AFF8FD3DA7D3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Boolean Method_2_9C141224A9C73EDC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single& a6, ::System::Single& a7, ::System::Single& a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_9C141224A9C73EDC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_2_46D00CDA382F43BF(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_46D00CDA382F43BF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Single Method_2_B07FF7EFB49C5F84(::UnityEngine::Transform* a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_B07FF7EFB49C5F84_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C8514C0E12DABC_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
