#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionBarEffectConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWACTIONBAREFFECT_METHOD_3_78D7ADE67CED0140_OFFSET UNITYSDK_OFFSET(0x1BE38580)
#define RPG_GAMECORE_SHOWACTIONBAREFFECT_METHOD_3_AB89412CE31C30EA_OFFSET UNITYSDK_OFFSET(0x1BE384C0)
#define RPG_GAMECORE_SHOWACTIONBAREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE38530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowActionBarEffect_TypeDefinitionIndex = 22122;

	class ShowActionBarEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::Int32>* MultiActionIndexes; // 0x20
		::System::Boolean IsShow; // 0x28
		::Il2CppArray<::RPG::GameCore::ActionBarEffectConfig*>* EffectPrefabs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONBAREFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AB89412CE31C30EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowActionBarEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowActionBarEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONBAREFFECT_METHOD_3_AB89412CE31C30EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_78D7ADE67CED0140(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowActionBarEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowActionBarEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONBAREFFECT_METHOD_3_78D7ADE67CED0140_OFFSET))(a1, a2);
		}
	};
}
