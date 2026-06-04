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

#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xC84AEE0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xC84AE40)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GETALLDATASINEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xC847FA0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GETDATA_1_OFFSET UNITYSDK_OFFSET(0xC84ACA0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xC84AC10)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC84AF40)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_ATTRIBUTEID_OFFSET UNITYSDK_OFFSET(0xC84B0C0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xC84B1B0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC84B100)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC84B1D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC84B0E0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC84AFD0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC84B050)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_SET_ATTRIBUTEID_OFFSET UNITYSDK_OFFSET(0xC84B0D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xC84B1C0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC84B1E0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC84B0F0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC84AF80)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xC84B1F0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xC84AD00)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC84AC00)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xC84B270)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC84B280)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC84B290)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomAttributeData_TypeDefinitionIndex = 63361;

	class RogueTournPersonaRoomAttributeData : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaRoomAttributeData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaRoomAttributeData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaRoomAttributeData_TypeDefinitionIndex)->GetStaticField(0x42590);
		}
		::System::String* _IconPath_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParams; // 0x18
		::RPG::Client::TextID _DescTextID; // 0x20
		::RPG::Client::TextID _Name_k__BackingField; // 0x30
		::System::UInt32 _AttributeID_k__BackingField; // 0x40
		::RPG::GameCore::RogueRoomAttributeCategory _Category_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaRoomAttributeData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaRoomAttributeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GETDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournPersonaRoomAttributeData* GetData_1(::Struct_2_FD0368737CBF6F9B_7 a1)
		{
			return ((::RPG::Client::RogueTournPersonaRoomAttributeData*(*)(::Struct_2_FD0368737CBF6F9B_7))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GETDATA_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaRoomAttributeData*>* GetAllDatasInExcelTable()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaRoomAttributeData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GETALLDATASINEXCELTABLE_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaRoomAttributeData* _CreateData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaRoomAttributeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA__CREATEDATA_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::Client::RogueTournPersonaRoomAttributeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomAttributeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::RPG::Client::RogueTournPersonaRoomAttributeData* a1, ::RPG::Client::RogueTournPersonaRoomAttributeData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournPersonaRoomAttributeData*, ::RPG::Client::RogueTournPersonaRoomAttributeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::RogueTournPersonaRoomAttributeData* a1, ::RPG::Client::RogueTournPersonaRoomAttributeData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournPersonaRoomAttributeData*, ::RPG::Client::RogueTournPersonaRoomAttributeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::UInt32 get_AttributeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_ATTRIBUTEID_OFFSET))(this);
		}

		::System::Void set_AttributeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_SET_ATTRIBUTEID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_DESC_OFFSET))(this);
		}

		::RPG::GameCore::RogueRoomAttributeCategory get_Category()
		{
			return ((::RPG::GameCore::RogueRoomAttributeCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::RPG::GameCore::RogueRoomAttributeCategory a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueRoomAttributeCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_SET_CATEGORY_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMATTRIBUTEDATA___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
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
