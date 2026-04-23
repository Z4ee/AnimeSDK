#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/ReactiveSystem_1.h"

class Class_0_16E4307DCC419505_181;
class Class_1_867B6CE75953535A;
class Class_2_9850514C0F89B91A;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_41EFA256B3D1EDE3_EXECUTE_OFFSET UNITYSDK_OFFSET(0x180831A0)
#define CLASS_2_41EFA256B3D1EDE3_FILTER_OFFSET UNITYSDK_OFFSET(0x180830F0)
#define CLASS_2_41EFA256B3D1EDE3_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x18082F50)
#define CLASS_2_41EFA256B3D1EDE3__CTOR_OFFSET UNITYSDK_OFFSET(0x18082E00)

inline static constexpr unsigned int Class_2_41EFA256B3D1EDE3_TypeDefinitionIndex = 38300;

class Class_2_41EFA256B3D1EDE3 : public ::Entitas::ReactiveSystem_1<::Class_2_9850514C0F89B91A*>
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_181*>* Field_2_2; // 0x28
	::Entitas::IGroup_1<::Class_2_9850514C0F89B91A*>* Field_2_0; // 0x30
	::System::Collections::Generic::List_1<::Class_2_9850514C0F89B91A*>* Field_2_1; // 0x38

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*))((::PBYTE)hIl2Cpp + CLASS_2_41EFA256B3D1EDE3__CTOR_OFFSET))(this, a1);
	}

	::Entitas::ICollector_1<::Class_2_9850514C0F89B91A*>* GetTrigger(::Entitas::IContext_1<::Class_2_9850514C0F89B91A*>* a1)
	{
		return ((::Entitas::ICollector_1<::Class_2_9850514C0F89B91A*>*(*)(::PVOID, ::Entitas::IContext_1<::Class_2_9850514C0F89B91A*>*))((::PBYTE)hIl2Cpp + CLASS_2_41EFA256B3D1EDE3_GETTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Filter(::Class_2_9850514C0F89B91A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + CLASS_2_41EFA256B3D1EDE3_FILTER_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Collections::Generic::List_1<::Class_2_9850514C0F89B91A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_9850514C0F89B91A*>*))((::PBYTE)hIl2Cpp + CLASS_2_41EFA256B3D1EDE3_EXECUTE_OFFSET))(this, a1);
	}
};
