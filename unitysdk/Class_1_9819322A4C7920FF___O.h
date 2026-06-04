#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E4CB20B056222958;
namespace UnityEngine::Events { template <typename T1, typename T2> class UnityAction_2; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

inline static constexpr unsigned int Class_1_9819322A4C7920FF___O_TypeDefinitionIndex = 46269;

class Class_1_9819322A4C7920FF___O : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction_2<::Class_1_E4CB20B056222958*, ::System::Boolean>** StaticGet__0___OnGetPooledManagedLight()
	{
		return (::UnityEngine::Events::UnityAction_2<::Class_1_E4CB20B056222958*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9819322A4C7920FF___O_TypeDefinitionIndex)->GetStaticField(0x66800);
	}
	static ::UnityEngine::Events::UnityAction_1<::Class_1_E4CB20B056222958*>** StaticGet__1___OnReleasePooledManagedLight()
	{
		return (::UnityEngine::Events::UnityAction_1<::Class_1_E4CB20B056222958*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9819322A4C7920FF___O_TypeDefinitionIndex)->GetStaticField(0x66808);
	}
};
