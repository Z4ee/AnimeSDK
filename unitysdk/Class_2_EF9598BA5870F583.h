#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/ReactiveSystem_1.h"

class Class_0_16E4307DCC419505_1260;
class Class_1_D33B7D6901AE39E9;
class Class_2_FD51057495DB654F;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EF9598BA5870F583_EXECUTE_OFFSET UNITYSDK_OFFSET(0x158E0610)
#define CLASS_2_EF9598BA5870F583_FILTER_OFFSET UNITYSDK_OFFSET(0x158E0550)
#define CLASS_2_EF9598BA5870F583_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x158E0430)
#define CLASS_2_EF9598BA5870F583__CTOR_OFFSET UNITYSDK_OFFSET(0x158E03D0)

inline static constexpr unsigned int Class_2_EF9598BA5870F583_TypeDefinitionIndex = 75367;

class Class_2_EF9598BA5870F583 : public ::Entitas::ReactiveSystem_1<::Class_2_FD51057495DB654F*>
{
public:
	::Class_0_16E4307DCC419505_1260* EGDPBMBBACG; // 0x28

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_0_16E4307DCC419505_1260* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_0_16E4307DCC419505_1260*))((::PBYTE)hIl2Cpp + CLASS_2_EF9598BA5870F583__CTOR_OFFSET))(this, a1, a2);
	}

	::Entitas::ICollector_1<::Class_2_FD51057495DB654F*>* GetTrigger(::Entitas::IContext_1<::Class_2_FD51057495DB654F*>* a1)
	{
		return ((::Entitas::ICollector_1<::Class_2_FD51057495DB654F*>*(*)(::PVOID, ::Entitas::IContext_1<::Class_2_FD51057495DB654F*>*))((::PBYTE)hIl2Cpp + CLASS_2_EF9598BA5870F583_GETTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Filter(::Class_2_FD51057495DB654F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + CLASS_2_EF9598BA5870F583_FILTER_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>*))((::PBYTE)hIl2Cpp + CLASS_2_EF9598BA5870F583_EXECUTE_OFFSET))(this, a1);
	}
};
