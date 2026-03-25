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
namespace System::Reflection { class ParameterInfo; }

#define IFIX_CORE_GENERICDELEGATEFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x15B41B30)
#define IFIX_CORE_GENERICDELEGATEFACTORY_PREVENTSTRIPPING_OFFSET UNITYSDK_OFFSET(0x15B419E0)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B42870)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__0_OFFSET UNITYSDK_OFFSET(0x15B42930)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__1_OFFSET UNITYSDK_OFFSET(0x15B42990)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__2_OFFSET UNITYSDK_OFFSET(0x15B429C0)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__3_OFFSET UNITYSDK_OFFSET(0x15B42A20)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__4_OFFSET UNITYSDK_OFFSET(0x15B42A50)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__5_OFFSET UNITYSDK_OFFSET(0x15B42AD0)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__6_OFFSET UNITYSDK_OFFSET(0x15B42AE0)

namespace IFix::Core
{
	inline static constexpr unsigned int GenericDelegateFactory_TypeDefinitionIndex = 9796;

	class GenericDelegateFactory : public ::System::Object
	{
	public:
		static ::System::Func_2<::IFix::Core::GenericDelegate*, ::System::Delegate*>** StaticGet___f__am_cache5()
		{
			return (::System::Func_2<::IFix::Core::GenericDelegate*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0x660);
		}
		static ::Il2CppArray<::System::Reflection::MethodInfo*>** StaticGet_genericAction()
		{
			return (::Il2CppArray<::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0x668);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Boolean>** StaticGet___f__am_cache4()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0x670);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::IFix::Core::GenericDelegate*, ::System::Delegate*>*>** StaticGet_genericDelegateCreatorCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::IFix::Core::GenericDelegate*, ::System::Delegate*>*>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0x678);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___f__am_cache3()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0x680);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___f__am_cache6()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0x688);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___f__am_cache0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0x690);
		}
		static ::Il2CppArray<::System::Reflection::MethodInfo*>** StaticGet_genericFunc()
		{
			return (::Il2CppArray<::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0x698);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___f__am_cache2()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0x6A0);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___f__am_cache1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0x6A8);
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

		static ::System::Boolean _Create_m__0(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__0_OFFSET))(m);
		}

		static ::System::Int32 _Create_m__1(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Int32(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__1_OFFSET))(m);
		}

		static ::System::Boolean _Create_m__2(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__2_OFFSET))(m);
		}

		static ::System::Int32 _Create_m__3(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Int32(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__3_OFFSET))(m);
		}

		static ::System::Boolean _Create_m__4(::System::Reflection::ParameterInfo* p)
		{
			return ((::System::Boolean(*)(::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__4_OFFSET))(p);
		}

		static ::System::Delegate* _Create_m__5(::IFix::Core::GenericDelegate* x)
		{
			return ((::System::Delegate*(*)(::IFix::Core::GenericDelegate*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__5_OFFSET))(x);
		}

		static ::System::Type* _Create_m__6(::System::Reflection::ParameterInfo* pinfo)
		{
			return ((::System::Type*(*)(::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__6_OFFSET))(pinfo);
		}
	};
}
