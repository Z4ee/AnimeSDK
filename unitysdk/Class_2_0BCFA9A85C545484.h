#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_176.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"

class Class_1_F9FBCC956DFCF137_14;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelNpcAnimatorControlNode; }

#define CLASS_2_0BCFA9A85C545484_METHOD_2_12CE8CAD6749278D_OFFSET UNITYSDK_OFFSET(0x8A77610)
#define CLASS_2_0BCFA9A85C545484__CTOR_OFFSET UNITYSDK_OFFSET(0x8A776E0)

inline static constexpr unsigned int Class_2_0BCFA9A85C545484_TypeDefinitionIndex = 63228;

class Class_2_0BCFA9A85C545484 : public ::Class_1_43BD383C98B4C0C5_176
{
public:
	::RPG::GameCore::ChimeraDuelNpcAnimatorControlNode* Field_2_1; // 0x10
	::RPG::GameCore::ChimeraDuelTeamType Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BCFA9A85C545484__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_12CE8CAD6749278D(::Class_1_F9FBCC956DFCF137_14* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_14*))((::PBYTE)hIl2Cpp + CLASS_2_0BCFA9A85C545484_METHOD_2_12CE8CAD6749278D_OFFSET))(this, a1);
	}
};
