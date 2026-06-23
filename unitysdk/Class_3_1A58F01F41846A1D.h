#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_1A58F01F41846A1D_Struct_2_25260034BAAB7C7C.h"
#include "unitysdk/Enum_3_1DD0B16535D95DAE.h"
#include "unitysdk/Enum_3_38416882F63DED4D.h"
#include "unitysdk/Enum_3_80F71F279FEF1A16.h"
#include "unitysdk/MoleMole/Battle/BuddyMoveStatus.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4D6F12365BC4A10D;
class Class_3_E2819F45333A39BF;
class Class_3_F97B015544BE936B;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_1A58F01F41846A1D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x137F75F0)
#define CLASS_3_1A58F01F41846A1D_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x137F7B80)
#define CLASS_3_1A58F01F41846A1D_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x137F79C0)
#define CLASS_3_1A58F01F41846A1D_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x137F7A60)
#define CLASS_3_1A58F01F41846A1D_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x137F7A50)
#define CLASS_3_1A58F01F41846A1D_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x137F7910)
#define CLASS_3_1A58F01F41846A1D_METHOD_3_FDE09C8D62639E3E_1_OFFSET UNITYSDK_OFFSET(0x137F7AE0)
#define CLASS_3_1A58F01F41846A1D_METHOD_3_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x137F7920)
#define CLASS_3_1A58F01F41846A1D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x137F72E0)
#define CLASS_3_1A58F01F41846A1D__CCTOR_OFFSET UNITYSDK_OFFSET(0x137F7640)
#define CLASS_3_1A58F01F41846A1D__CTOR_OFFSET UNITYSDK_OFFSET(0x137F7740)

inline static constexpr unsigned int Class_3_1A58F01F41846A1D_TypeDefinitionIndex = 74066;

class Class_3_1A58F01F41846A1D : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>** StaticGet_Field_3_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1A58F01F41846A1D_TypeDefinitionIndex)->GetStaticField(0x33860);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_3_3()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1A58F01F41846A1D_TypeDefinitionIndex)->GetStaticField(0x33868);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_3_2()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1A58F01F41846A1D_TypeDefinitionIndex)->GetStaticField(0x33870);
	}
	static ::System::Boolean* StaticGet_Field_3_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_1A58F01F41846A1D_TypeDefinitionIndex)->GetStaticField(0xCAC0);
	}
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::Int32 Field_3_1 = 0x20; // 0x0
	// static const ::System::Int32 Field_3_48 = 0x2E; // 0x0
	::Class_3_F97B015544BE936B* Field_3_39; // 0x48
	::System::Action* Field_3_44; // 0x50
	::Class_3_E2819F45333A39BF* Field_3_38; // 0x58
	::System::Collections::Generic::Dictionary_2<::Enum_3_1DD0B16535D95DAE, ::Class_1_4D6F12365BC4A10D*>* Field_3_15; // 0x60
	::System::Action* Field_3_47; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_3_11; // 0x70
	::System::Action* Field_3_45; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_3_9; // 0x80
	::System::Action* Field_3_46; // 0x88
	::System::Action* Field_3_43; // 0x90
	::System::Action* Field_3_42; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>*>* Field_3_10; // 0xA0
	::System::String* Field_3_6; // 0xA8
	::MoleMole::Battle::BuddyMoveStatus Field_3_19; // 0xB0
	::System::UInt32 Field_3_20; // 0xB4
	::System::Boolean Field_3_13; // 0xB8
	::System::Boolean Field_3_16; // 0xB9
	::System::Boolean Field_3_27; // 0xBA
	::Enum_3_80F71F279FEF1A16 Field_3_34; // 0xBC
	::System::Boolean Field_3_41; // 0xC0
	::System::Boolean Field_3_14; // 0xC1
	::System::Boolean Field_3_29; // 0xC2
	::System::Boolean Field_3_28; // 0xC3
	::Enum_3_38416882F63DED4D Field_3_21; // 0xC4
	::Enum_3_38416882F63DED4D Field_3_22; // 0xC8
	::Class_3_1A58F01F41846A1D_Struct_2_25260034BAAB7C7C Field_3_12; // 0xCC
	::System::UInt32 Field_3_23; // 0xD4
	::System::Int32 Field_3_7; // 0xD8
	::System::Int32 Field_3_40; // 0xDC
	::MoleMole::Battle::BuddyMoveStatus Field_3_17; // 0xE0
	::MoleMole::Battle::BuddyMoveStatus Field_3_18; // 0xE4
	::UnityEngine::Vector3 Field_3_36; // 0xE8
	::System::Single Field_3_26; // 0xF4
	::UnityEngine::Vector3 Field_3_25; // 0xF8
	::UnityEngine::RaycastHit Field_3_37; // 0x104
	::System::Boolean Field_3_32; // 0x138
	::System::Boolean Field_3_30; // 0x139
	::System::Boolean Field_3_31; // 0x13A
	::System::Boolean Field_3_8; // 0x13B
	::System::Boolean Field_3_35; // 0x13C
	::System::Boolean Field_3_33; // 0x13D
	::System::Int32 Field_3_24; // 0x140

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_METHOD_3_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	static ::Class_3_1A58F01F41846A1D* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_1A58F01F41846A1D*(*)())((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_FDE09C8D62639E3E_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_METHOD_3_FDE09C8D62639E3E_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}
};
