#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkImageSourceParams;
namespace System { class String; }

#define AKIMAGESOURCESETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B439760)
#define AKIMAGESOURCESETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B439640)
#define AKIMAGESOURCESETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4396F0)
#define AKIMAGESOURCESETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B439500)
#define AKIMAGESOURCESETTINGS_GET_PARAMS__OFFSET UNITYSDK_OFFSET(0x1B439D50)
#define AKIMAGESOURCESETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B439550)
#define AKIMAGESOURCESETTINGS_SETNAME_OFFSET UNITYSDK_OFFSET(0x1B439B50)
#define AKIMAGESOURCESETTINGS_SETONETEXTURE_OFFSET UNITYSDK_OFFSET(0x1B439A90)
#define AKIMAGESOURCESETTINGS_SET_PARAMS__OFFSET UNITYSDK_OFFSET(0x1B439C30)
#define AKIMAGESOURCESETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B439940)
#define AKIMAGESOURCESETTINGS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B4399C0)
#define AKIMAGESOURCESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4394F0)

inline static constexpr unsigned int AkImageSourceSettings_TypeDefinitionIndex = 41127;

class AkImageSourceSettings : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS__CTOR_2_OFFSET))(this, a1, a2, a3);
	}

	static ::System::IntPtr getCPtr(::AkImageSourceSettings* a1)
	{
		return ((::System::IntPtr(*)(::AkImageSourceSettings*))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void SetOneTexture(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_SETONETEXTURE_OFFSET))(this, a1);
	}

	::System::Void SetName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_SETNAME_OFFSET))(this, a1);
	}

	::System::Void set_params_(::AkImageSourceParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkImageSourceParams*))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_SET_PARAMS__OFFSET))(this, a1);
	}

	::AkImageSourceParams* get_params_()
	{
		return ((::AkImageSourceParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCESETTINGS_GET_PARAMS__OFFSET))(this);
	}
};
