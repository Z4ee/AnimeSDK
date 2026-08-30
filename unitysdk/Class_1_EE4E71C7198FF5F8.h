#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DialogueConditionRow; }

#define CLASS_1_EE4E71C7198FF5F8_METHOD_1_EBAF0B7EEEB33A3F_OFFSET UNITYSDK_OFFSET(0x1790A280)

inline static constexpr unsigned int Class_1_EE4E71C7198FF5F8_TypeDefinitionIndex = 56683;

class Class_1_EE4E71C7198FF5F8 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_EBAF0B7EEEB33A3F(::RPG::GameCore::DialogueConditionRow* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::DialogueConditionRow*))((::PBYTE)hIl2Cpp + CLASS_1_EE4E71C7198FF5F8_METHOD_1_EBAF0B7EEEB33A3F_OFFSET))(a1);
	}
};
