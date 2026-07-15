#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_C125C9CAA23B7724_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18ED7400)
#define CLASS_1_C125C9CAA23B7724_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x18ED74E0)
#define CLASS_1_C125C9CAA23B7724_METHOD_1_258333C2E3556047_OFFSET UNITYSDK_OFFSET(0x18ED77A0)
#define CLASS_1_C125C9CAA23B7724_METHOD_1_6096CA3BC11444EA_OFFSET UNITYSDK_OFFSET(0x18ED7540)
#define CLASS_1_C125C9CAA23B7724_METHOD_1_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x18ED7A30)
#define CLASS_1_C125C9CAA23B7724__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED7350)

inline static constexpr unsigned int Class_1_C125C9CAA23B7724_TypeDefinitionIndex = 63471;

class Class_1_C125C9CAA23B7724 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x49445; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C125C9CAA23B7724__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C125C9CAA23B7724_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C125C9CAA23B7724_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_6096CA3BC11444EA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C125C9CAA23B7724_METHOD_1_6096CA3BC11444EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_258333C2E3556047(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C125C9CAA23B7724_METHOD_1_258333C2E3556047_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C125C9CAA23B7724_METHOD_1_B2AF81294D9C69C7_OFFSET))();
	}
};
