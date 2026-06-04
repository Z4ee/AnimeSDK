#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONSTERHPRATIOCHECK_METHOD_3_974DE1DE1D8808E2_OFFSET UNITYSDK_OFFSET(0x199AD550)
#define RPG_GAMECORE_MONSTERHPRATIOCHECK_METHOD_3_BBF3D679C55CB52B_OFFSET UNITYSDK_OFFSET(0x199AD4D0)
#define RPG_GAMECORE_MONSTERHPRATIOCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x199AD520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterHPRatioCheck_TypeDefinitionIndex = 21707;

	class MonsterHPRatioCheck : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* MonsterTagList; // 0x18
		::RPG::GameCore::CompareType CompareType; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* TargetHPRatioList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERHPRATIOCHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BBF3D679C55CB52B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterHPRatioCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterHPRatioCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERHPRATIOCHECK_METHOD_3_BBF3D679C55CB52B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_974DE1DE1D8808E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterHPRatioCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterHPRatioCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERHPRATIOCHECK_METHOD_3_974DE1DE1D8808E2_OFFSET))(a1, a2);
		}
	};
}
