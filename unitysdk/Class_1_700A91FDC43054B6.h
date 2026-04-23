#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_700A91FDC43054B6_METHOD_1_D7FD80F0A66781EF_OFFSET UNITYSDK_OFFSET(0x1841A670)
#define CLASS_1_700A91FDC43054B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1841A8B0)

inline static constexpr unsigned int Class_1_700A91FDC43054B6_TypeDefinitionIndex = 14154;

class Class_1_700A91FDC43054B6 : public ::System::Object
{
public:
	::RPG::Client::TextID Field_1_2; // 0x10
	::RPG::Client::TextID Field_1_3; // 0x20
	::RPG::GameCore::RogueTournAreaGroupID Field_1_0; // 0x30
	::RPG::GameCore::RogueTournMode Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_700A91FDC43054B6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_D7FD80F0A66781EF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_700A91FDC43054B6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_700A91FDC43054B6*&))((::PBYTE)hIl2Cpp + CLASS_1_700A91FDC43054B6_METHOD_1_D7FD80F0A66781EF_OFFSET))(a1, a2);
	}
};
