#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_A81CBDB57D910CB0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12C724F0)
#define CLASS_1_A81CBDB57D910CB0_METHOD_1_5032FF785FDB66E3_OFFSET UNITYSDK_OFFSET(0x12C728C0)
#define CLASS_1_A81CBDB57D910CB0_METHOD_1_6CC5791D84809882_OFFSET UNITYSDK_OFFSET(0x12C733E0)
#define CLASS_1_A81CBDB57D910CB0_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12C72C40)
#define CLASS_1_A81CBDB57D910CB0_METHOD_1_999E6A65C9FA43E6_OFFSET UNITYSDK_OFFSET(0x12C72CE0)
#define CLASS_1_A81CBDB57D910CB0__CTOR_OFFSET UNITYSDK_OFFSET(0x12C728B0)

inline static constexpr unsigned int Class_1_A81CBDB57D910CB0_TypeDefinitionIndex = 68798;

class Class_1_A81CBDB57D910CB0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetRequestHandle>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::System::Action_1<::UnityEngine::GameObject*>*>* Field_1_0; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A81CBDB57D910CB0__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A81CBDB57D910CB0_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_5032FF785FDB66E3(::Foundation::AssetPath a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_A81CBDB57D910CB0_METHOD_1_5032FF785FDB66E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_999E6A65C9FA43E6(::Foundation::AssetPath a1, ::System::Action_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_A81CBDB57D910CB0_METHOD_1_999E6A65C9FA43E6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6CC5791D84809882(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A81CBDB57D910CB0_METHOD_1_6CC5791D84809882_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A81CBDB57D910CB0_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
