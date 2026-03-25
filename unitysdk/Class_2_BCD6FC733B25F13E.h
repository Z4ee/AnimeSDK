#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_54254A0D4D720717_2.h"

class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class ChimeraDuelEntityComparerBase; }

#define CLASS_2_BCD6FC733B25F13E_COMPARE_OFFSET UNITYSDK_OFFSET(0x114299B0)
#define CLASS_2_BCD6FC733B25F13E_METHOD_2_21C5EB4E969FD82D_OFFSET UNITYSDK_OFFSET(0x11429A20)
#define CLASS_2_BCD6FC733B25F13E__CTOR_OFFSET UNITYSDK_OFFSET(0x11429990)

inline static constexpr unsigned int Class_2_BCD6FC733B25F13E_TypeDefinitionIndex = 62982;

class Class_2_BCD6FC733B25F13E : public ::Class_1_54254A0D4D720717_2
{
public:
	::System::Void _ctor(::RPG::GameCore::ChimeraDuelEntityComparerBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEntityComparerBase*))((::PBYTE)hIl2Cpp + CLASS_2_BCD6FC733B25F13E__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::Class_2_49CAB3DE74280C58* a1, ::Class_2_49CAB3DE74280C58* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_2_BCD6FC733B25F13E_COMPARE_OFFSET))(this, a1, a2);
	}

	static ::Class_2_BCD6FC733B25F13E* Method_2_21C5EB4E969FD82D(::RPG::GameCore::ChimeraDuelEntityComparerBase* a1)
	{
		return ((::Class_2_BCD6FC733B25F13E*(*)(::RPG::GameCore::ChimeraDuelEntityComparerBase*))((::PBYTE)hIl2Cpp + CLASS_2_BCD6FC733B25F13E_METHOD_2_21C5EB4E969FD82D_OFFSET))(a1);
	}
};
