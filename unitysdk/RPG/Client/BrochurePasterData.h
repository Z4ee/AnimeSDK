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

#define RPG_CLIENT_BROCHUREPASTERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9EB7700)
#define RPG_CLIENT_BROCHUREPASTERDATA_GETPASTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x9EB7020)
#define RPG_CLIENT_BROCHUREPASTERDATA_GETPASTEDROTATION_OFFSET UNITYSDK_OFFSET(0x9EB7060)
#define RPG_CLIENT_BROCHUREPASTERDATA_GETPASTEDSCALE_OFFSET UNITYSDK_OFFSET(0x9EB70B0)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9EB7E40)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9EB7DC0)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_ISPASTED_OFFSET UNITYSDK_OFFSET(0x9EB7F70)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9EB7F20)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_ITEMROW_OFFSET UNITYSDK_OFFSET(0x9EB7E20)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_PASTERIMAGE_OFFSET UNITYSDK_OFFSET(0x9EB7E70)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_PASTERTEXT_OFFSET UNITYSDK_OFFSET(0x9EB7EA0)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_PROGRESSCOUNT_OFFSET UNITYSDK_OFFSET(0x9EB7F00)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9EB7E00)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9EB7B30)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x9EB7DE0)
#define RPG_CLIENT_BROCHUREPASTERDATA_GET_UNLOCKHINT_OFFSET UNITYSDK_OFFSET(0x9EB7ED0)
#define RPG_CLIENT_BROCHUREPASTERDATA_ISLOCATIONSAME_OFFSET UNITYSDK_OFFSET(0x9EB6BD0)
#define RPG_CLIENT_BROCHUREPASTERDATA_RESET_OFFSET UNITYSDK_OFFSET(0x9EB6530)
#define RPG_CLIENT_BROCHUREPASTERDATA_SETLOCATION_OFFSET UNITYSDK_OFFSET(0x9EB7BF0)
#define RPG_CLIENT_BROCHUREPASTERDATA_SETPASTED_OFFSET UNITYSDK_OFFSET(0x9EB6B80)
#define RPG_CLIENT_BROCHUREPASTERDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9EB7DD0)
#define RPG_CLIENT_BROCHUREPASTERDATA_SET_ISPASTED_OFFSET UNITYSDK_OFFSET(0x9EB7F80)
#define RPG_CLIENT_BROCHUREPASTERDATA_SET_ITEMROW_OFFSET UNITYSDK_OFFSET(0x9EB7E30)
#define RPG_CLIENT_BROCHUREPASTERDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x9EB7E10)
#define RPG_CLIENT_BROCHUREPASTERDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x9EB7DF0)
#define RPG_CLIENT_BROCHUREPASTERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9EB73D0)
#define RPG_CLIENT_BROCHUREPASTERDATA_UPDATEPASTED_OFFSET UNITYSDK_OFFSET(0x9EB6EA0)
#define RPG_CLIENT_BROCHUREPASTERDATA_UPDATEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x9EB6280)
#define RPG_CLIENT_BROCHUREPASTERDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EB7F90)
#define RPG_CLIENT_BROCHUREPASTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9EB7B10)
#define RPG_CLIENT_BROCHUREPASTERDATA__GETSCALE_OFFSET UNITYSDK_OFFSET(0x9EB7B50)

namespace RPG::Client
{
	inline static constexpr unsigned int BrochurePasterData_TypeDefinitionIndex = 62861;

	class BrochurePasterData : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2* StaticGet__OriginSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(BrochurePasterData_TypeDefinitionIndex)->GetStaticField(0x3B50);
		}
		static ::System::Single* StaticGet_ProtoScaling()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BrochurePasterData_TypeDefinitionIndex)->GetStaticField(0x3B58);
		}
		::RPG::Client::ItemData* _ItemRow_k__BackingField; // 0x10
		::RPG::GameCore::PasterConfigRow* _Row_k__BackingField; // 0x18
		::System::Single _PastedRotation; // 0x20
		::System::UInt32 _UniqueID_k__BackingField; // 0x24
		::System::Boolean _IsPasted_k__BackingField; // 0x28
		::System::Single _PastedScale; // 0x2C
		::UnityEngine::Vector2 _PastedPosition; // 0x30
		::System::UInt32 _ID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::BrochurePasterData* Create(::System::UInt32 pasterID)
		{
			return ((::RPG::Client::BrochurePasterData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_CREATE_OFFSET))(pasterID);
		}

		::System::Void SetPasted(::System::Boolean isPasted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_SETPASTED_OFFSET))(this, isPasted);
		}

		::System::Void Sync(::Class_1_D7BA8CEBF1439C63_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7BA8CEBF1439C63_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_SYNC_OFFSET))(this, info);
		}

		::System::Void UpdateUniqueID(::Class_1_D7BA8CEBF1439C63_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7BA8CEBF1439C63_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_UPDATEUNIQUEID_OFFSET))(this, info);
		}

		::System::Void UpdatePasted(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_UPDATEPASTED_OFFSET))(this, rectTransform);
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

		::System::Void SetLocation(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_SETLOCATION_OFFSET))(this, rectTransform);
		}

		::System::Boolean IsLocationSame(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_ISLOCATIONSAME_OFFSET))(this, rectTransform);
		}

		::System::Single _GetScale(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA__GETSCALE_OFFSET))(this, rectTransform);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_SET_UNIQUEID_OFFSET))(this, value);
		}

		::RPG::GameCore::PasterConfigRow* get_Row()
		{
			return ((::RPG::GameCore::PasterConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::PasterConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PasterConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::Client::ItemData* get_ItemRow()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_GET_ITEMROW_OFFSET))(this);
		}

		::System::Void set_ItemRow(::RPG::Client::ItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_SET_ITEMROW_OFFSET))(this, value);
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

		::System::Void set_IsPasted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BROCHUREPASTERDATA_SET_ISPASTED_OFFSET))(this, value);
		}
	};
}
