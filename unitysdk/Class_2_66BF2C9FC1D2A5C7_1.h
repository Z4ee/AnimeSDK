#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/ReactiveSystem_1.h"

class Class_0_16E4307DCC419505_193;
class Class_1_D33B7D6901AE39E9;
class Class_2_FD51057495DB654F;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_66BF2C9FC1D2A5C7_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18CC20C0)
#define CLASS_2_66BF2C9FC1D2A5C7_1_FILTER_OFFSET UNITYSDK_OFFSET(0x18CC1FC0)
#define CLASS_2_66BF2C9FC1D2A5C7_1_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x18CC1EA0)
#define CLASS_2_66BF2C9FC1D2A5C7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC1E20)

inline static constexpr unsigned int Class_2_66BF2C9FC1D2A5C7_1_TypeDefinitionIndex = 39065;

class Class_2_66BF2C9FC1D2A5C7_1 : public ::Entitas::ReactiveSystem_1<::Class_2_FD51057495DB654F*>
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_193*>* Field_2_0; // 0x28

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + CLASS_2_66BF2C9FC1D2A5C7_1__CTOR_OFFSET))(this, a1);
	}

	::Entitas::ICollector_1<::Class_2_FD51057495DB654F*>* GetTrigger(::Entitas::IContext_1<::Class_2_FD51057495DB654F*>* a1)
	{
		return ((::Entitas::ICollector_1<::Class_2_FD51057495DB654F*>*(*)(::PVOID, ::Entitas::IContext_1<::Class_2_FD51057495DB654F*>*))((::PBYTE)hIl2Cpp + CLASS_2_66BF2C9FC1D2A5C7_1_GETTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Filter(::Class_2_FD51057495DB654F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + CLASS_2_66BF2C9FC1D2A5C7_1_FILTER_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>*))((::PBYTE)hIl2Cpp + CLASS_2_66BF2C9FC1D2A5C7_1_EXECUTE_OFFSET))(this, a1);
	}
};
