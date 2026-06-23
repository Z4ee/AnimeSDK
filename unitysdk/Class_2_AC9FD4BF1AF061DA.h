#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BD67E5EC91589BF1.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/MonoTowerHolderObject_Enum_3_A194B73A82D9E1B3.h"
#include "unitysdk/Struct_2_61D95EB9B5A93E74.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_375;
namespace MoleMole { class UITowerDefenseMainPageController; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_AC9FD4BF1AF061DA_METHOD_2_020F3E891A8FFA02_OFFSET UNITYSDK_OFFSET(0x11F943F0)
#define CLASS_2_AC9FD4BF1AF061DA_METHOD_2_218F2836DA51D562_OFFSET UNITYSDK_OFFSET(0x11F935E0)
#define CLASS_2_AC9FD4BF1AF061DA_METHOD_2_2530DCC2B610512E_OFFSET UNITYSDK_OFFSET(0x11F942D0)
#define CLASS_2_AC9FD4BF1AF061DA_METHOD_2_5F59867914726945_OFFSET UNITYSDK_OFFSET(0x11F940A0)
#define CLASS_2_AC9FD4BF1AF061DA_METHOD_2_637DBA7901C3991A_1_OFFSET UNITYSDK_OFFSET(0x11F93E30)
#define CLASS_2_AC9FD4BF1AF061DA_METHOD_2_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0x11F93B80)
#define CLASS_2_AC9FD4BF1AF061DA_METHOD_2_816F6B3D876BC901_OFFSET UNITYSDK_OFFSET(0x11F93DA0)
#define CLASS_2_AC9FD4BF1AF061DA_METHOD_2_BE844719E0BF9394_OFFSET UNITYSDK_OFFSET(0x11F93780)
#define CLASS_2_AC9FD4BF1AF061DA_METHOD_2_C3B622B1755C512F_OFFSET UNITYSDK_OFFSET(0x11F93380)
#define CLASS_2_AC9FD4BF1AF061DA_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x11F944B0)
#define CLASS_2_AC9FD4BF1AF061DA_METHOD_2_D0FF215AEC76A26C_OFFSET UNITYSDK_OFFSET(0x11F93620)
#define CLASS_2_AC9FD4BF1AF061DA_METHOD_2_DDD96D9A4D81BA4B_OFFSET UNITYSDK_OFFSET(0x11F93230)
#define CLASS_2_AC9FD4BF1AF061DA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11F934F0)
#define CLASS_2_AC9FD4BF1AF061DA__CTOR_OFFSET UNITYSDK_OFFSET(0x11F93290)

inline static constexpr unsigned int Class_2_AC9FD4BF1AF061DA_TypeDefinitionIndex = 85648;

class Class_2_AC9FD4BF1AF061DA : public ::Class_1_BD67E5EC91589BF1
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_2_1; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_3; // 0x18
	::MoleMole::UITowerDefenseMainPageController* Field_2_0; // 0x20
	::System::Int32 Field_2_2; // 0x28
	::System::Int32 Field_2_4; // 0x2C

	::System::Void _ctor(::MoleMole::UITowerDefenseMainPageController* a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_2_AC9FD4BF1AF061DA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::MoleMole::UITowerDefenseMainPageController* a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AC9FD4BF1AF061DA__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_375* Method_2_DDD96D9A4D81BA4B(::MoleMole::UITowerDefenseMainPageController* a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::Class_0_16E4307DCC419505_375*(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AC9FD4BF1AF061DA_METHOD_2_DDD96D9A4D81BA4B_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_375* Method_2_218F2836DA51D562()
	{
		return ((::Class_0_16E4307DCC419505_375*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9FD4BF1AF061DA_METHOD_2_218F2836DA51D562_OFFSET))(this);
	}

	::Struct_2_61D95EB9B5A93E74 Method_2_D0FF215AEC76A26C(::MoleMole::InputActionEvent a1)
	{
		return ((::Struct_2_61D95EB9B5A93E74(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_AC9FD4BF1AF061DA_METHOD_2_D0FF215AEC76A26C_OFFSET))(this, a1);
	}

	::Struct_2_61D95EB9B5A93E74 Method_2_BE844719E0BF9394(::UnityEngine::Vector3 a1)
	{
		return ((::Struct_2_61D95EB9B5A93E74(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_AC9FD4BF1AF061DA_METHOD_2_BE844719E0BF9394_OFFSET))(this, a1);
	}

	::System::Void Method_2_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9FD4BF1AF061DA_METHOD_2_637DBA7901C3991A_OFFSET))(this);
	}

	static ::UnityEngine::GameObject* Method_2_816F6B3D876BC901(::MoleMole::Battle::Entity* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_AC9FD4BF1AF061DA_METHOD_2_816F6B3D876BC901_OFFSET))(a1);
	}

	::System::Void Method_2_637DBA7901C3991A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9FD4BF1AF061DA_METHOD_2_637DBA7901C3991A_1_OFFSET))(this);
	}

	::System::Int32 Method_2_C3B622B1755C512F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9FD4BF1AF061DA_METHOD_2_C3B622B1755C512F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_2_2530DCC2B610512E(::MoleMole::MonoTowerHolderObject_Enum_3_A194B73A82D9E1B3 a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::MonoTowerHolderObject_Enum_3_A194B73A82D9E1B3))((::PBYTE)hIl2Cpp + CLASS_2_AC9FD4BF1AF061DA_METHOD_2_2530DCC2B610512E_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_2_020F3E891A8FFA02(::MoleMole::Battle::Entity* a1)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_AC9FD4BF1AF061DA_METHOD_2_020F3E891A8FFA02_OFFSET))(a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9FD4BF1AF061DA_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_5F59867914726945()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9FD4BF1AF061DA_METHOD_2_5F59867914726945_OFFSET))(this);
	}
};
