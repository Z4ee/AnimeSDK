#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardPreset; }
namespace RPG::Client { class RogueTournPersonaPresetRoomCardData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C7AF910)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_EXPGAINDESC_OFFSET UNITYSDK_OFFSET(0x1C7AF930)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHBIGPARASITE_OFFSET UNITYSDK_OFFSET(0x1C7AF890)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHBIG_OFFSET UNITYSDK_OFFSET(0x1C7AF870)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHSMALLPARASITE_OFFSET UNITYSDK_OFFSET(0x1C7AF8D0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHSMALL_OFFSET UNITYSDK_OFFSET(0x1C7AF8B0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_INITPRESETROOMCARDDATAS_OFFSET UNITYSDK_OFFSET(0x1C7AFA70)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ISDUMMY_OFFSET UNITYSDK_OFFSET(0x1C7AF850)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C7AF8F0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_PASSIVEDESC_OFFSET UNITYSDK_OFFSET(0x1C7AF9D0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_STYLEID_OFFSET UNITYSDK_OFFSET(0x1C7AF830)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1C7AF920)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHBIGPARASITE_OFFSET UNITYSDK_OFFSET(0x1C7AF8A0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHBIG_OFFSET UNITYSDK_OFFSET(0x1C7AF880)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHSMALLPARASITE_OFFSET UNITYSDK_OFFSET(0x1C7AF8E0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHSMALL_OFFSET UNITYSDK_OFFSET(0x1C7AF8C0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ISDUMMY_OFFSET UNITYSDK_OFFSET(0x1C7AF860)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C7AF900)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_STYLEID_OFFSET UNITYSDK_OFFSET(0x1C7AF840)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7AF130)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE__INITFROMEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7AF3C0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE__SETISDUMMY_OFFSET UNITYSDK_OFFSET(0x1C7AF6D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleDataBase_TypeDefinitionIndex = 67750;

	class RogueTournPersonaStyleDataBase : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParams; // 0x10
		::System::String* _IconPathBig_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaPresetRoomCardData*>* _InitPresetRoomCardDatas; // 0x20
		::System::String* _IconPathSmall_k__BackingField; // 0x28
		::System::String* _IconPathBigParasite_k__BackingField; // 0x30
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueTournPersonaPresetRoomCardData*>* _InitPresetRoomCardDatas_ReadOnly; // 0x38
		::System::String* _IconPathSmallParasite_k__BackingField; // 0x40
		::System::Boolean _IsDummy_k__BackingField; // 0x48
		::System::UInt32 _StyleID_k__BackingField; // 0x4C
		::RPG::Client::TextID _Name_k__BackingField; // 0x50
		::RPG::Client::TextID _PassiveDescTextID; // 0x60
		::RPG::Client::TextID _Desc_k__BackingField; // 0x70
		::RPG::Client::TextID _ExpGainDescTextID; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitFromExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE__INITFROMEXCEL_OFFSET))(this);
		}

		::System::Void _SetIsDummy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE__SETISDUMMY_OFFSET))(this);
		}

		::System::UInt32 get_StyleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_STYLEID_OFFSET))(this);
		}

		::System::Void set_StyleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_STYLEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDummy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ISDUMMY_OFFSET))(this);
		}

		::System::Void set_IsDummy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ISDUMMY_OFFSET))(this, a1);
		}

		::System::String* get_IconPathBig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHBIG_OFFSET))(this);
		}

		::System::Void set_IconPathBig(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHBIG_OFFSET))(this, a1);
		}

		::System::String* get_IconPathBigParasite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHBIGPARASITE_OFFSET))(this);
		}

		::System::Void set_IconPathBigParasite(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHBIGPARASITE_OFFSET))(this, a1);
		}

		::System::String* get_IconPathSmall()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHSMALL_OFFSET))(this);
		}

		::System::Void set_IconPathSmall(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHSMALL_OFFSET))(this, a1);
		}

		::System::String* get_IconPathSmallParasite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHSMALLPARASITE_OFFSET))(this);
		}

		::System::Void set_IconPathSmallParasite(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHSMALLPARASITE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_DESC_OFFSET))(this, a1);
		}

		::System::String* get_ExpGainDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_EXPGAINDESC_OFFSET))(this);
		}

		::System::String* get_PassiveDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_PASSIVEDESC_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardPreset*>* get_InitPresetRoomCardDatas()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardPreset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_INITPRESETROOMCARDDATAS_OFFSET))(this);
		}
	};
}
