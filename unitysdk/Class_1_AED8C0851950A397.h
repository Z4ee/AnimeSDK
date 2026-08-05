#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_AED8C0851950A397_METHOD_1_3CCD1894865EC155_OFFSET UNITYSDK_OFFSET(0x15E1A900)
#define CLASS_1_AED8C0851950A397_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x15E19E90)
#define CLASS_1_AED8C0851950A397_METHOD_1_6CDAB69F247B241D_OFFSET UNITYSDK_OFFSET(0x15E1A660)
#define CLASS_1_AED8C0851950A397_METHOD_1_8E9E3E0D1D6E6E24_OFFSET UNITYSDK_OFFSET(0x15E1A290)
#define CLASS_1_AED8C0851950A397_METHOD_1_A100BA020C5319CF_OFFSET UNITYSDK_OFFSET(0x15E1A1C0)
#define CLASS_1_AED8C0851950A397_METHOD_1_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x15E19F40)
#define CLASS_1_AED8C0851950A397_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x15E1A240)
#define CLASS_1_AED8C0851950A397_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x15E1A8F0)
#define CLASS_1_AED8C0851950A397_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15E1A650)
#define CLASS_1_AED8C0851950A397__CTOR_OFFSET UNITYSDK_OFFSET(0x15E19E50)

inline static constexpr unsigned int Class_1_AED8C0851950A397_TypeDefinitionIndex = 81376;

class Class_1_AED8C0851950A397 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AED8C0851950A397_TypeDefinitionIndex)->GetStaticField(0xFED0);
	}
	// static const ::System::String* Field_1_7; // 0x0
	::System::Int32 Field_1_6; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_1_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_A1C7122184516C18_OFFSET))(this);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	::System::Void Method_1_6CDAB69F247B241D(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_6CDAB69F247B241D_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_C74E50CBD41F0264_OFFSET))(a1);
	}

	::UnityEngine::RenderTexture* Method_1_A100BA020C5319CF()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_A100BA020C5319CF_OFFSET))(this);
	}

	::System::Void Method_1_8E9E3E0D1D6E6E24()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_8E9E3E0D1D6E6E24_OFFSET))(this);
	}

	::System::Void Method_1_3CCD1894865EC155(::System::Int32 a1, ::UnityEngine::Texture2D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397_METHOD_1_3CCD1894865EC155_OFFSET))(this, a1, a2);
	}
};
