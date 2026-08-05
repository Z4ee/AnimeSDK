#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_33E7CA571A0A9377.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_A0BE6913C169D43E_METHOD_4_0F259B42F9C9D110_OFFSET UNITYSDK_OFFSET(0x1D9C9B30)
#define CLASS_4_A0BE6913C169D43E_METHOD_4_D9EB4C1735FE7829_OFFSET UNITYSDK_OFFSET(0x1D9C98F0)
#define CLASS_4_A0BE6913C169D43E__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C9B20)

inline static constexpr unsigned int Class_4_A0BE6913C169D43E_TypeDefinitionIndex = 91872;

class Class_4_A0BE6913C169D43E : public ::Class_3_33E7CA571A0A9377
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0BE6913C169D43E__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* Method_4_D9EB4C1735FE7829()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0BE6913C169D43E_METHOD_4_D9EB4C1735FE7829_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* Method_4_0F259B42F9C9D110()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0BE6913C169D43E_METHOD_4_0F259B42F9C9D110_OFFSET))(this);
	}
};
