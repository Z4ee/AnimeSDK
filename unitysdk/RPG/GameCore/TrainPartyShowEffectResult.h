#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT_METHOD_3_0D43C7DEFE2D51B4_OFFSET UNITYSDK_OFFSET(0x19DF8D30)
#define RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT_METHOD_3_E57F350BEA1FF800_OFFSET UNITYSDK_OFFSET(0x19DF8E40)
#define RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF8E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyShowEffectResult_TypeDefinitionIndex = 21137;

	class TrainPartyShowEffectResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0D43C7DEFE2D51B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyShowEffectResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyShowEffectResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT_METHOD_3_0D43C7DEFE2D51B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E57F350BEA1FF800(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyShowEffectResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyShowEffectResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT_METHOD_3_E57F350BEA1FF800_OFFSET))(a1, a2);
		}
	};
}
