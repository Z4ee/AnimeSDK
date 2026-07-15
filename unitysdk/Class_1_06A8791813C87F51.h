#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define CLASS_1_06A8791813C87F51_GET__RANDOM_OFFSET UNITYSDK_OFFSET(0x15F2B460)
#define CLASS_1_06A8791813C87F51_METHOD_1_19060179242D253B_OFFSET UNITYSDK_OFFSET(0x15F2B6B0)
#define CLASS_1_06A8791813C87F51_METHOD_1_43D33F88F40D8EAB_OFFSET UNITYSDK_OFFSET(0x15F2B5D0)
#define CLASS_1_06A8791813C87F51_METHOD_1_AAA08DA9AA6317DB_OFFSET UNITYSDK_OFFSET(0x15F2B850)
#define CLASS_1_06A8791813C87F51_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15F2B4B0)
#define CLASS_1_06A8791813C87F51_METHOD_1_EFB3C862D4035DBE_1_OFFSET UNITYSDK_OFFSET(0x15F2B770)
#define CLASS_1_06A8791813C87F51_METHOD_1_EFB3C862D4035DBE_OFFSET UNITYSDK_OFFSET(0x15F2B4F0)
#define CLASS_1_06A8791813C87F51__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2B470)

inline static constexpr unsigned int Class_1_06A8791813C87F51_TypeDefinitionIndex = 73861;

class Class_1_06A8791813C87F51 : public ::System::Object
{
public:
	::System::Random* __Random_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_06A8791813C87F51__CTOR_OFFSET))(this, a1);
	}

	::System::Random* get__Random()
	{
		return ((::System::Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06A8791813C87F51_GET__RANDOM_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06A8791813C87F51_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_1_EFB3C862D4035DBE(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_06A8791813C87F51_METHOD_1_EFB3C862D4035DBE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_43D33F88F40D8EAB(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_06A8791813C87F51_METHOD_1_43D33F88F40D8EAB_OFFSET))(this, a1);
	}

	::System::Double Method_1_19060179242D253B()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06A8791813C87F51_METHOD_1_19060179242D253B_OFFSET))(this);
	}

	::System::Int32 Method_1_EFB3C862D4035DBE_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_06A8791813C87F51_METHOD_1_EFB3C862D4035DBE_1_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_AAA08DA9AA6317DB(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_06A8791813C87F51_METHOD_1_AAA08DA9AA6317DB_OFFSET))(this, a1, a2);
	}
};
