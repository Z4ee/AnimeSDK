#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_D36B39616EE2FFB5_METHOD_3_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x1A2B0640)
#define CLASS_3_D36B39616EE2FFB5_METHOD_3_496565A3E7357507_OFFSET UNITYSDK_OFFSET(0x1A2B03C0)
#define CLASS_3_D36B39616EE2FFB5_METHOD_3_4C9CB642EC86F4C4_OFFSET UNITYSDK_OFFSET(0x1A2B04F0)
#define CLASS_3_D36B39616EE2FFB5_METHOD_3_6A3AD666D3CC56B6_OFFSET UNITYSDK_OFFSET(0x1A2B0820)
#define CLASS_3_D36B39616EE2FFB5_METHOD_3_D33F8087E6D98A2B_OFFSET UNITYSDK_OFFSET(0x1A2B0810)
#define CLASS_3_D36B39616EE2FFB5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2B0780)

inline static constexpr unsigned int Class_3_D36B39616EE2FFB5_TypeDefinitionIndex = 72338;

class Class_3_D36B39616EE2FFB5 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_3_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D36B39616EE2FFB5__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_496565A3E7357507(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_D36B39616EE2FFB5_METHOD_3_496565A3E7357507_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D33F8087E6D98A2B(::UnityEngine::UI::Extension::UILocalizationText* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_3_D36B39616EE2FFB5_METHOD_3_D33F8087E6D98A2B_OFFSET))(this, a1);
	}

	::System::Void Method_3_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D36B39616EE2FFB5_METHOD_3_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Method_3_4C9CB642EC86F4C4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_D36B39616EE2FFB5_METHOD_3_4C9CB642EC86F4C4_OFFSET))(this, a1, a2);
	}

	::UnityEngine::UI::Extension::UILocalizationText* Method_3_6A3AD666D3CC56B6()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D36B39616EE2FFB5_METHOD_3_6A3AD666D3CC56B6_OFFSET))(this);
	}
};
