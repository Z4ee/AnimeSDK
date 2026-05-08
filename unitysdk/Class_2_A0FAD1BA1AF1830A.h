#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A0FAD1BA1AF1830A_Class_2_CECA08025CFAE8D2;
class Class_2_A0FAD1BA1AF1830A_Class_2_DEF0CB5A049F1801;
class Class_2_A0FAD1BA1AF1830A_Class_2_DEF0CB5A049F1801_1;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_A0FAD1BA1AF1830A_METHOD_2_39361D1F2D1BD8E3_OFFSET UNITYSDK_OFFSET(0x1418A860)
#define CLASS_2_A0FAD1BA1AF1830A_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x1418A9B0)
#define CLASS_2_A0FAD1BA1AF1830A_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x1418A580)
#define CLASS_2_A0FAD1BA1AF1830A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1418AAF0)
#define CLASS_2_A0FAD1BA1AF1830A__CTOR_OFFSET UNITYSDK_OFFSET(0x1418AAE0)

inline static constexpr unsigned int Class_2_A0FAD1BA1AF1830A_TypeDefinitionIndex = 75678;

class Class_2_A0FAD1BA1AF1830A : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_A0FAD1BA1AF1830A_Class_2_CECA08025CFAE8D2*>* Field_2_8; // 0x18
	::MoleMole::MonoGamepadModule* Field_2_6; // 0x20
	::MonoUITableScrollV2* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_2_2; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_A0FAD1BA1AF1830A_Class_2_DEF0CB5A049F1801*>* Field_2_5; // 0x40
	::Class_2_0D31A1661D004892<::Class_2_A0FAD1BA1AF1830A_Class_2_DEF0CB5A049F1801_1*>* Field_2_7; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0FAD1BA1AF1830A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A0FAD1BA1AF1830A_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Method_2_39361D1F2D1BD8E3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A0FAD1BA1AF1830A_METHOD_2_39361D1F2D1BD8E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A0FAD1BA1AF1830A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0FAD1BA1AF1830A_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}
};
