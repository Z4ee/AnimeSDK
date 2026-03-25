#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionBarEffectConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWACTIONBAREFFECT_METHOD_3_4633478A2DA84DE7_OFFSET UNITYSDK_OFFSET(0x176F3620)
#define RPG_GAMECORE_SHOWACTIONBAREFFECT_METHOD_3_6ED99107844B5957_OFFSET UNITYSDK_OFFSET(0x176F3520)
#define RPG_GAMECORE_SHOWACTIONBAREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x176F35B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowActionBarEffect_TypeDefinitionIndex = 21152;

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

		static ::System::Void Method_3_6ED99107844B5957(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowActionBarEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowActionBarEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONBAREFFECT_METHOD_3_6ED99107844B5957_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4633478A2DA84DE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowActionBarEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowActionBarEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONBAREFFECT_METHOD_3_4633478A2DA84DE7_OFFSET))(a1, a2);
		}
	};
}
