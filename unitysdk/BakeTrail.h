#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Ara { class AraTrail; }

#define BAKETRAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BED3E90)
#define BAKETRAIL_BAKE_OFFSET UNITYSDK_OFFSET(0x1BED3F50)
#define BAKETRAIL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BED3F20)
#define BAKETRAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BED4310)

inline static constexpr unsigned int BakeTrail_TypeDefinitionIndex = 31363;

class BakeTrail : public ::UnityEngine::MonoBehaviour
{
public:
	::Ara::AraTrail* trail; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKETRAIL__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKETRAIL_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKETRAIL_UPDATE_OFFSET))(this);
	}

	::System::Void Bake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKETRAIL_BAKE_OFFSET))(this);
	}
};
