#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_96232DA6A41AD866_Enum_3_F3882EF9267D053B.h"
#include "unitysdk/System/Object.h"

class Class_3_B1FA31D6EE2555C8;

#define CLASS_1_96232DA6A41AD866__CTOR_OFFSET UNITYSDK_OFFSET(0xEFF9BF0)

inline static constexpr unsigned int Class_1_96232DA6A41AD866_TypeDefinitionIndex = 64793;

class Class_1_96232DA6A41AD866 : public ::System::Object
{
public:
	::Class_3_B1FA31D6EE2555C8* Field_1_1; // 0x10
	::Class_1_96232DA6A41AD866_Enum_3_F3882EF9267D053B Field_1_0; // 0x18
	::System::Int64 Field_1_2; // 0x20

	::System::Void _ctor(::Class_3_B1FA31D6EE2555C8* a1, ::Class_1_96232DA6A41AD866_Enum_3_F3882EF9267D053B a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B1FA31D6EE2555C8*, ::Class_1_96232DA6A41AD866_Enum_3_F3882EF9267D053B))((::PBYTE)hIl2Cpp + CLASS_1_96232DA6A41AD866__CTOR_OFFSET))(this, a1, a2);
	}
};
