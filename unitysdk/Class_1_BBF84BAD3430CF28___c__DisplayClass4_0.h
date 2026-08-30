#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingFesPosition; }

#define CLASS_1_BBF84BAD3430CF28___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11EF3CF0)
#define CLASS_1_BBF84BAD3430CF28___C__DISPLAYCLASS4_0__ISGRIDBLOCKBYTUTORIAL_B__0_OFFSET UNITYSDK_OFFSET(0x11EF43F0)

inline static constexpr unsigned int Class_1_BBF84BAD3430CF28___c__DisplayClass4_0_TypeDefinitionIndex = 77291;

class Class_1_BBF84BAD3430CF28___c__DisplayClass4_0 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingFesPosition* coord; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBF84BAD3430CF28___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsGridBlockByTutorial_b__0(::RPG::GameCore::ChenLingFesPosition* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingFesPosition*))((::PBYTE)hIl2Cpp + CLASS_1_BBF84BAD3430CF28___C__DISPLAYCLASS4_0__ISGRIDBLOCKBYTUTORIAL_B__0_OFFSET))(this, a1);
	}
};
