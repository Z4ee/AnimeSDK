#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_22B12BCC89606350_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEFE1060)
#define CLASS_2_22B12BCC89606350_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xEFE1400)
#define CLASS_2_22B12BCC89606350_METHOD_2_259321F4AC7520E9_OFFSET UNITYSDK_OFFSET(0xEFE0E80)
#define CLASS_2_22B12BCC89606350_METHOD_2_7B3987EB27C3B9F5_OFFSET UNITYSDK_OFFSET(0xEFE1440)
#define CLASS_2_22B12BCC89606350_METHOD_2_B56A1552A35611D9_OFFSET UNITYSDK_OFFSET(0xEFE0D20)
#define CLASS_2_22B12BCC89606350_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xEFE1280)
#define CLASS_2_22B12BCC89606350_METHOD_2_D97FC01B649AA454_OFFSET UNITYSDK_OFFSET(0xEFE0AA0)
#define CLASS_2_22B12BCC89606350_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEFE1100)
#define CLASS_2_22B12BCC89606350__CTOR_OFFSET UNITYSDK_OFFSET(0xEFE0A90)

inline static constexpr unsigned int Class_2_22B12BCC89606350_TypeDefinitionIndex = 52326;

class Class_2_22B12BCC89606350 : public ::MoleMole::RendererFader
{
public:
	::UnityEngine::Color Field_2_0; // 0x28
	::System::Single Field_2_1; // 0x38

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

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B12BCC89606350_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B12BCC89606350_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_7B3987EB27C3B9F5(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_22B12BCC89606350_METHOD_2_7B3987EB27C3B9F5_OFFSET))(this, a1, a2, a3);
	}
};
