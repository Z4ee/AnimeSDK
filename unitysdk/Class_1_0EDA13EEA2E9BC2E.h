#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_0EDA13EEA2E9BC2E_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCD2B340)
#define CLASS_1_0EDA13EEA2E9BC2E_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xCD2B240)
#define CLASS_1_0EDA13EEA2E9BC2E_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0xCD2B6E0)
#define CLASS_1_0EDA13EEA2E9BC2E_METHOD_1_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0xCD2BA10)
#define CLASS_1_0EDA13EEA2E9BC2E_METHOD_1_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0xCD2B740)
#define CLASS_1_0EDA13EEA2E9BC2E_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0xCD2B390)
#define CLASS_1_0EDA13EEA2E9BC2E_METHOD_1_F7EFA1C81CB780E3_OFFSET UNITYSDK_OFFSET(0xCD2BF30)
#define CLASS_1_0EDA13EEA2E9BC2E_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xCD2BE20)
#define CLASS_1_0EDA13EEA2E9BC2E__CTOR_OFFSET UNITYSDK_OFFSET(0xCD2AF10)

inline static constexpr unsigned int Class_1_0EDA13EEA2E9BC2E_TypeDefinitionIndex = 70660;

class Class_1_0EDA13EEA2E9BC2E : public ::System::Object
{
public:
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x10
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0x18
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_2; // 0x20
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x28

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_0EDA13EEA2E9BC2E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EDA13EEA2E9BC2E_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EDA13EEA2E9BC2E_EXECUTE_OFFSET))(this);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EDA13EEA2E9BC2E_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EDA13EEA2E9BC2E_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_F7EFA1C81CB780E3(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0EDA13EEA2E9BC2E_METHOD_1_F7EFA1C81CB780E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EDA13EEA2E9BC2E_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_1_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EDA13EEA2E9BC2E_METHOD_1_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_1_3DA91C9B57824EE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EDA13EEA2E9BC2E_METHOD_1_3DA91C9B57824EE6_OFFSET))(this);
	}
};
