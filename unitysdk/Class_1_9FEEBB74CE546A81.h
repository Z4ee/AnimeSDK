#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define CLASS_1_9FEEBB74CE546A81_METHOD_1_2380CAEC03E3CCA7_OFFSET UNITYSDK_OFFSET(0x1549B830)
#define CLASS_1_9FEEBB74CE546A81_METHOD_1_5D14F59A4A5DB749_OFFSET UNITYSDK_OFFSET(0x1549B1A0)
#define CLASS_1_9FEEBB74CE546A81_METHOD_1_5D9921C59C46B45F_OFFSET UNITYSDK_OFFSET(0x1549B6A0)
#define CLASS_1_9FEEBB74CE546A81_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1549B1F0)
#define CLASS_1_9FEEBB74CE546A81_METHOD_1_AFBEF8DE747F7497_OFFSET UNITYSDK_OFFSET(0x1549B320)
#define CLASS_1_9FEEBB74CE546A81_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1549B310)
#define CLASS_1_9FEEBB74CE546A81_METHOD_1_CF32093B9B9F80B2_OFFSET UNITYSDK_OFFSET(0x1549B550)
#define CLASS_1_9FEEBB74CE546A81__CTOR_OFFSET UNITYSDK_OFFSET(0x1549B200)

inline static constexpr unsigned int Class_1_9FEEBB74CE546A81_TypeDefinitionIndex = 6937;

class Class_1_9FEEBB74CE546A81 : public ::System::Object
{
public:
	::System::Random* Field_1_0; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Byte Field_1_3; // 0x24
	::System::Int32 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FEEBB74CE546A81__CTOR_OFFSET))(this);
	}

	static ::Class_1_9FEEBB74CE546A81* Method_1_5D14F59A4A5DB749(::Class_1_9FEEBB74CE546A81* a1)
	{
		return ((::Class_1_9FEEBB74CE546A81*(*)(::Class_1_9FEEBB74CE546A81*))((::PBYTE)hIl2Cpp + CLASS_1_9FEEBB74CE546A81_METHOD_1_5D14F59A4A5DB749_OFFSET))(a1);
	}

	static ::System::Void Method_1_8C8625211DA811AE(::Class_1_9FEEBB74CE546A81* a1)
	{
		return ((::System::Void(*)(::Class_1_9FEEBB74CE546A81*))((::PBYTE)hIl2Cpp + CLASS_1_9FEEBB74CE546A81_METHOD_1_8C8625211DA811AE_OFFSET))(a1);
	}

	::System::Void Method_1_AFBEF8DE747F7497(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9FEEBB74CE546A81_METHOD_1_AFBEF8DE747F7497_OFFSET))(this, a1);
	}

	::System::Single Method_1_5D9921C59C46B45F(::System::Boolean a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9FEEBB74CE546A81_METHOD_1_5D9921C59C46B45F_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_CF32093B9B9F80B2(::System::Single a1, ::System::Byte a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Single, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_9FEEBB74CE546A81_METHOD_1_CF32093B9B9F80B2_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_2380CAEC03E3CCA7(::System::UInt32 a1, ::System::Byte a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_9FEEBB74CE546A81_METHOD_1_2380CAEC03E3CCA7_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FEEBB74CE546A81_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
