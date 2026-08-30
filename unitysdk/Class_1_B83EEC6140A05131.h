#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_B83EEC6140A05131_METHOD_1_D35C1CEB854A18FD_OFFSET UNITYSDK_OFFSET(0x19964200)
#define CLASS_1_B83EEC6140A05131_METHOD_1_F2781C384E3E9F52_OFFSET UNITYSDK_OFFSET(0x19963FB0)
#define CLASS_1_B83EEC6140A05131_METHOD_1_F67FED164FF92D73_OFFSET UNITYSDK_OFFSET(0x199640E0)
#define CLASS_1_B83EEC6140A05131_METHOD_1_F9AD332E50160726_OFFSET UNITYSDK_OFFSET(0x19963710)

inline static constexpr unsigned int Class_1_B83EEC6140A05131_TypeDefinitionIndex = 53838;

class Class_1_B83EEC6140A05131 : public ::System::Object
{
public:
	static ::RPG::GameCore::ActionDelayPreshowConfig* Method_1_F9AD332E50160726(::RPG::GameCore::ActionDelayPreshowConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::ActionDelayPreshowConfig*(*)(::RPG::GameCore::ActionDelayPreshowConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B83EEC6140A05131_METHOD_1_F9AD332E50160726_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F2781C384E3E9F52(::RPG::GameCore::ActionDelayPreshowConfig* a1, ::RPG::GameCore::ActionDelayPreshowConfig* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActionDelayPreshowConfig*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B83EEC6140A05131_METHOD_1_F2781C384E3E9F52_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::DynamicFloat* Method_1_F67FED164FF92D73(::RPG::GameCore::ActionDelayPreshowConfig* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3)
	{
		return ((::RPG::GameCore::DynamicFloat*(*)(::RPG::GameCore::ActionDelayPreshowConfig*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_B83EEC6140A05131_METHOD_1_F67FED164FF92D73_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::DynamicFloat* Method_1_D35C1CEB854A18FD(::RPG::GameCore::ActionDelayPreshowConfig* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3)
	{
		return ((::RPG::GameCore::DynamicFloat*(*)(::RPG::GameCore::ActionDelayPreshowConfig*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_B83EEC6140A05131_METHOD_1_D35C1CEB854A18FD_OFFSET))(a1, a2, a3);
	}
};
