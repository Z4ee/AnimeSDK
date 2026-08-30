#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_125.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_612543DA3F0257CB__CCTOR_OFFSET UNITYSDK_OFFSET(0x186D4A00)
#define CLASS_2_612543DA3F0257CB__CTOR_OFFSET UNITYSDK_OFFSET(0x186D49F0)

inline static constexpr unsigned int Class_2_612543DA3F0257CB_TypeDefinitionIndex = 56425;

class Class_2_612543DA3F0257CB : public ::Class_1_43BD383C98B4C0C5_125
{
public:
	static ::Class_2_612543DA3F0257CB** StaticGet_HGLIFJGHADE()
	{
		return (::Class_2_612543DA3F0257CB**)Il2CppClass::FromTypeDefinitionIndex(Class_2_612543DA3F0257CB_TypeDefinitionIndex)->GetStaticField(0x22530);
	}
	::RPG::GameCore::GameEntity* GDCCJFKJGPD; // 0x10
	::System::String* GPDEENLPHIJ; // 0x18
	::RPG::GameCore::FixPoint PIDECKOBKIJ; // 0x20
	::RPG::GameCore::FixPoint CMAAEMCBIMH; // 0x28
	::RPG::GameCore::FixPoint JGNABFNOAJB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_612543DA3F0257CB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_612543DA3F0257CB__CCTOR_OFFSET))();
	}
};
