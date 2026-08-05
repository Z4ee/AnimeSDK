#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class GraphicCast; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_34D83D6328FA369E_METHOD_2_8D7656457DA32106_OFFSET UNITYSDK_OFFSET(0x17C62AB0)
#define CLASS_2_34D83D6328FA369E_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x17C62C00)
#define CLASS_2_34D83D6328FA369E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17C62CD0)
#define CLASS_2_34D83D6328FA369E_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x17C62810)
#define CLASS_2_34D83D6328FA369E__CTOR_OFFSET UNITYSDK_OFFSET(0x17C62CC0)

inline static constexpr unsigned int Class_2_34D83D6328FA369E_TypeDefinitionIndex = 43856;

class Class_2_34D83D6328FA369E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_2; // 0x18
	::UnityEngine::CanvasGroup* Field_2_5; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30
	::UnityEngine::CanvasGroup* Field_2_7; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::UI::GraphicCast*>* Field_2_6; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x58
	::UnityEngine::RectTransform* Field_2_1; // 0x60
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34D83D6328FA369E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_34D83D6328FA369E_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34D83D6328FA369E_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_34D83D6328FA369E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::GraphicCast*>* Method_2_8D7656457DA32106(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::GraphicCast*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_34D83D6328FA369E_METHOD_2_8D7656457DA32106_OFFSET))(this, a1, a2);
	}
};
