#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9541CF6F5087409A.h"

class Class_4_6A0D46987C287112;
namespace RPG::GameCore { class ChimeraDuelBranchNode; }
namespace RPG::GameCore { class ChimeraDuelModifierContainerNode; }

#define CLASS_4_2001B222AE86A6B3_METHOD_4_4D0A612B486614B6_OFFSET UNITYSDK_OFFSET(0x17908B30)
#define CLASS_4_2001B222AE86A6B3_METHOD_4_B630A3DE91C4343E_OFFSET UNITYSDK_OFFSET(0x17908630)
#define CLASS_4_2001B222AE86A6B3__CTOR_OFFSET UNITYSDK_OFFSET(0x17908620)

inline static constexpr unsigned int Class_4_2001B222AE86A6B3_TypeDefinitionIndex = 77170;

class Class_4_2001B222AE86A6B3 : public ::Class_3_9541CF6F5087409A
{
public:
	::Class_4_6A0D46987C287112* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::Class_4_6A0D46987C287112* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_6A0D46987C287112*))((::PBYTE)hIl2Cpp + CLASS_4_2001B222AE86A6B3__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_B630A3DE91C4343E(::RPG::GameCore::ChimeraDuelModifierContainerNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + CLASS_4_2001B222AE86A6B3_METHOD_4_B630A3DE91C4343E_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_4D0A612B486614B6(::RPG::GameCore::ChimeraDuelBranchNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + CLASS_4_2001B222AE86A6B3_METHOD_4_4D0A612B486614B6_OFFSET))(this, a1);
	}
};
