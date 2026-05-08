#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0244180E10798511_Struct_2_37958527F6A3CE6D.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define STRUCT_2_032E3093F309FC91_EQUALS_OFFSET UNITYSDK_OFFSET(0x702BF0)

inline static constexpr unsigned int Struct_2_032E3093F309FC91_TypeDefinitionIndex = 73643;

struct alignas(8) Struct_2_032E3093F309FC91
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x1C
	::System::Boolean Field_2_2; // 0x20
	::System::Boolean Field_2_3; // 0x21
	::Class_2_0244180E10798511_Struct_2_37958527F6A3CE6D Field_2_4; // 0x28
	::UnityEngine::Vector3 Field_2_5; // 0x48
	::System::String* Field_2_6; // 0x58

	::System::Boolean Equals(::Struct_2_032E3093F309FC91 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_032E3093F309FC91))((::PBYTE)hIl2Cpp + STRUCT_2_032E3093F309FC91_EQUALS_OFFSET))(this, a1);
	}
};
