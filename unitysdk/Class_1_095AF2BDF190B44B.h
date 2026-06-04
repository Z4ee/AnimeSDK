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
class Class_1_B470ECE8B4D9EC2E;
class Class_1_C2963602F383E66F;
class Class_1_D33B7D6901AE39E9;
class Class_1_F1E790FCE2711921;
class Class_1_F31115D5F56C5F10;
class Class_2_197CC3E8889A3449;
class Class_3_C4B4367065488983;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_095AF2BDF190B44B_CLEANUP_OFFSET UNITYSDK_OFFSET(0x18E8B270)
#define CLASS_1_095AF2BDF190B44B_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18E8AC40)
#define CLASS_1_095AF2BDF190B44B_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18E89760)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_02C4A161E4AC95C4_OFFSET UNITYSDK_OFFSET(0x18E88010)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x18E8B100)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_4FB9E48CE2C8A34B_OFFSET UNITYSDK_OFFSET(0x18E88770)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_50775A09E9C58E1D_OFFSET UNITYSDK_OFFSET(0x18E8C730)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_53194FDF2DF39FBF_OFFSET UNITYSDK_OFFSET(0x18E8A3C0)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_6251296F6DC53CE1_OFFSET UNITYSDK_OFFSET(0x18E88270)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_649C5A52992323C1_OFFSET UNITYSDK_OFFSET(0x18E88360)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_64D99BE9403F851D_1_OFFSET UNITYSDK_OFFSET(0x18E894E0)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_64D99BE9403F851D_OFFSET UNITYSDK_OFFSET(0x18E89490)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_6FC46F842FCF3DEE_OFFSET UNITYSDK_OFFSET(0x18E88580)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_7149A9405710B90B_OFFSET UNITYSDK_OFFSET(0x18E88640)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x18E8B3F0)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_791479DE1E3A1165_OFFSET UNITYSDK_OFFSET(0x18E88F80)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_7C094A9CCAB99714_OFFSET UNITYSDK_OFFSET(0x18E8B630)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x18E89FE0)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_84EE913C58A1DE2B_1_OFFSET UNITYSDK_OFFSET(0x18E895A0)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_84EE913C58A1DE2B_2_OFFSET UNITYSDK_OFFSET(0x18E89630)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_84EE913C58A1DE2B_3_OFFSET UNITYSDK_OFFSET(0x18E896C0)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_84EE913C58A1DE2B_OFFSET UNITYSDK_OFFSET(0x18E89530)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_99539B24CF2ECE3E_OFFSET UNITYSDK_OFFSET(0x18E8C560)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x18E8C1E0)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18E89D00)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_C74CCDFF75CBE035_OFFSET UNITYSDK_OFFSET(0x18E88460)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_CF6D55E8C83E9BD1_OFFSET UNITYSDK_OFFSET(0x18E8A8F0)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_DDB1F49F4423A0C7_OFFSET UNITYSDK_OFFSET(0x18E8A780)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_DEEBBDCE08BECC2F_OFFSET UNITYSDK_OFFSET(0x18E8BB70)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x18E8C060)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x18E8C190)
#define CLASS_1_095AF2BDF190B44B_METHOD_1_F5F1E1640AB7D697_OFFSET UNITYSDK_OFFSET(0x18E88A70)
#define CLASS_1_095AF2BDF190B44B_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x18E8B2B0)
#define CLASS_1_095AF2BDF190B44B__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E8CCE0)
#define CLASS_1_095AF2BDF190B44B__CTOR_OFFSET UNITYSDK_OFFSET(0x18E89750)

inline static constexpr unsigned int Class_1_095AF2BDF190B44B_TypeDefinitionIndex = 39555;

class Class_1_095AF2BDF190B44B : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_095AF2BDF190B44B_TypeDefinitionIndex)->GetStaticField(0x44960);
	}
	static ::Il2CppArray<::System::Func_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Func_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_095AF2BDF190B44B_TypeDefinitionIndex)->GetStaticField(0x44968);
	}
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	::Class_1_B470ECE8B4D9EC2E* Field_1_4; // 0x10
	::Class_1_0C69BC2A626C1DF1* Field_1_5; // 0x18
	::Class_1_C2963602F383E66F* Field_1_6; // 0x20
	::Class_1_D33B7D6901AE39E9* Field_1_7; // 0x28
	::Class_3_C4B4367065488983* Field_1_8; // 0x30

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_C4B4367065488983* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_C4B4367065488983*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_7C094A9CCAB99714(::Class_2_197CC3E8889A3449* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_197CC3E8889A3449*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_7C094A9CCAB99714_OFFSET))(this, a1);
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

	::System::Void Method_1_53194FDF2DF39FBF(::Class_2_197CC3E8889A3449* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_197CC3E8889A3449*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_53194FDF2DF39FBF_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B10EBB5408EF02E(::Class_1_F1E790FCE2711921* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1E790FCE2711921*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDB1F49F4423A0C7(::Class_2_197CC3E8889A3449* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_197CC3E8889A3449*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_DDB1F49F4423A0C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF6D55E8C83E9BD1(::Class_2_197CC3E8889A3449* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_197CC3E8889A3449*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_CF6D55E8C83E9BD1_OFFSET))(this, a1);
	}

	::System::Void Method_1_50775A09E9C58E1D(::Class_2_197CC3E8889A3449* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_197CC3E8889A3449*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_50775A09E9C58E1D_OFFSET))(this, a1);
	}

	::System::Void Method_1_99539B24CF2ECE3E(::Class_2_197CC3E8889A3449* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_197CC3E8889A3449*))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_99539B24CF2ECE3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_095AF2BDF190B44B_METHOD_1_9AB55F553C4AC6E8_OFFSET))(this);
	}
};
