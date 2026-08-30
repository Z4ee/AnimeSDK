#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_6CB6A63D22550FC5__CTOR_OFFSET UNITYSDK_OFFSET(0x105D0B80)

inline static constexpr unsigned int Class_1_6CB6A63D22550FC5_TypeDefinitionIndex = 47853;

class Class_1_6CB6A63D22550FC5 : public ::System::Object
{
public:
	::UnityEngine::Vector2 ECKAIJLHEEM; // 0x10
	::System::Single NIDAPHBEMDE; // 0x18
	::UnityEngine::Vector2 COIHCPBGBPA; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6CB6A63D22550FC5__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
