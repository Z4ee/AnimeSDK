#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MUSICGAMESCORETESTCASE_TEST_OFFSET UNITYSDK_OFFSET(0xE871D80)
#define MUSICGAMESCORETESTCASE__CTOR_OFFSET UNITYSDK_OFFSET(0xE871E80)

inline static constexpr unsigned int MusicGameScoreTestCase_TypeDefinitionIndex = 45914;

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
