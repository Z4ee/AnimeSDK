#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_1FFDD73C4573633F;
class Class_1_945ACFB1FEBC7A2C_21;
namespace RPG::GameCore { class ActionBarEffectConfig; }
namespace RPG::GameCore { class ActionBarEffectTextConfig; }
namespace RPG::GameCore { class ShowActionBarEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AC40BF112363AD76_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A1FEE0)
#define CLASS_2_AC40BF112363AD76_METHOD_2_1C59EE3D21C209B4_OFFSET UNITYSDK_OFFSET(0x13A20150)
#define CLASS_2_AC40BF112363AD76_METHOD_2_CF293F7C02C74631_OFFSET UNITYSDK_OFFSET(0x13A202D0)
#define CLASS_2_AC40BF112363AD76_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A1FF20)
#define CLASS_2_AC40BF112363AD76_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A20220)
#define CLASS_2_AC40BF112363AD76_TICK_OFFSET UNITYSDK_OFFSET(0x13A20270)
#define CLASS_2_AC40BF112363AD76__CTOR_OFFSET UNITYSDK_OFFSET(0x13A1FED0)
#define CLASS_2_AC40BF112363AD76___GETACTIONBAREFFECTTEXTPARAMS_B__6_0_OFFSET UNITYSDK_OFFSET(0x13A20410)
#define CLASS_2_AC40BF112363AD76___GETACTIONBARSINGLEACTIONEFFECTPARAMS_B__5_0_OFFSET UNITYSDK_OFFSET(0x13A203A0)

inline static constexpr unsigned int Class_2_AC40BF112363AD76_TypeDefinitionIndex = 52692;

class Class_2_AC40BF112363AD76 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ShowActionBarEffect* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowActionBarEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowActionBarEffect*))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76_TICK_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_1_1FFDD73C4573633F*>* Method_2_1C59EE3D21C209B4()
	{
		return ((::Il2CppArray<::Class_1_1FFDD73C4573633F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76_METHOD_2_1C59EE3D21C209B4_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_945ACFB1FEBC7A2C_21*>* Method_2_CF293F7C02C74631(::Il2CppArray<::RPG::GameCore::ActionBarEffectTextConfig*>* a1)
	{
		return ((::Il2CppArray<::Class_1_945ACFB1FEBC7A2C_21*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ActionBarEffectTextConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76_METHOD_2_CF293F7C02C74631_OFFSET))(this, a1);
	}

	::Class_1_1FFDD73C4573633F* __GetActionBarSingleActionEffectParams_b__5_0(::RPG::GameCore::ActionBarEffectConfig* a1)
	{
		return ((::Class_1_1FFDD73C4573633F*(*)(::PVOID, ::RPG::GameCore::ActionBarEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76___GETACTIONBARSINGLEACTIONEFFECTPARAMS_B__5_0_OFFSET))(this, a1);
	}

	::Class_1_945ACFB1FEBC7A2C_21* __GetActionBarEffectTextParams_b__6_0(::RPG::GameCore::ActionBarEffectTextConfig* a1)
	{
		return ((::Class_1_945ACFB1FEBC7A2C_21*(*)(::PVOID, ::RPG::GameCore::ActionBarEffectTextConfig*))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76___GETACTIONBAREFFECTTEXTPARAMS_B__6_0_OFFSET))(this, a1);
	}
};
