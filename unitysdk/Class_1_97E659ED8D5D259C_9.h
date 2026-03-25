#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerConditionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceTriggerConditionRow; }
namespace System { class String; }

#define CLASS_1_97E659ED8D5D259C_9_GET_CONDITIONID_OFFSET UNITYSDK_OFFSET(0x117FF640)
#define CLASS_1_97E659ED8D5D259C_9_METHOD_1_6420F140965E2469_OFFSET UNITYSDK_OFFSET(0x117FF5F0)
#define CLASS_1_97E659ED8D5D259C_9_METHOD_1_6D3D16E745D4D56A_OFFSET UNITYSDK_OFFSET(0x117FF6B0)
#define CLASS_1_97E659ED8D5D259C_9_METHOD_1_93DD8EA8B50422BA_OFFSET UNITYSDK_OFFSET(0x117FF650)
#define CLASS_1_97E659ED8D5D259C_9_METHOD_1_B8FF86B5386F944C_OFFSET UNITYSDK_OFFSET(0x117FF710)
#define CLASS_1_97E659ED8D5D259C_9_METHOD_1_F797C73C8B620CEA_OFFSET UNITYSDK_OFFSET(0x117FF500)
#define CLASS_1_97E659ED8D5D259C_9__CTOR_OFFSET UNITYSDK_OFFSET(0x117FF780)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_9_TypeDefinitionIndex = 62235;

class Class_1_97E659ED8D5D259C_9 : public ::System::Object
{
public:
	::System::UInt32 _ConditionID_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_9__CTOR_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::CakeRaceTriggerConditionRow* Method_1_F797C73C8B620CEA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceTriggerConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_9_METHOD_1_F797C73C8B620CEA_OFFSET))(a1);
	}

	::RPG::GameCore::CakeRaceTriggerConditionRow* Method_1_6420F140965E2469()
	{
		return ((::RPG::GameCore::CakeRaceTriggerConditionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_9_METHOD_1_6420F140965E2469_OFFSET))(this);
	}

	::System::UInt32 get_ConditionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_9_GET_CONDITIONID_OFFSET))(this);
	}

	::RPG::GameCore::CakeRaceTriggerConditionType Method_1_93DD8EA8B50422BA()
	{
		return ((::RPG::GameCore::CakeRaceTriggerConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_9_METHOD_1_93DD8EA8B50422BA_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* Method_1_6D3D16E745D4D56A()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_9_METHOD_1_6D3D16E745D4D56A_OFFSET))(this);
	}

	static ::Class_1_97E659ED8D5D259C_9* Method_1_B8FF86B5386F944C(::System::UInt32 a1)
	{
		return ((::Class_1_97E659ED8D5D259C_9*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_9_METHOD_1_B8FF86B5386F944C_OFFSET))(a1);
	}
};
