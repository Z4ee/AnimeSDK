#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_2_6B60059019300BAD;

#define CLASS_1_BE27584A7A63E572_CLASS_1_A87E183E78F1FA79__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D96C0)

inline static constexpr unsigned int Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79_TypeDefinitionIndex = 72330;

class Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79 : public ::System::Object
{
public:
	::Class_2_6B60059019300BAD* Field_1_0; // 0x10
	::System::Nullable_1<::System::Single> Field_1_1; // 0x18
	::RPG::MVector3 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_CLASS_1_A87E183E78F1FA79__CTOR_OFFSET))(this);
	}
};
