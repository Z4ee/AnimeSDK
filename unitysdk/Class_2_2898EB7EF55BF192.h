#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/ReactiveSystem_1.h"

class Class_1_867B6CE75953535A;
class Class_2_9850514C0F89B91A;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2898EB7EF55BF192_EXECUTE_OFFSET UNITYSDK_OFFSET(0x11B72B60)
#define CLASS_2_2898EB7EF55BF192_FILTER_OFFSET UNITYSDK_OFFSET(0x11B72A30)
#define CLASS_2_2898EB7EF55BF192_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x11B72930)
#define CLASS_2_2898EB7EF55BF192__CTOR_OFFSET UNITYSDK_OFFSET(0x11B728E0)

inline static constexpr unsigned int Class_2_2898EB7EF55BF192_TypeDefinitionIndex = 69720;

class Class_2_2898EB7EF55BF192 : public ::Entitas::ReactiveSystem_1<::Class_2_9850514C0F89B91A*>
{
public:
	::System::Void _ctor(::Class_1_867B6CE75953535A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*))((::PBYTE)hIl2Cpp + CLASS_2_2898EB7EF55BF192__CTOR_OFFSET))(this, a1);
	}

	::Entitas::ICollector_1<::Class_2_9850514C0F89B91A*>* GetTrigger(::Entitas::IContext_1<::Class_2_9850514C0F89B91A*>* a1)
	{
		return ((::Entitas::ICollector_1<::Class_2_9850514C0F89B91A*>*(*)(::PVOID, ::Entitas::IContext_1<::Class_2_9850514C0F89B91A*>*))((::PBYTE)hIl2Cpp + CLASS_2_2898EB7EF55BF192_GETTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Filter(::Class_2_9850514C0F89B91A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + CLASS_2_2898EB7EF55BF192_FILTER_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Collections::Generic::List_1<::Class_2_9850514C0F89B91A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_9850514C0F89B91A*>*))((::PBYTE)hIl2Cpp + CLASS_2_2898EB7EF55BF192_EXECUTE_OFFSET))(this, a1);
	}
};
