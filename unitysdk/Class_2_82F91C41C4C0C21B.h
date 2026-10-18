#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginMapImmediatelyFrameCapture; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_82F91C41C4C0C21B_METHOD_2_01237CA99C79931A_OFFSET UNITYSDK_OFFSET(0xB37F450)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_1C98D9D0AA36ED05_OFFSET UNITYSDK_OFFSET(0xB37FD40)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_1F600059BFC04D4A_OFFSET UNITYSDK_OFFSET(0xB37FDB0)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_6B6808AFDA732AF3_OFFSET UNITYSDK_OFFSET(0xB37F4A0)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xB37F3E0)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_BAE1C23C3E6356EC_OFFSET UNITYSDK_OFFSET(0xB37F210)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xB37FCD0)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_CC32BB23BD684E52_OFFSET UNITYSDK_OFFSET(0xB37F9C0)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_E75A9B7403DC8631_OFFSET UNITYSDK_OFFSET(0xB37FA10)
#define CLASS_2_82F91C41C4C0C21B__CCTOR_OFFSET UNITYSDK_OFFSET(0xB37FE40)
#define CLASS_2_82F91C41C4C0C21B__CTOR_OFFSET UNITYSDK_OFFSET(0xB37FE30)

inline static constexpr unsigned int Class_2_82F91C41C4C0C21B_TypeDefinitionIndex = 70077;

class Class_2_82F91C41C4C0C21B : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_LFDEADJEJPD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_82F91C41C4C0C21B_TypeDefinitionIndex)->GetStaticField(0x3F450);
	}
	::System::Boolean DEBHLAMIOAE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_2_BAE1C23C3E6356EC(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_BAE1C23C3E6356EC_OFFSET))(a1);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_01237CA99C79931A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_01237CA99C79931A_OFFSET))(this);
	}

	::System::Void Method_2_CC32BB23BD684E52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_CC32BB23BD684E52_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B6808AFDA732AF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_6B6808AFDA732AF3_OFFSET))(this);
	}

	::System::Void Method_2_E75A9B7403DC8631()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_E75A9B7403DC8631_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginMapImmediatelyFrameCapture* Method_2_1C98D9D0AA36ED05()
	{
		return ((::RPG::Client::MonoEffectPluginMapImmediatelyFrameCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_1C98D9D0AA36ED05_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_2_1F600059BFC04D4A()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_1F600059BFC04D4A_OFFSET))(this);
	}
};
