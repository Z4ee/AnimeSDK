#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleModifyValue; }

#define CLASS_2_1727255D6837404E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C328EA0)
#define CLASS_2_1727255D6837404E_METHOD_2_FFB289CE9DC72B5A_OFFSET UNITYSDK_OFFSET(0x1C328960)
#define CLASS_2_1727255D6837404E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C328950)

inline static constexpr unsigned int Class_2_1727255D6837404E_TypeDefinitionIndex = 41469;

class Class_2_1727255D6837404E : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleModifyValue* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleModifyValue* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleModifyValue*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_2_1727255D6837404E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_FFB289CE9DC72B5A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1727255D6837404E_METHOD_2_FFB289CE9DC72B5A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1727255D6837404E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
