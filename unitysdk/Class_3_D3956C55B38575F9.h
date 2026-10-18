#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_D3956C55B38575F9_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1CF210E0)
#define CLASS_3_D3956C55B38575F9_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1CF21120)
#define CLASS_3_D3956C55B38575F9__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF21110)

inline static constexpr unsigned int Class_3_D3956C55B38575F9_TypeDefinitionIndex = 10307;

class Class_3_D3956C55B38575F9 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3956C55B38575F9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D3956C55B38575F9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D3956C55B38575F9*&))((::PBYTE)hIl2Cpp + CLASS_3_D3956C55B38575F9_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D3956C55B38575F9* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D3956C55B38575F9*))((::PBYTE)hIl2Cpp + CLASS_3_D3956C55B38575F9_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
