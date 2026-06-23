#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BD67E5EC91589BF1.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/Struct_2_61D95EB9B5A93E74.h"

class Class_0_16E4307DCC419505_375;
namespace MoleMole { class UITowerDefenseMainPageController; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define CLASS_2_F936AFFA11C0F2BE_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x11DD07F0)
#define CLASS_2_F936AFFA11C0F2BE_METHOD_2_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x11DD0A70)
#define CLASS_2_F936AFFA11C0F2BE_METHOD_2_31830AE2F8CBD1F3_OFFSET UNITYSDK_OFFSET(0x11DCFD80)
#define CLASS_2_F936AFFA11C0F2BE_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x11DD0520)
#define CLASS_2_F936AFFA11C0F2BE_METHOD_2_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0x11DD0950)
#define CLASS_2_F936AFFA11C0F2BE_METHOD_2_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x11DD0310)
#define CLASS_2_F936AFFA11C0F2BE_METHOD_2_C9F897D5FA80692E_OFFSET UNITYSDK_OFFSET(0x11DD0260)
#define CLASS_2_F936AFFA11C0F2BE_METHOD_2_EB5B70060C644B24_OFFSET UNITYSDK_OFFSET(0x11DCFB80)
#define CLASS_2_F936AFFA11C0F2BE__CTOR_OFFSET UNITYSDK_OFFSET(0x11DCF820)

inline static constexpr unsigned int Class_2_F936AFFA11C0F2BE_TypeDefinitionIndex = 46722;

class Class_2_F936AFFA11C0F2BE : public ::Class_1_BD67E5EC91589BF1
{
public:
	::MoleMole::Battle::Entity* Field_2_3; // 0x10
	::MoleMole::UITowerDefenseMainPageController* Field_2_0; // 0x18
	::MoleMole::Battle::Entity* Field_2_4; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UIButtonEx*>* Field_2_1; // 0x28
	::System::Int32 Field_2_2; // 0x30
	::System::Int32 Field_2_5; // 0x34

	::System::Void _ctor(::MoleMole::UITowerDefenseMainPageController* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F936AFFA11C0F2BE__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_375* Method_2_EB5B70060C644B24()
	{
		return ((::Class_0_16E4307DCC419505_375*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F936AFFA11C0F2BE_METHOD_2_EB5B70060C644B24_OFFSET))(this);
	}

	::Struct_2_61D95EB9B5A93E74 Method_2_31830AE2F8CBD1F3(::MoleMole::InputActionEvent a1)
	{
		return ((::Struct_2_61D95EB9B5A93E74(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_F936AFFA11C0F2BE_METHOD_2_31830AE2F8CBD1F3_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_375* Method_2_C9F897D5FA80692E(::MoleMole::UITowerDefenseMainPageController* a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::Class_0_16E4307DCC419505_375*(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F936AFFA11C0F2BE_METHOD_2_C9F897D5FA80692E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F936AFFA11C0F2BE_METHOD_2_9765352E01408D38_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F936AFFA11C0F2BE_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F936AFFA11C0F2BE_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_2_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F936AFFA11C0F2BE_METHOD_2_62593EE2FE331D20_OFFSET))(this);
	}

	::System::Void Method_2_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F936AFFA11C0F2BE_METHOD_2_2DCDFF29E7FDDAA8_OFFSET))(this);
	}
};
