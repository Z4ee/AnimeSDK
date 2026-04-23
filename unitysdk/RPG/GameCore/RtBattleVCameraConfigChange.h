#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraConfigChange.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE_METHOD_4_86153E941EC50869_OFFSET UNITYSDK_OFFSET(0x18DC76C0)
#define RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE_METHOD_4_BAB73C2A8F17EFEF_OFFSET UNITYSDK_OFFSET(0x18DC7640)
#define RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC7690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleVCameraConfigChange_TypeDefinitionIndex = 23094;

	class RtBattleVCameraConfigChange : public ::RPG::GameCore::VCameraConfigChange
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BAB73C2A8F17EFEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleVCameraConfigChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleVCameraConfigChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE_METHOD_4_BAB73C2A8F17EFEF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_86153E941EC50869(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleVCameraConfigChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleVCameraConfigChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE_METHOD_4_86153E941EC50869_OFFSET))(a1, a2);
		}
	};
}
