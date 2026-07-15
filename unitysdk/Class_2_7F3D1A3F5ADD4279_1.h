#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/ReactiveSystem_1.h"

class Class_0_16E4307DCC419505_210;
class Class_1_D33B7D6901AE39E9;
class Class_2_FD51057495DB654F;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7F3D1A3F5ADD4279_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x180F79B0)
#define CLASS_2_7F3D1A3F5ADD4279_1_FILTER_OFFSET UNITYSDK_OFFSET(0x180F7900)
#define CLASS_2_7F3D1A3F5ADD4279_1_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x180F77E0)
#define CLASS_2_7F3D1A3F5ADD4279_1__CTOR_OFFSET UNITYSDK_OFFSET(0x180F76B0)

inline static constexpr unsigned int Class_2_7F3D1A3F5ADD4279_1_TypeDefinitionIndex = 39871;

class Class_2_7F3D1A3F5ADD4279_1 : public ::Entitas::ReactiveSystem_1<::Class_2_FD51057495DB654F*>
{
public:
	::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_210*>* Field_2_1; // 0x30
	::Entitas::IGroup_1<::Class_2_FD51057495DB654F*>* Field_2_2; // 0x38

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + CLASS_2_7F3D1A3F5ADD4279_1__CTOR_OFFSET))(this, a1);
	}

	::Entitas::ICollector_1<::Class_2_FD51057495DB654F*>* GetTrigger(::Entitas::IContext_1<::Class_2_FD51057495DB654F*>* a1)
	{
		return ((::Entitas::ICollector_1<::Class_2_FD51057495DB654F*>*(*)(::PVOID, ::Entitas::IContext_1<::Class_2_FD51057495DB654F*>*))((::PBYTE)hIl2Cpp + CLASS_2_7F3D1A3F5ADD4279_1_GETTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Filter(::Class_2_FD51057495DB654F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + CLASS_2_7F3D1A3F5ADD4279_1_FILTER_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>*))((::PBYTE)hIl2Cpp + CLASS_2_7F3D1A3F5ADD4279_1_EXECUTE_OFFSET))(this, a1);
	}
};
