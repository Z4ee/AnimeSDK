#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_2_69EA47680D9A92E8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1074A3E0)
#define CLASS_2_69EA47680D9A92E8_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1074A990)
#define CLASS_2_69EA47680D9A92E8_METHOD_2_66B7486A49B37A3A_OFFSET UNITYSDK_OFFSET(0x1074A240)
#define CLASS_2_69EA47680D9A92E8_METHOD_2_9364C869FF360A35_OFFSET UNITYSDK_OFFSET(0x1074A6E0)
#define CLASS_2_69EA47680D9A92E8_METHOD_2_99E148EAF19C2DF6_OFFSET UNITYSDK_OFFSET(0x1074A1B0)
#define CLASS_2_69EA47680D9A92E8_METHOD_2_C2E812C9305B1BB9_OFFSET UNITYSDK_OFFSET(0x10749FF0)
#define CLASS_2_69EA47680D9A92E8_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1074A9D0)
#define CLASS_2_69EA47680D9A92E8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1074A490)
#define CLASS_2_69EA47680D9A92E8__CTOR_OFFSET UNITYSDK_OFFSET(0x10749FE0)

inline static constexpr unsigned int Class_2_69EA47680D9A92E8_TypeDefinitionIndex = 41559;

class Class_2_69EA47680D9A92E8 : public ::MoleMole::RendererFader
{
public:
	::System::String* Field_2_0; // 0x28
	::UnityEngine::Material* Field_2_2; // 0x30
	::System::Boolean Field_2_4; // 0x38
	::System::Boolean Field_2_1; // 0x39
	::System::Int32 Field_2_3; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69EA47680D9A92E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C2E812C9305B1BB9(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_69EA47680D9A92E8_METHOD_2_C2E812C9305B1BB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_99E148EAF19C2DF6(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_69EA47680D9A92E8_METHOD_2_99E148EAF19C2DF6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_66B7486A49B37A3A(::UnityEngine::MaterialPropertyBlock*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + CLASS_2_69EA47680D9A92E8_METHOD_2_66B7486A49B37A3A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69EA47680D9A92E8_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69EA47680D9A92E8_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_9364C869FF360A35(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_69EA47680D9A92E8_METHOD_2_9364C869FF360A35_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69EA47680D9A92E8_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69EA47680D9A92E8_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}
};
