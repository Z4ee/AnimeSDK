#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_69C4E62C042D7596_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12368310)
#define CLASS_2_69C4E62C042D7596_METHOD_2_066A2A302F994390_OFFSET UNITYSDK_OFFSET(0x12367FA0)
#define CLASS_2_69C4E62C042D7596_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12368570)
#define CLASS_2_69C4E62C042D7596_METHOD_2_B0AAE622EE6FE17B_OFFSET UNITYSDK_OFFSET(0x123680B0)
#define CLASS_2_69C4E62C042D7596_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x123685B0)
#define CLASS_2_69C4E62C042D7596_METHOD_2_D64A36D865299649_OFFSET UNITYSDK_OFFSET(0x12368730)
#define CLASS_2_69C4E62C042D7596_METHOD_2_E8DB97264B6D98F7_OFFSET UNITYSDK_OFFSET(0x12367D50)
#define CLASS_2_69C4E62C042D7596_TOSTRING_OFFSET UNITYSDK_OFFSET(0x123683B0)
#define CLASS_2_69C4E62C042D7596__CTOR_OFFSET UNITYSDK_OFFSET(0x12367D40)

inline static constexpr unsigned int Class_2_69C4E62C042D7596_TypeDefinitionIndex = 80778;

class Class_2_69C4E62C042D7596 : public ::MoleMole::RendererFader
{
public:
	::System::Single Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69C4E62C042D7596__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E8DB97264B6D98F7(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_69C4E62C042D7596_METHOD_2_E8DB97264B6D98F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_066A2A302F994390(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_69C4E62C042D7596_METHOD_2_066A2A302F994390_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B0AAE622EE6FE17B(::UnityEngine::MaterialPropertyBlock*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + CLASS_2_69C4E62C042D7596_METHOD_2_B0AAE622EE6FE17B_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69C4E62C042D7596_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69C4E62C042D7596_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69C4E62C042D7596_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69C4E62C042D7596_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_D64A36D865299649(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_69C4E62C042D7596_METHOD_2_D64A36D865299649_OFFSET))(this, a1, a2, a3);
	}
};
