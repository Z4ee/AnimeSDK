#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_D37BADBAF66E56C6;
namespace RPG::GameCore { class MarbleDebug; }

#define CLASS_2_58B718F4A9CF0574_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17E69B70)
#define CLASS_2_58B718F4A9CF0574_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17E69BB0)
#define CLASS_2_58B718F4A9CF0574__CTOR_OFFSET UNITYSDK_OFFSET(0x17E69B60)

inline static constexpr unsigned int Class_2_58B718F4A9CF0574_TypeDefinitionIndex = 38984;

class Class_2_58B718F4A9CF0574 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::System::Void _ctor(::RPG::GameCore::MarbleDebug* a1, ::Class_1_D37BADBAF66E56C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleDebug*, ::Class_1_D37BADBAF66E56C6*))((::PBYTE)hIl2Cpp + CLASS_2_58B718F4A9CF0574__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58B718F4A9CF0574_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58B718F4A9CF0574_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
