#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKACOUSTICSURFACE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D579F50)
#define AKACOUSTICSURFACE_CLONE_OFFSET UNITYSDK_OFFSET(0x1D57A160)
#define AKACOUSTICSURFACE_DELETENAME_OFFSET UNITYSDK_OFFSET(0x1D57A000)
#define AKACOUSTICSURFACE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D579810)
#define AKACOUSTICSURFACE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D579620)
#define AKACOUSTICSURFACE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D579740)
#define AKACOUSTICSURFACE_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1D579570)
#define AKACOUSTICSURFACE_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1D57A0B0)
#define AKACOUSTICSURFACE_GET_OCCLUSION_OFFSET UNITYSDK_OFFSET(0x1D579CA0)
#define AKACOUSTICSURFACE_GET_STRNAME_OFFSET UNITYSDK_OFFSET(0x1D579E30)
#define AKACOUSTICSURFACE_GET_TEXTUREID_OFFSET UNITYSDK_OFFSET(0x1D579B30)
#define AKACOUSTICSURFACE_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1D5795C0)
#define AKACOUSTICSURFACE_SET_OCCLUSION_OFFSET UNITYSDK_OFFSET(0x1D579BE0)
#define AKACOUSTICSURFACE_SET_STRNAME_OFFSET UNITYSDK_OFFSET(0x1D579D50)
#define AKACOUSTICSURFACE_SET_TEXTUREID_OFFSET UNITYSDK_OFFSET(0x1D579A70)
#define AKACOUSTICSURFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D5799F0)
#define AKACOUSTICSURFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D579560)

inline static constexpr unsigned int AkAcousticSurface_TypeDefinitionIndex = 43520;

class AkAcousticSurface : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkAcousticSurface* a1)
	{
		return ((::System::IntPtr(*)(::AkAcousticSurface*))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_textureID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_SET_TEXTUREID_OFFSET))(this, a1);
	}

	::System::UInt32 get_textureID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_GET_TEXTUREID_OFFSET))(this);
	}

	::System::Void set_occlusion(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_SET_OCCLUSION_OFFSET))(this, a1);
	}

	::System::Single get_occlusion()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_GET_OCCLUSION_OFFSET))(this);
	}

	::System::Void set_strName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_SET_STRNAME_OFFSET))(this, a1);
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

	::System::Void Clone(::AkAcousticSurface* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkAcousticSurface*))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACE_CLONE_OFFSET))(this, a1);
	}
};
