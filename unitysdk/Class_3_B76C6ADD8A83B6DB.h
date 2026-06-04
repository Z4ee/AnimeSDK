#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_5816B66AC6910205;
namespace RPG::GameCore { class MarbleByImmuneAttackBack; }

#define CLASS_3_B76C6ADD8A83B6DB_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x18CE64A0)
#define CLASS_3_B76C6ADD8A83B6DB__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE6480)

inline static constexpr unsigned int Class_3_B76C6ADD8A83B6DB_TypeDefinitionIndex = 39773;

class Class_3_B76C6ADD8A83B6DB : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByImmuneAttackBack* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByImmuneAttackBack* a1, ::Class_1_5816B66AC6910205* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByImmuneAttackBack*, ::Class_1_5816B66AC6910205*))((::PBYTE)hIl2Cpp + CLASS_3_B76C6ADD8A83B6DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76C6ADD8A83B6DB_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};
