#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_699787DEDB234668_Struct_2_04EA0A3341441B4F.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayColliderCfgData_PanelSettle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_38EE0169AA9CE03E;
class Class_1_E947BE5546FF774A;
class Class_2_581B880F1146BE79;
class Class_2_7E982D325DFD55DA;
namespace MoleMole::DisplayCase { class DisplayGroupItemData; }
namespace MoleMole::DisplayCase { class DisplayItemData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_699787DEDB234668_FINALIZE_OFFSET UNITYSDK_OFFSET(0xEC1EE20)
#define CLASS_1_699787DEDB234668_METHOD_1_0A42979F9E75188B_OFFSET UNITYSDK_OFFSET(0xEC22E80)
#define CLASS_1_699787DEDB234668_METHOD_1_0F3F10D7D9D6C346_1_OFFSET UNITYSDK_OFFSET(0xEC246E0)
#define CLASS_1_699787DEDB234668_METHOD_1_0F3F10D7D9D6C346_OFFSET UNITYSDK_OFFSET(0xEC21E80)
#define CLASS_1_699787DEDB234668_METHOD_1_1199992885F37847_OFFSET UNITYSDK_OFFSET(0xEC216B0)
#define CLASS_1_699787DEDB234668_METHOD_1_1647678ADD53D6AB_OFFSET UNITYSDK_OFFSET(0xEC221D0)
#define CLASS_1_699787DEDB234668_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0xEC21DA0)
#define CLASS_1_699787DEDB234668_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xEC1F4A0)
#define CLASS_1_699787DEDB234668_METHOD_1_42C2489AF0AD0081_OFFSET UNITYSDK_OFFSET(0xEC23A60)
#define CLASS_1_699787DEDB234668_METHOD_1_48A070CF4162E501_OFFSET UNITYSDK_OFFSET(0xEC20AC0)
#define CLASS_1_699787DEDB234668_METHOD_1_48DC350F8317F043_OFFSET UNITYSDK_OFFSET(0xEC23870)
#define CLASS_1_699787DEDB234668_METHOD_1_49F07754C1189EAE_OFFSET UNITYSDK_OFFSET(0xEC244A0)
#define CLASS_1_699787DEDB234668_METHOD_1_6104FFF13A7AC8FD_OFFSET UNITYSDK_OFFSET(0xEC21930)
#define CLASS_1_699787DEDB234668_METHOD_1_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0xEC203B0)
#define CLASS_1_699787DEDB234668_METHOD_1_8546CB79DD391621_OFFSET UNITYSDK_OFFSET(0xEC22070)
#define CLASS_1_699787DEDB234668_METHOD_1_97DE769006AE7125_OFFSET UNITYSDK_OFFSET(0xEC22FF0)
#define CLASS_1_699787DEDB234668_METHOD_1_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0xEC22B50)
#define CLASS_1_699787DEDB234668_METHOD_1_A5D032209732E69F_OFFSET UNITYSDK_OFFSET(0xEC21E00)
#define CLASS_1_699787DEDB234668_METHOD_1_B605C1653EACBC07_OFFSET UNITYSDK_OFFSET(0xEC1F890)
#define CLASS_1_699787DEDB234668_METHOD_1_B866EF657B246E9A_OFFSET UNITYSDK_OFFSET(0xEC1F310)
#define CLASS_1_699787DEDB234668_METHOD_1_BE253ACF49BE36BD_OFFSET UNITYSDK_OFFSET(0xEC1F600)
#define CLASS_1_699787DEDB234668_METHOD_1_CD412E8750FFAEE9_OFFSET UNITYSDK_OFFSET(0xEC213B0)
#define CLASS_1_699787DEDB234668_METHOD_1_CD9B97298FEB96F9_OFFSET UNITYSDK_OFFSET(0xEC248D0)
#define CLASS_1_699787DEDB234668_METHOD_1_CF667B25396A76F4_OFFSET UNITYSDK_OFFSET(0xEC20F90)
#define CLASS_1_699787DEDB234668_METHOD_1_DE12F16E897AFCE4_OFFSET UNITYSDK_OFFSET(0xEC1EE30)
#define CLASS_1_699787DEDB234668_METHOD_1_EB1549E9C6E3B4E9_OFFSET UNITYSDK_OFFSET(0xEC225B0)
#define CLASS_1_699787DEDB234668_METHOD_1_FF63E816B4D956CD_OFFSET UNITYSDK_OFFSET(0xEC200A0)
#define CLASS_1_699787DEDB234668__CTOR_1_OFFSET UNITYSDK_OFFSET(0xEC1EC30)
#define CLASS_1_699787DEDB234668__CTOR_OFFSET UNITYSDK_OFFSET(0xEC1EB20)

inline static constexpr unsigned int Class_1_699787DEDB234668_TypeDefinitionIndex = 49559;

class Class_1_699787DEDB234668 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_7E982D325DFD55DA*>* Field_1_5; // 0x18
	::Class_1_E947BE5546FF774A* Field_1_1; // 0x20
	::MoleMole::DisplayCase::DisplayGroupItemData* Field_1_2; // 0x28
	::System::Collections::Generic::List_1<::Class_1_38EE0169AA9CE03E*>* Field_1_4; // 0x30
	::UnityEngine::BoxCollider* Field_1_6; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_1_7; // 0x40
	::System::Boolean Field_1_3; // 0x48
	::System::Boolean Field_1_8; // 0x49

