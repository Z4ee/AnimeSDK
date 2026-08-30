#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimPlayerMoveModifierConfig; }

#define CLASS_1_0C6B8EABC5182B4B__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF84990)

inline static constexpr unsigned int Class_1_0C6B8EABC5182B4B_TypeDefinitionIndex = 41816;

class Class_1_0C6B8EABC5182B4B : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimPlayerMoveModifierConfig* ALMAIAIDFHM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6B8EABC5182B4B__CTOR_OFFSET))(this);
	}
};
