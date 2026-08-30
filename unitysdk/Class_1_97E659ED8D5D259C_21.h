#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerConditionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceTriggerConditionRow; }
namespace System { class String; }

#define CLASS_1_97E659ED8D5D259C_21_GET_CONDITIONID_OFFSET UNITYSDK_OFFSET(0x177BEEA0)
#define CLASS_1_97E659ED8D5D259C_21_METHOD_1_6420F140965E2469_OFFSET UNITYSDK_OFFSET(0x177BEE50)
#define CLASS_1_97E659ED8D5D259C_21_METHOD_1_994BBC9DD4065A73_OFFSET UNITYSDK_OFFSET(0x177BEF30)
#define CLASS_1_97E659ED8D5D259C_21_METHOD_1_B8FF86B5386F944C_OFFSET UNITYSDK_OFFSET(0x177BEFB0)
#define CLASS_1_97E659ED8D5D259C_21_METHOD_1_E63CD4862FA48803_OFFSET UNITYSDK_OFFSET(0x177BEEB0)
#define CLASS_1_97E659ED8D5D259C_21_METHOD_1_F797C73C8B620CEA_OFFSET UNITYSDK_OFFSET(0x177BED60)
#define CLASS_1_97E659ED8D5D259C_21__CTOR_OFFSET UNITYSDK_OFFSET(0x177BF020)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_21_TypeDefinitionIndex = 75995;

class Class_1_97E659ED8D5D259C_21 : public ::System::Object
{
public:
	::System::UInt32 _ConditionID_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_21__CTOR_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::CakeRaceTriggerConditionRow* Method_1_F797C73C8B620CEA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceTriggerConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_21_METHOD_1_F797C73C8B620CEA_OFFSET))(a1);
	}

	::RPG::GameCore::CakeRaceTriggerConditionRow* Method_1_6420F140965E2469()
	{
		return ((::RPG::GameCore::CakeRaceTriggerConditionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_21_METHOD_1_6420F140965E2469_OFFSET))(this);
	}

	::System::UInt32 get_ConditionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_21_GET_CONDITIONID_OFFSET))(this);
	}

	::RPG::GameCore::CakeRaceTriggerConditionType Method_1_E63CD4862FA48803()
	{
		return ((::RPG::GameCore::CakeRaceTriggerConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_21_METHOD_1_E63CD4862FA48803_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* Method_1_994BBC9DD4065A73()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_21_METHOD_1_994BBC9DD4065A73_OFFSET))(this);
	}

	static ::Class_1_97E659ED8D5D259C_21* Method_1_B8FF86B5386F944C(::System::UInt32 a1)
	{
		return ((::Class_1_97E659ED8D5D259C_21*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_21_METHOD_1_B8FF86B5386F944C_OFFSET))(a1);
	}
};
