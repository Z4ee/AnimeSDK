#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_22B12BCC89606350_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1376BBB0)
#define CLASS_2_22B12BCC89606350_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1376BDD0)
#define CLASS_2_22B12BCC89606350_METHOD_2_259321F4AC7520E9_OFFSET UNITYSDK_OFFSET(0x1376B9D0)
#define CLASS_2_22B12BCC89606350_METHOD_2_7B3987EB27C3B9F5_OFFSET UNITYSDK_OFFSET(0x1376BE10)
#define CLASS_2_22B12BCC89606350_METHOD_2_B56A1552A35611D9_OFFSET UNITYSDK_OFFSET(0x1376B870)
#define CLASS_2_22B12BCC89606350_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1376C000)
#define CLASS_2_22B12BCC89606350_METHOD_2_D97FC01B649AA454_OFFSET UNITYSDK_OFFSET(0x1376B5F0)
#define CLASS_2_22B12BCC89606350_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1376BC50)
#define CLASS_2_22B12BCC89606350__CTOR_OFFSET UNITYSDK_OFFSET(0x1376B5E0)

inline static constexpr unsigned int Class_2_22B12BCC89606350_TypeDefinitionIndex = 75608;

class Class_2_22B12BCC89606350 : public ::MoleMole::RendererFader
{
public:
	::System::Single Field_2_1; // 0x28
	::UnityEngine::Color Field_2_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B12BCC89606350__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D97FC01B649AA454(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_22B12BCC89606350_METHOD_2_D97FC01B649AA454_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B56A1552A35611D9(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_22B12BCC89606350_METHOD_2_B56A1552A35611D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_259321F4AC7520E9(::UnityEngine::MaterialPropertyBlock*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + CLASS_2_22B12BCC89606350_METHOD_2_259321F4AC7520E9_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B12BCC89606350_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B12BCC89606350_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B12BCC89606350_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_7B3987EB27C3B9F5(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_22B12BCC89606350_METHOD_2_7B3987EB27C3B9F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B12BCC89606350_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}
};
