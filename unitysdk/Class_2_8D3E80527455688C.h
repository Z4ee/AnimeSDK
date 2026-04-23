#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFrameCapture; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_8D3E80527455688C_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x11190A80)
#define CLASS_2_8D3E80527455688C_METHOD_2_568E2DFCDC397B64_OFFSET UNITYSDK_OFFSET(0x11190750)
#define CLASS_2_8D3E80527455688C_METHOD_2_5A50C1842B2C85AF_OFFSET UNITYSDK_OFFSET(0x111907A0)
#define CLASS_2_8D3E80527455688C_METHOD_2_8C64C169CD8A5F0C_OFFSET UNITYSDK_OFFSET(0x11190AE0)
#define CLASS_2_8D3E80527455688C_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x11190C70)
#define CLASS_2_8D3E80527455688C_METHOD_2_9ACE1501A9199453_OFFSET UNITYSDK_OFFSET(0x11190B50)
#define CLASS_2_8D3E80527455688C_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x11190030)
#define CLASS_2_8D3E80527455688C_METHOD_2_BAE1C23C3E6356EC_OFFSET UNITYSDK_OFFSET(0x1118FE50)
#define CLASS_2_8D3E80527455688C_METHOD_2_C3C4CBAFC3F6FEC0_OFFSET UNITYSDK_OFFSET(0x111900F0)
#define CLASS_2_8D3E80527455688C_METHOD_2_FFBC3E5986CAC663_OFFSET UNITYSDK_OFFSET(0x111900A0)
#define CLASS_2_8D3E80527455688C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11190BD0)
#define CLASS_2_8D3E80527455688C__CTOR_OFFSET UNITYSDK_OFFSET(0x11190BC0)

inline static constexpr unsigned int Class_2_8D3E80527455688C_TypeDefinitionIndex = 64595;

class Class_2_8D3E80527455688C : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8D3E80527455688C_TypeDefinitionIndex)->GetStaticField(0x17D20);
	}
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_2_BAE1C23C3E6356EC(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_BAE1C23C3E6356EC_OFFSET))(a1);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_FFBC3E5986CAC663()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_FFBC3E5986CAC663_OFFSET))(this);
	}

	::System::Void Method_2_568E2DFCDC397B64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_568E2DFCDC397B64_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_C3C4CBAFC3F6FEC0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_C3C4CBAFC3F6FEC0_OFFSET))(this, a1);
	}

	::System::Void Method_2_5A50C1842B2C85AF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_5A50C1842B2C85AF_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginFrameCapture* Method_2_8C64C169CD8A5F0C()
	{
		return ((::RPG::Client::MonoEffectPluginFrameCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_8C64C169CD8A5F0C_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_2_9ACE1501A9199453()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_9ACE1501A9199453_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
