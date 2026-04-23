#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_49FBA10F8A0499B7_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x11AB3C20)
#define CLASS_1_49FBA10F8A0499B7_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x11AB3830)
#define CLASS_1_49FBA10F8A0499B7_METHOD_1_9D0688AE2E08E349_OFFSET UNITYSDK_OFFSET(0x11AB3E50)
#define CLASS_1_49FBA10F8A0499B7_METHOD_1_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x11AB3880)
#define CLASS_1_49FBA10F8A0499B7_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x11AB3B10)
#define CLASS_1_49FBA10F8A0499B7__CTOR_OFFSET UNITYSDK_OFFSET(0x11AB35E0)

inline static constexpr unsigned int Class_1_49FBA10F8A0499B7_TypeDefinitionIndex = 70866;

class Class_1_49FBA10F8A0499B7 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_4; // 0x10
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x18
	::Entitas::ICollector_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0x20
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_2; // 0x28
	::Class_2_F47F7A3F5E97970D* Field_1_0; // 0x30

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_49FBA10F8A0499B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FBA10F8A0499B7_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FBA10F8A0499B7_TEARDOWN_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FBA10F8A0499B7_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FBA10F8A0499B7_METHOD_1_A61A196E6AD5766D_OFFSET))(this);
	}

	::System::Void Method_1_9D0688AE2E08E349()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FBA10F8A0499B7_METHOD_1_9D0688AE2E08E349_OFFSET))(this);
	}
};
