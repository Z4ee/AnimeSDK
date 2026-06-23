#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_96232DA6A41AD866_Enum_3_F3882EF9267D053B.h"
#include "unitysdk/System/Object.h"

class Class_3_0EDEED43B44903B1;

#define CLASS_1_96232DA6A41AD866__CTOR_OFFSET UNITYSDK_OFFSET(0xFBD6120)

inline static constexpr unsigned int Class_1_96232DA6A41AD866_TypeDefinitionIndex = 76115;

class Class_1_96232DA6A41AD866 : public ::System::Object
{
public:
	::Class_3_0EDEED43B44903B1* Field_1_1; // 0x10
	::System::Int64 Field_1_2; // 0x18
	::Class_1_96232DA6A41AD866_Enum_3_F3882EF9267D053B Field_1_0; // 0x20

	::System::Void _ctor(::Class_3_0EDEED43B44903B1* a1, ::Class_1_96232DA6A41AD866_Enum_3_F3882EF9267D053B a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_0EDEED43B44903B1*, ::Class_1_96232DA6A41AD866_Enum_3_F3882EF9267D053B))((::PBYTE)hIl2Cpp + CLASS_1_96232DA6A41AD866__CTOR_OFFSET))(this, a1, a2);
	}
};
