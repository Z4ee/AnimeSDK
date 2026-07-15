#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68DDF0439D67F85F.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_CA688EBD229FB8D3_METHOD_2_18CAE43DC42E88A4_OFFSET UNITYSDK_OFFSET(0x176BC9D0)
#define CLASS_2_CA688EBD229FB8D3_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x176BC8B0)
#define CLASS_2_CA688EBD229FB8D3__CTOR_OFFSET UNITYSDK_OFFSET(0x176BCB40)

inline static constexpr unsigned int Class_2_CA688EBD229FB8D3_TypeDefinitionIndex = 73152;

class Class_2_CA688EBD229FB8D3 : public ::Class_1_68DDF0439D67F85F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA688EBD229FB8D3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA688EBD229FB8D3_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_18CAE43DC42E88A4(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA688EBD229FB8D3_METHOD_2_18CAE43DC42E88A4_OFFSET))(this, a1);
	}
};
