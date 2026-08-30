#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsWorkProgressBaseViewModel.h"

namespace RPG::Client::LimaoNews { class LimaoNewsMessageService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkData; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressStartMessageViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_ADD_REQUESTCLOSE_OFFSET UNITYSDK_OFFSET(0xD4A0E00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xD4A0620)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD4A0CE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_EVENTPATH_OFFSET UNITYSDK_OFFSET(0xD4A0F20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_ISINFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xD4A0DC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0xD4A0F00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_MESSAGEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD4A0DA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xD4A0EC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_ONBTNCONTINE_OFFSET UNITYSDK_OFFSET(0xD4A0EE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_REWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xD4A0DE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_REMOVE_REQUESTCLOSE_OFFSET UNITYSDK_OFFSET(0xD4A0E60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_EVENTPATH_OFFSET UNITYSDK_OFFSET(0xD4A0F30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_ISINFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xD4A0DD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0xD4A0F10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_MESSAGEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD4A0DB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xD4A0ED0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_ONBTNCONTINE_OFFSET UNITYSDK_OFFSET(0xD4A0EF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_REWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xD4A0DF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD4A0890)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xD4A0900)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL__ONMESSAGEFINISHED_OFFSET UNITYSDK_OFFSET(0xD4A0A60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL__STARTEVENTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xD4A0B50)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWorkProgressStartViewModel_TypeDefinitionIndex = 79129;

	class LimaoNewsWorkProgressStartViewModel : public ::RPG::Client::LimaoNews::LimaoNewsWorkProgressBaseViewModel
	{
	public:
		::Sofa::Core::SimpleCommand* _OnBtnContine_k__BackingField; // 0x38
		::System::String* _EventPath_k__BackingField; // 0x40
		::Sofa::Core::SimpleCommand* _OnBtnClose_k__BackingField; // 0x48
		::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartMessageViewModel* _MessageViewModel_k__BackingField; // 0x50
		::System::Action* RequestClose; // 0x58
		::RPG::Client::LimaoNews::LimaoNewsMessageService* _MessageService; // 0x60
		::System::UInt32 _RewardCount_k__BackingField; // 0x68
		::System::UInt32 _MessageID_k__BackingField; // 0x6C
		::System::Boolean _IsInFinishState_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* Create(::RPG::Client::LimaoNews::LimaoNewsWorkData* a1, ::RPG::Client::LimaoNews::LimaoNewsMessageService* a2)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*(*)(::RPG::Client::LimaoNews::LimaoNewsWorkData*, ::RPG::Client::LimaoNews::LimaoNewsMessageService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _OnMessageFinished(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL__ONMESSAGEFINISHED_OFFSET))(this, a1);
		}

		::System::Void _StartEventLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL__STARTEVENTLEVELGRAPH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartMessageViewModel* get_MessageViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartMessageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_MESSAGEVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_MessageViewModel(::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartMessageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartMessageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_MESSAGEVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInFinishState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_ISINFINISHSTATE_OFFSET))(this);
		}

		::System::Void set_IsInFinishState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_ISINFINISHSTATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_RewardCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_REWARDCOUNT_OFFSET))(this);
		}

		::System::Void set_RewardCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_REWARDCOUNT_OFFSET))(this, a1);
		}

		::System::Void add_RequestClose(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_ADD_REQUESTCLOSE_OFFSET))(this, a1);
		}

		::System::Void remove_RequestClose(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_REMOVE_REQUESTCLOSE_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnClose()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_ONBTNCLOSE_OFFSET))(this);
		}

		::System::Void set_OnBtnClose(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_ONBTNCLOSE_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnContine()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_ONBTNCONTINE_OFFSET))(this);
		}

		::System::Void set_OnBtnContine(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_ONBTNCONTINE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MessageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_MESSAGEID_OFFSET))(this);
		}

		::System::Void set_MessageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_MESSAGEID_OFFSET))(this, a1);
		}

		::System::String* get_EventPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_EVENTPATH_OFFSET))(this);
		}

		::System::Void set_EventPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_EVENTPATH_OFFSET))(this, a1);
		}
	};
}
