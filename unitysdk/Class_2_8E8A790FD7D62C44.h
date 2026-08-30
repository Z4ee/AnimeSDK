#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleDisableGhostFire; }

#define CLASS_2_8E8A790FD7D62C44_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1C506850)
#define CLASS_2_8E8A790FD7D62C44_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C5068E0)
#define CLASS_2_8E8A790FD7D62C44__CTOR_OFFSET UNITYSDK_OFFSET(0x1C506840)

inline static constexpr unsigned int Class_2_8E8A790FD7D62C44_TypeDefinitionIndex = 41485;

class Class_2_8E8A790FD7D62C44 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleDisableGhostFire* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleDisableGhostFire* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleDisableGhostFire*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_2_8E8A790FD7D62C44__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E8A790FD7D62C44_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E8A790FD7D62C44_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
