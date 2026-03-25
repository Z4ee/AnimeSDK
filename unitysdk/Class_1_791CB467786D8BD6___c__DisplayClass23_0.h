#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }

#define CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE456BE0)
#define CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS23_0___ASYNCSHOWUI_B__0_OFFSET UNITYSDK_OFFSET(0xE457D40)

inline static constexpr unsigned int Class_1_791CB467786D8BD6___c__DisplayClass23_0_TypeDefinitionIndex = 62218;

class Class_1_791CB467786D8BD6___c__DisplayClass23_0 : public ::System::Object
{
public:
	::System::String* uiName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __AsyncShowUI_b__0(::RPG::GameCore::DynamicValue* path)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS23_0___ASYNCSHOWUI_B__0_OFFSET))(this, path);
	}
};
