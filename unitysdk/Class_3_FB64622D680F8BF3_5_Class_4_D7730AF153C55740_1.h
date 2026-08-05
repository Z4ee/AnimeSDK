#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_EC48112425141A9B.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_3_FB64622D680F8BF3_5_CLASS_4_D7730AF153C55740_1_METHOD_4_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x1A56E890)
#define CLASS_3_FB64622D680F8BF3_5_CLASS_4_D7730AF153C55740_1_METHOD_4_5268AE5605C75CF4_OFFSET UNITYSDK_OFFSET(0x1A56E740)
#define CLASS_3_FB64622D680F8BF3_5_CLASS_4_D7730AF153C55740_1_METHOD_4_938C156156265273_OFFSET UNITYSDK_OFFSET(0x1A56E5C0)
#define CLASS_3_FB64622D680F8BF3_5_CLASS_4_D7730AF153C55740_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A56EB60)

inline static constexpr unsigned int Class_3_FB64622D680F8BF3_5_Class_4_D7730AF153C55740_1_TypeDefinitionIndex = 79309;

class Class_3_FB64622D680F8BF3_5_Class_4_D7730AF153C55740_1 : public ::Class_3_EC48112425141A9B
{
public:
	::Class_2_1A39E1B51756BF41* Field_4_6; // 0x28
	::Class_2_1A39E1B51756BF41* Field_4_11; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_4_4; // 0x38
	::Class_2_1A39E1B51756BF41* Field_4_5; // 0x40
	::UnityEngine::UI::Extension::UITabButton* Field_4_0; // 0x48
	::Class_2_1A39E1B51756BF41* Field_4_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB64622D680F8BF3_5_CLASS_4_D7730AF153C55740_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_938C156156265273(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_FB64622D680F8BF3_5_CLASS_4_D7730AF153C55740_1_METHOD_4_938C156156265273_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Method_4_5268AE5605C75CF4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_FB64622D680F8BF3_5_CLASS_4_D7730AF153C55740_1_METHOD_4_5268AE5605C75CF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB64622D680F8BF3_5_CLASS_4_D7730AF153C55740_1_METHOD_4_5176DC743E478510_OFFSET))(this);
	}
};
