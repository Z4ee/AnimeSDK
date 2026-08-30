#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define RPG_CLIENT_FATESTATISTICSMASTERINFOITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1AE38720)
#define RPG_CLIENT_FATESTATISTICSMASTERINFOITEM_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x1AE38870)
#define RPG_CLIENT_FATESTATISTICSMASTERINFOITEM_GET_MASTERROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x1AE387C0)
#define RPG_CLIENT_FATESTATISTICSMASTERINFOITEM_GET_RANKING_OFFSET UNITYSDK_OFFSET(0x1AE38830)
#define RPG_CLIENT_FATESTATISTICSMASTERINFOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE386F0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatisticsMasterInfoItem_TypeDefinitionIndex = 64196;

	class FateStatisticsMasterInfoItem : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x10
		::System::UInt32 _AvatarRealID; // 0x18
		::System::Boolean _IsPlayer; // 0x1C
		::System::UInt32 _Ranking; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSMASTERINFOITEM__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::FateStatisticsMasterInfoItem* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::FateStatisticsMasterInfoItem*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSMASTERINFOITEM_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::String* get_MasterRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSMASTERINFOITEM_GET_MASTERROUNDICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Ranking()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSMASTERINFOITEM_GET_RANKING_OFFSET))(this);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSMASTERINFOITEM_GET_ISPLAYER_OFFSET))(this);
		}
	};
}
