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

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA3C76D0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_EXPGAINDESC_OFFSET UNITYSDK_OFFSET(0xA3C76F0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHBIG_OFFSET UNITYSDK_OFFSET(0xA3C7670)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHSMALL_OFFSET UNITYSDK_OFFSET(0xA3C7690)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_INITPRESETROOMCARDDATAS_OFFSET UNITYSDK_OFFSET(0xA3C7850)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ISDUMMY_OFFSET UNITYSDK_OFFSET(0xA3C7650)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA3C76B0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_PASSIVEDESC_OFFSET UNITYSDK_OFFSET(0xA3C77A0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_STYLEID_OFFSET UNITYSDK_OFFSET(0xA3C7630)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_DESC_OFFSET UNITYSDK_OFFSET(0xA3C76E0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHBIG_OFFSET UNITYSDK_OFFSET(0xA3C7680)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHSMALL_OFFSET UNITYSDK_OFFSET(0xA3C76A0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ISDUMMY_OFFSET UNITYSDK_OFFSET(0xA3C7660)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA3C76C0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_STYLEID_OFFSET UNITYSDK_OFFSET(0xA3C7640)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C7000)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE__INITFROMEXCEL_OFFSET UNITYSDK_OFFSET(0xA3C7190)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE__SETISDUMMY_OFFSET UNITYSDK_OFFSET(0xA3C74C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleDataBase_TypeDefinitionIndex = 55257;

	class RogueTournPersonaStyleDataBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaPresetRoomCardData*>* _InitPresetRoomCardDatas; // 0x10
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueTournPersonaPresetRoomCardData*>* _InitPresetRoomCardDatas_ReadOnly; // 0x18
		::System::String* _IconPathBig_k__BackingField; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParams; // 0x28
		::System::String* _IconPathSmall_k__BackingField; // 0x30
		::RPG::Client::TextID _Name_k__BackingField; // 0x38
		::RPG::Client::TextID _ExpGainDescTextID; // 0x48
		::System::UInt32 _StyleID_k__BackingField; // 0x58
		::System::Boolean _IsDummy_k__BackingField; // 0x5C
		::RPG::Client::TextID _PassiveDescTextID; // 0x60
		::RPG::Client::TextID _Desc_k__BackingField; // 0x70

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

		::System::Void set_StyleID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_STYLEID_OFFSET))(this, value);
		}

		::System::Boolean get_IsDummy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ISDUMMY_OFFSET))(this);
		}

		::System::Void set_IsDummy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ISDUMMY_OFFSET))(this, value);
		}

		::System::String* get_IconPathBig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHBIG_OFFSET))(this);
		}

		::System::Void set_IconPathBig(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHBIG_OFFSET))(this, value);
		}

		::System::String* get_IconPathSmall()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHSMALL_OFFSET))(this);
		}

		::System::Void set_IconPathSmall(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHSMALL_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_NAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_DESC_OFFSET))(this, value);
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
