#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameCharacterMoveDirection.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloor.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloorPoint.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloorXZ.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloorY.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_1_0C69BC2A626C1DF1;
class Class_1_867B6CE75953535A;
class Class_1_B470ECE8B4D9EC2E;
class Class_1_BDA2C084533125A6;
class Class_1_C2963602F383E66F;
class Class_1_F1E790FCE2711921;
class Class_1_F31115D5F56C5F10;
class Class_2_54AE1C44DE8123D2;
class Class_3_C4B4367065488983;
namespace RPG::Client::LittleGame { class TimelineControlGameCharacterMovementPath; }
namespace RPG::Client::LittleGame { class TimelineControlGameWorld_LevelGroupAction; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_05806091E7C98BA3_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16A2D3A0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_05D922B4721389C5_OFFSET UNITYSDK_OFFSET(0x16A33D70)
#define CLASS_1_05806091E7C98BA3_METHOD_1_0B69EC58FAFC3954_OFFSET UNITYSDK_OFFSET(0x16A2F260)
#define CLASS_1_05806091E7C98BA3_METHOD_1_0BF2D6E0EEE7A8DC_OFFSET UNITYSDK_OFFSET(0x16A2FFD0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_0E22E5BCC23B135A_1_OFFSET UNITYSDK_OFFSET(0x16A33920)
#define CLASS_1_05806091E7C98BA3_METHOD_1_0E22E5BCC23B135A_OFFSET UNITYSDK_OFFSET(0x16A33860)
#define CLASS_1_05806091E7C98BA3_METHOD_1_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x16A2E660)
#define CLASS_1_05806091E7C98BA3_METHOD_1_16C0B6437D48C629_OFFSET UNITYSDK_OFFSET(0x16A32BF0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_209E4250CA87B30E_OFFSET UNITYSDK_OFFSET(0x16A2FE00)
#define CLASS_1_05806091E7C98BA3_METHOD_1_26C7B2E653DCA467_OFFSET UNITYSDK_OFFSET(0x16A341A0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x16A2D5E0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_29C9A69F365729BB_OFFSET UNITYSDK_OFFSET(0x16A30DB0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_2C2F4A16628D3D28_OFFSET UNITYSDK_OFFSET(0x16A35CE0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_2CFC9BC11855BAE2_OFFSET UNITYSDK_OFFSET(0x16A356D0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_31124A95F4F0EF0F_OFFSET UNITYSDK_OFFSET(0x16A38270)
#define CLASS_1_05806091E7C98BA3_METHOD_1_31F905887602BED1_OFFSET UNITYSDK_OFFSET(0x16A301D0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_327D31C7D87ADABA_OFFSET UNITYSDK_OFFSET(0x16A312E0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_341C005326F54D64_OFFSET UNITYSDK_OFFSET(0x16A2F710)
#define CLASS_1_05806091E7C98BA3_METHOD_1_39BE185DE1B30665_OFFSET UNITYSDK_OFFSET(0x16A347F0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_42689C22B1D43952_OFFSET UNITYSDK_OFFSET(0x16A382D0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_43CBED048D0A1D34_OFFSET UNITYSDK_OFFSET(0x16A31770)
#define CLASS_1_05806091E7C98BA3_METHOD_1_489BFFA19C857B7A_OFFSET UNITYSDK_OFFSET(0x16A33F40)
#define CLASS_1_05806091E7C98BA3_METHOD_1_4CFA30FA85BD5218_OFFSET UNITYSDK_OFFSET(0x16A2DED0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_4E561AA19FFB8E68_1_OFFSET UNITYSDK_OFFSET(0x16A35C00)
#define CLASS_1_05806091E7C98BA3_METHOD_1_4E561AA19FFB8E68_OFFSET UNITYSDK_OFFSET(0x16A35B20)
#define CLASS_1_05806091E7C98BA3_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x16A33D60)
#define CLASS_1_05806091E7C98BA3_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x16A38260)
#define CLASS_1_05806091E7C98BA3_METHOD_1_5ED98E0CFE5E5AB1_OFFSET UNITYSDK_OFFSET(0x16A2E9A0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_65BD2C6FAA61A13F_OFFSET UNITYSDK_OFFSET(0x16A336E0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_7838DB17F6444719_OFFSET UNITYSDK_OFFSET(0x16A373B0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_78949CF654AF1040_OFFSET UNITYSDK_OFFSET(0x16A323F0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_7B5CF29097D2700A_OFFSET UNITYSDK_OFFSET(0x16A339E0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_8002A10A0271B67D_OFFSET UNITYSDK_OFFSET(0x16A32190)
#define CLASS_1_05806091E7C98BA3_METHOD_1_84EE913C58A1DE2B_1_OFFSET UNITYSDK_OFFSET(0x16A38750)
#define CLASS_1_05806091E7C98BA3_METHOD_1_84EE913C58A1DE2B_2_OFFSET UNITYSDK_OFFSET(0x16A387E0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_84EE913C58A1DE2B_3_OFFSET UNITYSDK_OFFSET(0x16A38870)
#define CLASS_1_05806091E7C98BA3_METHOD_1_84EE913C58A1DE2B_OFFSET UNITYSDK_OFFSET(0x16A386E0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_8AA525D296359C72_OFFSET UNITYSDK_OFFSET(0x16A342D0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_8E28F02ACFB32A9D_OFFSET UNITYSDK_OFFSET(0x16A2EB00)
#define CLASS_1_05806091E7C98BA3_METHOD_1_9095BD1C3B526FD5_OFFSET UNITYSDK_OFFSET(0x16A37400)
#define CLASS_1_05806091E7C98BA3_METHOD_1_9373E320D8EECABE_OFFSET UNITYSDK_OFFSET(0x16A31B10)
#define CLASS_1_05806091E7C98BA3_METHOD_1_9B912929BEEA8B7D_OFFSET UNITYSDK_OFFSET(0x16A30020)
#define CLASS_1_05806091E7C98BA3_METHOD_1_9F218BA7C451254A_OFFSET UNITYSDK_OFFSET(0x16A2F3F0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_9FBE59AA14363D95_OFFSET UNITYSDK_OFFSET(0x16A33250)
#define CLASS_1_05806091E7C98BA3_METHOD_1_A5491D63C62380F8_OFFSET UNITYSDK_OFFSET(0x16A358A0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_A57207A4F490BE7B_OFFSET UNITYSDK_OFFSET(0x16A37B20)
#define CLASS_1_05806091E7C98BA3_METHOD_1_A5CBC3CE2020771F_OFFSET UNITYSDK_OFFSET(0x16A31250)
#define CLASS_1_05806091E7C98BA3_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x16A2D9B0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_A9F6594EA869CA9D_OFFSET UNITYSDK_OFFSET(0x16A30090)
#define CLASS_1_05806091E7C98BA3_METHOD_1_AB0DF21E91A96DC5_OFFSET UNITYSDK_OFFSET(0x16A33800)
#define CLASS_1_05806091E7C98BA3_METHOD_1_AE89E51941848B2C_OFFSET UNITYSDK_OFFSET(0x16A2F690)
#define CLASS_1_05806091E7C98BA3_METHOD_1_B0F1761F1447A5C1_OFFSET UNITYSDK_OFFSET(0x16A2F0D0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_B8F232A4DF82989C_OFFSET UNITYSDK_OFFSET(0x16A34F50)
#define CLASS_1_05806091E7C98BA3_METHOD_1_C1A78471712D28BB_OFFSET UNITYSDK_OFFSET(0x16A2F1C0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_C74CCDFF75CBE035_OFFSET UNITYSDK_OFFSET(0x16A385C0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_CA80D2D387107A45_OFFSET UNITYSDK_OFFSET(0x16A33A60)
#define CLASS_1_05806091E7C98BA3_METHOD_1_CB12E78AE54097E4_OFFSET UNITYSDK_OFFSET(0x16A2EE90)
#define CLASS_1_05806091E7C98BA3_METHOD_1_CE4E61E15190BE51_OFFSET UNITYSDK_OFFSET(0x16A32ED0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_D48FC19C90026985_OFFSET UNITYSDK_OFFSET(0x16A33C30)
#define CLASS_1_05806091E7C98BA3_METHOD_1_D5DF7F4667250213_OFFSET UNITYSDK_OFFSET(0x16A347A0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_D7D73815CB3E554A_OFFSET UNITYSDK_OFFSET(0x16A2F470)
#define CLASS_1_05806091E7C98BA3_METHOD_1_D904CA3FABA3C04B_OFFSET UNITYSDK_OFFSET(0x16A34490)
#define CLASS_1_05806091E7C98BA3_METHOD_1_D9076891F923A743_OFFSET UNITYSDK_OFFSET(0x16A357C0)
#define CLASS_1_05806091E7C98BA3_METHOD_1_E610F252F39D7296_OFFSET UNITYSDK_OFFSET(0x16A30500)
#define CLASS_1_05806091E7C98BA3_METHOD_1_F0AA57EA6B83DD86_OFFSET UNITYSDK_OFFSET(0x16A31D40)
#define CLASS_1_05806091E7C98BA3_METHOD_1_F5261177E4771D82_OFFSET UNITYSDK_OFFSET(0x16A2ED10)
#define CLASS_1_05806091E7C98BA3_METHOD_1_FABA133A1DA2AE29_OFFSET UNITYSDK_OFFSET(0x16A31F00)
#define CLASS_1_05806091E7C98BA3_METHOD_1_FD407F543E29DD0C_OFFSET UNITYSDK_OFFSET(0x16A32770)
#define CLASS_1_05806091E7C98BA3_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x16A2E380)
#define CLASS_1_05806091E7C98BA3__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A38900)
#define CLASS_1_05806091E7C98BA3__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2D390)

inline static constexpr unsigned int Class_1_05806091E7C98BA3_TypeDefinitionIndex = 32993;

class Class_1_05806091E7C98BA3 : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::Client::LittleGame::ETimelineControlGameLevelFloorXZ>** StaticGet_Field_1_11()
	{
		return (::Il2CppArray<::RPG::Client::LittleGame::ETimelineControlGameLevelFloorXZ>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_05806091E7C98BA3_TypeDefinitionIndex)->GetStaticField(0x1EAC0);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_8()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_05806091E7C98BA3_TypeDefinitionIndex)->GetStaticField(0x1EAC8);
	}
	static ::Il2CppArray<::UnityEngine::Vector3Int>** StaticGet_Field_1_10()
	{
		return (::Il2CppArray<::UnityEngine::Vector3Int>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_05806091E7C98BA3_TypeDefinitionIndex)->GetStaticField(0x1EAD0);
	}
	static ::Il2CppArray<::System::Func_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>*>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::System::Func_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_05806091E7C98BA3_TypeDefinitionIndex)->GetStaticField(0x1EAD8);
	}
	static ::Il2CppArray<::UnityEngine::Vector3Int>** StaticGet_Field_1_9()
	{
		return (::Il2CppArray<::UnityEngine::Vector3Int>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_05806091E7C98BA3_TypeDefinitionIndex)->GetStaticField(0x1EAE0);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_05806091E7C98BA3_TypeDefinitionIndex)->GetStaticField(0x1EAE8);
	}
	// static const ::System::Single Field_1_5; // 0x0
	::Class_1_0C69BC2A626C1DF1* Field_1_4; // 0x10
	::Class_1_C2963602F383E66F* Field_1_3; // 0x18
	::Class_2_54AE1C44DE8123D2* Field_1_1; // 0x20
	::Class_1_B470ECE8B4D9EC2E* Field_1_2; // 0x28
	::Class_1_867B6CE75953535A* Field_1_0; // 0x30

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_C4B4367065488983* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_C4B4367065488983*))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3__CCTOR_OFFSET))();
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_1659BCB6D1A9FC34_OFFSET))(this);
	}

	::System::Single Method_1_C1A78471712D28BB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_C1A78471712D28BB_OFFSET))(this);
	}

	::System::Void Method_1_9F218BA7C451254A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_9F218BA7C451254A_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE89E51941848B2C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_AE89E51941848B2C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_209E4250CA87B30E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_209E4250CA87B30E_OFFSET))(this);
	}

	::System::Boolean Method_1_A9F6594EA869CA9D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_A9F6594EA869CA9D_OFFSET))(this);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_4CFA30FA85BD5218(::Class_1_F1E790FCE2711921* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1E790FCE2711921*))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_4CFA30FA85BD5218_OFFSET))(this, a1);
	}

	::System::Void Method_1_341C005326F54D64(::Class_1_F1E790FCE2711921* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1E790FCE2711921*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_341C005326F54D64_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D7D73815CB3E554A(::Class_1_F1E790FCE2711921* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1E790FCE2711921*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_D7D73815CB3E554A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_327D31C7D87ADABA(::Class_2_54AE1C44DE8123D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_327D31C7D87ADABA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9373E320D8EECABE(::Class_1_F1E790FCE2711921* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F1E790FCE2711921*))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_9373E320D8EECABE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0AA57EA6B83DD86(::Class_1_F1E790FCE2711921* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F1E790FCE2711921*))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_F0AA57EA6B83DD86_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FABA133A1DA2AE29(::Class_1_F1E790FCE2711921* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F1E790FCE2711921*))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_FABA133A1DA2AE29_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8002A10A0271B67D(::Class_1_F1E790FCE2711921* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F1E790FCE2711921*))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_8002A10A0271B67D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CE4E61E15190BE51(::System::String* a1, ::System::String* a2, ::Class_2_54AE1C44DE8123D2*& a3, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::Class_2_54AE1C44DE8123D2*&, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*&))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_CE4E61E15190BE51_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_9FBE59AA14363D95(::Class_2_54AE1C44DE8123D2* a1, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_9FBE59AA14363D95_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_29C9A69F365729BB(::Class_2_54AE1C44DE8123D2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_29C9A69F365729BB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_54AE1C44DE8123D2*>* Method_1_0E22E5BCC23B135A(::Class_2_54AE1C44DE8123D2* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_54AE1C44DE8123D2*>*(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_0E22E5BCC23B135A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_54AE1C44DE8123D2*>* Method_1_0E22E5BCC23B135A_1(::Class_2_54AE1C44DE8123D2* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_54AE1C44DE8123D2*>*(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_0E22E5BCC23B135A_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_43CBED048D0A1D34(::Class_1_F1E790FCE2711921* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1E790FCE2711921*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_43CBED048D0A1D34_OFFSET))(this, a1, a2);
	}

	::Class_2_54AE1C44DE8123D2* Method_1_E610F252F39D7296(::Class_2_54AE1C44DE8123D2* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::Class_2_54AE1C44DE8123D2*(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_E610F252F39D7296_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_78949CF654AF1040(::Class_1_F1E790FCE2711921* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1E790FCE2711921*))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_78949CF654AF1040_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD407F543E29DD0C(::Class_1_F1E790FCE2711921* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1E790FCE2711921*))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_FD407F543E29DD0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_8AA525D296359C72(::Class_1_F1E790FCE2711921* a1, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a2, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1E790FCE2711921*, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_8AA525D296359C72_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D904CA3FABA3C04B(::Class_1_F1E790FCE2711921* a1, ::Class_2_54AE1C44DE8123D2* a2, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a3, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a4, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1E790FCE2711921*, ::Class_2_54AE1C44DE8123D2*, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_D904CA3FABA3C04B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_A5CBC3CE2020771F(::Class_2_54AE1C44DE8123D2* a1, ::Class_2_54AE1C44DE8123D2* a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*, ::Class_2_54AE1C44DE8123D2*, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_A5CBC3CE2020771F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_39BE185DE1B30665(::Class_2_54AE1C44DE8123D2* a1, ::Class_2_54AE1C44DE8123D2* a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*, ::Class_2_54AE1C44DE8123D2*, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_39BE185DE1B30665_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_B8F232A4DF82989C(::Class_2_54AE1C44DE8123D2* a1, ::Class_2_54AE1C44DE8123D2* a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*, ::Class_2_54AE1C44DE8123D2*, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_B8F232A4DF82989C_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_54AE1C44DE8123D2* Method_1_26C7B2E653DCA467(::Class_2_54AE1C44DE8123D2* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint& a4)
	{
		return ((::Class_2_54AE1C44DE8123D2*(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint&))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_26C7B2E653DCA467_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_54AE1C44DE8123D2* Method_1_9095BD1C3B526FD5(::Class_2_54AE1C44DE8123D2* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint& a4)
	{
		return ((::Class_2_54AE1C44DE8123D2*(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint&))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_9095BD1C3B526FD5_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_54AE1C44DE8123D2* Method_1_A57207A4F490BE7B(::Class_2_54AE1C44DE8123D2* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint& a4)
	{
		return ((::Class_2_54AE1C44DE8123D2*(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint&))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_A57207A4F490BE7B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_A5491D63C62380F8(::Class_2_54AE1C44DE8123D2* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a2, ::Class_2_54AE1C44DE8123D2* a3, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::Class_2_54AE1C44DE8123D2*, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_A5491D63C62380F8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_2C2F4A16628D3D28(::Class_2_54AE1C44DE8123D2* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a2, ::Class_2_54AE1C44DE8123D2* a3, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_54AE1C44DE8123D2*, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::Class_2_54AE1C44DE8123D2*, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_2C2F4A16628D3D28_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_5ED98E0CFE5E5AB1(::Class_1_F1E790FCE2711921* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_F1E790FCE2711921*))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_5ED98E0CFE5E5AB1_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_5323F2DF46A044DA_OFFSET))();
	}

	static ::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_5323F2DF46A044DA_1_OFFSET))();
	}

	static ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction* Method_1_65BD2C6FAA61A13F(::Class_1_BDA2C084533125A6* a1, ::System::String* a2)
	{
		return ((::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*(*)(::Class_1_BDA2C084533125A6*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_65BD2C6FAA61A13F_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_0B69EC58FAFC3954(::Class_1_F1E790FCE2711921* a1)
	{
		return ((::System::Single(*)(::Class_1_F1E790FCE2711921*))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_0B69EC58FAFC3954_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0BF2D6E0EEE7A8DC(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*& a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*&))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_0BF2D6E0EEE7A8DC_OFFSET))(a1);
	}

	static ::System::Single Method_1_9B912929BEEA8B7D(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*& a1)
	{
		return ((::System::Single(*)(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*&))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_9B912929BEEA8B7D_OFFSET))(a1);
	}

	static ::System::Single Method_1_7B5CF29097D2700A(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_7B5CF29097D2700A_OFFSET))(a1);
	}

	static ::System::Single Method_1_05D922B4721389C5(::Class_1_F31115D5F56C5F10* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::Class_1_F31115D5F56C5F10*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_05D922B4721389C5_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_16C0B6437D48C629(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*& a1)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*&))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_16C0B6437D48C629_OFFSET))(a1);
	}

	static ::System::Single Method_1_D48FC19C90026985(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*& a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_D48FC19C90026985_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_489BFFA19C857B7A(::Class_2_54AE1C44DE8123D2* a1, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection& a2, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint& a3)
	{
		return ((::System::Void(*)(::Class_2_54AE1C44DE8123D2*, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection&, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint&))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_489BFFA19C857B7A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_42689C22B1D43952(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*& a1)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*&))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_42689C22B1D43952_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_31F905887602BED1(::UnityEngine::Vector3Int& a1, ::UnityEngine::Vector3& a2, ::System::Single& a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3Int&, ::UnityEngine::Vector3&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_31F905887602BED1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_D9076891F923A743(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint& a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint&))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_D9076891F923A743_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4E561AA19FFB8E68(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint& a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint&))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_4E561AA19FFB8E68_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4E561AA19FFB8E68_1(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint& a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint&))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_4E561AA19FFB8E68_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D5DF7F4667250213(::RPG::Client::LittleGame::ETimelineControlGameLevelFloor a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelFloor, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_D5DF7F4667250213_OFFSET))(a1, a2);
	}

	static ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint Method_1_7838DB17F6444719(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorY a1, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a2)
	{
		return ((::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorY, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_7838DB17F6444719_OFFSET))(a1, a2);
	}

	static ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint Method_1_F5261177E4771D82(::RPG::Client::LittleGame::ETimelineControlGameLevelFloor a1, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a2)
	{
		return ((::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelFloor, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_F5261177E4771D82_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_2<::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection> Method_1_CB12E78AE54097E4(::RPG::Client::LittleGame::ETimelineControlGameLevelFloor a1, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a2, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a3)
	{
		return ((::System::ValueTuple_2<::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection>(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelFloor, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_CB12E78AE54097E4_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_8E28F02ACFB32A9D(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a1)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_8E28F02ACFB32A9D_OFFSET))(a1);
	}

	static ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection Method_1_31124A95F4F0EF0F(::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection(*)(::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_31124A95F4F0EF0F_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_CA80D2D387107A45(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*& a1)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*&))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_CA80D2D387107A45_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_B0F1761F1447A5C1(::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a1)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_B0F1761F1447A5C1_OFFSET))(a1);
	}

	static ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation Method_1_AB0DF21E91A96DC5(::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2)
	{
		return ((::RPG::Client::LittleGame::ETimelineControlGameLevelRotation(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_AB0DF21E91A96DC5_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3Int Method_1_2CFC9BC11855BAE2(::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a1)
	{
		return ((::UnityEngine::Vector3Int(*)(::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_2CFC9BC11855BAE2_OFFSET))(a1);
	}

	static ::System::Void Method_1_C74CCDFF75CBE035(::UnityEngine::Vector3Int& a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3Int&, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_C74CCDFF75CBE035_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3Int Method_1_84EE913C58A1DE2B(::UnityEngine::Vector3Int a1)
	{
		return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_84EE913C58A1DE2B_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3Int Method_1_84EE913C58A1DE2B_1(::UnityEngine::Vector3Int a1)
	{
		return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_84EE913C58A1DE2B_1_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3Int Method_1_84EE913C58A1DE2B_2(::UnityEngine::Vector3Int a1)
	{
		return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_84EE913C58A1DE2B_2_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3Int Method_1_84EE913C58A1DE2B_3(::UnityEngine::Vector3Int a1)
	{
		return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_05806091E7C98BA3_METHOD_1_84EE913C58A1DE2B_3_OFFSET))(a1);
	}
};
