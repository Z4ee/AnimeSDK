#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_157;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_2A24AA507216B79D_1_METHOD_1_2A9814D65D1AAC14_OFFSET UNITYSDK_OFFSET(0x15D7BCC0)
#define CLASS_1_2A24AA507216B79D_1_METHOD_1_300FA190EAA92566_OFFSET UNITYSDK_OFFSET(0x15D7BC20)
#define CLASS_1_2A24AA507216B79D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15D7BDC0)

inline static constexpr unsigned int Class_1_2A24AA507216B79D_1_TypeDefinitionIndex = 80133;

class Class_1_2A24AA507216B79D_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A24AA507216B79D_1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_300FA190EAA92566()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A24AA507216B79D_1_METHOD_1_300FA190EAA92566_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_157* Method_1_2A9814D65D1AAC14(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_157*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2A24AA507216B79D_1_METHOD_1_2A9814D65D1AAC14_OFFSET))(this, a1);
	}
};