	::System::Void _ctor(::Class_1_E947BE5546FF774A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E947BE5546FF774A*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_DE12F16E897AFCE4(::Class_2_7E982D325DFD55DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7E982D325DFD55DA*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_DE12F16E897AFCE4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_BE253ACF49BE36BD(::Class_1_38EE0169AA9CE03E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_38EE0169AA9CE03E*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_BE253ACF49BE36BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF63E816B4D956CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_FF63E816B4D956CD_OFFSET))(this);
	}

	::System::Void Method_1_48A070CF4162E501(::Class_2_581B880F1146BE79* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_581B880F1146BE79*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_48A070CF4162E501_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF667B25396A76F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_CF667B25396A76F4_OFFSET))(this);
	}

	::System::Void Method_1_CD412E8750FFAEE9(::Class_1_38EE0169AA9CE03E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38EE0169AA9CE03E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_CD412E8750FFAEE9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1199992885F37847(::UnityEngine::BoxCollider* a1, ::Class_1_38EE0169AA9CE03E*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::BoxCollider*, ::Class_1_38EE0169AA9CE03E*&))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_1199992885F37847_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6104FFF13A7AC8FD(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_6104FFF13A7AC8FD_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_B605C1653EACBC07(::Class_1_38EE0169AA9CE03E* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_38EE0169AA9CE03E*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_B605C1653EACBC07_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_B866EF657B246E9A(::Class_2_581B880F1146BE79* a1, ::Class_1_699787DEDB234668_Struct_2_04EA0A3341441B4F& a2)
	{
		return ((::System::Void(*)(::Class_2_581B880F1146BE79*, ::Class_1_699787DEDB234668_Struct_2_04EA0A3341441B4F&))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_B866EF657B246E9A_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_1_0F3F10D7D9D6C346(::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_0F3F10D7D9D6C346_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8546CB79DD391621(::Class_2_7E982D325DFD55DA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_7E982D325DFD55DA*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_8546CB79DD391621_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::DisplayCase::DisplayColliderCfgData_PanelSettle>* Method_1_1647678ADD53D6AB(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::DisplayCase::DisplayColliderCfgData_PanelSettle>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_1647678ADD53D6AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_EB1549E9C6E3B4E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_EB1549E9C6E3B4E9_OFFSET))(this);
	}

	::System::Void Method_1_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_810DD818C57F797D_OFFSET))(this);
	}

	::System::Void Method_1_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_1_A5D032209732E69F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_A5D032209732E69F_OFFSET))(this);
	}

	::System::Void Method_1_97DE769006AE7125(::MoleMole::DisplayCase::DisplayGroupItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DisplayCase::DisplayGroupItemData*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_97DE769006AE7125_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_48DC350F8317F043(::Class_1_38EE0169AA9CE03E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_38EE0169AA9CE03E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_48DC350F8317F043_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_49F07754C1189EAE(::Class_1_38EE0169AA9CE03E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38EE0169AA9CE03E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_49F07754C1189EAE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0A42979F9E75188B(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_0A42979F9E75188B_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_42C2489AF0AD0081(::Class_1_38EE0169AA9CE03E* a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_38EE0169AA9CE03E*, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_42C2489AF0AD0081_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0F3F10D7D9D6C346_1(::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_0F3F10D7D9D6C346_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CD9B97298FEB96F9(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_CD9B97298FEB96F9_OFFSET))(this, a1);
	}
};
