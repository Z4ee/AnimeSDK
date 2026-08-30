#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVREMOVEEFFECTLIST_METHOD_3_225832074879FED2_OFFSET UNITYSDK_OFFSET(0x1CDD6C20)
#define RPG_GAMECORE_ADVREMOVEEFFECTLIST_METHOD_3_A1F84D44A3AFB3CD_OFFSET UNITYSDK_OFFSET(0x1CDD6BE0)
#define RPG_GAMECORE_ADVREMOVEEFFECTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD6C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvRemoveEffectList_TypeDefinitionIndex = 22070;

	class AdvRemoveEffectList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* ConfigNameList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVEEFFECTLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A1F84D44A3AFB3CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRemoveEffectList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRemoveEffectList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVEEFFECTLIST_METHOD_3_A1F84D44A3AFB3CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_225832074879FED2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRemoveEffectList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRemoveEffectList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVEEFFECTLIST_METHOD_3_225832074879FED2_OFFSET))(a1, a2);
		}
	};
}
