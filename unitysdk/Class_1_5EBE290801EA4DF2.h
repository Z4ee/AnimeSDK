#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_5EBE290801EA4DF2__CTOR_OFFSET UNITYSDK_OFFSET(0xBAB6DF0)

inline static constexpr unsigned int Class_1_5EBE290801EA4DF2_TypeDefinitionIndex = 48095;

class Class_1_5EBE290801EA4DF2 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_3; // 0x18
	::UnityEngine::Vector3 Field_1_4; // 0x20
	::System::Single Field_1_5; // 0x2C
	::System::Nullable_1<::System::UInt32> Field_1_2; // 0x30
	::System::Nullable_1<::System::UInt32> Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EBE290801EA4DF2__CTOR_OFFSET))(this);
	}
};
