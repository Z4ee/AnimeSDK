#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_E319123DCDD91C39__CTOR_OFFSET UNITYSDK_OFFSET(0x159BE7D0)

inline static constexpr unsigned int Class_1_E319123DCDD91C39_TypeDefinitionIndex = 86605;

class Class_1_E319123DCDD91C39 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::UInt32 Field_1_11; // 0x18
	::System::Boolean Field_1_5; // 0x1C
	::System::Boolean Field_1_4; // 0x1D
	::System::Boolean Field_1_0; // 0x1E
	::UnityEngine::Vector3 Field_1_7; // 0x20
	::System::Single Field_1_6; // 0x2C
	::System::Int32 Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E319123DCDD91C39__CTOR_OFFSET))(this);
	}
};
