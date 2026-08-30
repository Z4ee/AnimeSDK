#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_B48FFE703050178A_CLASS_1_45C1679A8AACB55C_METHOD_1_4B6D1EFA16D88899_OFFSET UNITYSDK_OFFSET(0x153B29F0)
#define CLASS_1_B48FFE703050178A_CLASS_1_45C1679A8AACB55C_METHOD_1_4F7871DB44A26231_OFFSET UNITYSDK_OFFSET(0x153B0960)
#define CLASS_1_B48FFE703050178A_CLASS_1_45C1679A8AACB55C_METHOD_1_5A2548F8C44121AB_OFFSET UNITYSDK_OFFSET(0x153B2BA0)
#define CLASS_1_B48FFE703050178A_CLASS_1_45C1679A8AACB55C_METHOD_1_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0x153B2990)
#define CLASS_1_B48FFE703050178A_CLASS_1_45C1679A8AACB55C__ASYNCGET_B__8_0_OFFSET UNITYSDK_OFFSET(0x153B2F20)
#define CLASS_1_B48FFE703050178A_CLASS_1_45C1679A8AACB55C__CTOR_OFFSET UNITYSDK_OFFSET(0x153B2950)

inline static constexpr unsigned int Class_1_B48FFE703050178A_Class_1_45C1679A8AACB55C_TypeDefinitionIndex = 69170;

class Class_1_B48FFE703050178A_Class_1_45C1679A8AACB55C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CCECMIKFAME; // 0x10
	::System::String* OINCGJJMAEF; // 0x18
	::UnityEngine::GameObject* PGKENBMKDKA; // 0x20
	::RPG::Client::IAssetOperation* FHNHDPIAHHL; // 0x28

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_CLASS_1_45C1679A8AACB55C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F7871DB44A26231()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_CLASS_1_45C1679A8AACB55C_METHOD_1_4F7871DB44A26231_OFFSET))(this);
	}

	::System::Void Method_1_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_CLASS_1_45C1679A8AACB55C_METHOD_1_C433AF37CE9D6E5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_4B6D1EFA16D88899(::System::Action_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_CLASS_1_45C1679A8AACB55C_METHOD_1_4B6D1EFA16D88899_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A2548F8C44121AB(::System::Action_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_CLASS_1_45C1679A8AACB55C_METHOD_1_5A2548F8C44121AB_OFFSET))(this, a1);
	}

	::System::Boolean _AsyncGet_b__8_0(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_CLASS_1_45C1679A8AACB55C__ASYNCGET_B__8_0_OFFSET))(this, a1);
	}
};
