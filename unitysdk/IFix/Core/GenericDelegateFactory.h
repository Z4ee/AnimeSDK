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

#define IFIX_CORE_GENERICDELEGATEFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x17F8AC50)
#define IFIX_CORE_GENERICDELEGATEFACTORY_PREVENTSTRIPPING_OFFSET UNITYSDK_OFFSET(0x17F8AB00)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F8BA30)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__0_OFFSET UNITYSDK_OFFSET(0x17F8BAE0)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__1_OFFSET UNITYSDK_OFFSET(0x17F8BB40)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__2_OFFSET UNITYSDK_OFFSET(0x17F8BB70)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__3_OFFSET UNITYSDK_OFFSET(0x17F8BBD0)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__4_OFFSET UNITYSDK_OFFSET(0x17F8BC00)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__5_OFFSET UNITYSDK_OFFSET(0x17F8BC80)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__6_OFFSET UNITYSDK_OFFSET(0x17F8BC90)

namespace IFix::Core
{
	inline static constexpr unsigned int GenericDelegateFactory_TypeDefinitionIndex = 9758;

	class GenericDelegateFactory : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Boolean>** StaticGet___f__am_cache4()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0xA00);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___f__am_cache1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0xA08);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___f__am_cache6()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0xA10);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___f__am_cache2()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0xA18);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::IFix::Core::GenericDelegate*, ::System::Delegate*>*>** StaticGet_genericDelegateCreatorCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::IFix::Core::GenericDelegate*, ::System::Delegate*>*>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0xA20);
		}
		static ::Il2CppArray<::System::Reflection::MethodInfo*>** StaticGet_genericAction()
		{
			return (::Il2CppArray<::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0xA28);
		}
		static ::Il2CppArray<::System::Reflection::MethodInfo*>** StaticGet_genericFunc()
		{
			return (::Il2CppArray<::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0xA30);
		}
		static ::System::Func_2<::IFix::Core::GenericDelegate*, ::System::Delegate*>** StaticGet___f__am_cache5()
		{
			return (::System::Func_2<::IFix::Core::GenericDelegate*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0xA38);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___f__am_cache0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0xA40);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___f__am_cache3()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory_TypeDefinitionIndex)->GetStaticField(0xA48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CCTOR_OFFSET))();
		}

		static ::System::Void PreventStripping(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY_PREVENTSTRIPPING_OFFSET))(a1);
		}

		static ::System::Delegate* Create(::System::Type* a1, ::IFix::Core::VirtualMachine* a2, ::System::Int32 a3, ::System::Object* a4)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::IFix::Core::VirtualMachine*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean _Create_m__0(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__0_OFFSET))(a1);
		}

		static ::System::Int32 _Create_m__1(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Int32(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__1_OFFSET))(a1);
		}

		static ::System::Boolean _Create_m__2(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__2_OFFSET))(a1);
		}

		static ::System::Int32 _Create_m__3(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Int32(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__3_OFFSET))(a1);
		}

		static ::System::Boolean _Create_m__4(::System::Reflection::ParameterInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__4_OFFSET))(a1);
		}

		static ::System::Delegate* _Create_m__5(::IFix::Core::GenericDelegate* a1)
		{
			return ((::System::Delegate*(*)(::IFix::Core::GenericDelegate*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__5_OFFSET))(a1);
		}

		static ::System::Type* _Create_m__6(::System::Reflection::ParameterInfo* a1)
		{
			return ((::System::Type*(*)(::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_M__6_OFFSET))(a1);
		}
	};
}
