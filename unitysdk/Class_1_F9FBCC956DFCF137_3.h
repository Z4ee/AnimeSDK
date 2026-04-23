#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_BD800F5B29A08E1F;

#define CLASS_1_F9FBCC956DFCF137_3_METHOD_1_CE1FB3C3C4E44EF4_OFFSET UNITYSDK_OFFSET(0xD3A6840)
#define CLASS_1_F9FBCC956DFCF137_3__CTOR_OFFSET UNITYSDK_OFFSET(0xD3A6830)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_3_TypeDefinitionIndex = 50142;

class Class_1_F9FBCC956DFCF137_3 : public ::System::Object
{
public:
	::Class_1_BD800F5B29A08E1F* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_BD800F5B29A08E1F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_3__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_CE1FB3C3C4E44EF4()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_3_METHOD_1_CE1FB3C3C4E44EF4_OFFSET))(this);
	}
};
