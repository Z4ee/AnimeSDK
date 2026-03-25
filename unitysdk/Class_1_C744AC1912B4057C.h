#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_C744AC1912B4057C_METHOD_1_0C679A091108BBB0_OFFSET UNITYSDK_OFFSET(0x16BD5A90)
#define CLASS_1_C744AC1912B4057C__CTOR_OFFSET UNITYSDK_OFFSET(0x16BD5B40)

inline static constexpr unsigned int Class_1_C744AC1912B4057C_TypeDefinitionIndex = 13678;

class Class_1_C744AC1912B4057C : public ::System::Object
{
public:
	::RPG::GameCore::RogueTournRoomType Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C744AC1912B4057C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0C679A091108BBB0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_C744AC1912B4057C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_C744AC1912B4057C*&))((::PBYTE)hIl2Cpp + CLASS_1_C744AC1912B4057C_METHOD_1_0C679A091108BBB0_OFFSET))(a1, a2);
	}
};
