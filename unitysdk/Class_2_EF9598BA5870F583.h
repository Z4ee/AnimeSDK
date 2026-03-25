#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/ReactiveSystem_1.h"

class Class_0_16E4307DCC419505_975;
class Class_1_867B6CE75953535A;
class Class_2_9850514C0F89B91A;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EF9598BA5870F583_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8DB8410)
#define CLASS_2_EF9598BA5870F583_FILTER_OFFSET UNITYSDK_OFFSET(0x8DB8340)
#define CLASS_2_EF9598BA5870F583_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x8DB81A0)
#define CLASS_2_EF9598BA5870F583__CTOR_OFFSET UNITYSDK_OFFSET(0x8DB8140)

inline static constexpr unsigned int Class_2_EF9598BA5870F583_TypeDefinitionIndex = 61814;

class Class_2_EF9598BA5870F583 : public ::Entitas::ReactiveSystem_1<::Class_2_9850514C0F89B91A*>
{
public:
	::Class_0_16E4307DCC419505_975* Field_2_0; // 0x28

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_0_16E4307DCC419505_975* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_0_16E4307DCC419505_975*))((::PBYTE)hIl2Cpp + CLASS_2_EF9598BA5870F583__CTOR_OFFSET))(this, a1, a2);
	}

	::Entitas::ICollector_1<::Class_2_9850514C0F89B91A*>* GetTrigger(::Entitas::IContext_1<::Class_2_9850514C0F89B91A*>* a1)
	{
		return ((::Entitas::ICollector_1<::Class_2_9850514C0F89B91A*>*(*)(::PVOID, ::Entitas::IContext_1<::Class_2_9850514C0F89B91A*>*))((::PBYTE)hIl2Cpp + CLASS_2_EF9598BA5870F583_GETTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Filter(::Class_2_9850514C0F89B91A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + CLASS_2_EF9598BA5870F583_FILTER_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Collections::Generic::List_1<::Class_2_9850514C0F89B91A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_9850514C0F89B91A*>*))((::PBYTE)hIl2Cpp + CLASS_2_EF9598BA5870F583_EXECUTE_OFFSET))(this, a1);
	}
};
