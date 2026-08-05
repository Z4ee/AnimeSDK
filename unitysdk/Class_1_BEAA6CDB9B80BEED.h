#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_BEAA6CDB9B80BEED__CTOR_1_OFFSET UNITYSDK_OFFSET(0x141B5A50)
#define CLASS_1_BEAA6CDB9B80BEED__CTOR_OFFSET UNITYSDK_OFFSET(0x141B5A10)

inline static constexpr unsigned int Class_1_BEAA6CDB9B80BEED_TypeDefinitionIndex = 53114;

class Class_1_BEAA6CDB9B80BEED : public ::System::Object
{
public:
	::System::Single Field_1_5; // 0x10
	::UnityEngine::Vector2 Field_1_7; // 0x14
	::UnityEngine::Vector2 Field_1_1; // 0x1C
	::UnityEngine::Vector2 Field_1_0; // 0x24
	::UnityEngine::Vector2 Field_1_6; // 0x2C

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BEAA6CDB9B80BEED__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void _ctor_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BEAA6CDB9B80BEED__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
