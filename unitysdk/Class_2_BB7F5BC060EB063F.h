#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIAbyssArpeggioTalentItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_BB7F5BC060EB063F_METHOD_2_5D36D891F587C349_OFFSET UNITYSDK_OFFSET(0x15FF4620)
#define CLASS_2_BB7F5BC060EB063F_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x15FF4800)
#define CLASS_2_BB7F5BC060EB063F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15FF48D0)
#define CLASS_2_BB7F5BC060EB063F_METHOD_2_EBA1DA59141868AB_OFFSET UNITYSDK_OFFSET(0x15FF44A0)
#define CLASS_2_BB7F5BC060EB063F__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF48C0)

inline static constexpr unsigned int Class_2_BB7F5BC060EB063F_TypeDefinitionIndex = 87171;

class Class_2_BB7F5BC060EB063F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIAbyssArpeggioTalentItemWidgetController*>*>* Field_2_2; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB7F5BC060EB063F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBA1DA59141868AB(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BB7F5BC060EB063F_METHOD_2_EBA1DA59141868AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB7F5BC060EB063F_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIAbyssArpeggioTalentItemWidgetController*>*>* Method_2_5D36D891F587C349(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIAbyssArpeggioTalentItemWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BB7F5BC060EB063F_METHOD_2_5D36D891F587C349_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BB7F5BC060EB063F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
