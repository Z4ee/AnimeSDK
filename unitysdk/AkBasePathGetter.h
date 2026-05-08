#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKBASEPATHGETTER_EVALUATEGAMEPATHS_OFFSET UNITYSDK_OFFSET(0x1C3D31C0)
#define AKBASEPATHGETTER_GETFULLSOUNDBANKPATH_OFFSET UNITYSDK_OFFSET(0x1C3D2FB0)
#define AKBASEPATHGETTER_GETPLATFORMBASEPATH_OFFSET UNITYSDK_OFFSET(0x1C3D2E20)
#define AKBASEPATHGETTER_GETPLATFORMNAME_OFFSET UNITYSDK_OFFSET(0x1C3D2CE0)
#define AKBASEPATHGETTER_GET_DECODEDBANKFULLPATH_OFFSET UNITYSDK_OFFSET(0x1C3D3640)
#define AKBASEPATHGETTER_GET_LOGWARNINGS_OFFSET UNITYSDK_OFFSET(0x1C3D2D60)
#define AKBASEPATHGETTER_GET_OFFSET UNITYSDK_OFFSET(0x1C3D30A0)
#define AKBASEPATHGETTER_GET_PERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x1C3D3620)
#define AKBASEPATHGETTER_GET_SOUNDBANKBASEPATH_OFFSET UNITYSDK_OFFSET(0x1C3D3600)
#define AKBASEPATHGETTER_SET_DECODEDBANKFULLPATH_OFFSET UNITYSDK_OFFSET(0x1C3D3650)
#define AKBASEPATHGETTER_SET_LOGWARNINGS_OFFSET UNITYSDK_OFFSET(0x1C3D2DC0)
#define AKBASEPATHGETTER_SET_PERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x1C3D3630)
#define AKBASEPATHGETTER_SET_SOUNDBANKBASEPATH_OFFSET UNITYSDK_OFFSET(0x1C3D3610)
#define AKBASEPATHGETTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3D3660)
#define AKBASEPATHGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D31B0)

inline static constexpr unsigned int AkBasePathGetter_TypeDefinitionIndex = 31496;

class AkBasePathGetter : public ::System::Object
{
public:
	static ::AkBasePathGetter** StaticGet_Instance()
	{
		return (::AkBasePathGetter**)Il2CppClass::FromTypeDefinitionIndex(AkBasePathGetter_TypeDefinitionIndex)->GetStaticField(0x258A0);
	}
	static ::System::String** StaticGet_DefaultPlatformName()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AkBasePathGetter_TypeDefinitionIndex)->GetStaticField(0x258A8);
	}
	static ::System::String** StaticGet_DefaultBasePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AkBasePathGetter_TypeDefinitionIndex)->GetStaticField(0x258B0);
	}
	static ::System::Boolean* StaticGet_LogWarnings_Internal()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AkBasePathGetter_TypeDefinitionIndex)->GetStaticField(0x7C70);
	}
	// static const ::System::String* DecodedBankFolder; // 0x0
	::System::String* _PersistentDataPath_k__BackingField; // 0x10
	::System::String* _SoundBankBasePath_k__BackingField; // 0x18
	::System::String* _DecodedBankFullPath_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKBASEPATHGETTER__CCTOR_OFFSET))();
	}

	static ::System::String* GetPlatformName()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GETPLATFORMNAME_OFFSET))();
	}

	static ::System::Boolean get_LogWarnings()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GET_LOGWARNINGS_OFFSET))();
	}

	static ::System::Void set_LogWarnings(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_SET_LOGWARNINGS_OFFSET))(value);
	}

	static ::System::String* GetPlatformBasePath()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GETPLATFORMBASEPATH_OFFSET))();
	}

	static ::System::String* GetFullSoundBankPath()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GETFULLSOUNDBANKPATH_OFFSET))();
	}

	static ::AkBasePathGetter* Get()
	{
		return ((::AkBasePathGetter*(*)())((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GET_OFFSET))();
	}

	::System::Void EvaluateGamePaths()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_EVALUATEGAMEPATHS_OFFSET))(this);
	}

	::System::String* get_SoundBankBasePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GET_SOUNDBANKBASEPATH_OFFSET))(this);
	}

	::System::Void set_SoundBankBasePath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_SET_SOUNDBANKBASEPATH_OFFSET))(this, value);
	}

	::System::String* get_PersistentDataPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GET_PERSISTENTDATAPATH_OFFSET))(this);
	}

	::System::Void set_PersistentDataPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_SET_PERSISTENTDATAPATH_OFFSET))(this, value);
	}

	::System::String* get_DecodedBankFullPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GET_DECODEDBANKFULLPATH_OFFSET))(this);
	}

	::System::Void set_DecodedBankFullPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_SET_DECODEDBANKFULLPATH_OFFSET))(this, value);
	}
};
