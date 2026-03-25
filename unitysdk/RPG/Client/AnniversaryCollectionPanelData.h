#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/Anniversary2NDPanelEnum.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AnniversaryCollectionContentData; }
namespace RPG::GameCore { class Anniversary2NDTabConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x90CC3D0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_PANELTYPE_OFFSET UNITYSDK_OFFSET(0x90CC520)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_TABICON_OFFSET UNITYSDK_OFFSET(0x90CC690)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_TABNAME_OFFSET UNITYSDK_OFFSET(0x90CC5C0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x90CC370)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0x90CBED0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x90CB8D0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA__INITDATA_OFFSET UNITYSDK_OFFSET(0x90CC210)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryCollectionPanelData_TypeDefinitionIndex = 50699;

	class AnniversaryCollectionPanelData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AnniversaryCollectionContentData*>* ContentDataList; // 0x10
		::System::UInt32 TabID; // 0x18

		::System::Void _ctor(::System::UInt32 tabID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA__CTOR_OFFSET))(this, tabID);
		}

		::System::Void SyncSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_SYNCSCHEDULE_OFFSET))(this);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA__INITDATA_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_ISEXPIRED_OFFSET))(this);
		}

		::RPG::GameCore::Anniversary2NDPanelEnum get_PanelType()
		{
			return ((::RPG::GameCore::Anniversary2NDPanelEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_PANELTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TabName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_TABNAME_OFFSET))(this);
		}

		::System::String* get_TabIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_TABICON_OFFSET))(this);
		}

		::RPG::GameCore::Anniversary2NDTabConfigRow* get__Row()
		{
			return ((::RPG::GameCore::Anniversary2NDTabConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET__ROW_OFFSET))(this);
		}
	};
}
