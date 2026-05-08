#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWishlistSuitItemWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_4F0F14F359F48E68_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xD0A6100)
#define CLASS_2_4F0F14F359F48E68_METHOD_2_9CF0734D226E8123_OFFSET UNITYSDK_OFFSET(0xD0A6360)
#define CLASS_2_4F0F14F359F48E68_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xD0A6540)
#define CLASS_2_4F0F14F359F48E68_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD0A6610)
#define CLASS_2_4F0F14F359F48E68__CTOR_OFFSET UNITYSDK_OFFSET(0xD0A6600)

inline static constexpr unsigned int Class_2_4F0F14F359F48E68_TypeDefinitionIndex = 80764;

class Class_2_4F0F14F359F48E68 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x18
	::UnityEngine::GameObject* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38
	::UnityEngine::GameObject* Field_2_6; // 0x40
	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIWishlistSuitItemWidgetController*>*>* Field_2_2; // 0x48
	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIWishlistSuitItemWidgetController*>*>* Field_2_1; // 0x50
	::UnityEngine::GameObject* Field_2_7; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F0F14F359F48E68__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4F0F14F359F48E68_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4F0F14F359F48E68_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F0F14F359F48E68_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIWishlistSuitItemWidgetController*>*>* Method_2_9CF0734D226E8123(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIWishlistSuitItemWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4F0F14F359F48E68_METHOD_2_9CF0734D226E8123_OFFSET))(this, a1, a2);
	}
};
