#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_A4ED94721C8F4303_2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_ADDSUBCONTENTS_OFFSET UNITYSDK_OFFSET(0xD4547A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_GET_CONTENTDATAS_OFFSET UNITYSDK_OFFSET(0xD454880)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_GET_MAINCONTENT_OFFSET UNITYSDK_OFFSET(0xD4545F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_SET_CONTENTDATAS_OFFSET UNITYSDK_OFFSET(0xD454890)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD4546A0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewContentViewModel_TypeDefinitionIndex = 79132;

	class LimaoNewsInterviewContentViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_A4ED94721C8F4303_2*>* _ContentDatas_k__BackingField; // 0x20

		::System::Void _ctor(::Class_1_A4ED94721C8F4303_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A4ED94721C8F4303_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Void AddSubContents(::Class_1_A4ED94721C8F4303_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A4ED94721C8F4303_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_ADDSUBCONTENTS_OFFSET))(this, a1);
		}

		::Class_1_A4ED94721C8F4303_2* get_MainContent()
		{
			return ((::Class_1_A4ED94721C8F4303_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_GET_MAINCONTENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_A4ED94721C8F4303_2*>* get_ContentDatas()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A4ED94721C8F4303_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_GET_CONTENTDATAS_OFFSET))(this);
		}

		::System::Void set_ContentDatas(::System::Collections::Generic::List_1<::Class_1_A4ED94721C8F4303_2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A4ED94721C8F4303_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_SET_CONTENTDATAS_OFFSET))(this, a1);
		}
	};
}
