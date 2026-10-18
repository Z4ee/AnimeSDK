#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PetPartyNavigateDestination; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_1E5606234CB46C27_METHOD_3_A0348A6F08F88F36_OFFSET UNITYSDK_OFFSET(0x1D165900)
#define CLASS_3_1E5606234CB46C27_METHOD_3_F73DE1E21818E48C_OFFSET UNITYSDK_OFFSET(0x1D165880)
#define CLASS_3_1E5606234CB46C27__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1658E0)

inline static constexpr unsigned int Class_3_1E5606234CB46C27_TypeDefinitionIndex = 21085;

class Class_3_1E5606234CB46C27 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::GameCore::PetPartyNavigateDestination* FOLENHJBOFI; // 0x20
	::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x28
	::System::Single EEOOODIPEBG; // 0x2C
	::System::Single FAKLGELEEAO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E5606234CB46C27__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F73DE1E21818E48C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1E5606234CB46C27*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1E5606234CB46C27*&))((::PBYTE)hIl2Cpp + CLASS_3_1E5606234CB46C27_METHOD_3_F73DE1E21818E48C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A0348A6F08F88F36(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1E5606234CB46C27* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1E5606234CB46C27*))((::PBYTE)hIl2Cpp + CLASS_3_1E5606234CB46C27_METHOD_3_A0348A6F08F88F36_OFFSET))(a1, a2);
	}
};
