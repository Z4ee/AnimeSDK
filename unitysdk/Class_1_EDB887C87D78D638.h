#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_EDB887C87D78D638_METHOD_1_467ED2FCAC45C60F_OFFSET UNITYSDK_OFFSET(0x9ED6D80)
#define CLASS_1_EDB887C87D78D638_METHOD_1_C454E87031B9B1A1_1_OFFSET UNITYSDK_OFFSET(0x9ED7690)
#define CLASS_1_EDB887C87D78D638_METHOD_1_C454E87031B9B1A1_OFFSET UNITYSDK_OFFSET(0x9ED7580)
#define CLASS_1_EDB887C87D78D638_METHOD_1_F2781C384E3E9F52_OFFSET UNITYSDK_OFFSET(0x9ED7450)

inline static constexpr unsigned int Class_1_EDB887C87D78D638_TypeDefinitionIndex = 43406;

class Class_1_EDB887C87D78D638 : public ::System::Object
{
public:
	static ::RPG::GameCore::ActionDelayPreshowConfig* Method_1_467ED2FCAC45C60F(::RPG::GameCore::ActionDelayPreshowConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::ActionDelayPreshowConfig*(*)(::RPG::GameCore::ActionDelayPreshowConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_EDB887C87D78D638_METHOD_1_467ED2FCAC45C60F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F2781C384E3E9F52(::RPG::GameCore::ActionDelayPreshowConfig* a1, ::RPG::GameCore::ActionDelayPreshowConfig* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActionDelayPreshowConfig*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDB887C87D78D638_METHOD_1_F2781C384E3E9F52_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::DynamicFloat* Method_1_C454E87031B9B1A1(::RPG::GameCore::ActionDelayPreshowConfig* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3)
	{
		return ((::RPG::GameCore::DynamicFloat*(*)(::RPG::GameCore::ActionDelayPreshowConfig*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_EDB887C87D78D638_METHOD_1_C454E87031B9B1A1_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::DynamicFloat* Method_1_C454E87031B9B1A1_1(::RPG::GameCore::ActionDelayPreshowConfig* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3)
	{
		return ((::RPG::GameCore::DynamicFloat*(*)(::RPG::GameCore::ActionDelayPreshowConfig*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_EDB887C87D78D638_METHOD_1_C454E87031B9B1A1_1_OFFSET))(a1, a2, a3);
	}
};
