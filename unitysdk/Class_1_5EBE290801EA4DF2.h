#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_5EBE290801EA4DF2__CTOR_OFFSET UNITYSDK_OFFSET(0x15FCA490)

inline static constexpr unsigned int Class_1_5EBE290801EA4DF2_TypeDefinitionIndex = 49726;

class Class_1_5EBE290801EA4DF2 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Nullable_1<::System::UInt32> Field_1_2; // 0x20
	::System::Nullable_1<::System::UInt32> Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EBE290801EA4DF2__CTOR_OFFSET))(this);
	}
};
