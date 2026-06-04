#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ScreenTransferBaseAction; }
namespace RPG::GameCore { class ScreenTransferTextInfo; }

#define RPG_GAMECORE_PLAYFULLSCREENTRANSFER_METHOD_3_1C1F2A84DAB9B340_OFFSET UNITYSDK_OFFSET(0x19A243E0)
#define RPG_GAMECORE_PLAYFULLSCREENTRANSFER_METHOD_3_B59063D94D266187_OFFSET UNITYSDK_OFFSET(0x19A244A0)
#define RPG_GAMECORE_PLAYFULLSCREENTRANSFER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A24450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayFullScreenTransfer_TypeDefinitionIndex = 19717;

	class PlayFullScreenTransfer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ScreenTransferReason Reason; // 0x18
		::RPG::GameCore::ScreenTransferType Type; // 0x1C
		::System::Single PrevDuration; // 0x20
		::System::Single KeepDuration; // 0x24
		::System::Single PostDuration; // 0x28
		::System::Boolean EndTaskAfterUIClose; // 0x2C
		::System::Boolean KeepDisplay; // 0x2D
		::RPG::GameCore::ScreenTransferTextInfo* TextInfo; // 0x30
		::Il2CppArray<::RPG::GameCore::ScreenTransferBaseAction*>* Action; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYFULLSCREENTRANSFER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1C1F2A84DAB9B340(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayFullScreenTransfer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayFullScreenTransfer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYFULLSCREENTRANSFER_METHOD_3_1C1F2A84DAB9B340_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B59063D94D266187(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayFullScreenTransfer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayFullScreenTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYFULLSCREENTRANSFER_METHOD_3_B59063D94D266187_OFFSET))(a1, a2);
		}
	};
}
