#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/ReactiveSystem_1.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_FD51057495DB654F;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C3E21B9C745D0B91_2_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17AD5270)
#define CLASS_2_C3E21B9C745D0B91_2_FILTER_OFFSET UNITYSDK_OFFSET(0x17AD5110)
#define CLASS_2_C3E21B9C745D0B91_2_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x17AD5040)
#define CLASS_2_C3E21B9C745D0B91_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD4FE0)

inline static constexpr unsigned int Class_2_C3E21B9C745D0B91_2_TypeDefinitionIndex = 72057;

class Class_2_C3E21B9C745D0B91_2 : public ::Entitas::ReactiveSystem_1<::Class_2_FD51057495DB654F*>
{
public:
	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + CLASS_2_C3E21B9C745D0B91_2__CTOR_OFFSET))(this, a1);
	}

	::Entitas::ICollector_1<::Class_2_FD51057495DB654F*>* GetTrigger(::Entitas::IContext_1<::Class_2_FD51057495DB654F*>* a1)
	{
		return ((::Entitas::ICollector_1<::Class_2_FD51057495DB654F*>*(*)(::PVOID, ::Entitas::IContext_1<::Class_2_FD51057495DB654F*>*))((::PBYTE)hIl2Cpp + CLASS_2_C3E21B9C745D0B91_2_GETTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Filter(::Class_2_FD51057495DB654F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + CLASS_2_C3E21B9C745D0B91_2_FILTER_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>*))((::PBYTE)hIl2Cpp + CLASS_2_C3E21B9C745D0B91_2_EXECUTE_OFFSET))(this, a1);
	}
};
