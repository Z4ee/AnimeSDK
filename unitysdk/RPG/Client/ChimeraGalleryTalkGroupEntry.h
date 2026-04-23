#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkConditionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraGalleryTalkRow; }

#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xA02BC90)
#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_NUMBEREDTITLE_OFFSET UNITYSDK_OFFSET(0xA02BAD0)
#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_SORT_OFFSET UNITYSDK_OFFSET(0xA02B7B0)
#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xA02BA50)
#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA02BCA0)
#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xA02A750)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGalleryTalkGroupEntry_TypeDefinitionIndex = 58436;

	class ChimeraGalleryTalkGroupEntry : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraTalkConditionType _ConditionType_k__BackingField; // 0x10

		::System::Void _ctor(::RPG::GameCore::ChimeraTalkConditionType conditionType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraTalkConditionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY__CTOR_OFFSET))(this, conditionType);
		}

		::RPG::GameCore::ChimeraTalkConditionType get_ConditionType()
		{
			return ((::RPG::GameCore::ChimeraTalkConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_CONDITIONTYPE_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraGalleryTalkRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraGalleryTalkRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_NumberedTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_NUMBEREDTITLE_OFFSET))(this);
		}

		::System::Single get_Sort()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_SORT_OFFSET))(this);
		}
	};
}
