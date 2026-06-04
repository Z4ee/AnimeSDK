#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DialogueConditionRow; }

#define CLASS_1_EE4E71C7198FF5F8_METHOD_1_EBAF0B7EEEB33A3F_OFFSET UNITYSDK_OFFSET(0xBF4CD60)

inline static constexpr unsigned int Class_1_EE4E71C7198FF5F8_TypeDefinitionIndex = 52751;

class Class_1_EE4E71C7198FF5F8 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_EBAF0B7EEEB33A3F(::RPG::GameCore::DialogueConditionRow* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::DialogueConditionRow*))((::PBYTE)hIl2Cpp + CLASS_1_EE4E71C7198FF5F8_METHOD_1_EBAF0B7EEEB33A3F_OFFSET))(a1);
	}
};
