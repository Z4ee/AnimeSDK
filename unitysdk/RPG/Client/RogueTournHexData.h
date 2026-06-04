#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/Struct_2_FD0368737CBF6F9B_3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNHEXDATA_GETALLDATAS_OFFSET UNITYSDK_OFFSET(0xC8212B0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GETDATA_1_OFFSET UNITYSDK_OFFSET(0xC821250)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xC81EB70)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_ATTACKDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0xC821190)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_AVATARBASETYPES_OFFSET UNITYSDK_OFFSET(0xC8211B0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0xC821130)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC81ED80)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0xC8211D0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_FIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0xC821170)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_HEXID_OFFSET UNITYSDK_OFFSET(0xC8210D0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC821150)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC821110)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0xC8210F0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_ISHEXEXISTS_OFFSET UNITYSDK_OFFSET(0xC8211F0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_ATTACKDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0xC8211A0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_AVATARBASETYPES_OFFSET UNITYSDK_OFFSET(0xC8211C0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_BGDESC_OFFSET UNITYSDK_OFFSET(0xC821140)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0xC8211E0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_FIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0xC821180)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_HEXID_OFFSET UNITYSDK_OFFSET(0xC8210E0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC821160)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC821120)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0xC821100)
#define RPG_CLIENT_ROGUETOURNHEXDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xC821B10)
#define RPG_CLIENT_ROGUETOURNHEXDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xC821630)
#define RPG_CLIENT_ROGUETOURNHEXDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8216A0)
#define RPG_CLIENT_ROGUETOURNHEXDATA__INITFROMEXCEL_OFFSET UNITYSDK_OFFSET(0xC8216B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHexData_TypeDefinitionIndex = 63306;

	class RogueTournHexData : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournHexData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournHexData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournHexData_TypeDefinitionIndex)->GetStaticField(0x3D8F0);
		}
		::System::String* _FigureIconPath_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _ExtraEffectIDs_k__BackingField; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _AttackDamageTypes_k__BackingField; // 0x28
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* _AvatarBaseTypes_k__BackingField; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParamList; // 0x38
		::RPG::Client::TextID _Name_k__BackingField; // 0x40
		::RPG::Client::TextID _BgDesc_k__BackingField; // 0x50
		::RPG::Client::TextID _DescTextID; // 0x60
		::System::UInt32 _HexID_k__BackingField; // 0x70
		::RPG::GameCore::RogueTournMode _TournMode_k__BackingField; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_HexID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_HEXID_OFFSET))(this);
		}

		::System::Void set_HexID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_HEXID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_TOURNMODE_OFFSET))(this);
		}

		::System::Void set_TournMode(::RPG::GameCore::RogueTournMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_TOURNMODE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_BgDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_BGDESC_OFFSET))(this);
		}

		::System::Void set_BgDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_BGDESC_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_DESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_FigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_FIGUREICONPATH_OFFSET))(this);
		}

		::System::Void set_FigureIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_FIGUREICONPATH_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_AttackDamageTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_ATTACKDAMAGETYPES_OFFSET))(this);
		}

		::System::Void set_AttackDamageTypes(::Il2CppArray<::RPG::GameCore::AttackDamageType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AttackDamageType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_ATTACKDAMAGETYPES_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* get_AvatarBaseTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarBaseType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_AVATARBASETYPES_OFFSET))(this);
		}

		::System::Void set_AvatarBaseTypes(::Il2CppArray<::RPG::GameCore::AvatarBaseType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarBaseType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_AVATARBASETYPES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_EXTRAEFFECTIDS_OFFSET))(this);
		}

		::System::Void set_ExtraEffectIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_EXTRAEFFECTIDS_OFFSET))(this, a1);
		}

		static ::System::Boolean IsHexExists(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_ISHEXEXISTS_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournHexData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournHexData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GETDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournHexData* GetData_1(::Struct_2_FD0368737CBF6F9B_3 a1)
		{
			return ((::RPG::Client::RogueTournHexData*(*)(::Struct_2_FD0368737CBF6F9B_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GETDATA_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RogueTournHexData*>* GetAllDatas(::System::Predicate_1<::RPG::Client::RogueTournHexData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournHexData*>*(*)(::System::Predicate_1<::RPG::Client::RogueTournHexData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GETALLDATAS_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournHexData* _CreateData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournHexData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA__CREATEDATA_OFFSET))(a1);
		}

		::System::Boolean _InitFromExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA__INITFROMEXCEL_OFFSET))(this);
		}
	};
}
