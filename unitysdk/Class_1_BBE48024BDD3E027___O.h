#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BBE48024BDD3E027_Class_1_2A2756596B5B28CE;
class Class_1_E4CB20B056222958;
namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2_CacheOperation; }
namespace UnityEngine::Events { template <typename T1, typename T2> class UnityAction_2; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

inline static constexpr unsigned int Class_1_BBE48024BDD3E027___O_TypeDefinitionIndex = 47329;

class Class_1_BBE48024BDD3E027___O : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction_2<::Class_1_E4CB20B056222958*, ::System::Boolean>** StaticGet__0___OnGetPooledManagedLight()
	{
		return (::UnityEngine::Events::UnityAction_2<::Class_1_E4CB20B056222958*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BBE48024BDD3E027___O_TypeDefinitionIndex)->GetStaticField(0x4B090);
	}
	static ::UnityEngine::Events::UnityAction_1<::Class_1_E4CB20B056222958*>** StaticGet__1___OnReleasePooledManagedLight()
	{
		return (::UnityEngine::Events::UnityAction_1<::Class_1_E4CB20B056222958*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BBE48024BDD3E027___O_TypeDefinitionIndex)->GetStaticField(0x4B098);
	}
	static ::RPG::Client::LRUCache_2_CacheOperation<::System::Int32, ::Class_1_BBE48024BDD3E027_Class_1_2A2756596B5B28CE*>** StaticGet__2___OnDiscardLoadedBlock()
	{
		return (::RPG::Client::LRUCache_2_CacheOperation<::System::Int32, ::Class_1_BBE48024BDD3E027_Class_1_2A2756596B5B28CE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BBE48024BDD3E027___O_TypeDefinitionIndex)->GetStaticField(0x4B0A0);
	}
};
