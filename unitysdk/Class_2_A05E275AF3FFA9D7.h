#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleMakeItemDie; }

#define CLASS_2_A05E275AF3FFA9D7_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1C424FE0)
#define CLASS_2_A05E275AF3FFA9D7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C425080)
#define CLASS_2_A05E275AF3FFA9D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1C424FD0)

inline static constexpr unsigned int Class_2_A05E275AF3FFA9D7_TypeDefinitionIndex = 41488;

class Class_2_A05E275AF3FFA9D7 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleMakeItemDie* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleMakeItemDie* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleMakeItemDie*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_2_A05E275AF3FFA9D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A05E275AF3FFA9D7_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A05E275AF3FFA9D7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
