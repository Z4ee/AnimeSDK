#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_2_620FBFF36868E770_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B65560)
#define CLASS_2_620FBFF36868E770_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x10B65860)
#define CLASS_2_620FBFF36868E770_METHOD_2_34F3027B48DD9539_OFFSET UNITYSDK_OFFSET(0x10B658A0)
#define CLASS_2_620FBFF36868E770_METHOD_2_3C081D06DA6B1B22_OFFSET UNITYSDK_OFFSET(0x10B65330)
#define CLASS_2_620FBFF36868E770_METHOD_2_8EB0B5A1956DA0FB_OFFSET UNITYSDK_OFFSET(0x10B65180)
#define CLASS_2_620FBFF36868E770_METHOD_2_A69FA13B10FB80CC_OFFSET UNITYSDK_OFFSET(0x10B653B0)
#define CLASS_2_620FBFF36868E770_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x10B65A50)
#define CLASS_2_620FBFF36868E770_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10B65610)
#define CLASS_2_620FBFF36868E770__CTOR_OFFSET UNITYSDK_OFFSET(0x10B65850)

inline static constexpr unsigned int Class_2_620FBFF36868E770_TypeDefinitionIndex = 51587;

class Class_2_620FBFF36868E770 : public ::MoleMole::RendererFader
{
public:
	::UnityEngine::Material* Field_2_2; // 0x28
	::System::String* Field_2_0; // 0x30
	::System::Int32 Field_2_3; // 0x38
	::System::Single Field_2_1; // 0x3C
	::System::Int32 Field_2_4; // 0x40
	::System::Single Field_2_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_620FBFF36868E770__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8EB0B5A1956DA0FB(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_620FBFF36868E770_METHOD_2_8EB0B5A1956DA0FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C081D06DA6B1B22(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_620FBFF36868E770_METHOD_2_3C081D06DA6B1B22_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A69FA13B10FB80CC(::UnityEngine::MaterialPropertyBlock*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + CLASS_2_620FBFF36868E770_METHOD_2_A69FA13B10FB80CC_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_620FBFF36868E770_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_620FBFF36868E770_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_620FBFF36868E770_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_34F3027B48DD9539(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_620FBFF36868E770_METHOD_2_34F3027B48DD9539_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_620FBFF36868E770_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}
};
