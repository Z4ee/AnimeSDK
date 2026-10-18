#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTITEMCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xD195C20)
#define RPG_CLIENT_GRIDFIGHTITEMCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD195D30)
#define RPG_CLIENT_GRIDFIGHTITEMCONFIG_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xD195CF0)
#define RPG_CLIENT_GRIDFIGHTITEMCONFIG_GET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0xD195D10)
#define RPG_CLIENT_GRIDFIGHTITEMCONFIG_GET_ITEMPRIORITY_OFFSET UNITYSDK_OFFSET(0xD195D70)
#define RPG_CLIENT_GRIDFIGHTITEMCONFIG_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xD195D50)
#define RPG_CLIENT_GRIDFIGHTITEMCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD195D40)
#define RPG_CLIENT_GRIDFIGHTITEMCONFIG_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0xD195D00)
#define RPG_CLIENT_GRIDFIGHTITEMCONFIG_SET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0xD195D20)
#define RPG_CLIENT_GRIDFIGHTITEMCONFIG_SET_ITEMPRIORITY_OFFSET UNITYSDK_OFFSET(0xD195D80)
#define RPG_CLIENT_GRIDFIGHTITEMCONFIG_SET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xD195D60)
#define RPG_CLIENT_GRIDFIGHTITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD195C90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightItemConfig_TypeDefinitionIndex = 64528;

	class GridFightItemConfig : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightItemConfig*>** StaticGet_GetItemConfigImpl()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightItemConfig_TypeDefinitionIndex)->GetStaticField(0x6AF20);
		}
		::System::String* _SmallIconPath_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::System::Int32 _ItemPriority_k__BackingField; // 0x20
		::System::UInt32 _ItemID_k__BackingField; // 0x24
		::RPG::Client::TextID _ItemName_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMCONFIG__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightItemConfig* GetConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightItemConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMCONFIG_GETCONFIG_OFFSET))(a1);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMCONFIG_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMCONFIG_SET_ITEMID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ItemName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMCONFIG_GET_ITEMNAME_OFFSET))(this);
		}

		::System::Void set_ItemName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMCONFIG_SET_ITEMNAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMCONFIG_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMCONFIG_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::Void set_SmallIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMCONFIG_SET_SMALLICONPATH_OFFSET))(this, a1);
		}

		::System::Int32 get_ItemPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMCONFIG_GET_ITEMPRIORITY_OFFSET))(this);
		}

		::System::Void set_ItemPriority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMCONFIG_SET_ITEMPRIORITY_OFFSET))(this, a1);
		}
	};
}
