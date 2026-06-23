#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_AED8C0851950A397_METHOD_1_3CCD1894865EC155_OFFSET UNITYSDK_OFFSET(0x131DD230)
#define CLASS_1_AED8C0851950A397_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x131DCE50)
#define CLASS_1_AED8C0851950A397_METHOD_1_762216D6070BF21E_OFFSET UNITYSDK_OFFSET(0x131DCF00)
#define CLASS_1_AED8C0851950A397_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x131DDA90)
#define CLASS_1_AED8C0851950A397_METHOD_1_8E9E3E0D1D6E6E24_OFFSET UNITYSDK_OFFSET(0x131DD6C0)
#define CLASS_1_AED8C0851950A397_METHOD_1_A100BA020C5319CF_OFFSET UNITYSDK_OFFSET(0x131DD190)
#define CLASS_1_AED8C0851950A397_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x131DD670)
#define CLASS_1_AED8C0851950A397_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x131DD220)
#define CLASS_1_AED8C0851950A397_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x131DD210)
#define CLASS_1_AED8C0851950A397__CTOR_OFFSET UNITYSDK_OFFSET(0x131DCE10)

inline static constexpr unsigned int Class_1_AED8C0851950A397_TypeDefinitionIndex = 70148;

class Class_1_AED8C0851950A397 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AED8C0851950A397_TypeDefinitionIndex)->GetStaticField(0xE780);
	}
	// static const ::System::String* Field_1_1; // 0x0
	::System::Int32 Field_1_2; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_1_762216D6070BF21E(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_762216D6070BF21E_OFFSET))(this, a1);
	}

	::UnityEngine::RenderTexture* Method_1_A100BA020C5319CF()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_A100BA020C5319CF_OFFSET))(this);
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	static ::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_C74E50CBD41F0264_OFFSET))(a1);
	}

	::System::Void Method_1_3CCD1894865EC155(::System::Int32 a1, ::UnityEngine::Texture2D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_3CCD1894865EC155_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_1_8E9E3E0D1D6E6E24()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_8E9E3E0D1D6E6E24_OFFSET))(this);
	}

	::System::Void Method_1_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_87318FF00D6BC7EB_OFFSET))(this);
	}
};
