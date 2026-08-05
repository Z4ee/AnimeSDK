#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_40B827BEB94C066F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1347B180)
#define CLASS_2_40B827BEB94C066F_METHOD_2_066A2A302F994390_OFFSET UNITYSDK_OFFSET(0x1347AE10)
#define CLASS_2_40B827BEB94C066F_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1347B8B0)
#define CLASS_2_40B827BEB94C066F_METHOD_2_73E5B837DDB9C2BE_OFFSET UNITYSDK_OFFSET(0x1347B440)
#define CLASS_2_40B827BEB94C066F_METHOD_2_B0AAE622EE6FE17B_OFFSET UNITYSDK_OFFSET(0x1347AF20)
#define CLASS_2_40B827BEB94C066F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1347B810)
#define CLASS_2_40B827BEB94C066F_METHOD_2_E8DB97264B6D98F7_OFFSET UNITYSDK_OFFSET(0x1347ABC0)
#define CLASS_2_40B827BEB94C066F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1347B270)
#define CLASS_2_40B827BEB94C066F__CTOR_OFFSET UNITYSDK_OFFSET(0x1347B430)

inline static constexpr unsigned int Class_2_40B827BEB94C066F_TypeDefinitionIndex = 81859;

class Class_2_40B827BEB94C066F : public ::MoleMole::RendererFader
{
public:
	::System::Single Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40B827BEB94C066F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E8DB97264B6D98F7(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_40B827BEB94C066F_METHOD_2_E8DB97264B6D98F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_066A2A302F994390(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_40B827BEB94C066F_METHOD_2_066A2A302F994390_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B0AAE622EE6FE17B(::UnityEngine::MaterialPropertyBlock*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + CLASS_2_40B827BEB94C066F_METHOD_2_B0AAE622EE6FE17B_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40B827BEB94C066F_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40B827BEB94C066F_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_73E5B837DDB9C2BE(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_40B827BEB94C066F_METHOD_2_73E5B837DDB9C2BE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40B827BEB94C066F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40B827BEB94C066F_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
