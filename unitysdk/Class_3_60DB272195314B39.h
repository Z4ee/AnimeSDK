#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7134DCF9ECF7587A.h"

namespace RPG::GameCore { class SetNavigationTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_60DB272195314B39_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x906A9B0)
#define CLASS_3_60DB272195314B39_METHOD_3_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x906A560)
#define CLASS_3_60DB272195314B39_METHOD_3_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x906A880)
#define CLASS_3_60DB272195314B39_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x906A4B0)
#define CLASS_3_60DB272195314B39_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x906A830)
#define CLASS_3_60DB272195314B39__CTOR_OFFSET UNITYSDK_OFFSET(0x906A4A0)
#define CLASS_3_60DB272195314B39___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x906A940)

inline static constexpr unsigned int Class_3_60DB272195314B39_TypeDefinitionIndex = 53988;

class Class_3_60DB272195314B39 : public ::Class_2_7134DCF9ECF7587A
{
public:
	::RPG::GameCore::SetNavigationTarget* Field_3_0; // 0x28
	::RPG::GameCore::TaskContext* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetNavigationTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetNavigationTarget*))((::PBYTE)hIl2Cpp + CLASS_3_60DB272195314B39__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60DB272195314B39_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60DB272195314B39_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_60DB272195314B39_METHOD_3_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_3_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60DB272195314B39_METHOD_3_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60DB272195314B39___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_60DB272195314B39_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
