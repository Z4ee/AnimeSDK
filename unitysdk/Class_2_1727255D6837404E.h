#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_D37BADBAF66E56C6;
namespace RPG::GameCore { class MarbleModifyValue; }

#define CLASS_2_1727255D6837404E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17EE4FF0)
#define CLASS_2_1727255D6837404E_METHOD_2_DDDEE766A0E3D16C_OFFSET UNITYSDK_OFFSET(0x17EE4A50)
#define CLASS_2_1727255D6837404E__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE4A40)

inline static constexpr unsigned int Class_2_1727255D6837404E_TypeDefinitionIndex = 38954;

class Class_2_1727255D6837404E : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleModifyValue* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleModifyValue* a1, ::Class_1_D37BADBAF66E56C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleModifyValue*, ::Class_1_D37BADBAF66E56C6*))((::PBYTE)hIl2Cpp + CLASS_2_1727255D6837404E__CTOR_OFFSET))(this, a1, a2);
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
