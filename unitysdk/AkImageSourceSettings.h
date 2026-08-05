#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkImageSourceParams;
namespace System { class String; }

#define AKIMAGESOURCESETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1ECB7110)
#define AKIMAGESOURCESETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ECB6FF0)
#define AKIMAGESOURCESETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ECB70A0)
#define AKIMAGESOURCESETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1ECB6F30)
#define AKIMAGESOURCESETTINGS_GET_PARAMS__OFFSET UNITYSDK_OFFSET(0x1ECB75D0)
#define AKIMAGESOURCESETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1ECB6F40)
#define AKIMAGESOURCESETTINGS_SETNAME_OFFSET UNITYSDK_OFFSET(0x1ECB7490)
#define AKIMAGESOURCESETTINGS_SETONETEXTURE_OFFSET UNITYSDK_OFFSET(0x1ECB7410)
#define AKIMAGESOURCESETTINGS_SET_PARAMS__OFFSET UNITYSDK_OFFSET(0x1ECB7530)
#define AKIMAGESOURCESETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ECB72C0)
#define AKIMAGESOURCESETTINGS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1ECB7340)
#define AKIMAGESOURCESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECB6F20)

inline static constexpr unsigned int AkImageSourceSettings_TypeDefinitionIndex = 33607;

class AkImageSourceSettings : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::UnityEngine::Vector3 in_sourcePosition, ::System::Single in_fDistanceScalingFactor, ::System::Single in_fLevel)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS__CTOR_2_OFFSET))(this, in_sourcePosition, in_fDistanceScalingFactor, in_fLevel);
	}

	static ::System::IntPtr getCPtr(::AkImageSourceSettings* obj)
	{
		return ((::System::IntPtr(*)(::AkImageSourceSettings*))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void SetOneTexture(::System::UInt32 in_texture)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_SETONETEXTURE_OFFSET))(this, in_texture);
	}

	::System::Void SetName(::System::String* in_pName)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_SETNAME_OFFSET))(this, in_pName);
	}

	::System::Void set_params_(::AkImageSourceParams* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkImageSourceParams*))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_SET_PARAMS__OFFSET))(this, value);
	}

	::AkImageSourceParams* get_params_()
	{
		return ((::AkImageSourceParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_GET_PARAMS__OFFSET))(this);
	}
};
