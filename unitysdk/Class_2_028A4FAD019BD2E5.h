#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_213.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_F9FBCC956DFCF137_27;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelFireGlobalEffectNode; }

#define CLASS_2_028A4FAD019BD2E5_METHOD_2_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0x180EDDC0)
#define CLASS_2_028A4FAD019BD2E5__CTOR_OFFSET UNITYSDK_OFFSET(0x180EDE40)

inline static constexpr unsigned int Class_2_028A4FAD019BD2E5_TypeDefinitionIndex = 77209;

class Class_2_028A4FAD019BD2E5 : public ::Class_1_43BD383C98B4C0C5_213
{
public:
	::RPG::GameCore::ChimeraDuelFireGlobalEffectNode* EABKOHGCHFP; // 0x10
	::System::Nullable_1<::RPG::GameCore::ChimeraDuelTeamType> FLPPKLDOCDD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_028A4FAD019BD2E5__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_16E792B668863BDD(::Class_1_F9FBCC956DFCF137_27* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*))((::PBYTE)hIl2Cpp + CLASS_2_028A4FAD019BD2E5_METHOD_2_16E792B668863BDD_OFFSET))(this, a1);
	}
};
