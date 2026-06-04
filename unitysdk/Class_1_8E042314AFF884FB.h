#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_3_7E25C9E6907AC48F;

#define CLASS_1_8E042314AFF884FB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18CFABE0)
#define CLASS_1_8E042314AFF884FB_METHOD_1_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x18CFCC60)
#define CLASS_1_8E042314AFF884FB__CTOR_OFFSET UNITYSDK_OFFSET(0x18CFABD0)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_TypeDefinitionIndex = 39415;

class Class_1_8E042314AFF884FB : public ::System::Object
{
public:
	::Class_3_7E25C9E6907AC48F* Field_1_0; // 0x10
	::Class_1_D33B7D6901AE39E9* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_7E25C9E6907AC48F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_7E25C9E6907AC48F*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_METHOD_1_9765352E01408D38_OFFSET))(this);
	}
};
