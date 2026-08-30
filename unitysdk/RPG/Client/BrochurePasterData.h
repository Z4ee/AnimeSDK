#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TravelBrochurePasterType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_D7BA8CEBF1439C63_1;
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class PasterConfigRow; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_BROCHUREPASTERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC97B270)
#define RPG_CLIENT_BROCHUREPASTERDATA_GETPASTEDPOSITION_OFFSET UNITYSDK_OFFSET(0xC97AA30)
#define RPG_CLIENT_BROCHUREPASTERDATA_GETPASTEDROTATION_OFFSET UNITYSDK_OFFSET(0xC97AA70)
#define RPG_CLIENT_BROCHUREPASTERDATA_GETPASTEDSCALE_OFFSET UNITYSDK_OFFSET(0xC97AAC0)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC97BB50)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC97BAD0)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_ISPASTED_OFFSET UNITYSDK_OFFSET(0xC97BE50)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC97BE00)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_ITEMROW_OFFSET UNITYSDK_OFFSET(0xC97BB30)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_PASTERIMAGE_OFFSET UNITYSDK_OFFSET(0xC97BC10)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_PASTERTEXT_OFFSET UNITYSDK_OFFSET(0xC97BCD0)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_PROGRESSCOUNT_OFFSET UNITYSDK_OFFSET(0xC97BDB0)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC97BB10)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC97B810)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xC97BAF0)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_UNLOCKHINT_OFFSET UNITYSDK_OFFSET(0xC97BD40)
#define RPG_CLIENT_BROCHUREPASTERDATA_ISLOCATIONSAME_OFFSET UNITYSDK_OFFSET(0xC97A5E0)
#define RPG_CLIENT_BROCHUREPASTERDATA_RESET_OFFSET UNITYSDK_OFFSET(0xC979E60)
#define RPG_CLIENT_BROCHUREPASTERDATA_SETLOCATION_OFFSET UNITYSDK_OFFSET(0xC97B900)
#define RPG_CLIENT_BROCHUREPASTERDATA_SETPASTED_OFFSET UNITYSDK_OFFSET(0xC97A590)
#define RPG_CLIENT_BROCHUREPASTERDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC97BAE0)
#define RPG_CLIENT_BROCHUREPASTERDATA_SET_ISPASTED_OFFSET UNITYSDK_OFFSET(0xC97BE60)
#define RPG_CLIENT_BROCHUREPASTERDATA_SET_ITEMROW_OFFSET UNITYSDK_OFFSET(0xC97BB40)
#define RPG_CLIENT_BROCHUREPASTERDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xC97BB20)
#define RPG_CLIENT_BROCHUREPASTERDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xC97BB00)
#define RPG_CLIENT_BROCHUREPASTERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC97AEB0)
#define RPG_CLIENT_BROCHUREPASTERDATA_UPDATEPASTED_OFFSET UNITYSDK_OFFSET(0xC97A8B0)
#define RPG_CLIENT_BROCHUREPASTERDATA_UPDATEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xC979A40)
#define RPG_CLIENT_BROCHUREPASTERDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xC97BE70)
#define RPG_CLIENT_BROCHUREPASTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC97B7F0)
#define RPG_CLIENT_BROCHUREPASTERDATA__GETSCALE_OFFSET UNITYSDK_OFFSET(0xC97B860)

namespace RPG::Client
{
	inline static constexpr unsigned int BrochurePasterData_TypeDefinitionIndex = 68172;

	class BrochurePasterData : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2* StaticGet__OriginSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(BrochurePasterData_TypeDefinitionIndex)->GetStaticField(0x8330);
		}
		static ::System::Single* StaticGet_ProtoScaling()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BrochurePasterData_TypeDefinitionIndex)->GetStaticField(0x8338);
		}
		::RPG::Client::ItemData* _ItemRow_k__BackingField; // 0x10
		::RPG::GameCore::PasterConfigRow* _Row_k__BackingField; // 0x18
		::System::Single _PastedRotation; // 0x20
		::System::UInt32 _UniqueID_k__BackingField; // 0x24
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::Boolean _IsPasted_k__BackingField; // 0x2C
		::UnityEngine::Vector2 _PastedPosition; // 0x30
		::System::Single _PastedScale; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::BrochurePasterData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::BrochurePasterData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_CREATE_OFFSET))(a1);
		}

		::System::Void SetPasted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_SETPASTED_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_D7BA8CEBF1439C63_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7BA8CEBF1439C63_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void UpdateUniqueID(::Class_1_D7BA8CEBF1439C63_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7BA8CEBF1439C63_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_UPDATEUNIQUEID_OFFSET))(this, a1);
		}

		::System::Void UpdatePasted(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_UPDATEPASTED_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_RESET_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetPastedPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GETPASTEDPOSITION_OFFSET))(this);
		}

		::System::Single GetPastedRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GETPASTEDROTATION_OFFSET))(this);
		}

		::System::Single GetPastedScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GETPASTEDSCALE_OFFSET))(this);
		}

		::System::Void SetLocation(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_SETLOCATION_OFFSET))(this, a1);
		}

		::System::Boolean IsLocationSame(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_ISLOCATIONSAME_OFFSET))(this, a1);
		}

		::System::Single _GetScale(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA__GETSCALE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_SET_UNIQUEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::PasterConfigRow* get_Row()
		{
			return ((::RPG::GameCore::PasterConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::PasterConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PasterConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_ItemRow()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GET_ITEMROW_OFFSET))(this);
		}

		::System::Void set_ItemRow(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_SET_ITEMROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::TravelBrochurePasterType get_Type()
		{
			return ((::RPG::GameCore::TravelBrochurePasterType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_PasterImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GET_PASTERIMAGE_OFFSET))(this);
		}

		::RPG::Client::TextID get_PasterText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GET_PASTERTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockHint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GET_UNLOCKHINT_OFFSET))(this);
		}

		::System::UInt32 get_ProgressCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GET_PROGRESSCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsPasted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GET_ISPASTED_OFFSET))(this);
		}

		::System::Void set_IsPasted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_SET_ISPASTED_OFFSET))(this, a1);
		}
	};
}
