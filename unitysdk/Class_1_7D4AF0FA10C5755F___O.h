#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sofa { class BaseSofaControl; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

inline static constexpr unsigned int Class_1_7D4AF0FA10C5755F___O_TypeDefinitionIndex = 50347;

class Class_1_7D4AF0FA10C5755F___O : public ::System::Object
{
public:
	static ::System::Func_2<::Sofa::BaseSofaControl*, ::Sofa::BaseSofaControl*>** StaticGet__2____GetControlFromControl()
	{
		return (::System::Func_2<::Sofa::BaseSofaControl*, ::Sofa::BaseSofaControl*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D4AF0FA10C5755F___O_TypeDefinitionIndex)->GetStaticField(0x64970);
	}
	static ::System::Func_2<::UnityEngine::GameObject*, ::Sofa::BaseSofaControl*>** StaticGet__0____GetControlFromGameObject()
	{
		return (::System::Func_2<::UnityEngine::GameObject*, ::Sofa::BaseSofaControl*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D4AF0FA10C5755F___O_TypeDefinitionIndex)->GetStaticField(0x64978);
	}
	static ::System::Func_2<::UnityEngine::Transform*, ::Sofa::BaseSofaControl*>** StaticGet__1____GetControlFromTransform()
	{
		return (::System::Func_2<::UnityEngine::Transform*, ::Sofa::BaseSofaControl*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D4AF0FA10C5755F___O_TypeDefinitionIndex)->GetStaticField(0x64980);
	}
};
