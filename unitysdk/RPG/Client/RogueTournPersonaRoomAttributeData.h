#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueRoomAttributeCategory.h"
#include "unitysdk/Struct_2_FD0368737CBF6F9B_7.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA3C1330)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA3C1290)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GETALLDATASINEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xA3BEF10)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GETDATA_1_OFFSET UNITYSDK_OFFSET(0xA3C10F0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xA3B7BD0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA3C1390)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_ATTRIBUTEID_OFFSET UNITYSDK_OFFSET(0xA3C1510)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xA3C1600)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA3C1550)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA3C1620)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA3C1530)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA3C1420)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA3C14A0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_SET_ATTRIBUTEID_OFFSET UNITYSDK_OFFSET(0xA3C1520)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xA3C1610)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA3C1630)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA3C1540)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA3C13D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3C1640)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xA3C1150)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C10E0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA3C16B0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA3C16C0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA3C16D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomAttributeData_TypeDefinitionIndex = 55240;

	class RogueTournPersonaRoomAttributeData : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaRoomAttributeData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaRoomAttributeData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaRoomAttributeData_TypeDefinitionIndex)->GetStaticField(0x1EA90);
		}
		::System::String* _IconPath_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParams; // 0x18
		::RPG::Client::TextID _DescTextID; // 0x20
		::System::UInt32 _AttributeID_k__BackingField; // 0x30
		::RPG::GameCore::RogueRoomAttributeCategory _Category_k__BackingField; // 0x34
		::RPG::Client::TextID _Name_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaRoomAttributeData* GetData(::System::UInt32 attributeID)
		{
			return ((::RPG::Client::RogueTournPersonaRoomAttributeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GETDATA_OFFSET))(attributeID);
		}

		static ::RPG::Client::RogueTournPersonaRoomAttributeData* GetData_1(::Struct_2_FD0368737CBF6F9B_7 identifier)
		{
			return ((::RPG::Client::RogueTournPersonaRoomAttributeData*(*)(::Struct_2_FD0368737CBF6F9B_7))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GETDATA_1_OFFSET))(identifier);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaRoomAttributeData*>* GetAllDatasInExcelTable()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaRoomAttributeData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GETALLDATASINEXCELTABLE_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaRoomAttributeData* _CreateData(::System::UInt32 attributeID)
		{
			return ((::RPG::Client::RogueTournPersonaRoomAttributeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA__CREATEDATA_OFFSET))(attributeID);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::Client::RogueTournPersonaRoomAttributeData* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomAttributeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::RPG::Client::RogueTournPersonaRoomAttributeData* lhs, ::RPG::Client::RogueTournPersonaRoomAttributeData* rhs)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournPersonaRoomAttributeData*, ::RPG::Client::RogueTournPersonaRoomAttributeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::RogueTournPersonaRoomAttributeData* lhs, ::RPG::Client::RogueTournPersonaRoomAttributeData* rhs)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournPersonaRoomAttributeData*, ::RPG::Client::RogueTournPersonaRoomAttributeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::UInt32 get_AttributeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_ATTRIBUTEID_OFFSET))(this);
		}

		::System::Void set_AttributeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_SET_ATTRIBUTEID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_DESC_OFFSET))(this);
		}

		::RPG::GameCore::RogueRoomAttributeCategory get_Category()
		{
			return ((::RPG::GameCore::RogueRoomAttributeCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::RPG::GameCore::RogueRoomAttributeCategory value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueRoomAttributeCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_SET_CATEGORY_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_SET_ICONPATH_OFFSET))(this, value);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
