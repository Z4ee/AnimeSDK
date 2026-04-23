#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoTVScreenLod; }
namespace RPG::Client { class VideoTexture; }
namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_6DB5D1FB482336FB_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1245B860)
#define CLASS_2_6DB5D1FB482336FB_METHOD_2_1B709936FC68B7D3_OFFSET UNITYSDK_OFFSET(0x1245B900)
#define CLASS_2_6DB5D1FB482336FB_METHOD_2_1C0B95230B6C58A9_OFFSET UNITYSDK_OFFSET(0x1245B4D0)
#define CLASS_2_6DB5D1FB482336FB_METHOD_2_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x1245CB80)
#define CLASS_2_6DB5D1FB482336FB_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x1245CD00)
#define CLASS_2_6DB5D1FB482336FB_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x1245CC10)
#define CLASS_2_6DB5D1FB482336FB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1245B8B0)
#define CLASS_2_6DB5D1FB482336FB_METHOD_2_E4508C4802B995D9_OFFSET UNITYSDK_OFFSET(0x1245CC80)
#define CLASS_2_6DB5D1FB482336FB_METHOD_2_EE322DB79802274F_OFFSET UNITYSDK_OFFSET(0x1245B420)
#define CLASS_2_6DB5D1FB482336FB__CTOR_OFFSET UNITYSDK_OFFSET(0x1245CCF0)

inline static constexpr unsigned int Class_2_6DB5D1FB482336FB_TypeDefinitionIndex = 64881;

class Class_2_6DB5D1FB482336FB : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::MaterialPropertyBlock* Field_2_3; // 0x18
	::System::String* Field_2_0; // 0x20
	::UnityEngine::Renderer* Field_2_2; // 0x28
	::System::String* Field_2_5; // 0x30
	::RPG::Client::VideoTexture* Field_2_1; // 0x38
	::System::Single Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EE322DB79802274F(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_EE322DB79802274F_OFFSET))(this, a1);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_2_1C0B95230B6C58A9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_1C0B95230B6C58A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_2_1B709936FC68B7D3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_1B709936FC68B7D3_OFFSET))(this);
	}

	::RPG::Client::MonoTVScreenLod* Method_2_E4508C4802B995D9()
	{
		return ((::RPG::Client::MonoTVScreenLod*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_E4508C4802B995D9_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
