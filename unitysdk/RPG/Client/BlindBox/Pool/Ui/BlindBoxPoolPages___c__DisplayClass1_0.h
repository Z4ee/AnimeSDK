#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIFrameCapture; }
namespace RPG::Client::BlindBox::Pool { class BlindBoxPoolModule; }
namespace RPG::Client::BlindBox::Pool { class IPoolContentEntry; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC8878A0)
#define RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES___C__DISPLAYCLASS1_0__SHOWBLINDBOXPOOLDETAILPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xC887B70)
#define RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES___C__DISPLAYCLASS1_0__SHOWBLINDBOXPOOLDETAILPAGE_B__2_OFFSET UNITYSDK_OFFSET(0xC887D90)

namespace RPG::Client::BlindBox::Pool::Ui
{
	inline static constexpr unsigned int BlindBoxPoolPages___c__DisplayClass1_0_TypeDefinitionIndex = 74964;

	class BlindBoxPoolPages___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Pool::BlindBoxPoolModule* module; // 0x10
		::RPG::Client::BlindBox::Pool::IPoolContentEntry* targetEntry; // 0x18
		::RPG::Client::UIFrameCapture* frameCapture; // 0x20
		::System::UInt32 blockId; // 0x28
		::System::UInt32 poolId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowBlindBoxPoolDetailPage_b__0(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES___C__DISPLAYCLASS1_0__SHOWBLINDBOXPOOLDETAILPAGE_B__0_OFFSET))(this, a1);
		}

		::System::Void _ShowBlindBoxPoolDetailPage_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES___C__DISPLAYCLASS1_0__SHOWBLINDBOXPOOLDETAILPAGE_B__2_OFFSET))(this);
		}
	};
}
