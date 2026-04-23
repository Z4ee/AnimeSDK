#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define CLASS_1_26812F1F257CF579__CTOR_OFFSET UNITYSDK_OFFSET(0x180B3020)

inline static constexpr unsigned int Class_1_26812F1F257CF579_TypeDefinitionIndex = 38820;

class Class_1_26812F1F257CF579 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x14
	::UnityEngine::Bounds Field_1_4; // 0x18
	::UnityEngine::Bounds Field_1_3; // 0x30
	::System::Int32 Field_1_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26812F1F257CF579__CTOR_OFFSET))(this);
	}
};
