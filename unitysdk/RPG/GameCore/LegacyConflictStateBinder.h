#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_LEGACYCONFLICTSTATEBINDER_METHOD_3_F423A866F957387D_OFFSET UNITYSDK_OFFSET(0x1D1C7850)
#define RPG_GAMECORE_LEGACYCONFLICTSTATEBINDER_METHOD_3_FB049DF6F409E348_OFFSET UNITYSDK_OFFSET(0x1D1C7810)
#define RPG_GAMECORE_LEGACYCONFLICTSTATEBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C7840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LegacyConflictStateBinder_TypeDefinitionIndex = 20801;

	class LegacyConflictStateBinder : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* InConflictState; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OutConflictState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEGACYCONFLICTSTATEBINDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FB049DF6F409E348(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LegacyConflictStateBinder*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LegacyConflictStateBinder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEGACYCONFLICTSTATEBINDER_METHOD_3_FB049DF6F409E348_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F423A866F957387D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LegacyConflictStateBinder* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LegacyConflictStateBinder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEGACYCONFLICTSTATEBINDER_METHOD_3_F423A866F957387D_OFFSET))(a1, a2);
		}
	};
}
