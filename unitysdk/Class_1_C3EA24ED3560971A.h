#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79;
class Class_2_181A7F9409C60DBC;
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }
namespace RPG::GameCore { class ChenLingBattleEffectTier; }
namespace System { class String; }

#define CLASS_1_C3EA24ED3560971A_METHOD_1_A811D32539E644C5_OFFSET UNITYSDK_OFFSET(0xD3B4210)
#define CLASS_1_C3EA24ED3560971A_METHOD_1_B5E8B38AC8C23614_OFFSET UNITYSDK_OFFSET(0xD3B3FD0)
#define CLASS_1_C3EA24ED3560971A_METHOD_1_CB1C48528AA0E081_OFFSET UNITYSDK_OFFSET(0xD3B3F40)

inline static constexpr unsigned int Class_1_C3EA24ED3560971A_TypeDefinitionIndex = 71332;

class Class_1_C3EA24ED3560971A : public ::System::Object
{
public:
	static ::System::String* Method_1_CB1C48528AA0E081(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2)
	{
		return ((::System::String*(*)(::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C3EA24ED3560971A_METHOD_1_CB1C48528AA0E081_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_A811D32539E644C5(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79* a3)
	{
		return ((::UnityEngine::Vector3(*)(::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79*))((::PBYTE)hIl2Cpp + CLASS_1_C3EA24ED3560971A_METHOD_1_A811D32539E644C5_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::ChenLingBattleEffectTier* Method_1_B5E8B38AC8C23614(::Class_2_181A7F9409C60DBC* a1, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a2)
	{
		return ((::RPG::GameCore::ChenLingBattleEffectTier*(*)(::Class_2_181A7F9409C60DBC*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*))((::PBYTE)hIl2Cpp + CLASS_1_C3EA24ED3560971A_METHOD_1_B5E8B38AC8C23614_OFFSET))(a1, a2);
	}
};
