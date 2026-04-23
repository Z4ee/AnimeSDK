#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PLAYERDEFAULTINFO_GETHEADICONID_OFFSET UNITYSDK_OFFSET(0xAD5D2B0)
#define RPG_CLIENT_PLAYERDEFAULTINFO_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xAD56ED0)
#define RPG_CLIENT_PLAYERDEFAULTINFO_GET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0xAD56F40)
#define RPG_CLIENT_PLAYERDEFAULTINFO_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0xAD570D0)
#define RPG_CLIENT_PLAYERDEFAULTINFO_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xAD5D3D0)
#define RPG_CLIENT_PLAYERDEFAULTINFO_SET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0xAD5D3E0)
#define RPG_CLIENT_PLAYERDEFAULTINFO_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0xAD57140)
#define RPG_CLIENT_PLAYERDEFAULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xAD55E10)
#define RPG_CLIENT_PLAYERDEFAULTINFO__GETDEFAULTSIGNATURE_OFFSET UNITYSDK_OFFSET(0xAD5D3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerDefaultInfo_TypeDefinitionIndex = 61429;

	class PlayerDefaultInfo : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__DEFAULTSIGNATURE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PlayerDefaultInfo_TypeDefinitionIndex)->GetStaticField(0x67560);
		}
		static ::System::String** StaticGet__CacheLanguageType()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PlayerDefaultInfo_TypeDefinitionIndex)->GetStaticField(0x67568);
		}
		static ::System::UInt32* StaticGet__DEFAULTHEADICONID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PlayerDefaultInfo_TypeDefinitionIndex)->GetStaticField(0x11360);
		}
		::System::String* _Signature; // 0x10
		::System::UInt32 _HeadIconID; // 0x18
		::System::UInt32 _PersonalCardID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDEFAULTINFO__CTOR_OFFSET))(this);
		}

		static ::System::UInt32 GetHeadIconID(::System::UInt32 headIconID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDEFAULTINFO_GETHEADICONID_OFFSET))(headIconID);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDEFAULTINFO_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDEFAULTINFO_SET_HEADICONID_OFFSET))(this, value);
		}

		::System::Void set_PersonalCardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDEFAULTINFO_SET_PERSONALCARDID_OFFSET))(this, value);
		}

		::System::UInt32 get_PersonalCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDEFAULTINFO_GET_PERSONALCARDID_OFFSET))(this);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDEFAULTINFO_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDEFAULTINFO_SET_SIGNATURE_OFFSET))(this, value);
		}

		::System::String* _GetDefaultSignature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDEFAULTINFO__GETDEFAULTSIGNATURE_OFFSET))(this);
		}
	};
}
