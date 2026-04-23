#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PamSkinConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PAMSKINDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAC206C0)
#define RPG_CLIENT_PAMSKINDATA_GET_CONFIGENTITYPATH_OFFSET UNITYSDK_OFFSET(0xAC20860)
#define RPG_CLIENT_PAMSKINDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xAC20780)
#define RPG_CLIENT_PAMSKINDATA_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0xAC208D0)
#define RPG_CLIENT_PAMSKINDATA_GET_MANIKINPREFABPATH_OFFSET UNITYSDK_OFFSET(0xAC20940)
#define RPG_CLIENT_PAMSKINDATA_GET_SKINICON_OFFSET UNITYSDK_OFFSET(0xAC20790)
#define RPG_CLIENT_PAMSKINDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xAC20800)
#define RPG_CLIENT_PAMSKINDATA_SETUNLOCK_OFFSET UNITYSDK_OFFSET(0xAC20730)
#define RPG_CLIENT_PAMSKINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAC20720)

namespace RPG::Client
{
	inline static constexpr unsigned int PamSkinData_TypeDefinitionIndex = 61186;

	class PamSkinData : public ::System::Object
	{
	public:
		::System::UInt32 SkinID; // 0x10
		::System::Boolean _IsUnlock; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PamSkinData* Create(::System::UInt32 pamSkinID)
		{
			return ((::RPG::Client::PamSkinData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_CREATE_OFFSET))(pamSkinID);
		}

		::System::Void SetUnlock(::System::Boolean isUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_SETUNLOCK_OFFSET))(this, isUnlock);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::String* get_SkinIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_GET_SKINICON_OFFSET))(this);
		}

		::System::String* get_ConfigEntityPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_GET_CONFIGENTITYPATH_OFFSET))(this);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_GET_JSONPATH_OFFSET))(this);
		}

		::System::String* get_ManikinPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_GET_MANIKINPREFABPATH_OFFSET))(this);
		}

		::RPG::GameCore::PamSkinConfigRow* get__Row()
		{
			return ((::RPG::GameCore::PamSkinConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_GET__ROW_OFFSET))(this);
		}
	};
}
