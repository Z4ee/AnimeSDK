#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_BA21CC391326FDD3.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_1_1CDA382D823F8E80;
class Class_1_560B23058CA4940C;
class Class_1_8289F2785D9AA990;
class Class_3_ABA31E56F580B4C3_Class_1_7647E30545B0611F;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AttackPatternBindAnimatorState; }
namespace MoleMole::Config { class ContinueAttackDetect; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_ABA31E56F580B4C3_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17AE6FA0)
#define CLASS_3_ABA31E56F580B4C3_METHOD_3_11300DE644F14DFC_OFFSET UNITYSDK_OFFSET(0x17AE7260)
#define CLASS_3_ABA31E56F580B4C3_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x17AE7720)
#define CLASS_3_ABA31E56F580B4C3_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x17AE76A0)
#define CLASS_3_ABA31E56F580B4C3_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17AE77B0)
#define CLASS_3_ABA31E56F580B4C3_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17AE6C10)
#define CLASS_3_ABA31E56F580B4C3__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AE6FF0)
#define CLASS_3_ABA31E56F580B4C3__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE70F0)

inline static constexpr unsigned int Class_3_ABA31E56F580B4C3_TypeDefinitionIndex = 51604;

class Class_3_ABA31E56F580B4C3 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_3_ABA31E56F580B4C3*>*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_3_ABA31E56F580B4C3*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_ABA31E56F580B4C3_TypeDefinitionIndex)->GetStaticField(0x38F80);
	}
	// static const ::System::Int32 Field_3_32 = 0x79; // 0x0
	::Class_3_DFD5D1FDB9D2A4AC* Field_3_17; // 0x48
	::MoleMole::Battle::Entity* Field_3_2; // 0x50
	::System::Action* Field_3_22; // 0x58
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_13; // 0x60
	::System::Action* Field_3_20; // 0x68
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_27; // 0x70
	::Class_1_8289F2785D9AA990* Field_3_9; // 0x78
	::System::String* Field_3_7; // 0x80
	::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Field_3_25; // 0x88
	::System::Action_2<::System::Boolean, ::MoleMole::Battle::Entity*>* Field_3_24; // 0x90
	::System::Action_3<::MoleMole::Battle::Entity*, ::UnityEngine::Collider*, ::System::Boolean>* Field_3_23; // 0x98
	::System::Action_1<::System::Int32>* Field_3_19; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*>* Field_3_28; // 0xA8
	::System::Action_3<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32>* Field_3_21; // 0xB0
	::Class_1_1CDA382D823F8E80* Field_3_3; // 0xB8
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_3_31; // 0xC0
	::Class_3_F33F9DC5F4112336* Field_3_18; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_ABA31E56F580B4C3_Class_1_7647E30545B0611F*>* Field_3_14; // 0xD0
	::System::Collections::Generic::List_1<::System::Tuple_3<::System::Int32, ::System::Int32, ::MoleMole::Config::AttackPatternBindAnimatorState*>*>* Field_3_12; // 0xD8
	::MoleMole::Config::ContinueAttackDetect* Field_3_1; // 0xE0
	::System::Collections::Generic::List_1<::System::String*>* Field_3_11; // 0xE8
	::System::Int32 Field_3_10; // 0xF0
	::UnityEngine::LayerMask Field_3_4; // 0xF4
	::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 Field_3_5; // 0xF8
	::System::Boolean Field_3_6; // 0xFC
	::System::Boolean Field_3_8; // 0xFD
	::System::Boolean Field_3_30; // 0xFE
	::System::UInt32 Field_3_26; // 0x100
	::System::Int32 Field_3_15; // 0x104
	::UnityEngine::Bounds Field_3_29; // 0x108
	::System::Int32 Field_3_16; // 0x120

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_11300DE644F14DFC(::MoleMole::Battle::Entity* a1, ::Class_1_1CDA382D823F8E80* a2, ::MoleMole::Config::ContinueAttackDetect* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::UInt32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ContinueAttackDetect*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_METHOD_3_11300DE644F14DFC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::Class_3_ABA31E56F580B4C3* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_ABA31E56F580B4C3*(*)())((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}
};
