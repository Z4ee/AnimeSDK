#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class GenericDelegate; }
namespace System { class Delegate; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }

#define IFIX_CORE_GENERICDELEGATEFACTORY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A78F960)
#define IFIX_CORE_GENERICDELEGATEFACTORY___C__CREATE_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A78FB90)
#define IFIX_CORE_GENERICDELEGATEFACTORY___C__CREATE_B__4_1_OFFSET UNITYSDK_OFFSET(0x1A78F9B0)
#define IFIX_CORE_GENERICDELEGATEFACTORY___C__CREATE_B__4_2_OFFSET UNITYSDK_OFFSET(0x1A78FA30)
#define IFIX_CORE_GENERICDELEGATEFACTORY___C__CREATE_B__4_3_OFFSET UNITYSDK_OFFSET(0x1A78FA60)
#define IFIX_CORE_GENERICDELEGATEFACTORY___C__CREATE_B__4_4_OFFSET UNITYSDK_OFFSET(0x1A78FAE0)
#define IFIX_CORE_GENERICDELEGATEFACTORY___C__CREATE_B__4_5_OFFSET UNITYSDK_OFFSET(0x1A78FB10)
#define IFIX_CORE_GENERICDELEGATEFACTORY___C__CREATE_B__4_7_OFFSET UNITYSDK_OFFSET(0x1A78FBA0)
#define IFIX_CORE_GENERICDELEGATEFACTORY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A78F9A0)

namespace IFix::Core
{
	inline static constexpr unsigned int GenericDelegateFactory___c_TypeDefinitionIndex = 6798;

	class GenericDelegateFactory___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Boolean>** StaticGet___9__4_5()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory___c_TypeDefinitionIndex)->GetStaticField(0x5C30);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___9__4_4()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory___c_TypeDefinitionIndex)->GetStaticField(0x5C38);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__4_7()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory___c_TypeDefinitionIndex)->GetStaticField(0x5C40);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory___c_TypeDefinitionIndex)->GetStaticField(0x5C48);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___9__4_2()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory___c_TypeDefinitionIndex)->GetStaticField(0x5C50);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__4_3()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory___c_TypeDefinitionIndex)->GetStaticField(0x5C58);
		}
		static ::System::Func_2<::IFix::Core::GenericDelegate*, ::System::Delegate*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::IFix::Core::GenericDelegate*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory___c_TypeDefinitionIndex)->GetStaticField(0x5C60);
		}
		static ::IFix::Core::GenericDelegateFactory___c** StaticGet___9()
		{
			return (::IFix::Core::GenericDelegateFactory___c**)Il2CppClass::FromTypeDefinitionIndex(GenericDelegateFactory___c_TypeDefinitionIndex)->GetStaticField(0x5C68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Create_b__4_1(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY___C__CREATE_B__4_1_OFFSET))(this, m);
		}

		::System::Int32 _Create_b__4_2(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY___C__CREATE_B__4_2_OFFSET))(this, m);
		}

		::System::Boolean _Create_b__4_3(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY___C__CREATE_B__4_3_OFFSET))(this, m);
		}

		::System::Int32 _Create_b__4_4(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY___C__CREATE_B__4_4_OFFSET))(this, m);
		}

		::System::Boolean _Create_b__4_5(::System::Reflection::ParameterInfo* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY___C__CREATE_B__4_5_OFFSET))(this, p);
		}

		::System::Delegate* _Create_b__4_0(::IFix::Core::GenericDelegate* x)
		{
			return ((::System::Delegate*(*)(::PVOID, ::IFix::Core::GenericDelegate*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY___C__CREATE_B__4_0_OFFSET))(this, x);
		}

		::System::Type* _Create_b__4_7(::System::Reflection::ParameterInfo* pinfo)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY___C__CREATE_B__4_7_OFFSET))(this, pinfo);
		}
	};
}
