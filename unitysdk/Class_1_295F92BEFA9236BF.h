#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_1_295F92BEFA9236BF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x112B0860)
#define CLASS_1_295F92BEFA9236BF_METHOD_1_6E07954A29DDCD4C_OFFSET UNITYSDK_OFFSET(0x112B07C0)
#define CLASS_1_295F92BEFA9236BF_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x112B0760)
#define CLASS_1_295F92BEFA9236BF_METHOD_1_B7C69575F1BC05B2_OFFSET UNITYSDK_OFFSET(0x112B0570)
#define CLASS_1_295F92BEFA9236BF__CTOR_OFFSET UNITYSDK_OFFSET(0x112B08E0)

inline static constexpr unsigned int Class_1_295F92BEFA9236BF_TypeDefinitionIndex = 67996;

class Class_1_295F92BEFA9236BF : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::UnityEngine::Material* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_295F92BEFA9236BF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B7C69575F1BC05B2(::UnityEngine::UI::RawImage* a1, ::UnityEngine::RenderTexture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_295F92BEFA9236BF_METHOD_1_B7C69575F1BC05B2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E07954A29DDCD4C(::UnityEngine::UI::RawImage* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_295F92BEFA9236BF_METHOD_1_6E07954A29DDCD4C_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_295F92BEFA9236BF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_295F92BEFA9236BF_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
