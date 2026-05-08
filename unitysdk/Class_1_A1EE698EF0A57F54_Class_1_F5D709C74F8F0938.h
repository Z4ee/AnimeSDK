#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardLight; }
namespace System { class Action; }

#define CLASS_1_A1EE698EF0A57F54_CLASS_1_F5D709C74F8F0938_METHOD_1_44D4C5C5A5AF0202_OFFSET UNITYSDK_OFFSET(0x133D2D40)
#define CLASS_1_A1EE698EF0A57F54_CLASS_1_F5D709C74F8F0938__CTOR_OFFSET UNITYSDK_OFFSET(0x133D2D30)

inline static constexpr unsigned int Class_1_A1EE698EF0A57F54_Class_1_F5D709C74F8F0938_TypeDefinitionIndex = 55127;

class Class_1_A1EE698EF0A57F54_Class_1_F5D709C74F8F0938 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_CLASS_1_F5D709C74F8F0938__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_44D4C5C5A5AF0202(::MoleMole::Config::ConfigHollowChessboardLight* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardLight*))((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_CLASS_1_F5D709C74F8F0938_METHOD_1_44D4C5C5A5AF0202_OFFSET))(this, a1);
	}
};
