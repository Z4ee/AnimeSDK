#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define CLASS_1_9A122A5F063AF6FF__CTOR_OFFSET UNITYSDK_OFFSET(0x178A66E0)

inline static constexpr unsigned int Class_1_9A122A5F063AF6FF_TypeDefinitionIndex = 71433;

class Class_1_9A122A5F063AF6FF : public ::System::Object
{
public:
	::System::Action* BDMPBAPEBOH; // 0x10
	::System::Single HKGPLKJOCDH; // 0x18
	::UnityEngine::Vector3 BLBPHAKCCLL; // 0x1C
	::UnityEngine::Vector3 GIFHGOPLGEO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A122A5F063AF6FF__CTOR_OFFSET))(this);
	}
};
