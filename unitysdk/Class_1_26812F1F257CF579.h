#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define CLASS_1_26812F1F257CF579__CTOR_OFFSET UNITYSDK_OFFSET(0x16947DB0)

inline static constexpr unsigned int Class_1_26812F1F257CF579_TypeDefinitionIndex = 33030;

class Class_1_26812F1F257CF579 : public ::System::Object
{
public:
	::UnityEngine::Bounds Field_1_3; // 0x10
	::System::Int32 Field_1_2; // 0x28
	::System::Int32 Field_1_0; // 0x2C
	::UnityEngine::Bounds Field_1_4; // 0x30
	::System::Int32 Field_1_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26812F1F257CF579__CTOR_OFFSET))(this);
	}
};
