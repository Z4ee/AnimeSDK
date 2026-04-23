#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_182.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"

class Class_1_F9FBCC956DFCF137_17;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelNpcFireEffectNode; }

#define CLASS_2_7EDFEDEFA458B8EF_METHOD_2_12CE8CAD6749278D_OFFSET UNITYSDK_OFFSET(0x11A99F10)
#define CLASS_2_7EDFEDEFA458B8EF__CTOR_OFFSET UNITYSDK_OFFSET(0x11A99FE0)

inline static constexpr unsigned int Class_2_7EDFEDEFA458B8EF_TypeDefinitionIndex = 71270;

class Class_2_7EDFEDEFA458B8EF : public ::Class_1_43BD383C98B4C0C5_182
{
public:
	::RPG::GameCore::ChimeraDuelNpcFireEffectNode* Field_2_1; // 0x10
	::RPG::GameCore::ChimeraDuelTeamType Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EDFEDEFA458B8EF__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_12CE8CAD6749278D(::Class_1_F9FBCC956DFCF137_17* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*))((::PBYTE)hIl2Cpp + CLASS_2_7EDFEDEFA458B8EF_METHOD_2_12CE8CAD6749278D_OFFSET))(this, a1);
	}
};
