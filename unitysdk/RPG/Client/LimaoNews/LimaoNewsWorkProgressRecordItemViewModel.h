#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsWorkRecordType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsEntityTrackService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkRecordData; }
namespace Sofa::Core { class SimpleCommand; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xD49EC40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_GETISCOMPLETED_OFFSET UNITYSDK_OFFSET(0xD49EDC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_GET_CLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0xD49EF10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_GET_RECORDID_OFFSET UNITYSDK_OFFSET(0xD49EEB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_GET_RECORDPARAM_OFFSET UNITYSDK_OFFSET(0xD49EEF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_GET_RECORDTITLE_OFFSET UNITYSDK_OFFSET(0xD49EF30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_GET_RECORDTYPE_OFFSET UNITYSDK_OFFSET(0xD49EED0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_SET_CLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0xD49EF20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_SET_RECORDID_OFFSET UNITYSDK_OFFSET(0xD49EEC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_SET_RECORDPARAM_OFFSET UNITYSDK_OFFSET(0xD49EF00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_SET_RECORDTITLE_OFFSET UNITYSDK_OFFSET(0xD49EF40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_SET_RECORDTYPE_OFFSET UNITYSDK_OFFSET(0xD49EEE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD49EDB0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWorkProgressRecordItemViewModel_TypeDefinitionIndex = 79125;

	class LimaoNewsWorkProgressRecordItemViewModel : public ::System::Object
	{
	public:
		::Sofa::Core::SimpleCommand* _ClickCommand_k__BackingField; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsPostService* _PostService; // 0x18
		::RPG::Client::TextID _RecordTitle_k__BackingField; // 0x20
		::System::UInt32 _RecordID_k__BackingField; // 0x30
		::System::UInt32 _RecordParam_k__BackingField; // 0x34
		::RPG::GameCore::LimaoNewsWorkRecordType _RecordType_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWorkProgressRecordItemViewModel* Create(::RPG::Client::LimaoNews::LimaoNewsWorkRecordData* a1, ::RPG::Client::LimaoNews::LimaoNewsEntityTrackService* a2, ::RPG::Client::LimaoNews::LimaoNewsWindowService* a3, ::RPG::Client::LimaoNews::LimaoNewsPostService* a4)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressRecordItemViewModel*(*)(::RPG::Client::LimaoNews::LimaoNewsWorkRecordData*, ::RPG::Client::LimaoNews::LimaoNewsEntityTrackService*, ::RPG::Client::LimaoNews::LimaoNewsWindowService*, ::RPG::Client::LimaoNews::LimaoNewsPostService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean GetIsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_GETISCOMPLETED_OFFSET))(this);
		}

		::System::UInt32 get_RecordID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_GET_RECORDID_OFFSET))(this);
		}

		::System::Void set_RecordID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_SET_RECORDID_OFFSET))(this, a1);
		}

		::RPG::GameCore::LimaoNewsWorkRecordType get_RecordType()
		{
			return ((::RPG::GameCore::LimaoNewsWorkRecordType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_GET_RECORDTYPE_OFFSET))(this);
		}

		::System::Void set_RecordType(::RPG::GameCore::LimaoNewsWorkRecordType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LimaoNewsWorkRecordType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_SET_RECORDTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_RecordParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_GET_RECORDPARAM_OFFSET))(this);
		}

		::System::Void set_RecordParam(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_SET_RECORDPARAM_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_ClickCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_GET_CLICKCOMMAND_OFFSET))(this);
		}

		::System::Void set_ClickCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_SET_CLICKCOMMAND_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_RecordTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_GET_RECORDTITLE_OFFSET))(this);
		}

		::System::Void set_RecordTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSRECORDITEMVIEWMODEL_SET_RECORDTITLE_OFFSET))(this, a1);
		}
	};
}
