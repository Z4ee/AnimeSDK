#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_182.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_F9FBCC956DFCF137_17;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelFireGlobalEffectNode; }

#define CLASS_2_028A4FAD019BD2E5_METHOD_2_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0x123ECE60)
#define CLASS_2_028A4FAD019BD2E5__CTOR_OFFSET UNITYSDK_OFFSET(0x123ECEE0)

inline static constexpr unsigned int Class_2_028A4FAD019BD2E5_TypeDefinitionIndex = 71262;

class Class_2_028A4FAD019BD2E5 : public ::Class_1_43BD383C98B4C0C5_182
{
public:
	::RPG::GameCore::ChimeraDuelFireGlobalEffectNode* Field_2_1; // 0x10
	::System::Nullable_1<::RPG::GameCore::ChimeraDuelTeamType> Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_028A4FAD019BD2E5__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_16E792B668863BDD(::Class_1_F9FBCC956DFCF137_17* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*))((::PBYTE)hIl2Cpp + CLASS_2_028A4FAD019BD2E5_METHOD_2_16E792B668863BDD_OFFSET))(this, a1);
	}
};
