#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4F9417780723166C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_661077F66F5DB866__CTOR_OFFSET UNITYSDK_OFFSET(0xF60F3A0)

inline static constexpr unsigned int Class_1_661077F66F5DB866_TypeDefinitionIndex = 57486;

class Class_1_661077F66F5DB866 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_661077F66F5DB866__CTOR_OFFSET))(this);
	}
};
