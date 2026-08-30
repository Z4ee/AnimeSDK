#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC7AE463DF0006BE.h"

class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEntityComparerBase; }

#define CLASS_2_2AFA6D08323477B5_COMPARE_OFFSET UNITYSDK_OFFSET(0xBB12810)
#define CLASS_2_2AFA6D08323477B5_METHOD_2_804BA6EFF2045AE6_OFFSET UNITYSDK_OFFSET(0xBB128E0)
#define CLASS_2_2AFA6D08323477B5__CTOR_OFFSET UNITYSDK_OFFSET(0xBB127F0)

inline static constexpr unsigned int Class_2_2AFA6D08323477B5_TypeDefinitionIndex = 76970;

class Class_2_2AFA6D08323477B5 : public ::Class_1_FC7AE463DF0006BE
{
public:
	::System::Void _ctor(::RPG::GameCore::ChimeraDuelEntityComparerBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEntityComparerBase*))((::PBYTE)hIl2Cpp + CLASS_2_2AFA6D08323477B5__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::Class_2_B66C1067C0468FBB* a1, ::Class_2_B66C1067C0468FBB* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_2_2AFA6D08323477B5_COMPARE_OFFSET))(this, a1, a2);
	}

	static ::Class_2_2AFA6D08323477B5* Method_2_804BA6EFF2045AE6(::RPG::GameCore::ChimeraDuelEntityComparerBase* a1)
	{
		return ((::Class_2_2AFA6D08323477B5*(*)(::RPG::GameCore::ChimeraDuelEntityComparerBase*))((::PBYTE)hIl2Cpp + CLASS_2_2AFA6D08323477B5_METHOD_2_804BA6EFF2045AE6_OFFSET))(a1);
	}
};
