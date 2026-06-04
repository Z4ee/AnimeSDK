#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PamSkinConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PAMSKINDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC330280)
#define RPG_CLIENT_PAMSKINDATA_GET_CONFIGENTITYPATH_OFFSET UNITYSDK_OFFSET(0xC330420)
#define RPG_CLIENT_PAMSKINDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC330340)
#define RPG_CLIENT_PAMSKINDATA_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0xC330490)
#define RPG_CLIENT_PAMSKINDATA_GET_MANIKINPREFABPATH_OFFSET UNITYSDK_OFFSET(0xC330500)
#define RPG_CLIENT_PAMSKINDATA_GET_SKINICON_OFFSET UNITYSDK_OFFSET(0xC330350)
#define RPG_CLIENT_PAMSKINDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC3303C0)
#define RPG_CLIENT_PAMSKINDATA_SETUNLOCK_OFFSET UNITYSDK_OFFSET(0xC3302F0)
#define RPG_CLIENT_PAMSKINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3302E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PamSkinData_TypeDefinitionIndex = 62110;

	class PamSkinData : public ::System::Object
	{
	public:
		::System::Boolean _IsUnlock; // 0x10
		::System::UInt32 SkinID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PamSkinData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::PamSkinData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_CREATE_OFFSET))(a1);
		}

		::System::Void SetUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_SETUNLOCK_OFFSET))(this, a1);
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
