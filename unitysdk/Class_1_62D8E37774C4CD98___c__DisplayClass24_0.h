#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LoopCGConfigRow; }
namespace System { class String; }

#define CLASS_1_62D8E37774C4CD98___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B640B0)
#define CLASS_1_62D8E37774C4CD98___C__DISPLAYCLASS24_0__GETLOOPCGKEYBYPATH_B__0_OFFSET UNITYSDK_OFFSET(0x15B644E0)

inline static constexpr unsigned int Class_1_62D8E37774C4CD98___c__DisplayClass24_0_TypeDefinitionIndex = 73225;

class Class_1_62D8E37774C4CD98___c__DisplayClass24_0 : public ::System::Object
{
public:
	::System::String* compareFileName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62D8E37774C4CD98___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetLoopCGKeyByPath_b__0(::RPG::GameCore::LoopCGConfigRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LoopCGConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_62D8E37774C4CD98___C__DISPLAYCLASS24_0__GETLOOPCGKEYBYPATH_B__0_OFFSET))(this, a1);
	}
};
