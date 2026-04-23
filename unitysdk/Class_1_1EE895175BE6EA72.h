#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_1EE895175BE6EA72_EXECUTE_OFFSET UNITYSDK_OFFSET(0x11A77710)
#define CLASS_1_1EE895175BE6EA72_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x11A76DA0)
#define CLASS_1_1EE895175BE6EA72_METHOD_1_2C1C2A8E63DB0F10_OFFSET UNITYSDK_OFFSET(0x11A77050)
#define CLASS_1_1EE895175BE6EA72_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x11A77610)
#define CLASS_1_1EE895175BE6EA72__CTOR_OFFSET UNITYSDK_OFFSET(0x11A76B40)

inline static constexpr unsigned int Class_1_1EE895175BE6EA72_TypeDefinitionIndex = 70829;

class Class_1_1EE895175BE6EA72 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0x10
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x18
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x20
	::Entitas::ICollector_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_4; // 0x28
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_2; // 0x30

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_1EE895175BE6EA72__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EE895175BE6EA72_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EE895175BE6EA72_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EE895175BE6EA72_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_2C1C2A8E63DB0F10(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_1EE895175BE6EA72_METHOD_1_2C1C2A8E63DB0F10_OFFSET))(this, a1);
	}
};
