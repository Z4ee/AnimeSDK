#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWishlistSuitItemWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_4F0F14F359F48E68_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x148ADBC0)
#define CLASS_2_4F0F14F359F48E68_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x148AE000)
#define CLASS_2_4F0F14F359F48E68_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x148AE0D0)
#define CLASS_2_4F0F14F359F48E68_METHOD_2_CEEAE62095AFF7C1_OFFSET UNITYSDK_OFFSET(0x148ADE20)
#define CLASS_2_4F0F14F359F48E68__CTOR_OFFSET UNITYSDK_OFFSET(0x148AE0C0)

inline static constexpr unsigned int Class_2_4F0F14F359F48E68_TypeDefinitionIndex = 40708;

class Class_2_4F0F14F359F48E68 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x18
	::UnityEngine::GameObject* Field_2_10; // 0x20
	::UnityEngine::GameObject* Field_2_11; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x40
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIWishlistSuitItemWidgetController*>*>* Field_2_0; // 0x48
	::UnityEngine::GameObject* Field_2_4; // 0x50
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIWishlistSuitItemWidgetController*>*>* Field_2_7; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F0F14F359F48E68__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4F0F14F359F48E68_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIWishlistSuitItemWidgetController*>*>* Method_2_CEEAE62095AFF7C1(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIWishlistSuitItemWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4F0F14F359F48E68_METHOD_2_CEEAE62095AFF7C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4F0F14F359F48E68_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F0F14F359F48E68_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
