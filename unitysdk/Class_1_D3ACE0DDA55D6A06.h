#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_D3ACE0DDA55D6A06_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x16170830)
#define CLASS_1_D3ACE0DDA55D6A06_TOSTRING_OFFSET UNITYSDK_OFFSET(0x161708F0)
#define CLASS_1_D3ACE0DDA55D6A06__CTOR_OFFSET UNITYSDK_OFFSET(0x161707B0)

inline static constexpr unsigned int Class_1_D3ACE0DDA55D6A06_TypeDefinitionIndex = 70141;

class Class_1_D3ACE0DDA55D6A06 : public ::System::Object
{
public:
	::UnityEngine::MaterialPropertyBlock* DMOKGPMOFGM; // 0x10
	::UnityEngine::Renderer* JAMDAALMOAL; // 0x18
	::System::Single NHGFCDCCBNL; // 0x20
	::System::Int32 LAPPEBCGDEG; // 0x24
	::System::Single NEHMFKCDKDI; // 0x28

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
};
