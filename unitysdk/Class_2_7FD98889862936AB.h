#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"

class Class_0_16E4307DCC419505_988;
class Class_2_1CD5437D668B7AFD_Class_1_F8AF247262D62260;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_7FD98889862936AB_METHOD_2_289D4BB421CCCB36_OFFSET UNITYSDK_OFFSET(0x134B3CC0)
#define CLASS_2_7FD98889862936AB_METHOD_2_707D9EE04D8035D4_OFFSET UNITYSDK_OFFSET(0x134B3EA0)
#define CLASS_2_7FD98889862936AB_METHOD_2_B299544B4A5F1F3F_OFFSET UNITYSDK_OFFSET(0x134B3DE0)
#define CLASS_2_7FD98889862936AB__CTOR_OFFSET UNITYSDK_OFFSET(0x134B3F10)

inline static constexpr unsigned int Class_2_7FD98889862936AB_TypeDefinitionIndex = 66770;

class Class_2_7FD98889862936AB : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FD98889862936AB__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_988* Method_2_289D4BB421CCCB36(::Class_2_1CD5437D668B7AFD_Class_1_F8AF247262D62260* a1)
	{
		return ((::Class_0_16E4307DCC419505_988*(*)(::PVOID, ::Class_2_1CD5437D668B7AFD_Class_1_F8AF247262D62260*))((::PBYTE)hIl2Cpp + CLASS_2_7FD98889862936AB_METHOD_2_289D4BB421CCCB36_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_B299544B4A5F1F3F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7FD98889862936AB_METHOD_2_B299544B4A5F1F3F_OFFSET))(a1);
	}

	static ::System::String* Method_2_707D9EE04D8035D4(::RPG::GameCore::CharacterHUDType a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::CharacterHUDType))((::PBYTE)hIl2Cpp + CLASS_2_7FD98889862936AB_METHOD_2_707D9EE04D8035D4_OFFSET))(a1);
	}
};
