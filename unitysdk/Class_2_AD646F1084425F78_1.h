#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/ReactiveSystem_1.h"

class Class_0_16E4307DCC419505_253;
class Class_1_D33B7D6901AE39E9;
class Class_2_037EA204E69EBC75;
class Class_2_C386A74518D39C8B;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AD646F1084425F78_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C4F2780)
#define CLASS_2_AD646F1084425F78_1_FILTER_OFFSET UNITYSDK_OFFSET(0x1C4F26C0)
#define CLASS_2_AD646F1084425F78_1_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C4F25A0)
#define CLASS_2_AD646F1084425F78_1_METHOD_2_A6F3A35668524A0C_OFFSET UNITYSDK_OFFSET(0x1C4F29B0)
#define CLASS_2_AD646F1084425F78_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F2530)

inline static constexpr unsigned int Class_2_AD646F1084425F78_1_TypeDefinitionIndex = 41198;

class Class_2_AD646F1084425F78_1 : public ::Entitas::ReactiveSystem_1<::Class_2_037EA204E69EBC75*>
{
public:
	::Class_0_16E4307DCC419505_253* HINDODOFCLK; // 0x28
	::Class_1_D33B7D6901AE39E9* FKINCGODJEP; // 0x30

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_2_C386A74518D39C8B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_2_C386A74518D39C8B*))((::PBYTE)hIl2Cpp + CLASS_2_AD646F1084425F78_1__CTOR_OFFSET))(this, a1, a2);
	}

	::Entitas::ICollector_1<::Class_2_037EA204E69EBC75*>* GetTrigger(::Entitas::IContext_1<::Class_2_037EA204E69EBC75*>* a1)
	{
		return ((::Entitas::ICollector_1<::Class_2_037EA204E69EBC75*>*(*)(::PVOID, ::Entitas::IContext_1<::Class_2_037EA204E69EBC75*>*))((::PBYTE)hIl2Cpp + CLASS_2_AD646F1084425F78_1_GETTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Filter(::Class_2_037EA204E69EBC75* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_037EA204E69EBC75*))((::PBYTE)hIl2Cpp + CLASS_2_AD646F1084425F78_1_FILTER_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Collections::Generic::List_1<::Class_2_037EA204E69EBC75*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_037EA204E69EBC75*>*))((::PBYTE)hIl2Cpp + CLASS_2_AD646F1084425F78_1_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A6F3A35668524A0C(::Class_2_037EA204E69EBC75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_037EA204E69EBC75*))((::PBYTE)hIl2Cpp + CLASS_2_AD646F1084425F78_1_METHOD_2_A6F3A35668524A0C_OFFSET))(this, a1);
	}
};
