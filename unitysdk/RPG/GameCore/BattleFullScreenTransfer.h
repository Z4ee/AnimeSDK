#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ScreenTransferFullDuration; }

#define RPG_GAMECORE_BATTLEFULLSCREENTRANSFER_METHOD_3_2AAE1F2A46A3CBE9_OFFSET UNITYSDK_OFFSET(0x1A3EFD70)
#define RPG_GAMECORE_BATTLEFULLSCREENTRANSFER_METHOD_3_9E2C77D9DDF8D29E_OFFSET UNITYSDK_OFFSET(0x1A3EFDC0)
#define RPG_GAMECORE_BATTLEFULLSCREENTRANSFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3EFDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleFullScreenTransfer_TypeDefinitionIndex = 22229;

	class BattleFullScreenTransfer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ScreenTransferType Type; // 0x18
		::RPG::GameCore::ScreenTransferFullDuration* TransferFullDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEFULLSCREENTRANSFER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2AAE1F2A46A3CBE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleFullScreenTransfer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleFullScreenTransfer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEFULLSCREENTRANSFER_METHOD_3_2AAE1F2A46A3CBE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E2C77D9DDF8D29E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleFullScreenTransfer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleFullScreenTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEFULLSCREENTRANSFER_METHOD_3_9E2C77D9DDF8D29E_OFFSET))(a1, a2);
		}
	};
}
