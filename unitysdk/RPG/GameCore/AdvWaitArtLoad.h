#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVWAITARTLOAD_METHOD_3_2BA9E351E2EC6C93_OFFSET UNITYSDK_OFFSET(0x1CBA5E00)
#define RPG_GAMECORE_ADVWAITARTLOAD_METHOD_3_D7FCB04E558B2A89_OFFSET UNITYSDK_OFFSET(0x1CBA5D80)
#define RPG_GAMECORE_ADVWAITARTLOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA5DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvWaitArtLoad_TypeDefinitionIndex = 21801;

	class AdvWaitArtLoad : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoad; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITARTLOAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D7FCB04E558B2A89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvWaitArtLoad*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvWaitArtLoad*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITARTLOAD_METHOD_3_D7FCB04E558B2A89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2BA9E351E2EC6C93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvWaitArtLoad* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvWaitArtLoad*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITARTLOAD_METHOD_3_2BA9E351E2EC6C93_OFFSET))(a1, a2);
		}
	};
}
