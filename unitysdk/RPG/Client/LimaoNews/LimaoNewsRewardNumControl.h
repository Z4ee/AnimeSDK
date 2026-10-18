#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL_SETREWARDID_OFFSET UNITYSDK_OFFSET(0xD3E4B80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD3E4BD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL__GETREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xD3E4AE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3E4A50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD3E49D0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsRewardNumControl_TypeDefinitionIndex = 80360;

	class LimaoNewsRewardNumControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::UInt32 _RewardID; // 0x40
		::UnityEngine::UI::Text* _Text; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::UInt32 _GetRewardCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL__GETREWARDCOUNT_OFFSET))(this, a1);
		}

		::System::Void SetRewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL_SETREWARDID_OFFSET))(this, a1);
		}
	};
}
