#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class LightPerformanceTestUnit;
namespace RPG::Client { class EnvironmentSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define LIGHTPERFORMANCETEST_METHOD_5_D9EEB46F94083DE4_OFFSET UNITYSDK_OFFSET(0xB97E620)
#define LIGHTPERFORMANCETEST_START_OFFSET UNITYSDK_OFFSET(0xB97E220)
#define LIGHTPERFORMANCETEST_UPDATE_OFFSET UNITYSDK_OFFSET(0xB97EE00)
#define LIGHTPERFORMANCETEST__CTOR_OFFSET UNITYSDK_OFFSET(0xB97EE90)

inline static constexpr unsigned int LightPerformanceTest_TypeDefinitionIndex = 47780;

class LightPerformanceTest : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::LightPerformanceTestUnit*>* TestCaseUnit; // 0x18
	::UnityEngine::UI::Text* NOCOPNPHMLN; // 0x20
	::UnityEngine::UI::Text* PFNJAFFEAFA; // 0x28
	::System::Single ANKKFGAFOBE; // 0x30
	::System::Int32 CNCJMPEODFP; // 0x34
	::UnityEngine::GameObject* OCMGBNJPGNP; // 0x38
	::UnityEngine::GameObject* AMIBPOICDIK; // 0x40
	::RPG::Client::EnvironmentSystem* LKDKHHMECAG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTPERFORMANCETEST__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTPERFORMANCETEST_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTPERFORMANCETEST_UPDATE_OFFSET))(this);
	}

	::System::Void Method_5_D9EEB46F94083DE4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LIGHTPERFORMANCETEST_METHOD_5_D9EEB46F94083DE4_OFFSET))(this, a1);
	}
};
