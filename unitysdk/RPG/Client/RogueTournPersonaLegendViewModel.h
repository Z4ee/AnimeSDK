#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaBaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class IRogueTournPersonaLegendRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xDF8C500)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL_GETCURLEGENDROWS_OFFSET UNITYSDK_OFFSET(0xDF8CD20)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL_GETLEGENDROW_OFFSET UNITYSDK_OFFSET(0xDF8CDD0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL_GETLISTVIEWITEMPREFABINDEX_OFFSET UNITYSDK_OFFSET(0xDF8CF40)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL_GET_CURRENTTABINDEX_OFFSET UNITYSDK_OFFSET(0xDF8C3F0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL_SELECTTAB_OFFSET UNITYSDK_OFFSET(0xDF8CC70)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL_SET_CURRENTTABINDEX_OFFSET UNITYSDK_OFFSET(0xDF8C400)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL_SHOWDIALOG_OFFSET UNITYSDK_OFFSET(0xDF8C410)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xDF8C640)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL__INITATTRIBUTELISTROWS_OFFSET UNITYSDK_OFFSET(0xDF8D610)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL__INITATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0xDF8C820)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL__INITROOMCOMPTYPELISTROWS_OFFSET UNITYSDK_OFFSET(0xDF8D0A0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL__INITROOMCOMPTYPELIST_OFFSET UNITYSDK_OFFSET(0xDF8C720)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xDF8C6D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaLegendViewModel_TypeDefinitionIndex = 72817;

	class RogueTournPersonaLegendViewModel : public ::RPG::Client::RogueTournPersonaBaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaLegendRow*>* _RoomCompTypeList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaLegendRow*>* _AttributeList; // 0x28
		::System::String* FIXED_COMP_LIST; // 0x30
		::System::String* RANDOM_COMP_LIST; // 0x38
		::System::Int32 _CurrentTabIndex_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_CurrentTabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL_GET_CURRENTTABINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentTabIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL_SET_CURRENTTABINDEX_OFFSET))(this, a1);
		}

		static ::System::Void ShowDialog()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL_SHOWDIALOG_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaLegendViewModel* Create()
		{
			return ((::RPG::Client::RogueTournPersonaLegendViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL_CREATE_OFFSET))();
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void SelectTab(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL_SELECTTAB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaLegendRow*>* GetCurLegendRows()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaLegendRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL_GETCURLEGENDROWS_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaLegendRow* GetLegendRow(::System::Int32 a1)
		{
			return ((::RPG::Client::IRogueTournPersonaLegendRow*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL_GETLEGENDROW_OFFSET))(this, a1);
		}

		::System::Int32 GetListViewItemPrefabIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL_GETLISTVIEWITEMPREFABINDEX_OFFSET))(this, a1);
		}

		::System::Void _InitRoomCompTypeList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL__INITROOMCOMPTYPELIST_OFFSET))(this);
		}

		::System::Void _InitRoomCompTypeListRows(::RPG::Client::TextID a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL__INITROOMCOMPTYPELISTROWS_OFFSET))(this, a1, a2);
		}

		::System::Void _InitAttributeList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL__INITATTRIBUTELIST_OFFSET))(this);
		}

		::System::Void _InitAttributeListRows(::RPG::Client::TextID a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDVIEWMODEL__INITATTRIBUTELISTROWS_OFFSET))(this, a1, a2, a3);
		}
	};
}
