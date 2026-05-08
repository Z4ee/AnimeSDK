#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_53DC17B82C05A266_CLASS_3_FC765E7A24A2DA02_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12B04B00)
#define CLASS_1_53DC17B82C05A266_CLASS_3_FC765E7A24A2DA02_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12B04BD0)
#define CLASS_1_53DC17B82C05A266_CLASS_3_FC765E7A24A2DA02_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B04430)
#define CLASS_1_53DC17B82C05A266_CLASS_3_FC765E7A24A2DA02__CTOR_OFFSET UNITYSDK_OFFSET(0x12B04420)

inline static constexpr unsigned int Class_1_53DC17B82C05A266_Class_3_FC765E7A24A2DA02_TypeDefinitionIndex = 50233;

class Class_1_53DC17B82C05A266_Class_3_FC765E7A24A2DA02 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_53DC17B82C05A266_CLASS_3_FC765E7A24A2DA02__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::MoleMole::Battle::Entity* a1, ::System::Single a2, ::Class_1_677CEA8C88AC78AB* a3, ::System::Single a4, ::UnityEngine::AnimatorStateInfo& a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + CLASS_1_53DC17B82C05A266_CLASS_3_FC765E7A24A2DA02_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::IAsyncResult* BeginInvoke(::MoleMole::Battle::Entity* a1, ::System::Single a2, ::Class_1_677CEA8C88AC78AB* a3, ::System::Single a4, ::UnityEngine::AnimatorStateInfo& a5, ::System::AsyncCallback* a6, ::System::Object* a7)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_53DC17B82C05A266_CLASS_3_FC765E7A24A2DA02_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void EndInvoke(::UnityEngine::AnimatorStateInfo& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_53DC17B82C05A266_CLASS_3_FC765E7A24A2DA02_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
