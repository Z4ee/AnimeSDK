#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RoadRashGameAbilityValueModifer; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }

#define CLASS_1_7FA111E99D02A580_METHOD_1_5F2F1FB1F485E319_OFFSET UNITYSDK_OFFSET(0x1BF89C10)
#define CLASS_1_7FA111E99D02A580_METHOD_1_EC6CA658C8C5E346_OFFSET UNITYSDK_OFFSET(0x1BF899D0)

inline static constexpr unsigned int Class_1_7FA111E99D02A580_TypeDefinitionIndex = 41274;

class Class_1_7FA111E99D02A580 : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* Method_1_EC6CA658C8C5E346(::Il2CppArray<::RPG::Client::RoadRashGameAbilityValueModifer*>* a1)
	{
		return ((::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>*(*)(::Il2CppArray<::RPG::Client::RoadRashGameAbilityValueModifer*>*))((::PBYTE)hIl2Cpp + CLASS_1_7FA111E99D02A580_METHOD_1_EC6CA658C8C5E346_OFFSET))(a1);
	}

	static ::System::Single Method_1_5F2F1FB1F485E319(::System::Single a1, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::System::Single, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7FA111E99D02A580_METHOD_1_5F2F1FB1F485E319_OFFSET))(a1, a2, a3);
	}
};
