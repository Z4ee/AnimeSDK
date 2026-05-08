#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_A1D0ABF169396B1F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11AF8D90)
#define CLASS_2_A1D0ABF169396B1F_METHOD_2_08B7287B59325288_OFFSET UNITYSDK_OFFSET(0x1394E740)
#define CLASS_2_A1D0ABF169396B1F_METHOD_2_0F4A4C6D93D0708D_OFFSET UNITYSDK_OFFSET(0x11AF8860)
#define CLASS_2_A1D0ABF169396B1F_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1394ECE0)
#define CLASS_2_A1D0ABF169396B1F_METHOD_2_27A9FBF1D87B9C6A_OFFSET UNITYSDK_OFFSET(0x11AF8BC0)
#define CLASS_2_A1D0ABF169396B1F_METHOD_2_3C24DDABFEBD866B_OFFSET UNITYSDK_OFFSET(0x11AF8AB0)
#define CLASS_2_A1D0ABF169396B1F_METHOD_2_91F0143A271BDDC9_OFFSET UNITYSDK_OFFSET(0x1394E920)
#define CLASS_2_A1D0ABF169396B1F_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1394E7A0)
#define CLASS_2_A1D0ABF169396B1F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1394E340)
#define CLASS_2_A1D0ABF169396B1F__CTOR_OFFSET UNITYSDK_OFFSET(0x11AF8850)

inline static constexpr unsigned int Class_2_A1D0ABF169396B1F_TypeDefinitionIndex = 80268;

class Class_2_A1D0ABF169396B1F : public ::MoleMole::RendererFader
{
public:
	::System::Single Field_2_1; // 0x28
	::System::Single Field_2_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1D0ABF169396B1F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0F4A4C6D93D0708D(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A1D0ABF169396B1F_METHOD_2_0F4A4C6D93D0708D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C24DDABFEBD866B(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A1D0ABF169396B1F_METHOD_2_3C24DDABFEBD866B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_27A9FBF1D87B9C6A(::UnityEngine::MaterialPropertyBlock*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + CLASS_2_A1D0ABF169396B1F_METHOD_2_27A9FBF1D87B9C6A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1D0ABF169396B1F_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1D0ABF169396B1F_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_08B7287B59325288(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A1D0ABF169396B1F_METHOD_2_08B7287B59325288_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1D0ABF169396B1F_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_91F0143A271BDDC9(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A1D0ABF169396B1F_METHOD_2_91F0143A271BDDC9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1D0ABF169396B1F_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
