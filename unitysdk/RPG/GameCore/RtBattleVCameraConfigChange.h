#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraConfigChange.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE_METHOD_4_86153E941EC50869_OFFSET UNITYSDK_OFFSET(0x1D49D1B0)
#define RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE_METHOD_4_86D511B64723A9B4_OFFSET UNITYSDK_OFFSET(0x1D49D170)
#define RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D49D1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleVCameraConfigChange_TypeDefinitionIndex = 23823;

	class RtBattleVCameraConfigChange : public ::RPG::GameCore::VCameraConfigChange
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_86D511B64723A9B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleVCameraConfigChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleVCameraConfigChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE_METHOD_4_86D511B64723A9B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_86153E941EC50869(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleVCameraConfigChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleVCameraConfigChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE_METHOD_4_86153E941EC50869_OFFSET))(a1, a2);
		}
	};
}
