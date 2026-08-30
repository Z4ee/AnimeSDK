#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB_METHOD_3_4302F6AD92ADA9BA_OFFSET UNITYSDK_OFFSET(0x1E088490)
#define RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB_METHOD_3_8492CC7A052AB96D_OFFSET UNITYSDK_OFFSET(0x1E0884D0)
#define RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0884C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterPhasePointPrefab_TypeDefinitionIndex = 22985;

	class SetMonsterPhasePointPrefab : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* PrefabPathList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4302F6AD92ADA9BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterPhasePointPrefab*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterPhasePointPrefab*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB_METHOD_3_4302F6AD92ADA9BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8492CC7A052AB96D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterPhasePointPrefab* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterPhasePointPrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASEPOINTPREFAB_METHOD_3_8492CC7A052AB96D_OFFSET))(a1, a2);
		}
	};
}
