#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::LimaoNews { class LimaoNewsInteractionViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostData; }
namespace Sofa::Core { class SimpleCommand; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_GET_INTERACTIONVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4A5BF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x1C4A5BD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_GET_PANELTITLE_OFFSET UNITYSDK_OFFSET(0x1C4A5C30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C4A5C10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_SET_INTERACTIONVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4A5C00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x1C4A5BE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_SET_PANELTITLE_OFFSET UNITYSDK_OFFSET(0x1C4A5C40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C4A5C20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4A5AC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A59F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x1C4A5C50)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostSubmitViewModel_TypeDefinitionIndex = 79144;

	class LimaoNewsPostSubmitViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel* _InteractionViewModel_k__BackingField; // 0x20
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x28
		::Sofa::Core::SimpleCommand* _OnBtnClose_k__BackingField; // 0x30
		::RPG::Client::TextID _PanelTitle_k__BackingField; // 0x38
		::RPG::Client::TextID _Title_k__BackingField; // 0x48

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsPostData* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::Client::TextID a1, ::Class_1_5F4D64A4B97E38F9* a2, ::RPG::Client::TextID a3, ::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Class_1_5F4D64A4B97E38F9*, ::RPG::Client::TextID, ::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnClose()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_GET_ONBTNCLOSE_OFFSET))(this);
		}

		::System::Void set_OnBtnClose(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_SET_ONBTNCLOSE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel* get_InteractionViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_GET_INTERACTIONVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_InteractionViewModel(::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_SET_INTERACTIONVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_SET_TITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PanelTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_GET_PANELTITLE_OFFSET))(this);
		}

		::System::Void set_PanelTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_SET_PANELTITLE_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL___CTOR_B__1_0_OFFSET))(this);
		}
	};
}
