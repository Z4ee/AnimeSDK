#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13256E311AF13FFD.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_133;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D01FCB4528AC7BC2_METHOD_1_5E3EB6AB784E41DA_OFFSET UNITYSDK_OFFSET(0xF6521F0)
#define CLASS_1_D01FCB4528AC7BC2_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xF6521E0)
#define CLASS_1_D01FCB4528AC7BC2_METHOD_1_E37603FA1E52E543_OFFSET UNITYSDK_OFFSET(0xF6525B0)
#define CLASS_1_D01FCB4528AC7BC2__CTOR_OFFSET UNITYSDK_OFFSET(0xF652A90)

inline static constexpr unsigned int Class_1_D01FCB4528AC7BC2_TypeDefinitionIndex = 56796;

class Class_1_D01FCB4528AC7BC2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D01FCB4528AC7BC2__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D01FCB4528AC7BC2_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::Enum_3_13256E311AF13FFD Method_1_5E3EB6AB784E41DA(::System::Int32 a1, ::Class_0_16E4307DCC419505_133* a2)
	{
		return ((::Enum_3_13256E311AF13FFD(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_133*))((::PBYTE)hIl2Cpp + CLASS_1_D01FCB4528AC7BC2_METHOD_1_5E3EB6AB784E41DA_OFFSET))(this, a1, a2);
	}

	::Enum_3_13256E311AF13FFD Method_1_E37603FA1E52E543(::System::Int32 a1, ::Class_0_16E4307DCC419505_133* a2)
	{
		return ((::Enum_3_13256E311AF13FFD(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_133*))((::PBYTE)hIl2Cpp + CLASS_1_D01FCB4528AC7BC2_METHOD_1_E37603FA1E52E543_OFFSET))(this, a1, a2);
	}
};
