#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DEFERCREATETRIALPLAYER_METHOD_3_70F97F3F9D49BFFA_OFFSET UNITYSDK_OFFSET(0x1D01E1C0)
#define RPG_GAMECORE_DEFERCREATETRIALPLAYER_METHOD_3_B7DBDF725E3A22B5_OFFSET UNITYSDK_OFFSET(0x1D01E180)
#define RPG_GAMECORE_DEFERCREATETRIALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D01E1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeferCreateTrialPlayer_TypeDefinitionIndex = 23399;

	class DeferCreateTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* SpecialPlayerIDList; // 0x18
		::System::Boolean MarkCostBP; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFERCREATETRIALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B7DBDF725E3A22B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeferCreateTrialPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeferCreateTrialPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFERCREATETRIALPLAYER_METHOD_3_B7DBDF725E3A22B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_70F97F3F9D49BFFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeferCreateTrialPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeferCreateTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFERCREATETRIALPLAYER_METHOD_3_70F97F3F9D49BFFA_OFFSET))(a1, a2);
		}
	};
}
