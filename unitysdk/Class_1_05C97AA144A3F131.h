#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialKeywordCondition; }
namespace MoleMole::Config { class ConfigMaterialKeywordConditions; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define CLASS_1_05C97AA144A3F131_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x17FFF0F0)
#define CLASS_1_05C97AA144A3F131_METHOD_1_9D723580D8DC8252_OFFSET UNITYSDK_OFFSET(0x17FFF1E0)
#define CLASS_1_05C97AA144A3F131_METHOD_1_A98AEA17133BE625_OFFSET UNITYSDK_OFFSET(0x17FFEE10)

inline static constexpr unsigned int Class_1_05C97AA144A3F131_TypeDefinitionIndex = 62712;

class Class_1_05C97AA144A3F131 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_05C97AA144A3F131_TypeDefinitionIndex)->GetStaticField(0x48D90);
	}
	static ::MoleMole::Config::ConfigMaterialKeywordConditions** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigMaterialKeywordConditions**)Il2CppClass::FromTypeDefinitionIndex(Class_1_05C97AA144A3F131_TypeDefinitionIndex)->GetStaticField(0x48D98);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMaterialKeywordCondition*>*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMaterialKeywordCondition*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_05C97AA144A3F131_TypeDefinitionIndex)->GetStaticField(0x48DA0);
	}

	static ::System::Void Method_1_A98AEA17133BE625(::UnityEngine::Material* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_05C97AA144A3F131_METHOD_1_A98AEA17133BE625_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_05C97AA144A3F131_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_9D723580D8DC8252(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_05C97AA144A3F131_METHOD_1_9D723580D8DC8252_OFFSET))(a1, a2);
	}
};
