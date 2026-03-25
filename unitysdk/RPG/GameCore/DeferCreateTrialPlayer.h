#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DEFERCREATETRIALPLAYER_METHOD_3_143A4A5BD52EF068_OFFSET UNITYSDK_OFFSET(0x17151570)
#define RPG_GAMECORE_DEFERCREATETRIALPLAYER_METHOD_3_5EB8FE9576915FF8_OFFSET UNITYSDK_OFFSET(0x171514F0)
#define RPG_GAMECORE_DEFERCREATETRIALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x17151540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeferCreateTrialPlayer_TypeDefinitionIndex = 21921;

	class DeferCreateTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* SpecialPlayerIDList; // 0x18
		::System::Boolean MarkCostBP; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFERCREATETRIALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5EB8FE9576915FF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeferCreateTrialPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeferCreateTrialPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFERCREATETRIALPLAYER_METHOD_3_5EB8FE9576915FF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_143A4A5BD52EF068(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeferCreateTrialPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeferCreateTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFERCREATETRIALPLAYER_METHOD_3_143A4A5BD52EF068_OFFSET))(a1, a2);
		}
	};
}
