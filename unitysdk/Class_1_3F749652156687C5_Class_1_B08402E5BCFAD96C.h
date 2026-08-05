#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_3F749652156687C5_CLASS_1_B08402E5BCFAD96C_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x1763CDA0)
#define CLASS_1_3F749652156687C5_CLASS_1_B08402E5BCFAD96C__CTOR_OFFSET UNITYSDK_OFFSET(0x1763CD90)

inline static constexpr unsigned int Class_1_3F749652156687C5_Class_1_B08402E5BCFAD96C_TypeDefinitionIndex = 45645;

class Class_1_3F749652156687C5_Class_1_B08402E5BCFAD96C : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F749652156687C5_CLASS_1_B08402E5BCFAD96C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3F749652156687C5_CLASS_1_B08402E5BCFAD96C_METHOD_1_EBF44BC910948FDA_OFFSET))(this, a1);
	}
};
