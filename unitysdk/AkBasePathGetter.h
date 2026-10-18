#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKBASEPATHGETTER_EVALUATEGAMEPATHS_OFFSET UNITYSDK_OFFSET(0x1F57CE80)
#define AKBASEPATHGETTER_GETPLATFORMBASEPATH_OFFSET UNITYSDK_OFFSET(0x1F57CD00)
#define AKBASEPATHGETTER_GETPLATFORMNAME_OFFSET UNITYSDK_OFFSET(0x1F57CC10)
#define AKBASEPATHGETTER_GET_DECODEDBANKFULLPATH_OFFSET UNITYSDK_OFFSET(0x1F57D2F0)
#define AKBASEPATHGETTER_GET_LOGWARNINGS_OFFSET UNITYSDK_OFFSET(0x1F57CC90)
#define AKBASEPATHGETTER_GET_OFFSET UNITYSDK_OFFSET(0x1F57C4D0)
#define AKBASEPATHGETTER_GET_PERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x1F57D2D0)
#define AKBASEPATHGETTER_GET_SOUNDBANKBASEPATH_OFFSET UNITYSDK_OFFSET(0x1F57D2B0)
#define AKBASEPATHGETTER_SET_DECODEDBANKFULLPATH_OFFSET UNITYSDK_OFFSET(0x1F57D300)
#define AKBASEPATHGETTER_SET_LOGWARNINGS_OFFSET UNITYSDK_OFFSET(0x1F57CCD0)
#define AKBASEPATHGETTER_SET_PERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x1F57D2E0)
#define AKBASEPATHGETTER_SET_SOUNDBANKBASEPATH_OFFSET UNITYSDK_OFFSET(0x1F57D2C0)
#define AKBASEPATHGETTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F57D310)
#define AKBASEPATHGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F57CE70)

inline static constexpr unsigned int AkBasePathGetter_TypeDefinitionIndex = 44821;

class AkBasePathGetter : public ::System::Object
{
public:
	static ::AkBasePathGetter** StaticGet_Instance()
	{
		return (::AkBasePathGetter**)Il2CppClass::FromTypeDefinitionIndex(AkBasePathGetter_TypeDefinitionIndex)->GetStaticField(0x2530);
	}
	static ::System::String** StaticGet_DefaultBasePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AkBasePathGetter_TypeDefinitionIndex)->GetStaticField(0x2538);
	}
	static ::System::String** StaticGet_DefaultPlatformName()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AkBasePathGetter_TypeDefinitionIndex)->GetStaticField(0x2540);
	}
	static ::System::String** StaticGet_DefaultPersistentDataPath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AkBasePathGetter_TypeDefinitionIndex)->GetStaticField(0x2548);
	}
	static ::System::Boolean* StaticGet_LogWarnings_Internal()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AkBasePathGetter_TypeDefinitionIndex)->GetStaticField(0x1DC0);
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

	static ::System::Void set_LogWarnings(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_SET_LOGWARNINGS_OFFSET))(a1);
	}

	static ::System::String* GetPlatformBasePath()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GETPLATFORMBASEPATH_OFFSET))();
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

	::System::Void set_SoundBankBasePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_SET_SOUNDBANKBASEPATH_OFFSET))(this, a1);
	}

	::System::String* get_PersistentDataPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GET_PERSISTENTDATAPATH_OFFSET))(this);
	}

	::System::Void set_PersistentDataPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_SET_PERSISTENTDATAPATH_OFFSET))(this, a1);
	}

	::System::String* get_DecodedBankFullPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GET_DECODEDBANKFULLPATH_OFFSET))(this);
	}

	::System::Void set_DecodedBankFullPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_SET_DECODEDBANKFULLPATH_OFFSET))(this, a1);
	}
};
