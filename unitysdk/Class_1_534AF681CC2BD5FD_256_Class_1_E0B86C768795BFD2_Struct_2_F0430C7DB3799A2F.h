#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_E0B86C768795BFD2_STRUCT_2_F0430C7DB3799A2F__CTOR_OFFSET UNITYSDK_OFFSET(0x763C00)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_256_Class_1_E0B86C768795BFD2_Struct_2_F0430C7DB3799A2F_TypeDefinitionIndex = 40179;

struct alignas(8) Class_1_534AF681CC2BD5FD_256_Class_1_E0B86C768795BFD2_Struct_2_F0430C7DB3799A2F
{
	::System::String* Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x24

	::System::Void _ctor(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_E0B86C768795BFD2_STRUCT_2_F0430C7DB3799A2F__CTOR_OFFSET))(this, a1, a2);
	}
};
