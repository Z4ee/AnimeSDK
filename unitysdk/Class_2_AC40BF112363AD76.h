#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_945ACFB1FEBC7A2C_20;
class Class_1_DD06ACFB24F923CA;
namespace RPG::GameCore { class ActionBarEffectConfig; }
namespace RPG::GameCore { class ActionBarEffectTextConfig; }
namespace RPG::GameCore { class ShowActionBarEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AC40BF112363AD76_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1189C640)
#define CLASS_2_AC40BF112363AD76_METHOD_2_6B59CAEA61AD563D_OFFSET UNITYSDK_OFFSET(0x1189CA30)
#define CLASS_2_AC40BF112363AD76_METHOD_2_ADA5CA6EADFD3A8F_OFFSET UNITYSDK_OFFSET(0x1189C8C0)
#define CLASS_2_AC40BF112363AD76_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1189C680)
#define CLASS_2_AC40BF112363AD76_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1189C980)
#define CLASS_2_AC40BF112363AD76_TICK_OFFSET UNITYSDK_OFFSET(0x1189C9D0)
#define CLASS_2_AC40BF112363AD76__CTOR_OFFSET UNITYSDK_OFFSET(0x1189C630)
#define CLASS_2_AC40BF112363AD76___GETACTIONBAREFFECTTEXTPARAMS_B__6_0_OFFSET UNITYSDK_OFFSET(0x1189CB50)
#define CLASS_2_AC40BF112363AD76___GETACTIONBARSINGLEACTIONEFFECTPARAMS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1189CAE0)

inline static constexpr unsigned int Class_2_AC40BF112363AD76_TypeDefinitionIndex = 52018;

class Class_2_AC40BF112363AD76 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowActionBarEffect* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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

	::Il2CppArray<::Class_1_DD06ACFB24F923CA*>* Method_2_ADA5CA6EADFD3A8F()
	{
		return ((::Il2CppArray<::Class_1_DD06ACFB24F923CA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76_METHOD_2_ADA5CA6EADFD3A8F_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_945ACFB1FEBC7A2C_20*>* Method_2_6B59CAEA61AD563D(::Il2CppArray<::RPG::GameCore::ActionBarEffectTextConfig*>* a1)
	{
		return ((::Il2CppArray<::Class_1_945ACFB1FEBC7A2C_20*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ActionBarEffectTextConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76_METHOD_2_6B59CAEA61AD563D_OFFSET))(this, a1);
	}

	::Class_1_DD06ACFB24F923CA* __GetActionBarSingleActionEffectParams_b__5_0(::RPG::GameCore::ActionBarEffectConfig* effectConfig)
	{
		return ((::Class_1_DD06ACFB24F923CA*(*)(::PVOID, ::RPG::GameCore::ActionBarEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76___GETACTIONBARSINGLEACTIONEFFECTPARAMS_B__5_0_OFFSET))(this, effectConfig);
	}

	::Class_1_945ACFB1FEBC7A2C_20* __GetActionBarEffectTextParams_b__6_0(::RPG::GameCore::ActionBarEffectTextConfig* textConfig)
	{
		return ((::Class_1_945ACFB1FEBC7A2C_20*(*)(::PVOID, ::RPG::GameCore::ActionBarEffectTextConfig*))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76___GETACTIONBAREFFECTTEXTPARAMS_B__6_0_OFFSET))(this, textConfig);
	}
};
