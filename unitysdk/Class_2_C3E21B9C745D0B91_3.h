#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/ReactiveSystem_1.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_FD51057495DB654F;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C3E21B9C745D0B91_3_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17E1F680)
#define CLASS_2_C3E21B9C745D0B91_3_FILTER_OFFSET UNITYSDK_OFFSET(0x17E1F580)
#define CLASS_2_C3E21B9C745D0B91_3_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x17E1F4B0)
#define CLASS_2_C3E21B9C745D0B91_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17E1F450)

inline static constexpr unsigned int Class_2_C3E21B9C745D0B91_3_TypeDefinitionIndex = 75367;

class Class_2_C3E21B9C745D0B91_3 : public ::Entitas::ReactiveSystem_1<::Class_2_FD51057495DB654F*>
{
public:
	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + CLASS_2_C3E21B9C745D0B91_3__CTOR_OFFSET))(this, a1);
	}

	::Entitas::ICollector_1<::Class_2_FD51057495DB654F*>* GetTrigger(::Entitas::IContext_1<::Class_2_FD51057495DB654F*>* a1)
	{
		return ((::Entitas::ICollector_1<::Class_2_FD51057495DB654F*>*(*)(::PVOID, ::Entitas::IContext_1<::Class_2_FD51057495DB654F*>*))((::PBYTE)hIl2Cpp + CLASS_2_C3E21B9C745D0B91_3_GETTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Filter(::Class_2_FD51057495DB654F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + CLASS_2_C3E21B9C745D0B91_3_FILTER_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>*))((::PBYTE)hIl2Cpp + CLASS_2_C3E21B9C745D0B91_3_EXECUTE_OFFSET))(this, a1);
	}
};
