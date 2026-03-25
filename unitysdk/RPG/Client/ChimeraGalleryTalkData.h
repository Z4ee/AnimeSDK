#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraGalleryGroupedTalkData; }

#define RPG_CLIENT_CHIMERAGALLERYTALKDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x93BDC10)
#define RPG_CLIENT_CHIMERAGALLERYTALKDATA_GET_TITLEPARAM_OFFSET UNITYSDK_OFFSET(0x93BDB60)
#define RPG_CLIENT_CHIMERAGALLERYTALKDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x93BD890)
#define RPG_CLIENT_CHIMERAGALLERYTALKDATA_GET__HASSIBLINGS_OFFSET UNITYSDK_OFFSET(0x93BD830)
#define RPG_CLIENT_CHIMERAGALLERYTALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x93BD4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGalleryTalkData_TypeDefinitionIndex = 51497;

	class ChimeraGalleryTalkData : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraGalleryGroupedTalkData* _Group; // 0x10
		::System::Int32 _Index; // 0x18

		::System::Void _ctor(::RPG::Client::ChimeraGalleryGroupedTalkData* group, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraGalleryGroupedTalkData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKDATA__CTOR_OFFSET))(this, group, index);
		}

		::System::Boolean get__HasSiblings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKDATA_GET__HASSIBLINGS_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> get_TitleParam()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKDATA_GET_TITLEPARAM_OFFSET))(this);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKDATA_GET_CONTENT_OFFSET))(this);
		}
	};
}
