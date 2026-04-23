#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_182.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"

class Class_1_F9FBCC956DFCF137_17;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelNpcDitherInNode; }

#define CLASS_2_EBB1236FD63E6499_METHOD_2_12CE8CAD6749278D_OFFSET UNITYSDK_OFFSET(0xA2E5110)
#define CLASS_2_EBB1236FD63E6499__CTOR_OFFSET UNITYSDK_OFFSET(0xA2E51E0)

inline static constexpr unsigned int Class_2_EBB1236FD63E6499_TypeDefinitionIndex = 71269;

class Class_2_EBB1236FD63E6499 : public ::Class_1_43BD383C98B4C0C5_182
{
public:
	::RPG::GameCore::ChimeraDuelNpcDitherInNode* Field_2_1; // 0x10
	::RPG::GameCore::ChimeraDuelTeamType Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBB1236FD63E6499__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_12CE8CAD6749278D(::Class_1_F9FBCC956DFCF137_17* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*))((::PBYTE)hIl2Cpp + CLASS_2_EBB1236FD63E6499_METHOD_2_12CE8CAD6749278D_OFFSET))(this, a1);
	}
};
