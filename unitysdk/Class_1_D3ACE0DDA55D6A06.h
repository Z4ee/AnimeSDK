#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_D3ACE0DDA55D6A06_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xB7DF990)
#define CLASS_1_D3ACE0DDA55D6A06_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB7DFA50)
#define CLASS_1_D3ACE0DDA55D6A06__CTOR_OFFSET UNITYSDK_OFFSET(0xB7DF910)
#define CLASS_1_D3ACE0DDA55D6A06___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB7DFDB0)

inline static constexpr unsigned int Class_1_D3ACE0DDA55D6A06_TypeDefinitionIndex = 64698;

class Class_1_D3ACE0DDA55D6A06 : public ::System::Object
{
public:
	::UnityEngine::Renderer* Field_1_0; // 0x10
	::UnityEngine::MaterialPropertyBlock* Field_1_4; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x24
	::System::Single Field_1_3; // 0x28

	::System::Void _ctor(::UnityEngine::Renderer* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D3ACE0DDA55D6A06__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D3ACE0DDA55D6A06_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3ACE0DDA55D6A06_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3ACE0DDA55D6A06___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
