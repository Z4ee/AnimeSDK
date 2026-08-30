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

#define CLASS_2_A2C8514C0E12DABC_METHOD_2_23EFCEB999C1D825_OFFSET UNITYSDK_OFFSET(0x154C6D00)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x154C6BA0)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x154C7100)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_30FDF547F32DA56B_OFFSET UNITYSDK_OFFSET(0x154C5630)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_46D00CDA382F43BF_OFFSET UNITYSDK_OFFSET(0x154C82A0)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_4F02AFF8FD3DA7D3_OFFSET UNITYSDK_OFFSET(0x154C7A10)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x154C6350)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_6828C34A483313B0_OFFSET UNITYSDK_OFFSET(0x154C5C30)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_743EBB24C9ECF8BC_OFFSET UNITYSDK_OFFSET(0x154C7600)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x154CB240)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_9C141224A9C73EDC_OFFSET UNITYSDK_OFFSET(0x154C8C30)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_B07FF7EFB49C5F84_OFFSET UNITYSDK_OFFSET(0x154C7070)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x154C79D0)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x154C5B90)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_CF812C8F5E7668B3_OFFSET UNITYSDK_OFFSET(0x154C8820)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_E8BD76429D2CF671_OFFSET UNITYSDK_OFFSET(0x154C5BE0)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x154C8C10)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x154C8890)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_F2B4C8D6D56758AC_OFFSET UNITYSDK_OFFSET(0x154C7160)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_F51528A3F33BED1B_OFFSET UNITYSDK_OFFSET(0x154C8910)
#define CLASS_2_A2C8514C0E12DABC_METHOD_2_FC9C90581678A5D9_OFFSET UNITYSDK_OFFSET(0x154C5750)
#define CLASS_2_A2C8514C0E12DABC__CCTOR_OFFSET UNITYSDK_OFFSET(0x154CB2A0)
#define CLASS_2_A2C8514C0E12DABC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x154C5420)
#define CLASS_2_A2C8514C0E12DABC__CTOR_OFFSET UNITYSDK_OFFSET(0x154C5360)

inline static constexpr unsigned int Class_2_A2C8514C0E12DABC_TypeDefinitionIndex = 69603;

class Class_2_A2C8514C0E12DABC : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_EGGBCLDNKCO()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A2C8514C0E12DABC_TypeDefinitionIndex)->GetStaticField(0x5E940);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_ILOGJHPKIBK()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A2C8514C0E12DABC_TypeDefinitionIndex)->GetStaticField(0x5E948);
	}
	// static const ::System::Int32 IBNOBMFLILP = 0xA; // 0x0
	// static const ::System::Int32 EHJBAMNLIPG = 0x4; // 0x0
	// static const ::System::Single KEICLDNABIA; // 0x0
	// static const ::System::Single KJKMDDOMIDH; // 0x0
	::Il2CppArray<::System::Boolean>* KBGOEFDMFJH; // 0x38
	::Il2CppArray<::UnityEngine::RaycastHit>* LIEMGOHMCCD; // 0x40
	::UnityEngine::Camera* COOFAPDHOPF; // 0x48
	::UnityEngine::Transform* OIGGFCOBKCG; // 0x50
	::Il2CppArray<::System::Boolean>* NFAOIKFBDBO; // 0x58
	::Class_1_8A0D924C14430663_3* PCFHEMBPDBH; // 0x60
	::Il2CppArray<::UnityEngine::Vector3>* PAIMHFEBOEG; // 0x68
	::Il2CppArray<::UnityEngine::Vector3>* BKGDNEEANID; // 0x70
	::Il2CppArray<::UnityEngine::Vector3>* DFFPGDLLGBJ; // 0x78
	::UnityEngine::Vector3 BJCLDODCMMN; // 0x80
	::System::Single NDMJOBHDNMP; // 0x8C
	::System::Single BEOPKFBKFEG; // 0x90
	::UnityEngine::Vector3 JLDKHHLGGDA; // 0x94
	::System::Single OLJLADEMNCE; // 0xA0
	::System::Single IGLMOILFKLO; // 0xA4
	::System::Boolean BKEAIGDGJEE; // 0xA8
	::System::Boolean MJKLAKBGHBN; // 0xA9
	::RPG::Client::CameraPushType HHHODIJGLCA; // 0xAC
	::System::Single DCPEIOKIFKJ; // 0xB0
	::System::Single OKJMKNBGEOB; // 0xB4
	::System::Int32 GBFKGJFHEDM; // 0xB8
	::UnityEngine::Ray PNGHABAEDBC; // 0xBC
	::System::Boolean AIFPKIKLCCM; // 0xD4
	::System::Boolean BDKHLJGPKGE; // 0xD5
	::System::Boolean PKDIPKOPICA; // 0xD6
	::System::Int32 KEEAAOEMJJP; // 0xD8
	::UnityEngine::RaycastHit EJJMPIIGOIL; // 0xDC

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
