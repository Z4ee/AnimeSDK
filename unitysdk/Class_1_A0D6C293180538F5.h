#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class LuaTable; }

#define CLASS_1_A0D6C293180538F5__CTOR_OFFSET UNITYSDK_OFFSET(0x16A16380)

inline static constexpr unsigned int Class_1_A0D6C293180538F5_TypeDefinitionIndex = 56785;

class Class_1_A0D6C293180538F5 : public ::System::Object
{
public:
	::XLua::LuaTable* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0D6C293180538F5__CTOR_OFFSET))(this);
	}
};
