#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_EF14D1B03392412E_EXECUTE_OFFSET UNITYSDK_OFFSET(0x14C534A0)
#define CLASS_1_EF14D1B03392412E_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x14C52AD0)
#define CLASS_1_EF14D1B03392412E_METHOD_1_A0C1D60A13C360A1_OFFSET UNITYSDK_OFFSET(0x14C52DC0)
#define CLASS_1_EF14D1B03392412E_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x14C53350)
#define CLASS_1_EF14D1B03392412E__CTOR_OFFSET UNITYSDK_OFFSET(0x14C528C0)

inline static constexpr unsigned int Class_1_EF14D1B03392412E_TypeDefinitionIndex = 76650;

class Class_1_EF14D1B03392412E : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* KFBHHFIFHCJ; // 0x10
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x18
	::Class_1_B4357A1C72BABC6B* FKINCGODJEP; // 0x20
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* GGLEFKBINMC; // 0x28
	::Entitas::ICollector_1<::Class_2_B9E8C2EEAA5C96EC*>* OOGGEJFJHIF; // 0x30

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_EF14D1B03392412E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF14D1B03392412E_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF14D1B03392412E_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF14D1B03392412E_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_A0C1D60A13C360A1(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_EF14D1B03392412E_METHOD_1_A0C1D60A13C360A1_OFFSET))(this, a1);
	}
};
