#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_2FDE33CCAE591AA8;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::LimaoNews { class LimaoNewsInteractionViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostData; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_GET_INTERACTIONVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBDA8A50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xBDA8A30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xBDA8A70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_SET_INTERACTIONVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBDA8A60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xBDA8A40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xBDA8900)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xBDA8B00)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostSubmitViewModel_TypeDefinitionIndex = 73883;

	class LimaoNewsPostSubmitViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_2FDE33CCAE591AA8* _OnBtnClose_k__BackingField; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsPostData* _PostData; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel* _InteractionViewModel_k__BackingField; // 0x30
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x38

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsPostData* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::Class_1_2FDE33CCAE591AA8* get_OnBtnClose()
		{
			return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_GET_ONBTNCLOSE_OFFSET))(this);
		}

		::System::Void set_OnBtnClose(::Class_1_2FDE33CCAE591AA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL_SET_ONBTNCLOSE_OFFSET))(this, a1);
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

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}
	};
}
