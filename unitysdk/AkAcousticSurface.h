#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKACOUSTICSURFACE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F8B9500)
#define AKACOUSTICSURFACE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8B9680)
#define AKACOUSTICSURFACE_DELETENAME_OFFSET UNITYSDK_OFFSET(0x1F8B9580)
#define AKACOUSTICSURFACE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1F8B8F30)
#define AKACOUSTICSURFACE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F8B8E10)
#define AKACOUSTICSURFACE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F8B8EC0)
#define AKACOUSTICSURFACE_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1F8B8D50)
#define AKACOUSTICSURFACE_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1F8B9600)
#define AKACOUSTICSURFACE_GET_OCCLUSION_OFFSET UNITYSDK_OFFSET(0x1F8B92F0)
#define AKACOUSTICSURFACE_GET_STRNAME_OFFSET UNITYSDK_OFFSET(0x1F8B9410)
#define AKACOUSTICSURFACE_GET_TEXTUREID_OFFSET UNITYSDK_OFFSET(0x1F8B91E0)
#define AKACOUSTICSURFACE_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1F8B8D60)
#define AKACOUSTICSURFACE_SET_OCCLUSION_OFFSET UNITYSDK_OFFSET(0x1F8B9260)
#define AKACOUSTICSURFACE_SET_STRNAME_OFFSET UNITYSDK_OFFSET(0x1F8B9370)
#define AKACOUSTICSURFACE_SET_TEXTUREID_OFFSET UNITYSDK_OFFSET(0x1F8B9160)
#define AKACOUSTICSURFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8B90E0)
#define AKACOUSTICSURFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B8D40)

inline static constexpr unsigned int AkAcousticSurface_TypeDefinitionIndex = 33574;

class AkAcousticSurface : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkAcousticSurface* obj)
	{
		return ((::System::IntPtr(*)(::AkAcousticSurface*))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_textureID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_SET_TEXTUREID_OFFSET))(this, value);
	}

	::System::UInt32 get_textureID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_GET_TEXTUREID_OFFSET))(this);
	}

	::System::Void set_occlusion(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_SET_OCCLUSION_OFFSET))(this, value);
	}

	::System::Single get_occlusion()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_GET_OCCLUSION_OFFSET))(this);
	}

	::System::Void set_strName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_SET_STRNAME_OFFSET))(this, value);
	}

	::System::String* get_strName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_GET_STRNAME_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_CLEAR_OFFSET))(this);
	}

	::System::Void DeleteName()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_DELETENAME_OFFSET))(this);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_GETSIZEOF_OFFSET))();
	}

	::System::Void Clone(::AkAcousticSurface* other)
	{
		return ((::System::Void(*)(::PVOID, ::AkAcousticSurface*))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_CLONE_OFFSET))(this, other);
	}
};
