#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }

#define BRIGHTSPOTSFLARERESOURCES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B066640)
#define BRIGHTSPOTSFLARERESOURCES_ENSUREBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B0664E0)
#define BRIGHTSPOTSFLARERESOURCES_GET_DRAWARGSBUFFER_OFFSET UNITYSDK_OFFSET(0x1B066370)
#define BRIGHTSPOTSFLARERESOURCES_GET_FLAREMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B066390)
#define BRIGHTSPOTSFLARERESOURCES_GET_HASFLARE_OFFSET UNITYSDK_OFFSET(0x1B0663B0)
#define BRIGHTSPOTSFLARERESOURCES_INIT_OFFSET UNITYSDK_OFFSET(0x1B0663D0)
#define BRIGHTSPOTSFLARERESOURCES_RESETDRAWARGS_OFFSET UNITYSDK_OFFSET(0x1B0665A0)
#define BRIGHTSPOTSFLARERESOURCES_SETHASFLARE_OFFSET UNITYSDK_OFFSET(0x1B066490)
#define BRIGHTSPOTSFLARERESOURCES_SET_DRAWARGSBUFFER_OFFSET UNITYSDK_OFFSET(0x1B066380)
#define BRIGHTSPOTSFLARERESOURCES_SET_FLAREMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B0663A0)
#define BRIGHTSPOTSFLARERESOURCES_SET_HASFLARE_OFFSET UNITYSDK_OFFSET(0x1B0663C0)
#define BRIGHTSPOTSFLARERESOURCES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0666B0)
#define BRIGHTSPOTSFLARERESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0666A0)

inline static constexpr unsigned int BrightSpotsFlareResources_TypeDefinitionIndex = 27240;

class BrightSpotsFlareResources : public ::System::Object
{
public:
	static ::Il2CppArray<::System::UInt32>** StaticGet_k_DefaultDrawArgs()
	{
		return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlareResources_TypeDefinitionIndex)->GetStaticField(0x21B60);
	}
	::UnityEngine::ComputeBuffer* _DrawArgsBuffer_k__BackingField; // 0x10
	::UnityEngine::Material* _FlareMaterial_k__BackingField; // 0x18
	::System::Boolean _HasFlare_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRIGHTSPOTSFLARERESOURCES__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BRIGHTSPOTSFLARERESOURCES__CCTOR_OFFSET))();
	}

	::UnityEngine::ComputeBuffer* get_DrawArgsBuffer()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BRIGHTSPOTSFLARERESOURCES_GET_DRAWARGSBUFFER_OFFSET))(this);
	}

	::System::Void set_DrawArgsBuffer(::UnityEngine::ComputeBuffer* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + BRIGHTSPOTSFLARERESOURCES_SET_DRAWARGSBUFFER_OFFSET))(this, value);
	}

	::UnityEngine::Material* get_FlareMaterial()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + BRIGHTSPOTSFLARERESOURCES_GET_FLAREMATERIAL_OFFSET))(this);
	}

	::System::Void set_FlareMaterial(::UnityEngine::Material* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + BRIGHTSPOTSFLARERESOURCES_SET_FLAREMATERIAL_OFFSET))(this, value);
	}

	::System::Boolean get_HasFlare()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BRIGHTSPOTSFLARERESOURCES_GET_HASFLARE_OFFSET))(this);
	}

	::System::Void set_HasFlare(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BRIGHTSPOTSFLARERESOURCES_SET_HASFLARE_OFFSET))(this, value);
	}

	::System::Void Init(::UnityEngine::Material* flareMaterial)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + BRIGHTSPOTSFLARERESOURCES_INIT_OFFSET))(this, flareMaterial);
	}

	::System::Void SetHasFlare(::System::Boolean hasFlare)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BRIGHTSPOTSFLARERESOURCES_SETHASFLARE_OFFSET))(this, hasFlare);
	}

	::System::Void EnsureBuffers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRIGHTSPOTSFLARERESOURCES_ENSUREBUFFERS_OFFSET))(this);
	}

	::System::Void ResetDrawArgs()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRIGHTSPOTSFLARERESOURCES_RESETDRAWARGS_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRIGHTSPOTSFLARERESOURCES_DISPOSE_OFFSET))(this);
	}
};
