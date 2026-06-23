#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_337F77F1CC4B245B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_661077F66F5DB866_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1345D730)

inline static constexpr unsigned int Class_1_661077F66F5DB866_1_TypeDefinitionIndex = 81455;

class Class_1_661077F66F5DB866_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_337F77F1CC4B245B*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_661077F66F5DB866_1__CTOR_OFFSET))(this);
	}
};
