#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_D342299B28615029_METHOD_1_1FA67F2466ED59EC_OFFSET UNITYSDK_OFFSET(0x1D6C22C0)
#define CLASS_1_D342299B28615029__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C2520)

inline static constexpr unsigned int Class_1_D342299B28615029_TypeDefinitionIndex = 14783;

class Class_1_D342299B28615029 : public ::System::Object
{
public:
	::RPG::GameCore::RogueTournAreaGroupID JFMBIOOCPIL; // 0x10
	::RPG::GameCore::RogueTournMode HILINOJPLGA; // 0x14
	::RPG::Client::TextID OENAMINOLLF; // 0x18
	::RPG::Client::TextID ANBDGFJDBPF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D342299B28615029__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FA67F2466ED59EC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_D342299B28615029*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_D342299B28615029*&))((::PBYTE)hIl2Cpp + CLASS_1_D342299B28615029_METHOD_1_1FA67F2466ED59EC_OFFSET))(a1, a2);
	}
};
