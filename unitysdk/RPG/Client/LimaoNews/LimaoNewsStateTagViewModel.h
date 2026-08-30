#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsStateTag.h"
#include "unitysdk/Sofa/BaseViewModel.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGVIEWMODEL_GET_STATETAG_OFFSET UNITYSDK_OFFSET(0x1C4A2940)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGVIEWMODEL_GET_SUBMITREWARDID_OFFSET UNITYSDK_OFFSET(0x1C4ACD90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGVIEWMODEL_SET_STATETAG_OFFSET UNITYSDK_OFFSET(0x1C4ACE00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGVIEWMODEL_SET_SUBMITREWARDID_OFFSET UNITYSDK_OFFSET(0x1C4ACE70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A4D30)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsStateTagViewModel_TypeDefinitionIndex = 79094;

	class LimaoNewsStateTagViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsStateTag _StateTag; // 0x20
		::System::UInt32 _SubmitRewardID; // 0x24

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsStateTag a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsStateTag, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LimaoNews::LimaoNewsStateTag get_StateTag()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsStateTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGVIEWMODEL_GET_STATETAG_OFFSET))(this);
		}

		::System::Void set_StateTag(::RPG::Client::LimaoNews::LimaoNewsStateTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsStateTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGVIEWMODEL_SET_STATETAG_OFFSET))(this, a1);
		}

		::System::UInt32 get_SubmitRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGVIEWMODEL_GET_SUBMITREWARDID_OFFSET))(this);
		}

		::System::Void set_SubmitRewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGVIEWMODEL_SET_SUBMITREWARDID_OFFSET))(this, a1);
		}
	};
}
