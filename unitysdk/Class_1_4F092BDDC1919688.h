#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DialogueConditionRow; }

#define CLASS_1_4F092BDDC1919688_METHOD_1_4B6D28FEDF8173EA_OFFSET UNITYSDK_OFFSET(0x95B6150)

inline static constexpr unsigned int Class_1_4F092BDDC1919688_TypeDefinitionIndex = 52077;

class Class_1_4F092BDDC1919688 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_4B6D28FEDF8173EA(::RPG::GameCore::DialogueConditionRow* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::DialogueConditionRow*))((::PBYTE)hIl2Cpp + CLASS_1_4F092BDDC1919688_METHOD_1_4B6D28FEDF8173EA_OFFSET))(a1);
	}
};
