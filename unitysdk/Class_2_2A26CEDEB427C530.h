#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/ReactiveSystem_1.h"

class Class_0_16E4307DCC419505_84;
class Class_0_16E4307DCC419505_85;
class Class_2_40B4F44059E8FC53;
class Class_2_9850514C0F89B91A;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2A26CEDEB427C530_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17E69810)
#define CLASS_2_2A26CEDEB427C530_FILTER_OFFSET UNITYSDK_OFFSET(0x17E696F0)
#define CLASS_2_2A26CEDEB427C530_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x17E69550)
#define CLASS_2_2A26CEDEB427C530__CTOR_OFFSET UNITYSDK_OFFSET(0x17E694D0)

inline static constexpr unsigned int Class_2_2A26CEDEB427C530_TypeDefinitionIndex = 38431;

class Class_2_2A26CEDEB427C530 : public ::Entitas::ReactiveSystem_1<::Class_2_9850514C0F89B91A*>
{
public:
	::Class_0_16E4307DCC419505_84* Field_2_1; // 0x28
	::Class_0_16E4307DCC419505_85* Field_2_0; // 0x30
	::System::Boolean Field_2_2; // 0x38

	::System::Void _ctor(::Class_0_16E4307DCC419505_85* a1, ::Class_2_40B4F44059E8FC53* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_85*, ::Class_2_40B4F44059E8FC53*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2A26CEDEB427C530__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Entitas::ICollector_1<::Class_2_9850514C0F89B91A*>* GetTrigger(::Entitas::IContext_1<::Class_2_9850514C0F89B91A*>* a1)
	{
		return ((::Entitas::ICollector_1<::Class_2_9850514C0F89B91A*>*(*)(::PVOID, ::Entitas::IContext_1<::Class_2_9850514C0F89B91A*>*))((::PBYTE)hIl2Cpp + CLASS_2_2A26CEDEB427C530_GETTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Filter(::Class_2_9850514C0F89B91A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + CLASS_2_2A26CEDEB427C530_FILTER_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Collections::Generic::List_1<::Class_2_9850514C0F89B91A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_9850514C0F89B91A*>*))((::PBYTE)hIl2Cpp + CLASS_2_2A26CEDEB427C530_EXECUTE_OFFSET))(this, a1);
	}
};
