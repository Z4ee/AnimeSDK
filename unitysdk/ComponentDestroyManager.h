#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define COMPONENTDESTROYMANAGER_METHOD_1_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0xE009B80)
#define COMPONENTDESTROYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE00A210)
#define COMPONENTDESTROYMANAGER__INIT_OFFSET UNITYSDK_OFFSET(0xE009ED0)

inline static constexpr unsigned int ComponentDestroyManager_TypeDefinitionIndex = 47701;

class ComponentDestroyManager : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Component*>** StaticGet_FOHNJMBEFAB()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(ComponentDestroyManager_TypeDefinitionIndex)->GetStaticField(0x66E00);
	}
	static ::System::Collections::Generic::HashSet_1<::UnityEngine::Component*>** StaticGet_GEKBMLGPPGA()
	{
		return (::System::Collections::Generic::HashSet_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(ComponentDestroyManager_TypeDefinitionIndex)->GetStaticField(0x66E08);
	}
	static ::System::Boolean* StaticGet_FEIDGDOGBLM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ComponentDestroyManager_TypeDefinitionIndex)->GetStaticField(0x153F0);
	}
	static ::System::Boolean* StaticGet_GBPGOEKLKGO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ComponentDestroyManager_TypeDefinitionIndex)->GetStaticField(0x153F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COMPONENTDESTROYMANAGER__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COMPONENTDESTROYMANAGER_METHOD_1_BD2F8ECECEAD4800_OFFSET))();
	}

	static ::System::Void _Init()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COMPONENTDESTROYMANAGER__INIT_OFFSET))();
	}
};
