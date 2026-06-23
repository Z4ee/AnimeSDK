#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMultiplayerUI; }
namespace System { class Action; }

#define CLASS_1_FED1762D20687731_CLASS_1_2F7405EC84A07022_METHOD_1_CCBD01D58F1BF8D9_OFFSET UNITYSDK_OFFSET(0x140A99C0)
#define CLASS_1_FED1762D20687731_CLASS_1_2F7405EC84A07022__CTOR_OFFSET UNITYSDK_OFFSET(0x140A99B0)

inline static constexpr unsigned int Class_1_FED1762D20687731_Class_1_2F7405EC84A07022_TypeDefinitionIndex = 77677;

class Class_1_FED1762D20687731_Class_1_2F7405EC84A07022 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FED1762D20687731_CLASS_1_2F7405EC84A07022__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CCBD01D58F1BF8D9(::MoleMole::Config::ConfigMultiplayerUI* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMultiplayerUI*))((::PBYTE)hIl2Cpp + CLASS_1_FED1762D20687731_CLASS_1_2F7405EC84A07022_METHOD_1_CCBD01D58F1BF8D9_OFFSET))(this, a1);
	}
};
