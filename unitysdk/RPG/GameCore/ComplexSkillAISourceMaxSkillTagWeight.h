#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXSKILLTAGWEIGHT_METHOD_3_42B3DC331031E05B_OFFSET UNITYSDK_OFFSET(0x17128E20)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXSKILLTAGWEIGHT_METHOD_3_CFC848DB616F8D0C_OFFSET UNITYSDK_OFFSET(0x17126C20)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXSKILLTAGWEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x17126C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceMaxSkillTagWeight_TypeDefinitionIndex = 14235;

	class ComplexSkillAISourceMaxSkillTagWeight : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXSKILLTAGWEIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_42B3DC331031E05B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceMaxSkillTagWeight*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceMaxSkillTagWeight*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXSKILLTAGWEIGHT_METHOD_3_42B3DC331031E05B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CFC848DB616F8D0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceMaxSkillTagWeight* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceMaxSkillTagWeight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXSKILLTAGWEIGHT_METHOD_3_CFC848DB616F8D0C_OFFSET))(a1, a2);
		}
	};
}
