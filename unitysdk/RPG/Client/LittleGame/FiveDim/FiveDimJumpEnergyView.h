#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimView.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMJUMPENERGYVIEW_SETENERGY_OFFSET UNITYSDK_OFFSET(0x189FB4D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMJUMPENERGYVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x189FB570)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimJumpEnergyView_TypeDefinitionIndex = 73237;

	class FiveDimJumpEnergyView : public ::RPG::Client::LittleGame::FiveDim::FiveDimView
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* EnergyNodes; // 0x1D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMJUMPENERGYVIEW__CTOR_OFFSET))(this);
		}

		::System::Void SetEnergy(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMJUMPENERGYVIEW_SETENERGY_OFFSET))(this, a1);
		}
	};
}
