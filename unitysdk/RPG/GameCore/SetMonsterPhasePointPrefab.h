#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB_METHOD_3_5AFA1412A58683B1_OFFSET UNITYSDK_OFFSET(0x176D83E0)
#define RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB_METHOD_3_8492CC7A052AB96D_OFFSET UNITYSDK_OFFSET(0x176D8460)
#define RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x176D8430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterPhasePointPrefab_TypeDefinitionIndex = 21478;

	class SetMonsterPhasePointPrefab : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* PrefabPathList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5AFA1412A58683B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterPhasePointPrefab*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterPhasePointPrefab*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB_METHOD_3_5AFA1412A58683B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8492CC7A052AB96D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterPhasePointPrefab* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterPhasePointPrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB_METHOD_3_8492CC7A052AB96D_OFFSET))(a1, a2);
		}
	};
}
