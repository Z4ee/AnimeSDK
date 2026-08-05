#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardLight; }
namespace System { class Action; }

#define CLASS_1_A1EE698EF0A57F54_CLASS_1_09E49322E2BF906B_METHOD_1_D4CAA13C70FD4FE8_OFFSET UNITYSDK_OFFSET(0x156E7040)
#define CLASS_1_A1EE698EF0A57F54_CLASS_1_09E49322E2BF906B__CTOR_OFFSET UNITYSDK_OFFSET(0x156E7030)

inline static constexpr unsigned int Class_1_A1EE698EF0A57F54_Class_1_09E49322E2BF906B_TypeDefinitionIndex = 49981;

class Class_1_A1EE698EF0A57F54_Class_1_09E49322E2BF906B : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_CLASS_1_09E49322E2BF906B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D4CAA13C70FD4FE8(::MoleMole::Config::ConfigHollowChessboardLight* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardLight*))((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_CLASS_1_09E49322E2BF906B_METHOD_1_D4CAA13C70FD4FE8_OFFSET))(this, a1);
	}
};
