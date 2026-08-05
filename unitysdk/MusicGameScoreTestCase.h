#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MUSICGAMESCORETESTCASE_TEST_OFFSET UNITYSDK_OFFSET(0x10F1C1C0)
#define MUSICGAMESCORETESTCASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10F1C2C0)

inline static constexpr unsigned int MusicGameScoreTestCase_TypeDefinitionIndex = 62569;

class MusicGameScoreTestCase : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Int32 Combo; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MUSICGAMESCORETESTCASE__CTOR_OFFSET))(this);
	}

	::System::Void Test()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MUSICGAMESCORETESTCASE_TEST_OFFSET))(this);
	}
};
