#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG_METHOD_5_B100BD5E40A42BF4_OFFSET UNITYSDK_OFFSET(0x178A66E0)
#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG_METHOD_5_DBF6E46A93CC45FC_OFFSET UNITYSDK_OFFSET(0x178A67C0)
#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178A6770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionAddBuildCoinConfig_TypeDefinitionIndex = 16584;

	class TrainPartyActionAddBuildCoinConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Int32 AddNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_B100BD5E40A42BF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddBuildCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddBuildCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG_METHOD_5_B100BD5E40A42BF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_DBF6E46A93CC45FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddBuildCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddBuildCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG_METHOD_5_DBF6E46A93CC45FC_OFFSET))(a1, a2);
		}
	};
}
