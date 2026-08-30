#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BB5C2228DBF7AE1F.h"

namespace RPG::GameCore { class SetNavigationTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_60DB272195314B39_METHOD_3_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x177F09B0)
#define CLASS_3_60DB272195314B39_METHOD_3_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x177F06C0)
#define CLASS_3_60DB272195314B39_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x177F0610)
#define CLASS_3_60DB272195314B39_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x177F0960)
#define CLASS_3_60DB272195314B39__CTOR_OFFSET UNITYSDK_OFFSET(0x177F0600)

inline static constexpr unsigned int Class_3_60DB272195314B39_TypeDefinitionIndex = 58710;

class Class_3_60DB272195314B39 : public ::Class_2_BB5C2228DBF7AE1F
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::RPG::GameCore::SetNavigationTarget* OFKGLJOAMLD; // 0x30

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

	::System::Void Method_3_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60DB272195314B39_METHOD_3_EAD10B3E55E2C4C5_OFFSET))(this);
	}
};
