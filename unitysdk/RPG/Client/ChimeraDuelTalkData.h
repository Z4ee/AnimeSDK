#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTalkType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelTalkRow; }

#define RPG_CLIENT_CHIMERADUELTALKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA022AF0)
#define RPG_CLIENT_CHIMERADUELTALKDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA022DE0)
#define RPG_CLIENT_CHIMERADUELTALKDATA_GET_SOURCEID_OFFSET UNITYSDK_OFFSET(0xA022E60)
#define RPG_CLIENT_CHIMERADUELTALKDATA_GET_TALKTEXT_OFFSET UNITYSDK_OFFSET(0xA022F40)
#define RPG_CLIENT_CHIMERADUELTALKDATA_GET_TALKTYPE_OFFSET UNITYSDK_OFFSET(0xA022ED0)
#define RPG_CLIENT_CHIMERADUELTALKDATA_GET_TRIGGEREVENTID_OFFSET UNITYSDK_OFFSET(0xA022D70)
#define RPG_CLIENT_CHIMERADUELTALKDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA022E00)
#define RPG_CLIENT_CHIMERADUELTALKDATA_REGISTERTALKDATATOBUBBLEEVENTMANAGER_OFFSET UNITYSDK_OFFSET(0xA022B70)
#define RPG_CLIENT_CHIMERADUELTALKDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA022DF0)
#define RPG_CLIENT_CHIMERADUELTALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA022B60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelTalkData_TypeDefinitionIndex = 58398;

	class ChimeraDuelTalkData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelTalkData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::ChimeraDuelTalkData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKDATA_CREATE_OFFSET))(id);
		}

		::System::Void RegisterTalkDataToBubbleEventManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKDATA_REGISTERTALKDATATOBUBBLEEVENTMANAGER_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_TriggerEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKDATA_GET_TRIGGEREVENTID_OFFSET))(this);
		}

		::System::UInt32 get_SourceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKDATA_GET_SOURCEID_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelTalkType get_TalkType()
		{
			return ((::RPG::GameCore::ChimeraDuelTalkType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKDATA_GET_TALKTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TalkText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKDATA_GET_TALKTEXT_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelTalkRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDuelTalkRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKDATA_GET__ROW_OFFSET))(this);
		}
	};
}
