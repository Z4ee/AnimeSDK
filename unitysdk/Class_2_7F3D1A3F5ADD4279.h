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

#define CLASS_2_7F3D1A3F5ADD4279_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C40D390)
#define CLASS_2_7F3D1A3F5ADD4279_FILTER_OFFSET UNITYSDK_OFFSET(0x1C40D2E0)
#define CLASS_2_7F3D1A3F5ADD4279_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C40D1C0)
#define CLASS_2_7F3D1A3F5ADD4279__CTOR_OFFSET UNITYSDK_OFFSET(0x1C40D090)

inline static constexpr unsigned int Class_2_7F3D1A3F5ADD4279_TypeDefinitionIndex = 40745;

class Class_2_7F3D1A3F5ADD4279 : public ::Entitas::ReactiveSystem_1<::Class_2_FD51057495DB654F*>
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_210*>* BGKHCJPFFLN; // 0x28
	::Entitas::IGroup_1<::Class_2_FD51057495DB654F*>* PMBNNOOFAOM; // 0x30
	::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>* DBNOOEHAEAC; // 0x38

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + CLASS_2_7F3D1A3F5ADD4279__CTOR_OFFSET))(this, a1);
	}

	::Entitas::ICollector_1<::Class_2_FD51057495DB654F*>* GetTrigger(::Entitas::IContext_1<::Class_2_FD51057495DB654F*>* a1)
	{
		return ((::Entitas::ICollector_1<::Class_2_FD51057495DB654F*>*(*)(::PVOID, ::Entitas::IContext_1<::Class_2_FD51057495DB654F*>*))((::PBYTE)hIl2Cpp + CLASS_2_7F3D1A3F5ADD4279_GETTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Filter(::Class_2_FD51057495DB654F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + CLASS_2_7F3D1A3F5ADD4279_FILTER_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>*))((::PBYTE)hIl2Cpp + CLASS_2_7F3D1A3F5ADD4279_EXECUTE_OFFSET))(this, a1);
	}
};
