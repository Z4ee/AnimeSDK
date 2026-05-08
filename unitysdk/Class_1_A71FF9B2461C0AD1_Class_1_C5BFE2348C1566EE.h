#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A71FF9B2461C0AD1_CLASS_1_C5BFE2348C1566EE__CTOR_OFFSET UNITYSDK_OFFSET(0x127AAB10)

inline static constexpr unsigned int Class_1_A71FF9B2461C0AD1_Class_1_C5BFE2348C1566EE_TypeDefinitionIndex = 43737;

class Class_1_A71FF9B2461C0AD1_Class_1_C5BFE2348C1566EE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0x10
	::System::Boolean Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::Int32 Field_1_0; // 0x20
	::MoleMole::Config::MonsterFunctionType Field_1_6; // 0x24
	::MoleMole::Config::MonsterFunctionType Field_1_5; // 0x28
	::System::Single Field_1_1; // 0x2C
	::System::UInt32 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71FF9B2461C0AD1_CLASS_1_C5BFE2348C1566EE__CTOR_OFFSET))(this);
	}
};
