#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RANDOMTASKODDS_METHOD_2_7A72F212CD5CA666_OFFSET UNITYSDK_OFFSET(0x1D386C50)
#define RPG_GAMECORE_RANDOMTASKODDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D386DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomTaskOdds_TypeDefinitionIndex = 21032;

	class RandomTaskOdds : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Odds; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMTASKODDS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7A72F212CD5CA666(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomTaskOdds*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomTaskOdds*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMTASKODDS_METHOD_2_7A72F212CD5CA666_OFFSET))(a1, a2);
		}
	};
}
