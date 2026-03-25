#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloor.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_1_0C69BC2A626C1DF1;
class Class_1_867B6CE75953535A;
class Class_1_B470ECE8B4D9EC2E;
class Class_1_C2963602F383E66F;
class Class_1_F1E790FCE2711921;
class Class_1_F31115D5F56C5F10;
class Class_2_54AE1C44DE8123D2;
class Class_3_C4B4367065488983;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_095AF2BDF190B44B_CLEANUP_OFFSET UNITYSDK_OFFSET(0x168008C0)
#define CLASS_1_095AF2BDF190B44B_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16800280)
#define CLASS_1_095AF2BDF190B44B_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x167FED20)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_02C4A161E4AC95C4_OFFSET UNITYSDK_OFFSET(0x167FD5C0)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_125D1D788056F439_OFFSET UNITYSDK_OFFSET(0x16801EB0)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x16800A60)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x16800750)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x16801890)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_4FB9E48CE2C8A34B_OFFSET UNITYSDK_OFFSET(0x167FDD30)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_53194FDF2DF39FBF_OFFSET UNITYSDK_OFFSET(0x167FF9E0)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_6251296F6DC53CE1_OFFSET UNITYSDK_OFFSET(0x167FD820)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_649C5A52992323C1_OFFSET UNITYSDK_OFFSET(0x167FD920)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_64D99BE9403F851D_1_OFFSET UNITYSDK_OFFSET(0x167FEAA0)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_64D99BE9403F851D_OFFSET UNITYSDK_OFFSET(0x167FEA50)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_6FC46F842FCF3DEE_OFFSET UNITYSDK_OFFSET(0x167FDB40)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_7149A9405710B90B_OFFSET UNITYSDK_OFFSET(0x167FDC00)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_791479DE1E3A1165_OFFSET UNITYSDK_OFFSET(0x167FE540)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_7C094A9CCAB99714_OFFSET UNITYSDK_OFFSET(0x16800CD0)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x167FF600)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_84EE913C58A1DE2B_1_OFFSET UNITYSDK_OFFSET(0x167FEB60)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_84EE913C58A1DE2B_2_OFFSET UNITYSDK_OFFSET(0x167FEBF0)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_84EE913C58A1DE2B_3_OFFSET UNITYSDK_OFFSET(0x167FEC80)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_84EE913C58A1DE2B_OFFSET UNITYSDK_OFFSET(0x167FEAF0)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x167FF320)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_C74CCDFF75CBE035_OFFSET UNITYSDK_OFFSET(0x167FDA20)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_CF6D55E8C83E9BD1_OFFSET UNITYSDK_OFFSET(0x167FFF30)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_DDB1F49F4423A0C7_OFFSET UNITYSDK_OFFSET(0x167FFDC0)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_DEEBBDCE08BECC2F_OFFSET UNITYSDK_OFFSET(0x16801250)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x16801710)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x16801840)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_F5F1E1640AB7D697_OFFSET UNITYSDK_OFFSET(0x167FE030)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_FEAE331D52E92FE1_OFFSET UNITYSDK_OFFSET(0x16801C40)
#define CLASS_1_095AF2BDF190B44B_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x16800900)
#define CLASS_1_095AF2BDF190B44B__CCTOR_OFFSET UNITYSDK_OFFSET(0x16802330)
#define CLASS_1_095AF2BDF190B44B__CTOR_OFFSET UNITYSDK_OFFSET(0x167FED10)

inline static constexpr unsigned int Class_1_095AF2BDF190B44B_TypeDefinitionIndex = 32997;

