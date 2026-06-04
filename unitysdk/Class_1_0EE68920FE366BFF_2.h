#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_0EE68920FE366BFF_2_CLEANUP_OFFSET UNITYSDK_OFFSET(0xA42EE90)
#define CLASS_1_0EE68920FE366BFF_2_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA42EDC0)
#define CLASS_1_0EE68920FE366BFF_2_METHOD_1_C4EFD31239F98A71_OFFSET UNITYSDK_OFFSET(0xA42EEE0)
#define CLASS_1_0EE68920FE366BFF_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA42EDB0)

inline static constexpr unsigned int Class_1_0EE68920FE366BFF_2_TypeDefinitionIndex = 71695;

class Class_1_0EE68920FE366BFF_2 : public ::System::Object
{
public:
	::Class_3_1E4F9B0ED3BF21DE* Field_1_0; // 0x10
	::Class_1_B4357A1C72BABC6B* Field_1_1; // 0x18
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_2_INITIALIZE_OFFSET))(this);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_2_CLEANUP_OFFSET))(this);
	}

	::System::Void Method_1_C4EFD31239F98A71()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_2_METHOD_1_C4EFD31239F98A71_OFFSET))(this);
	}
};
