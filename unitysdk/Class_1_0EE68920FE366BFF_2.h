#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_0EE68920FE366BFF_2_CLEANUP_OFFSET UNITYSDK_OFFSET(0x10B44890)
#define CLASS_1_0EE68920FE366BFF_2_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10B447C0)
#define CLASS_1_0EE68920FE366BFF_2_METHOD_1_CE7DD1A4F75322E2_OFFSET UNITYSDK_OFFSET(0x10B448E0)
#define CLASS_1_0EE68920FE366BFF_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10B447B0)

inline static constexpr unsigned int Class_1_0EE68920FE366BFF_2_TypeDefinitionIndex = 62838;

class Class_1_0EE68920FE366BFF_2 : public ::System::Object
{
public:
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x10
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_2; // 0x18
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x20

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_2_INITIALIZE_OFFSET))(this);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_2_CLEANUP_OFFSET))(this);
	}

	::System::Void Method_1_CE7DD1A4F75322E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_2_METHOD_1_CE7DD1A4F75322E2_OFFSET))(this);
	}
};
