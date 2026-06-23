#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_22.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_2.h"
#include "unitysdk/System/Object.h"

class Class_1_D12E4BF61CBE42EF;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_222A145CFB71510C_CLASS_1_95F786D722BCA7E8_METHOD_1_232E79648899E21B_OFFSET UNITYSDK_OFFSET(0x17D9DC10)
#define CLASS_2_222A145CFB71510C_CLASS_1_95F786D722BCA7E8_METHOD_1_48855322108FE9AA_OFFSET UNITYSDK_OFFSET(0x17D9DBF0)
#define CLASS_2_222A145CFB71510C_CLASS_1_95F786D722BCA7E8__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9DBE0)

inline static constexpr unsigned int Class_2_222A145CFB71510C_Class_1_95F786D722BCA7E8_TypeDefinitionIndex = 42613;

class Class_2_222A145CFB71510C_Class_1_95F786D722BCA7E8 : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::Class_1_D12E4BF61CBE42EF* Field_1_1; // 0x18
	::System::Action_2<::Class_1_D12E4BF61CBE42EF*, ::Enum_3_DB663931210BBC27_22>* Field_1_0; // 0x20
	::Enum_3_DB663931210BBC27_22 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_222A145CFB71510C_CLASS_1_95F786D722BCA7E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_48855322108FE9AA(::Struct_2_5B421F8FFABD4CA3_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5B421F8FFABD4CA3_2))((::PBYTE)hIl2Cpp + CLASS_2_222A145CFB71510C_CLASS_1_95F786D722BCA7E8_METHOD_1_48855322108FE9AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_232E79648899E21B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_222A145CFB71510C_CLASS_1_95F786D722BCA7E8_METHOD_1_232E79648899E21B_OFFSET))(this);
	}
};
