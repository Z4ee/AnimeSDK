#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_3_B3D9F954008EA010_ANIMATEDINSTANCE_GET_RANDOMVALUE_OFFSET UNITYSDK_OFFSET(0x144A8240)
#define CLASS_3_B3D9F954008EA010_ANIMATEDINSTANCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x144A90F0)
#define CLASS_3_B3D9F954008EA010_ANIMATEDINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x144A90B0)

inline static constexpr unsigned int Class_3_B3D9F954008EA010_AnimatedInstance_TypeDefinitionIndex = 65755;

class Class_3_B3D9F954008EA010_AnimatedInstance : public ::System::Object
{
public:
	::System::Single PercentageOfLine; // 0x10
	::UnityEngine::Vector3 RelativeTranslation; // 0x14
	::UnityEngine::Vector3 RelativeRotation; // 0x20
	::UnityEngine::Vector3 RelativeScale; // 0x2C
	::System::Single _RandomValue; // 0x38

	::System::Void _ctor(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDINSTANCE__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDINSTANCE__CTOR_1_OFFSET))(this);
	}

	::System::Single get_RandomValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDINSTANCE_GET_RANDOMVALUE_OFFSET))(this);
	}
};
