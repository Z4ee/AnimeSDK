#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleLeadHand; }

#define CLASS_2_12A2B0B18595CB16_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x180DC4D0)
#define CLASS_2_12A2B0B18595CB16_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x180DC560)
#define CLASS_2_12A2B0B18595CB16__CTOR_OFFSET UNITYSDK_OFFSET(0x180DC4C0)

inline static constexpr unsigned int Class_2_12A2B0B18595CB16_TypeDefinitionIndex = 40557;

class Class_2_12A2B0B18595CB16 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleLeadHand* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleLeadHand* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleLeadHand*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_2_12A2B0B18595CB16__CTOR_OFFSET))(this, a1, a2);
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
