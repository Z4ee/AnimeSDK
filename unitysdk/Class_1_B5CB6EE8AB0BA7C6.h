#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_002DEDC9C18A055B;
class Class_1_02C9F7D26CD84B5F;
class Class_1_41DC55EACF71282F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B5CB6EE8AB0BA7C6_METHOD_1_3EF2C7CD9B801B76_OFFSET UNITYSDK_OFFSET(0xB480850)
#define CLASS_1_B5CB6EE8AB0BA7C6_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0xB4807E0)
#define CLASS_1_B5CB6EE8AB0BA7C6__CTOR_OFFSET UNITYSDK_OFFSET(0xB480D00)

inline static constexpr unsigned int Class_1_B5CB6EE8AB0BA7C6_TypeDefinitionIndex = 80609;

class Class_1_B5CB6EE8AB0BA7C6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5CB6EE8AB0BA7C6__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_DE45EA3A177BC33B(::Class_1_002DEDC9C18A055B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_002DEDC9C18A055B*))((::PBYTE)hIl2Cpp + CLASS_1_B5CB6EE8AB0BA7C6_METHOD_1_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_41DC55EACF71282F*>* Method_1_3EF2C7CD9B801B76(::Class_1_002DEDC9C18A055B* a1, ::Class_1_02C9F7D26CD84B5F* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_41DC55EACF71282F*>*(*)(::PVOID, ::Class_1_002DEDC9C18A055B*, ::Class_1_02C9F7D26CD84B5F*))((::PBYTE)hIl2Cpp + CLASS_1_B5CB6EE8AB0BA7C6_METHOD_1_3EF2C7CD9B801B76_OFFSET))(this, a1, a2);
	}
};
