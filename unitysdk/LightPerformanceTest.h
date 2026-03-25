#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class LightPerformanceTestUnit;
namespace RPG::Client { class EnvironmentSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define LIGHTPERFORMANCETEST_METHOD_5_291D463BB1648C58_OFFSET UNITYSDK_OFFSET(0x118E62E0)
#define LIGHTPERFORMANCETEST_START_OFFSET UNITYSDK_OFFSET(0x118E5ED0)
#define LIGHTPERFORMANCETEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x118E6770)
#define LIGHTPERFORMANCETEST__CTOR_OFFSET UNITYSDK_OFFSET(0x118E6800)

inline static constexpr unsigned int LightPerformanceTest_TypeDefinitionIndex = 38221;

class LightPerformanceTest : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::LightPerformanceTestUnit*>* TestCaseUnit; // 0x18
	::UnityEngine::UI::Text* Field_5_1; // 0x20
	::UnityEngine::UI::Text* Field_5_2; // 0x28
	::System::Single Field_5_3; // 0x30
	::System::Int32 Field_5_4; // 0x34
	::UnityEngine::GameObject* Field_5_5; // 0x38
	::UnityEngine::GameObject* Field_5_6; // 0x40
	::RPG::Client::EnvironmentSystem* Field_5_7; // 0x48

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

	::System::Void Method_5_291D463BB1648C58(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LIGHTPERFORMANCETEST_METHOD_5_291D463BB1648C58_OFFSET))(this, a1);
	}
};
