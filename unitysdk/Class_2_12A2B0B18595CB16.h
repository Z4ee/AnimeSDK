#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleLeadHand; }

#define CLASS_2_12A2B0B18595CB16_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x16897010)
#define CLASS_2_12A2B0B18595CB16_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x168970A0)
#define CLASS_2_12A2B0B18595CB16__CTOR_OFFSET UNITYSDK_OFFSET(0x16897000)

inline static constexpr unsigned int Class_2_12A2B0B18595CB16_TypeDefinitionIndex = 33190;

class Class_2_12A2B0B18595CB16 : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleLeadHand* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleLeadHand* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleLeadHand*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_2_12A2B0B18595CB16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12A2B0B18595CB16_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12A2B0B18595CB16_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
