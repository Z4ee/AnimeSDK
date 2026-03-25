#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_B48FFE703050178A_CLASS_1_C28728B9D4EB40EC_METHOD_1_31B8D7008D6EEB4F_OFFSET UNITYSDK_OFFSET(0x87713E0)
#define CLASS_1_B48FFE703050178A_CLASS_1_C28728B9D4EB40EC_METHOD_1_47680E2642F37A1B_OFFSET UNITYSDK_OFFSET(0x876F630)
#define CLASS_1_B48FFE703050178A_CLASS_1_C28728B9D4EB40EC_METHOD_1_A42B60FD06C958EB_OFFSET UNITYSDK_OFFSET(0x8771530)
#define CLASS_1_B48FFE703050178A_CLASS_1_C28728B9D4EB40EC_METHOD_1_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0x8771380)
#define CLASS_1_B48FFE703050178A_CLASS_1_C28728B9D4EB40EC__ASYNCGET_B__8_0_OFFSET UNITYSDK_OFFSET(0x87717E0)
#define CLASS_1_B48FFE703050178A_CLASS_1_C28728B9D4EB40EC__CTOR_OFFSET UNITYSDK_OFFSET(0x8771340)

inline static constexpr unsigned int Class_1_B48FFE703050178A_Class_1_C28728B9D4EB40EC_TypeDefinitionIndex = 56564;

class Class_1_B48FFE703050178A_Class_1_C28728B9D4EB40EC : public ::System::Object
{
public:
	::RPG::Client::IAssetOperation* Field_1_2; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_3; // 0x20
	::System::String* Field_1_0; // 0x28

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_CLASS_1_C28728B9D4EB40EC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_47680E2642F37A1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_CLASS_1_C28728B9D4EB40EC_METHOD_1_47680E2642F37A1B_OFFSET))(this);
	}

	::System::Void Method_1_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_CLASS_1_C28728B9D4EB40EC_METHOD_1_C433AF37CE9D6E5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_31B8D7008D6EEB4F(::System::Action_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_CLASS_1_C28728B9D4EB40EC_METHOD_1_31B8D7008D6EEB4F_OFFSET))(this, a1);
	}

	::System::Void Method_1_A42B60FD06C958EB(::System::Action_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_CLASS_1_C28728B9D4EB40EC_METHOD_1_A42B60FD06C958EB_OFFSET))(this, a1);
	}

	::System::Boolean _AsyncGet_b__8_0(::RPG::Client::IAssetOperation* assetOp)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_CLASS_1_C28728B9D4EB40EC__ASYNCGET_B__8_0_OFFSET))(this, assetOp);
	}
};
