#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoTVScreenLod; }
namespace RPG::Client { class VideoTexture; }
namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_6DB5D1FB482336FB_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x159323F0)
#define CLASS_2_6DB5D1FB482336FB_METHOD_2_07D93EB93AF6C76B_OFFSET UNITYSDK_OFFSET(0x15931F90)
#define CLASS_2_6DB5D1FB482336FB_METHOD_2_28F4C2ABDCC41027_OFFSET UNITYSDK_OFFSET(0x15932040)
#define CLASS_2_6DB5D1FB482336FB_METHOD_2_3550A1258EFCC790_OFFSET UNITYSDK_OFFSET(0x15933770)
#define CLASS_2_6DB5D1FB482336FB_METHOD_2_71227BBBB7D3D8E0_OFFSET UNITYSDK_OFFSET(0x15932490)
#define CLASS_2_6DB5D1FB482336FB_METHOD_2_AA7E3074254D484A_1_OFFSET UNITYSDK_OFFSET(0x15933700)
#define CLASS_2_6DB5D1FB482336FB_METHOD_2_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x15933670)
#define CLASS_2_6DB5D1FB482336FB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15932440)
#define CLASS_2_6DB5D1FB482336FB__CTOR_OFFSET UNITYSDK_OFFSET(0x159337E0)

inline static constexpr unsigned int Class_2_6DB5D1FB482336FB_TypeDefinitionIndex = 70343;

class Class_2_6DB5D1FB482336FB : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::Client::VideoTexture* EPINKOCFFKN; // 0x18
	::UnityEngine::MaterialPropertyBlock* ONMIFIOAENE; // 0x20
	::System::String* IDKHILEIKBD; // 0x28
	::UnityEngine::Renderer* DJFIHMBKFLC; // 0x30
	::System::String* MIFHCMJGIHO; // 0x38
	::System::Single BJMAMHMCOEL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_07D93EB93AF6C76B(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_07D93EB93AF6C76B_OFFSET))(this, a1);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_AA7E3074254D484A_OFFSET))(this);
	}

	::System::Void Method_2_28F4C2ABDCC41027(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_28F4C2ABDCC41027_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA7E3074254D484A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_AA7E3074254D484A_1_OFFSET))(this);
	}

	::System::Void Method_2_71227BBBB7D3D8E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_71227BBBB7D3D8E0_OFFSET))(this);
	}

	::RPG::Client::MonoTVScreenLod* Method_2_3550A1258EFCC790()
	{
		return ((::RPG::Client::MonoTVScreenLod*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DB5D1FB482336FB_METHOD_2_3550A1258EFCC790_OFFSET))(this);
	}
};
