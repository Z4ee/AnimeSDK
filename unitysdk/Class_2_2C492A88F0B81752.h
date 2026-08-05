#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_2C492A88F0B81752_METHOD_2_01414A99793B5CD1_OFFSET UNITYSDK_OFFSET(0x1949F420)
#define CLASS_2_2C492A88F0B81752_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x1949F200)
#define CLASS_2_2C492A88F0B81752_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1949F650)
#define CLASS_2_2C492A88F0B81752_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1949F600)
#define CLASS_2_2C492A88F0B81752__CTOR_OFFSET UNITYSDK_OFFSET(0x1949F640)

inline static constexpr unsigned int Class_2_2C492A88F0B81752_TypeDefinitionIndex = 41813;

class Class_2_2C492A88F0B81752 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_6; // 0x18
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_5; // 0x20
	::UnityEngine::RectTransform* Field_2_3; // 0x28
	::Class_2_FDFE69FE7B72463B* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C492A88F0B81752__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2C492A88F0B81752_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2C492A88F0B81752_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Method_2_01414A99793B5CD1(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2C492A88F0B81752_METHOD_2_01414A99793B5CD1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C492A88F0B81752_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
