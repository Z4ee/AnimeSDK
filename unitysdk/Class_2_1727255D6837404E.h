#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleModifyValue; }

#define CLASS_2_1727255D6837404E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x168F3360)
#define CLASS_2_1727255D6837404E_METHOD_2_DDDEE766A0E3D16C_OFFSET UNITYSDK_OFFSET(0x168F2DC0)
#define CLASS_2_1727255D6837404E__CTOR_OFFSET UNITYSDK_OFFSET(0x168F2DB0)

inline static constexpr unsigned int Class_2_1727255D6837404E_TypeDefinitionIndex = 33164;

class Class_2_1727255D6837404E : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleModifyValue* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleModifyValue* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleModifyValue*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_2_1727255D6837404E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DDDEE766A0E3D16C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1727255D6837404E_METHOD_2_DDDEE766A0E3D16C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1727255D6837404E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
