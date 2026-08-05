#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_BCB65FF52524B5A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14FF46F0)
#define CLASS_2_BCB65FF52524B5A7_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x14FF4960)
#define CLASS_2_BCB65FF52524B5A7_METHOD_2_259321F4AC7520E9_OFFSET UNITYSDK_OFFSET(0x14FF4510)
#define CLASS_2_BCB65FF52524B5A7_METHOD_2_9CC168A338E44C1A_OFFSET UNITYSDK_OFFSET(0x14FF4A40)
#define CLASS_2_BCB65FF52524B5A7_METHOD_2_B56A1552A35611D9_OFFSET UNITYSDK_OFFSET(0x14FF43B0)
#define CLASS_2_BCB65FF52524B5A7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14FF49A0)
#define CLASS_2_BCB65FF52524B5A7_METHOD_2_D97FC01B649AA454_OFFSET UNITYSDK_OFFSET(0x14FF4130)
#define CLASS_2_BCB65FF52524B5A7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14FF47D0)
#define CLASS_2_BCB65FF52524B5A7__CTOR_OFFSET UNITYSDK_OFFSET(0x14FF4950)

inline static constexpr unsigned int Class_2_BCB65FF52524B5A7_TypeDefinitionIndex = 77872;

class Class_2_BCB65FF52524B5A7 : public ::MoleMole::RendererFader
{
public:
	::UnityEngine::Color Field_2_0; // 0x28
	::System::Single Field_2_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCB65FF52524B5A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D97FC01B649AA454(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BCB65FF52524B5A7_METHOD_2_D97FC01B649AA454_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B56A1552A35611D9(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BCB65FF52524B5A7_METHOD_2_B56A1552A35611D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_259321F4AC7520E9(::UnityEngine::MaterialPropertyBlock*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + CLASS_2_BCB65FF52524B5A7_METHOD_2_259321F4AC7520E9_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCB65FF52524B5A7_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCB65FF52524B5A7_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCB65FF52524B5A7_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCB65FF52524B5A7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_9CC168A338E44C1A(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BCB65FF52524B5A7_METHOD_2_9CC168A338E44C1A_OFFSET))(this, a1, a2, a3);
	}
};
