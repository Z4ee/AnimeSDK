#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class GenericDelegate; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Delegate; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MethodInfo; }

#define IFIX_CORE_GENERICDELEGATEFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x1A78EAA0)
#define IFIX_CORE_GENERICDELEGATEFACTORY_PREVENTSTRIPPING_OFFSET UNITYSDK_OFFSET(0x1A78E950)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A78F8A0)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A78F890)

namespace IFix::Core
{
	inline static constexpr unsigned int GenericDelegateFactory_TypeDefinitionIndex = 6797;

	class GenericDelegateFactory : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Reflection::MethodInfo*>** StaticGet_genericAction()
		{
			return (::Il2CppArray<::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0x5C10);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::IFix::Core::GenericDelegate*, ::System::Delegate*>*>** StaticGet_genericDelegateCreatorCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::IFix::Core::GenericDelegate*, ::System::Delegate*>*>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0x5C18);
		}
		static ::Il2CppArray<::System::Reflection::MethodInfo*>** StaticGet_genericFunc()
		{
			return (::Il2CppArray<::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0x5C20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CCTOR_OFFSET))();
		}

		static ::System::Void PreventStripping(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY_PREVENTSTRIPPING_OFFSET))(obj);
		}

		static ::System::Delegate* Create(::System::Type* delegateType, ::IFix::Core::VirtualMachine* virtualMachine, ::System::Int32 methodId, ::System::Object* anonObj)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::IFix::Core::VirtualMachine*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY_CREATE_OFFSET))(delegateType, virtualMachine, methodId, anonObj);
		}
	};
}
