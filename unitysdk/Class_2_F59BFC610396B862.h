#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_C4C2ACF3D9655BEA_26;
class Class_1_C4C2ACF3D9655BEA_27;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class LocalizedTextSDF; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace RPG::GameCore { class FateBattleArcherProgressReachLimit; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F59BFC610396B862_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1707F5A0)
#define CLASS_2_F59BFC610396B862_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1707F720)
#define CLASS_2_F59BFC610396B862_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1707E520)
#define CLASS_2_F59BFC610396B862_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1707E540)
#define CLASS_2_F59BFC610396B862_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x1707EEE0)
#define CLASS_2_F59BFC610396B862_METHOD_2_23B7C160CB6CEA95_1_OFFSET UNITYSDK_OFFSET(0x1707EFE0)
#define CLASS_2_F59BFC610396B862_METHOD_2_23B7C160CB6CEA95_OFFSET UNITYSDK_OFFSET(0x1707EF70)
#define CLASS_2_F59BFC610396B862_METHOD_2_3A80239A6395FFE3_OFFSET UNITYSDK_OFFSET(0x1707F050)
#define CLASS_2_F59BFC610396B862_METHOD_2_9CF94858353BDDAE_OFFSET UNITYSDK_OFFSET(0x1707F1B0)
#define CLASS_2_F59BFC610396B862_METHOD_2_A09A9C87AD511CCC_OFFSET UNITYSDK_OFFSET(0x1707ECA0)
#define CLASS_2_F59BFC610396B862_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x1707E6D0)
#define CLASS_2_F59BFC610396B862_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x1707F3C0)
#define CLASS_2_F59BFC610396B862_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x1707F2A0)
#define CLASS_2_F59BFC610396B862_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1707E690)
#define CLASS_2_F59BFC610396B862_METHOD_2_E411BCC5E73CE129_OFFSET UNITYSDK_OFFSET(0x1707F140)
#define CLASS_2_F59BFC610396B862_METHOD_2_E71C6FECA8F698E6_OFFSET UNITYSDK_OFFSET(0x1707F220)
#define CLASS_2_F59BFC610396B862_METHOD_2_ED18D0F433EED9D3_OFFSET UNITYSDK_OFFSET(0x1707ED50)
#define CLASS_2_F59BFC610396B862_METHOD_2_EDE104A2956E181A_OFFSET UNITYSDK_OFFSET(0x1707F0B0)
#define CLASS_2_F59BFC610396B862_METHOD_2_F289A5A170401D6B_OFFSET UNITYSDK_OFFSET(0x1707E5A0)
#define CLASS_2_F59BFC610396B862_METHOD_2_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x1707EB50)
#define CLASS_2_F59BFC610396B862_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1707F4E0)
#define CLASS_2_F59BFC610396B862_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1707E530)
#define CLASS_2_F59BFC610396B862__CTOR_OFFSET UNITYSDK_OFFSET(0x1707F880)
#define CLASS_2_F59BFC610396B862__ONBIND_OFFSET UNITYSDK_OFFSET(0x1707E050)

inline static constexpr unsigned int Class_2_F59BFC610396B862_TypeDefinitionIndex = 68932;

class Class_2_F59BFC610396B862 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::Animation* Field_2_2; // 0x60
	::RPG::Client::LocalizedTextSDF* Field_2_3; // 0x68
	::UnityEngine::Animation* Field_2_4; // 0x70
	::UnityEngine::Transform* Field_2_5; // 0x78
	::UnityEngine::Transform* Field_2_6; // 0x80
	::UnityEngine::Transform* Field_2_7; // 0x88
	::RPG::Client::MonoUIColorSwitcher* Field_2_8; // 0x90
	::UnityEngine::Transform* Field_2_9; // 0x98
	::RPG::Client::LocalizedTextSDF* Field_2_10; // 0xA0
	::UnityEngine::Animation* Field_2_11; // 0xA8
	::RPG::Client::LocalizedTextSDF* Field_2_12; // 0xB0
	::UnityEngine::Animation* Field_2_13; // 0xB8
	::UnityEngine::Transform* Field_2_14; // 0xC0
	::UnityEngine::Transform* Field_2_15; // 0xC8
	::RPG::Client::LocalizedText* Field_2_16; // 0xD0
	::UnityEngine::Transform* Field_2_17; // 0xD8
	::UnityEngine::Transform* Field_2_18; // 0xE0
	::RPG::Client::LocalizedTextSDF* Field_2_19; // 0xE8
	::RPG::Client::LocalizedText* Field_2_20; // 0xF0
	::UnityEngine::Transform* Field_2_21; // 0xF8
	::System::Int32 _Index_k__BackingField; // 0x100
	::System::Boolean Field_2_23; // 0x104
	::System::Boolean Field_2_24; // 0x105
	::System::Boolean Field_2_25; // 0x106

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_F289A5A170401D6B(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_F289A5A170401D6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_23B7C160CB6CEA95(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_23B7C160CB6CEA95_OFFSET))(this, a1);
	}

	::System::Void Method_2_23B7C160CB6CEA95_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_23B7C160CB6CEA95_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A80239A6395FFE3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_3A80239A6395FFE3_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE104A2956E181A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_EDE104A2956E181A_OFFSET))(this, a1);
	}

	::System::Void Method_2_E411BCC5E73CE129(::Class_1_C4C2ACF3D9655BEA_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4C2ACF3D9655BEA_26*))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_E411BCC5E73CE129_OFFSET))(this, a1);
	}

	::System::Void Method_2_9CF94858353BDDAE(::Class_1_C4C2ACF3D9655BEA_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4C2ACF3D9655BEA_27*))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_9CF94858353BDDAE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E71C6FECA8F698E6(::RPG::GameCore::FateBattleArcherProgressReachLimit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateBattleArcherProgressReachLimit*))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_E71C6FECA8F698E6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A09A9C87AD511CCC(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_A09A9C87AD511CCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ED18D0F433EED9D3(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_ED18D0F433EED9D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F59BFC610396B862_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
