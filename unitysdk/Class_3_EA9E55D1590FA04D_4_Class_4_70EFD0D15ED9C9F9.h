#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_EC48112425141A9B.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_3_EA9E55D1590FA04D_4_CLASS_4_70EFD0D15ED9C9F9_METHOD_4_39361D1F2D1BD8E3_OFFSET UNITYSDK_OFFSET(0x12785BD0)
#define CLASS_3_EA9E55D1590FA04D_4_CLASS_4_70EFD0D15ED9C9F9_METHOD_4_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x12785D20)
#define CLASS_3_EA9E55D1590FA04D_4_CLASS_4_70EFD0D15ED9C9F9_METHOD_4_677D6FAAC7F4CD6A_OFFSET UNITYSDK_OFFSET(0x127859F0)
#define CLASS_3_EA9E55D1590FA04D_4_CLASS_4_70EFD0D15ED9C9F9__CTOR_OFFSET UNITYSDK_OFFSET(0x12786000)

inline static constexpr unsigned int Class_3_EA9E55D1590FA04D_4_Class_4_70EFD0D15ED9C9F9_TypeDefinitionIndex = 65387;

class Class_3_EA9E55D1590FA04D_4_Class_4_70EFD0D15ED9C9F9 : public ::Class_3_EC48112425141A9B
{
public:
	::Class_2_1A39E1B51756BF41* Field_4_5; // 0x28
	::UnityEngine::UI::Extension::UITabButton* Field_4_0; // 0x30
	::Class_2_1A39E1B51756BF41* Field_4_3; // 0x38
	::Class_2_1A39E1B51756BF41* Field_4_2; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_4_4; // 0x48
	::Class_2_1A39E1B51756BF41* Field_4_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA9E55D1590FA04D_4_CLASS_4_70EFD0D15ED9C9F9__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_677D6FAAC7F4CD6A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_EA9E55D1590FA04D_4_CLASS_4_70EFD0D15ED9C9F9_METHOD_4_677D6FAAC7F4CD6A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA9E55D1590FA04D_4_CLASS_4_70EFD0D15ED9C9F9_METHOD_4_5176DC743E478510_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Method_4_39361D1F2D1BD8E3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_EA9E55D1590FA04D_4_CLASS_4_70EFD0D15ED9C9F9_METHOD_4_39361D1F2D1BD8E3_OFFSET))(this, a1, a2);
	}
};
