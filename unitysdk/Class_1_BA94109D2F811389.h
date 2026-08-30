#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_24;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BA94109D2F811389__CTOR_OFFSET UNITYSDK_OFFSET(0x134BEDC0)

inline static constexpr unsigned int Class_1_BA94109D2F811389_TypeDefinitionIndex = 56627;

class Class_1_BA94109D2F811389 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_24*>* BNCNCFMAMIG; // 0x18
	::System::String* MGJPIILDPMF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA94109D2F811389__CTOR_OFFSET))(this);
	}
};
