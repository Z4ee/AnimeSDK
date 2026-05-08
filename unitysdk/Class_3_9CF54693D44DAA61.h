#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_C3BBA2B066959E6E.h"
#include "unitysdk/UnityEngine/LayerMask.h"

class Class_1_1CDA382D823F8E80;
class Class_1_560B23058CA4940C;
class Class_3_9CF54693D44DAA61_Class_1_F5182BAEBAA20D84;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AttackPatternBindAnimatorState; }
namespace MoleMole::Config { class ContinueAttackDetect; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_9CF54693D44DAA61_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1038C650)
#define CLASS_3_9CF54693D44DAA61_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1038CE60)
#define CLASS_3_9CF54693D44DAA61_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1038CDE0)
#define CLASS_3_9CF54693D44DAA61_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1038CEF0)
#define CLASS_3_9CF54693D44DAA61_METHOD_3_FAE79202EADE10A5_OFFSET UNITYSDK_OFFSET(0x1038C9E0)
#define CLASS_3_9CF54693D44DAA61_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1038C0F0)
#define CLASS_3_9CF54693D44DAA61__CCTOR_OFFSET UNITYSDK_OFFSET(0x1038C6A0)
#define CLASS_3_9CF54693D44DAA61__CTOR_OFFSET UNITYSDK_OFFSET(0x1038C7A0)

inline static constexpr unsigned int Class_3_9CF54693D44DAA61_TypeDefinitionIndex = 70280;

class Class_3_9CF54693D44DAA61 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_3_9CF54693D44DAA61*>*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_3_9CF54693D44DAA61*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9CF54693D44DAA61_TypeDefinitionIndex)->GetStaticField(0x3B8F0);
	}
	// static const ::System::Int32 Field_3_32 = 0x2F; // 0x0
	::MoleMole::Config::ContinueAttackDetect* Field_3_18; // 0x48
	::Class_1_1CDA382D823F8E80* Field_3_17; // 0x50
	::Class_3_F33F9DC5F4112336* Field_3_2; // 0x58
	::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Field_3_22; // 0x60
	::System::Collections::Generic::List_1<::System::Tuple_3<::System::Int32, ::System::Int32, ::MoleMole::Config::AttackPatternBindAnimatorState*>*>* Field_3_13; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_9CF54693D44DAA61_Class_1_F5182BAEBAA20D84*>* Field_3_16; // 0x70
	::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Field_3_11; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_9CF54693D44DAA61_Class_1_F5182BAEBAA20D84*>* Field_3_15; // 0x80
	::MoleMole::EntityHandle Field_3_29; // 0x88
	::System::Collections::Generic::List_1<::System::String*>* Field_3_12; // 0x98
	::MoleMole::EntityHandle Field_3_28; // 0xA0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_1; // 0xB0
	::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Field_3_10; // 0xB8
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_14; // 0xC0
	::MoleMole::Battle::Entity* Field_3_3; // 0xC8
	::System::Int32 Field_3_7; // 0xD0
	::System::Boolean Field_3_26; // 0xD4
	::System::Boolean Field_3_24; // 0xD5
	::System::Int32 Field_3_31; // 0xD8
	::System::UInt32 Field_3_21; // 0xDC
	::System::Boolean Field_3_19; // 0xE0
	::System::Boolean Field_3_30; // 0xE1
	::System::Boolean Field_3_20; // 0xE2
	::UnityEngine::LayerMask Field_3_4; // 0xE4
	::System::Single Field_3_8; // 0xE8
	::System::Single Field_3_23; // 0xEC
	::System::Single Field_3_9; // 0xF0
	::System::Boolean Field_3_5; // 0xF4
	::System::Boolean Field_3_6; // 0xF5
	::System::Boolean Field_3_27; // 0xF6
	::System::Boolean Field_3_25; // 0xF7

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9CF54693D44DAA61__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CF54693D44DAA61__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CF54693D44DAA61_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CF54693D44DAA61_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_FAE79202EADE10A5(::MoleMole::Battle::Entity* a1, ::Class_1_1CDA382D823F8E80* a2, ::MoleMole::Config::ContinueAttackDetect* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::UInt32 a8, ::System::UInt32 a9, ::System::Boolean a10)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ContinueAttackDetect*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9CF54693D44DAA61_METHOD_3_FAE79202EADE10A5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::Class_3_9CF54693D44DAA61* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_9CF54693D44DAA61*(*)())((::PBYTE)hIl2Cpp + CLASS_3_9CF54693D44DAA61_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CF54693D44DAA61_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CF54693D44DAA61_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}
};
