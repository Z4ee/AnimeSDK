#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_600;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_973E4788F9ED336F_METHOD_1_8AC7EE00D96C45AF_OFFSET UNITYSDK_OFFSET(0xD7E5E90)
#define CLASS_1_973E4788F9ED336F__CTOR_OFFSET UNITYSDK_OFFSET(0xD7E6360)

inline static constexpr unsigned int Class_1_973E4788F9ED336F_TypeDefinitionIndex = 74349;

class Class_1_973E4788F9ED336F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_973E4788F9ED336F__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_600* Method_1_8AC7EE00D96C45AF(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_600*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_973E4788F9ED336F_METHOD_1_8AC7EE00D96C45AF_OFFSET))(this, a1);
	}
};
