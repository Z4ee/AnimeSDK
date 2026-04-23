#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_F45B885E10D907A9_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA076B20)
#define CLASS_1_F45B885E10D907A9_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA076590)
#define CLASS_1_F45B885E10D907A9_METHOD_1_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0xA076B70)
#define CLASS_1_F45B885E10D907A9_METHOD_1_2B0E121201CAF711_OFFSET UNITYSDK_OFFSET(0xA076F70)
#define CLASS_1_F45B885E10D907A9_METHOD_1_A3952D4D9324402B_OFFSET UNITYSDK_OFFSET(0xA0767B0)
#define CLASS_1_F45B885E10D907A9_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xA076E80)
#define CLASS_1_F45B885E10D907A9__CTOR_OFFSET UNITYSDK_OFFSET(0xA076300)

inline static constexpr unsigned int Class_1_F45B885E10D907A9_TypeDefinitionIndex = 70828;

class Class_1_F45B885E10D907A9 : public ::System::Object
{
public:
	::Entitas::ICollector_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0x10
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x18
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x20
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_2; // 0x28

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_F45B885E10D907A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F45B885E10D907A9_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F45B885E10D907A9_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F45B885E10D907A9_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_A3952D4D9324402B(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_F45B885E10D907A9_METHOD_1_A3952D4D9324402B_OFFSET))(this, a1);
	}

	::System::Void Method_1_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F45B885E10D907A9_METHOD_1_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_1_2B0E121201CAF711(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F45B885E10D907A9_METHOD_1_2B0E121201CAF711_OFFSET))(this, a1, a2);
	}
};