class Class_1_095AF2BDF190B44B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Func_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Func_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_095AF2BDF190B44B_TypeDefinitionIndex)->GetStaticField(0x21B50);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_095AF2BDF190B44B_TypeDefinitionIndex)->GetStaticField(0x21B58);
	}
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	::Class_1_867B6CE75953535A* Field_1_4; // 0x10
	::Class_1_0C69BC2A626C1DF1* Field_1_7; // 0x18
	::Class_1_C2963602F383E66F* Field_1_6; // 0x20
	::Class_1_B470ECE8B4D9EC2E* Field_1_8; // 0x28
	::Class_3_C4B4367065488983* Field_1_5; // 0x30

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_C4B4367065488983* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_C4B4367065488983*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Vector2Int Method_1_02C4A161E4AC95C4(::UnityEngine::Vector3Int a1, ::Class_1_C2963602F383E66F* a2)
	{
		return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector3Int, ::Class_1_C2963602F383E66F*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_02C4A161E4AC95C4_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3Int Method_1_649C5A52992323C1(::Class_1_F31115D5F56C5F10* a1)
	{
		return ((::UnityEngine::Vector3Int(*)(::Class_1_F31115D5F56C5F10*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_649C5A52992323C1_OFFSET))(a1);
	}

	static ::RPG::Client::LittleGame::ETimelineControlGameLevelFloor Method_1_6FC46F842FCF3DEE(::Class_1_F31115D5F56C5F10* a1)
	{
		return ((::RPG::Client::LittleGame::ETimelineControlGameLevelFloor(*)(::Class_1_F31115D5F56C5F10*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_6FC46F842FCF3DEE_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_7149A9405710B90B(::Class_1_F1E790FCE2711921* a1)
	{
		return ((::UnityEngine::Vector3(*)(::Class_1_F1E790FCE2711921*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_7149A9405710B90B_OFFSET))(a1);
	}

	static ::UnityEngine::Quaternion Method_1_4FB9E48CE2C8A34B(::UnityEngine::Vector3& a1, ::Class_1_C2963602F383E66F* a2)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3&, ::Class_1_C2963602F383E66F*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_4FB9E48CE2C8A34B_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_F5F1E1640AB7D697(::UnityEngine::Vector3& a1, ::Class_1_C2963602F383E66F* a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::Class_1_C2963602F383E66F*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_F5F1E1640AB7D697_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_791479DE1E3A1165(::UnityEngine::Vector3Int& a1, ::Class_1_C2963602F383E66F* a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3Int&, ::Class_1_C2963602F383E66F*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_791479DE1E3A1165_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_6251296F6DC53CE1(::UnityEngine::Vector3Int& a1, ::Class_1_C2963602F383E66F* a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3Int&, ::Class_1_C2963602F383E66F*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_6251296F6DC53CE1_OFFSET))(a1, a2);
	}

	static ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation Method_1_64D99BE9403F851D(::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a1)
	{
		return ((::RPG::Client::LittleGame::ETimelineControlGameLevelRotation(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelRotation))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_64D99BE9403F851D_OFFSET))(a1);
	}

	static ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation Method_1_64D99BE9403F851D_1(::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a1)
	{
		return ((::RPG::Client::LittleGame::ETimelineControlGameLevelRotation(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelRotation))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_64D99BE9403F851D_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_C74CCDFF75CBE035(::UnityEngine::Vector3Int& a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3Int&, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_C74CCDFF75CBE035_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3Int Method_1_84EE913C58A1DE2B(::UnityEngine::Vector3Int a1)
	{
		return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_84EE913C58A1DE2B_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3Int Method_1_84EE913C58A1DE2B_1(::UnityEngine::Vector3Int a1)
	{
		return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_84EE913C58A1DE2B_1_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3Int Method_1_84EE913C58A1DE2B_2(::UnityEngine::Vector3Int a1)
	{
		return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_84EE913C58A1DE2B_2_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3Int Method_1_84EE913C58A1DE2B_3(::UnityEngine::Vector3Int a1)
	{
		return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_84EE913C58A1DE2B_3_OFFSET))(a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_EXECUTE_OFFSET))(this);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_CLEANUP_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_1_7C094A9CCAB99714(::Class_2_54AE1C44DE8123D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_7C094A9CCAB99714_OFFSET))(this, a1);
	}

	::System::Void Method_1_DEEBBDCE08BECC2F(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_DEEBBDCE08BECC2F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_F0F8DE036FE283F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_F0F8DE036FE283F6_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_1_53194FDF2DF39FBF(::Class_2_54AE1C44DE8123D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_53194FDF2DF39FBF_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B10EBB5408EF02E(::Class_1_F1E790FCE2711921* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1E790FCE2711921*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDB1F49F4423A0C7(::Class_2_54AE1C44DE8123D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_DDB1F49F4423A0C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF6D55E8C83E9BD1(::Class_2_54AE1C44DE8123D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_CF6D55E8C83E9BD1_OFFSET))(this, a1);
	}

	::System::Void Method_1_125D1D788056F439(::Class_2_54AE1C44DE8123D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_125D1D788056F439_OFFSET))(this, a1);
	}

	::System::Void Method_1_FEAE331D52E92FE1(::Class_2_54AE1C44DE8123D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_FEAE331D52E92FE1_OFFSET))(this, a1);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_489E0B827662C211_OFFSET))(this);
	}
};
