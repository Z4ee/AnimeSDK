#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderTestModule_Class_1_3B89F61142059024_TestStatus.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class HipplenBuilderTestModule_Class_1_3B89F61142059024;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class Text; }

#define HIPPLENBUILDERTESTLINECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x13C6E1E0)
#define HIPPLENBUILDERTESTLINECONTROLLER_METHOD_5_33CB3B8324399CE4_OFFSET UNITYSDK_OFFSET(0x13C6EA20)
#define HIPPLENBUILDERTESTLINECONTROLLER_ONPIN_OFFSET UNITYSDK_OFFSET(0x13C6EE60)
#define HIPPLENBUILDERTESTLINECONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x13C6F4A0)
#define HIPPLENBUILDERTESTLINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13C6F4E0)

inline static constexpr unsigned int HipplenBuilderTestLineController_TypeDefinitionIndex = 44550;

class HipplenBuilderTestLineController : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::UI::Text* TestTitleText; // 0x18
	::UnityEngine::UI::HorizontalLayoutGroup* TestItemLayout; // 0x20
	::UnityEngine::GameObject* TestItemPrefab; // 0x28
	::System::Boolean isPinned; // 0x30
	::UnityEngine::Color YetColor; // 0x34
	::UnityEngine::Color PassColor; // 0x44
	::UnityEngine::Color LockedColor; // 0x54
	::UnityEngine::Color FailedColor; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTLINECONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void Init(::System::String* a1, ::System::Collections::Generic::List_1<::HipplenBuilderTestModule_Class_1_3B89F61142059024*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::HipplenBuilderTestModule_Class_1_3B89F61142059024*>*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTLINECONTROLLER_INIT_OFFSET))(this, a1, a2);
	}

	::System::Void OnPin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTLINECONTROLLER_ONPIN_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTLINECONTROLLER_REFRESH_OFFSET))(this);
	}

	::System::Void Method_5_33CB3B8324399CE4(::UnityEngine::GameObject* a1, ::HipplenBuilderTestModule_Class_1_3B89F61142059024_TestStatus a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::HipplenBuilderTestModule_Class_1_3B89F61142059024_TestStatus))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTLINECONTROLLER_METHOD_5_33CB3B8324399CE4_OFFSET))(this, a1, a2);
	}
};
