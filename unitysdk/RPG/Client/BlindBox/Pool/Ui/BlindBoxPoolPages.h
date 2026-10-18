#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Pool { class BlindBoxPoolModule; }
namespace RPG::Client::BlindBox::Pool { class IPoolContentEntry; }

#define RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES_SHOWBLINDBOXPOOLDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xC887500)
#define RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES_SHOWBLINDBOXPOOLHISTORYPAGE_OFFSET UNITYSDK_OFFSET(0xC8878B0)
#define RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES_SHOWBLINDBOXPOOLPAGE_OFFSET UNITYSDK_OFFSET(0xC8873A0)

namespace RPG::Client::BlindBox::Pool::Ui
{
	inline static constexpr unsigned int BlindBoxPoolPages_TypeDefinitionIndex = 74962;

	class BlindBoxPoolPages : public ::System::Object
	{
	public:
		static ::System::Void ShowBlindBoxPoolPage(::RPG::Client::BlindBox::Pool::BlindBoxPoolModule* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::Client::BlindBox::Pool::BlindBoxPoolModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES_SHOWBLINDBOXPOOLPAGE_OFFSET))(a1, a2);
		}

		static ::System::Void ShowBlindBoxPoolDetailPage(::RPG::Client::BlindBox::Pool::BlindBoxPoolModule* a1, ::System::UInt32 a2, ::RPG::Client::BlindBox::Pool::IPoolContentEntry* a3)
		{
			return ((::System::Void(*)(::RPG::Client::BlindBox::Pool::BlindBoxPoolModule*, ::System::UInt32, ::RPG::Client::BlindBox::Pool::IPoolContentEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES_SHOWBLINDBOXPOOLDETAILPAGE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ShowBlindBoxPoolHistoryPage(::RPG::Client::BlindBox::Pool::BlindBoxPoolModule* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::Client::BlindBox::Pool::BlindBoxPoolModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES_SHOWBLINDBOXPOOLHISTORYPAGE_OFFSET))(a1, a2);
		}
	};
}
