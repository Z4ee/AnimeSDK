#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/ReactiveSystem_1.h"

class Class_0_16E4307DCC419505_180;
class Class_1_867B6CE75953535A;
class Class_2_9850514C0F89B91A;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D3822A7AB5A19402_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17EA5330)
#define CLASS_2_D3822A7AB5A19402_FILTER_OFFSET UNITYSDK_OFFSET(0x17EA5280)
#define CLASS_2_D3822A7AB5A19402_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x17EA50E0)
#define CLASS_2_D3822A7AB5A19402__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA4F90)

inline static constexpr unsigned int Class_2_D3822A7AB5A19402_TypeDefinitionIndex = 38299;

class Class_2_D3822A7AB5A19402 : public ::Entitas::ReactiveSystem_1<::Class_2_9850514C0F89B91A*>
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_180*>* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::Class_2_9850514C0F89B91A*>* Field_2_1; // 0x30
	::Entitas::IGroup_1<::Class_2_9850514C0F89B91A*>* Field_2_0; // 0x38

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*))((::PBYTE)hIl2Cpp + CLASS_2_D3822A7AB5A19402__CTOR_OFFSET))(this, a1);
	}

	::Entitas::ICollector_1<::Class_2_9850514C0F89B91A*>* GetTrigger(::Entitas::IContext_1<::Class_2_9850514C0F89B91A*>* a1)
	{
		return ((::Entitas::ICollector_1<::Class_2_9850514C0F89B91A*>*(*)(::PVOID, ::Entitas::IContext_1<::Class_2_9850514C0F89B91A*>*))((::PBYTE)hIl2Cpp + CLASS_2_D3822A7AB5A19402_GETTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Filter(::Class_2_9850514C0F89B91A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + CLASS_2_D3822A7AB5A19402_FILTER_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Collections::Generic::List_1<::Class_2_9850514C0F89B91A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_9850514C0F89B91A*>*))((::PBYTE)hIl2Cpp + CLASS_2_D3822A7AB5A19402_EXECUTE_OFFSET))(this, a1);
	}
};
