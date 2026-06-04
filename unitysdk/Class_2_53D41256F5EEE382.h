#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/ReactiveSystem_1.h"

class Class_0_16E4307DCC419505_83;
class Class_0_16E4307DCC419505_84;
class Class_2_40B4F44059E8FC53;
class Class_2_FD51057495DB654F;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_53D41256F5EEE382_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18C5A950)
#define CLASS_2_53D41256F5EEE382_FILTER_OFFSET UNITYSDK_OFFSET(0x18C5A7E0)
#define CLASS_2_53D41256F5EEE382_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x18C5A6C0)
#define CLASS_2_53D41256F5EEE382__CTOR_OFFSET UNITYSDK_OFFSET(0x18C5A650)

inline static constexpr unsigned int Class_2_53D41256F5EEE382_TypeDefinitionIndex = 39199;

class Class_2_53D41256F5EEE382 : public ::Entitas::ReactiveSystem_1<::Class_2_FD51057495DB654F*>
{
public:
	::Class_0_16E4307DCC419505_84* Field_2_0; // 0x28
	::Class_0_16E4307DCC419505_83* Field_2_1; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_84* a1, ::Class_2_40B4F44059E8FC53* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_84*, ::Class_2_40B4F44059E8FC53*))((::PBYTE)hIl2Cpp + CLASS_2_53D41256F5EEE382__CTOR_OFFSET))(this, a1, a2);
	}

	::Entitas::ICollector_1<::Class_2_FD51057495DB654F*>* GetTrigger(::Entitas::IContext_1<::Class_2_FD51057495DB654F*>* a1)
	{
		return ((::Entitas::ICollector_1<::Class_2_FD51057495DB654F*>*(*)(::PVOID, ::Entitas::IContext_1<::Class_2_FD51057495DB654F*>*))((::PBYTE)hIl2Cpp + CLASS_2_53D41256F5EEE382_GETTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Filter(::Class_2_FD51057495DB654F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + CLASS_2_53D41256F5EEE382_FILTER_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>*))((::PBYTE)hIl2Cpp + CLASS_2_53D41256F5EEE382_EXECUTE_OFFSET))(this, a1);
	}
};
