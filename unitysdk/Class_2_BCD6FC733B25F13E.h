#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC7AE463DF0006BE.h"

class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEntityComparerBase; }

#define CLASS_2_BCD6FC733B25F13E_COMPARE_OFFSET UNITYSDK_OFFSET(0xA7C0580)
#define CLASS_2_BCD6FC733B25F13E_METHOD_2_804BA6EFF2045AE6_OFFSET UNITYSDK_OFFSET(0xA7C05F0)
#define CLASS_2_BCD6FC733B25F13E__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C0560)

inline static constexpr unsigned int Class_2_BCD6FC733B25F13E_TypeDefinitionIndex = 71960;

class Class_2_BCD6FC733B25F13E : public ::Class_1_FC7AE463DF0006BE
{
public:
	::System::Void _ctor(::RPG::GameCore::ChimeraDuelEntityComparerBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEntityComparerBase*))((::PBYTE)hIl2Cpp + CLASS_2_BCD6FC733B25F13E__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::Class_2_B66C1067C0468FBB* a1, ::Class_2_B66C1067C0468FBB* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_2_BCD6FC733B25F13E_COMPARE_OFFSET))(this, a1, a2);
	}

	static ::Class_2_BCD6FC733B25F13E* Method_2_804BA6EFF2045AE6(::RPG::GameCore::ChimeraDuelEntityComparerBase* a1)
	{
		return ((::Class_2_BCD6FC733B25F13E*(*)(::RPG::GameCore::ChimeraDuelEntityComparerBase*))((::PBYTE)hIl2Cpp + CLASS_2_BCD6FC733B25F13E_METHOD_2_804BA6EFF2045AE6_OFFSET))(a1);
	}
};
