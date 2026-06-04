#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_2FDE33CCAE591AA8_METHOD_1_8EF383CA44957E7B_OFFSET UNITYSDK_OFFSET(0x1AC33030)
#define CLASS_1_2FDE33CCAE591AA8_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1AC331E0)
#define CLASS_1_2FDE33CCAE591AA8__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC33020)

inline static constexpr unsigned int Class_1_2FDE33CCAE591AA8_TypeDefinitionIndex = 40622;

class Class_1_2FDE33CCAE591AA8 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2FDE33CCAE591AA8__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8EF383CA44957E7B(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2FDE33CCAE591AA8_METHOD_1_8EF383CA44957E7B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2FDE33CCAE591AA8_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}
};
