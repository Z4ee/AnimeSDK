#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/ReactiveSystem_1.h"

class Class_0_16E4307DCC419505_102;
class Class_0_16E4307DCC419505_103;
class Class_2_40B4F44059E8FC53;
class Class_2_FD51057495DB654F;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2A26CEDEB427C530_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17572C10)
#define CLASS_2_2A26CEDEB427C530_FILTER_OFFSET UNITYSDK_OFFSET(0x17572B20)
#define CLASS_2_2A26CEDEB427C530_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x17572A00)
#define CLASS_2_2A26CEDEB427C530__CTOR_OFFSET UNITYSDK_OFFSET(0x17572980)

inline static constexpr unsigned int Class_2_2A26CEDEB427C530_TypeDefinitionIndex = 40007;

class Class_2_2A26CEDEB427C530 : public ::Entitas::ReactiveSystem_1<::Class_2_FD51057495DB654F*>
{
public:
	::Class_0_16E4307DCC419505_103* Field_2_0; // 0x28
	::Class_0_16E4307DCC419505_102* Field_2_1; // 0x30
	::System::Boolean Field_2_2; // 0x38

	::System::Void _ctor(::Class_0_16E4307DCC419505_103* a1, ::Class_2_40B4F44059E8FC53* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*, ::Class_2_40B4F44059E8FC53*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2A26CEDEB427C530__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Entitas::ICollector_1<::Class_2_FD51057495DB654F*>* GetTrigger(::Entitas::IContext_1<::Class_2_FD51057495DB654F*>* a1)
	{
		return ((::Entitas::ICollector_1<::Class_2_FD51057495DB654F*>*(*)(::PVOID, ::Entitas::IContext_1<::Class_2_FD51057495DB654F*>*))((::PBYTE)hIl2Cpp + CLASS_2_2A26CEDEB427C530_GETTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Filter(::Class_2_FD51057495DB654F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + CLASS_2_2A26CEDEB427C530_FILTER_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>*))((::PBYTE)hIl2Cpp + CLASS_2_2A26CEDEB427C530_EXECUTE_OFFSET))(this, a1);
	}
};
