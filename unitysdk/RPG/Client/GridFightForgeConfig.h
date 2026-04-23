#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightForgeFuncType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTFORGECONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xA49F100)
#define RPG_CLIENT_GRIDFIGHTFORGECONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA49F260)
#define RPG_CLIENT_GRIDFIGHTFORGECONFIG_GET_FORGETYPEDESC_OFFSET UNITYSDK_OFFSET(0xA49F2C0)
#define RPG_CLIENT_GRIDFIGHTFORGECONFIG_GET_FUNCTYPE_OFFSET UNITYSDK_OFFSET(0xA49F280)
#define RPG_CLIENT_GRIDFIGHTFORGECONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0xA49F240)
#define RPG_CLIENT_GRIDFIGHTFORGECONFIG_GET_ITEMCONFIG_OFFSET UNITYSDK_OFFSET(0xA49F220)
#define RPG_CLIENT_GRIDFIGHTFORGECONFIG_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xA49F2A0)
#define RPG_CLIENT_GRIDFIGHTFORGECONFIG_SET_DESC_OFFSET UNITYSDK_OFFSET(0xA49F270)
#define RPG_CLIENT_GRIDFIGHTFORGECONFIG_SET_FORGETYPEDESC_OFFSET UNITYSDK_OFFSET(0xA49F2D0)
#define RPG_CLIENT_GRIDFIGHTFORGECONFIG_SET_FUNCTYPE_OFFSET UNITYSDK_OFFSET(0xA49F290)
#define RPG_CLIENT_GRIDFIGHTFORGECONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0xA49F250)
#define RPG_CLIENT_GRIDFIGHTFORGECONFIG_SET_ITEMCONFIG_OFFSET UNITYSDK_OFFSET(0xA49F230)
#define RPG_CLIENT_GRIDFIGHTFORGECONFIG_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xA49F2B0)
#define RPG_CLIENT_GRIDFIGHTFORGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA49F160)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeConfig_TypeDefinitionIndex = 59378;

	class GridFightForgeConfig : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightForgeConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightForgeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightForgeConfig_TypeDefinitionIndex)->GetStaticField(0x10BC0);
		}
		::RPG::Client::GridFightItemConfig* _ItemConfig_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _ParamList_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::RPG::GameCore::GridFightForgeFuncType _FuncType_k__BackingField; // 0x24
		::RPG::Client::TextID _ForgeTypeDesc_k__BackingField; // 0x28
		::RPG::Client::TextID _Desc_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECONFIG__CTOR_OFFSET))(this, id);
		}

		static ::RPG::Client::GridFightForgeConfig* GetConfig(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightForgeConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECONFIG_GETCONFIG_OFFSET))(id);
		}

		::RPG::Client::GridFightItemConfig* get_ItemConfig()
		{
			return ((::RPG::Client::GridFightItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECONFIG_GET_ITEMCONFIG_OFFSET))(this);
		}

		::System::Void set_ItemConfig(::RPG::Client::GridFightItemConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECONFIG_SET_ITEMCONFIG_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECONFIG_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECONFIG_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECONFIG_SET_DESC_OFFSET))(this, value);
		}

		::RPG::GameCore::GridFightForgeFuncType get_FuncType()
		{
			return ((::RPG::GameCore::GridFightForgeFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECONFIG_GET_FUNCTYPE_OFFSET))(this);
		}

		::System::Void set_FuncType(::RPG::GameCore::GridFightForgeFuncType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightForgeFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECONFIG_SET_FUNCTYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_ParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECONFIG_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Void set_ParamList(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECONFIG_SET_PARAMLIST_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_ForgeTypeDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECONFIG_GET_FORGETYPEDESC_OFFSET))(this);
		}

		::System::Void set_ForgeTypeDesc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECONFIG_SET_FORGETYPEDESC_OFFSET))(this, value);
		}
	};
}
