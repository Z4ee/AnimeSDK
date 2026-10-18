#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_2_33A1FA1C4874C8C3_METHOD_2_591271833D691D41_OFFSET UNITYSDK_OFFSET(0x1D01E090)
#define CLASS_2_33A1FA1C4874C8C3__CTOR_OFFSET UNITYSDK_OFFSET(0x1D01E2D0)

inline static constexpr unsigned int Class_2_33A1FA1C4874C8C3_TypeDefinitionIndex = 21063;

class Class_2_33A1FA1C4874C8C3 : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::MVector3 LOLLEGPLMOO; // 0x10
	::RPG::MVector3 AIBGEDIGEOO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33A1FA1C4874C8C3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_591271833D691D41(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_33A1FA1C4874C8C3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_33A1FA1C4874C8C3*&))((::PBYTE)hIl2Cpp + CLASS_2_33A1FA1C4874C8C3_METHOD_2_591271833D691D41_OFFSET))(a1, a2);
	}
};
