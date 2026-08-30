#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CorrectionPlayerTeleportPosMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwitchCharacterAnchor; }

#define RPG_GAMECORE_CORRECTIONPLAYERTELEPORTPOS_METHOD_3_5C40230642F6C9F6_OFFSET UNITYSDK_OFFSET(0x1D9BB670)
#define RPG_GAMECORE_CORRECTIONPLAYERTELEPORTPOS_METHOD_3_8107F75F68023FE1_OFFSET UNITYSDK_OFFSET(0x1D9BB630)
#define RPG_GAMECORE_CORRECTIONPLAYERTELEPORTPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BB660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CorrectionPlayerTeleportPos_TypeDefinitionIndex = 20267;

	class CorrectionPlayerTeleportPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::CorrectionPlayerTeleportPosMode Mode; // 0x18
		::RPG::GameCore::SwitchCharacterAnchor* AnchorConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CORRECTIONPLAYERTELEPORTPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8107F75F68023FE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CorrectionPlayerTeleportPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CorrectionPlayerTeleportPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CORRECTIONPLAYERTELEPORTPOS_METHOD_3_8107F75F68023FE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5C40230642F6C9F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CorrectionPlayerTeleportPos* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CorrectionPlayerTeleportPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CORRECTIONPLAYERTELEPORTPOS_METHOD_3_5C40230642F6C9F6_OFFSET))(a1, a2);
		}
	};
}
