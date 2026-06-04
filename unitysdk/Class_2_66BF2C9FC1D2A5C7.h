#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/ReactiveSystem_1.h"

class Class_0_16E4307DCC419505_192;
class Class_1_D33B7D6901AE39E9;
class Class_2_1C9DAFE8E76EE3E9;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_66BF2C9FC1D2A5C7_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18D77240)
#define CLASS_2_66BF2C9FC1D2A5C7_FILTER_OFFSET UNITYSDK_OFFSET(0x18D77140)
#define CLASS_2_66BF2C9FC1D2A5C7_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x18D77020)
#define CLASS_2_66BF2C9FC1D2A5C7__CTOR_OFFSET UNITYSDK_OFFSET(0x18D76FA0)

inline static constexpr unsigned int Class_2_66BF2C9FC1D2A5C7_TypeDefinitionIndex = 39064;

class Class_2_66BF2C9FC1D2A5C7 : public ::Entitas::ReactiveSystem_1<::Class_2_1C9DAFE8E76EE3E9*>
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_192*>* Field_2_0; // 0x28

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + CLASS_2_66BF2C9FC1D2A5C7__CTOR_OFFSET))(this, a1);
	}

	::Entitas::ICollector_1<::Class_2_1C9DAFE8E76EE3E9*>* GetTrigger(::Entitas::IContext_1<::Class_2_1C9DAFE8E76EE3E9*>* a1)
	{
		return ((::Entitas::ICollector_1<::Class_2_1C9DAFE8E76EE3E9*>*(*)(::PVOID, ::Entitas::IContext_1<::Class_2_1C9DAFE8E76EE3E9*>*))((::PBYTE)hIl2Cpp + CLASS_2_66BF2C9FC1D2A5C7_GETTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Filter(::Class_2_1C9DAFE8E76EE3E9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1C9DAFE8E76EE3E9*))((::PBYTE)hIl2Cpp + CLASS_2_66BF2C9FC1D2A5C7_FILTER_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Collections::Generic::List_1<::Class_2_1C9DAFE8E76EE3E9*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_1C9DAFE8E76EE3E9*>*))((::PBYTE)hIl2Cpp + CLASS_2_66BF2C9FC1D2A5C7_EXECUTE_OFFSET))(this, a1);
	}
};
