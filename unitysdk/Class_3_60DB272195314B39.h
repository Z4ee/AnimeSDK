#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7134DCF9ECF7587A.h"

namespace RPG::GameCore { class SetNavigationTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_60DB272195314B39_METHOD_3_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0xB523240)
#define CLASS_3_60DB272195314B39_METHOD_3_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xB522E10)
#define CLASS_3_60DB272195314B39_METHOD_3_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0xB523120)
#define CLASS_3_60DB272195314B39_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB522D60)
#define CLASS_3_60DB272195314B39_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5230D0)
#define CLASS_3_60DB272195314B39__CTOR_OFFSET UNITYSDK_OFFSET(0xB522D50)
#define CLASS_3_60DB272195314B39___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5231E0)

inline static constexpr unsigned int Class_3_60DB272195314B39_TypeDefinitionIndex = 54713;

class Class_3_60DB272195314B39 : public ::Class_2_7134DCF9ECF7587A
{
public:
	::RPG::GameCore::TaskContext* Field_3_0; // 0x28
	::RPG::GameCore::SetNavigationTarget* Field_3_1; // 0x30

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

	::System::Void Method_3_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_60DB272195314B39_METHOD_3_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
