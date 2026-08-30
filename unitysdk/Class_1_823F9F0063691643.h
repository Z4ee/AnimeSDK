#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_1_823F9F0063691643_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16FCB380)
#define CLASS_1_823F9F0063691643_METHOD_1_797330802A79DACF_OFFSET UNITYSDK_OFFSET(0x16FCB290)
#define CLASS_1_823F9F0063691643_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16FCB230)
#define CLASS_1_823F9F0063691643_METHOD_1_C6E20B8F12E9F38D_OFFSET UNITYSDK_OFFSET(0x16FCB0E0)
#define CLASS_1_823F9F0063691643__CTOR_OFFSET UNITYSDK_OFFSET(0x16FCB400)

inline static constexpr unsigned int Class_1_823F9F0063691643_TypeDefinitionIndex = 72711;

class Class_1_823F9F0063691643 : public ::System::Object
{
public:
	// static const ::System::String* DCPEFEGGAAM; // 0x0
	::UnityEngine::Material* IMOHCDHKBAJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823F9F0063691643__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C6E20B8F12E9F38D(::UnityEngine::UI::RawImage* a1, ::UnityEngine::RenderTexture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_823F9F0063691643_METHOD_1_C6E20B8F12E9F38D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_797330802A79DACF(::UnityEngine::UI::RawImage* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_823F9F0063691643_METHOD_1_797330802A79DACF_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823F9F0063691643_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823F9F0063691643_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
