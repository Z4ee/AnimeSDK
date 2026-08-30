#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT_METHOD_3_8CEA3DE25AA5CEBD_OFFSET UNITYSDK_OFFSET(0x1D5E1130)
#define RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT_METHOD_3_E57F350BEA1FF800_OFFSET UNITYSDK_OFFSET(0x1D5E1200)
#define RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E11F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyShowEffectResult_TypeDefinitionIndex = 22115;

	class TrainPartyShowEffectResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8CEA3DE25AA5CEBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyShowEffectResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyShowEffectResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT_METHOD_3_8CEA3DE25AA5CEBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E57F350BEA1FF800(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyShowEffectResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyShowEffectResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT_METHOD_3_E57F350BEA1FF800_OFFSET))(a1, a2);
		}
	};
}
