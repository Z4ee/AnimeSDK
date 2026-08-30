#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleRegisterGhostFire; }

#define CLASS_2_C421B8873C0F1B5D_METHOD_2_B8817F4F77EFC234_OFFSET UNITYSDK_OFFSET(0x1BA9B2E0)
#define CLASS_2_C421B8873C0F1B5D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BA9B3F0)
#define CLASS_2_C421B8873C0F1B5D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9B2D0)

inline static constexpr unsigned int Class_2_C421B8873C0F1B5D_TypeDefinitionIndex = 41484;

class Class_2_C421B8873C0F1B5D : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleRegisterGhostFire* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleRegisterGhostFire* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleRegisterGhostFire*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_2_C421B8873C0F1B5D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_B8817F4F77EFC234()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C421B8873C0F1B5D_METHOD_2_B8817F4F77EFC234_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C421B8873C0F1B5D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
