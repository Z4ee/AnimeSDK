#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7B311F9CB8760379.h"

class Class_0_16E4307DCC419505_356;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
template <typename T1, typename T2> class Class_1_D1382D7B38F3F4B2;

#define CLASS_2_F1524D4665C20B71_METHOD_2_3DD9CDD21849C79E_OFFSET UNITYSDK_OFFSET(0x16CFDFD0)
#define CLASS_2_F1524D4665C20B71_METHOD_2_9680985B6F797008_OFFSET UNITYSDK_OFFSET(0x16CFDF20)
#define CLASS_2_F1524D4665C20B71_METHOD_2_FFE8BDD7C7BC7A2B_OFFSET UNITYSDK_OFFSET(0x16CFE060)
#define CLASS_2_F1524D4665C20B71__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CFE1E0)
#define CLASS_2_F1524D4665C20B71__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFE1D0)

inline static constexpr unsigned int Class_2_F1524D4665C20B71_TypeDefinitionIndex = 47404;

class Class_2_F1524D4665C20B71 : public ::Class_1_7B311F9CB8760379<::System::Boolean>
{
public:
	static ::Class_1_D1382D7B38F3F4B2<::Class_2_F1524D4665C20B71*, ::System::Boolean>** StaticGet_Field_2_0()
	{
		return (::Class_1_D1382D7B38F3F4B2<::Class_2_F1524D4665C20B71*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F1524D4665C20B71_TypeDefinitionIndex)->GetStaticField(0x6B500);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1524D4665C20B71__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F1524D4665C20B71__CCTOR_OFFSET))();
	}

	static ::Class_2_F1524D4665C20B71* Method_2_9680985B6F797008(::System::Action_3<::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_356*>* a1, ::Class_0_16E4307DCC419505_356* a2)
	{
		return ((::Class_2_F1524D4665C20B71*(*)(::System::Action_3<::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_356*>*, ::Class_0_16E4307DCC419505_356*))((::PBYTE)hIl2Cpp + CLASS_2_F1524D4665C20B71_METHOD_2_9680985B6F797008_OFFSET))(a1, a2);
	}

	::System::Void Method_2_3DD9CDD21849C79E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1524D4665C20B71_METHOD_2_3DD9CDD21849C79E_OFFSET))(this);
	}

	static ::Class_2_F1524D4665C20B71* Method_2_FFE8BDD7C7BC7A2B(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::Class_2_F1524D4665C20B71*(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_F1524D4665C20B71_METHOD_2_FFE8BDD7C7BC7A2B_OFFSET))(a1);
	}
};
