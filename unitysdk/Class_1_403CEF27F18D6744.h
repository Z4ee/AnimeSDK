#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_331;
class Class_0_16E4307DCC419505_332;
class Class_2_F1524D4665C20B71;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_403CEF27F18D6744_METHOD_1_0218BE15F87E704F_OFFSET UNITYSDK_OFFSET(0x12AC0390)
#define CLASS_1_403CEF27F18D6744_METHOD_1_40257C42BB1D025A_OFFSET UNITYSDK_OFFSET(0x12AC0430)
#define CLASS_1_403CEF27F18D6744_METHOD_1_61182900C1049378_1_OFFSET UNITYSDK_OFFSET(0x12ABFCF0)
#define CLASS_1_403CEF27F18D6744_METHOD_1_61182900C1049378_OFFSET UNITYSDK_OFFSET(0x12A9DCF0)
#define CLASS_1_403CEF27F18D6744_METHOD_1_C293669CF5982F92_OFFSET UNITYSDK_OFFSET(0x12AC0060)
#define CLASS_1_403CEF27F18D6744_METHOD_1_D02F298F56B760A1_OFFSET UNITYSDK_OFFSET(0x12ABFED0)
#define CLASS_1_403CEF27F18D6744__CCTOR_OFFSET UNITYSDK_OFFSET(0x12AC0A30)

inline static constexpr unsigned int Class_1_403CEF27F18D6744_TypeDefinitionIndex = 46388;

class Class_1_403CEF27F18D6744 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_331** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_331**)Il2CppClass::FromTypeDefinitionIndex(Class_1_403CEF27F18D6744_TypeDefinitionIndex)->GetStaticField(0x2B5E0);
	}
	static ::Class_0_16E4307DCC419505_331** StaticGet_Field_1_1()
	{
		return (::Class_0_16E4307DCC419505_331**)Il2CppClass::FromTypeDefinitionIndex(Class_1_403CEF27F18D6744_TypeDefinitionIndex)->GetStaticField(0x2B5E8);
	}
	static ::System::Action_3<::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_332*>** StaticGet_Field_1_2()
	{
		return (::System::Action_3<::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_332*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_403CEF27F18D6744_TypeDefinitionIndex)->GetStaticField(0x2B5F0);
	}
	static ::System::Action_3<::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_332*>** StaticGet_Field_1_3()
	{
		return (::System::Action_3<::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_332*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_403CEF27F18D6744_TypeDefinitionIndex)->GetStaticField(0x2B5F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_403CEF27F18D6744__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_331* Method_1_61182900C1049378()
	{
		return ((::Class_0_16E4307DCC419505_331*(*)())((::PBYTE)hIl2Cpp + CLASS_1_403CEF27F18D6744_METHOD_1_61182900C1049378_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_331* Method_1_61182900C1049378_1()
	{
		return ((::Class_0_16E4307DCC419505_331*(*)())((::PBYTE)hIl2Cpp + CLASS_1_403CEF27F18D6744_METHOD_1_61182900C1049378_1_OFFSET))();
	}

	static ::System::Void Method_1_D02F298F56B760A1(::System::Int64 a1, ::System::Boolean a2, ::Class_0_16E4307DCC419505_332* a3)
	{
		return ((::System::Void(*)(::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_332*))((::PBYTE)hIl2Cpp + CLASS_1_403CEF27F18D6744_METHOD_1_D02F298F56B760A1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C293669CF5982F92(::System::Int64 a1, ::System::Boolean a2, ::Class_0_16E4307DCC419505_332* a3)
	{
		return ((::System::Void(*)(::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_332*))((::PBYTE)hIl2Cpp + CLASS_1_403CEF27F18D6744_METHOD_1_C293669CF5982F92_OFFSET))(a1, a2, a3);
	}

	static ::Class_0_16E4307DCC419505_331* Method_1_0218BE15F87E704F(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_331*>* a1, ::System::Action_1<::System::Boolean>* a2, ::System::Int32 a3)
	{
		return ((::Class_0_16E4307DCC419505_331*(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_331*>*, ::System::Action_1<::System::Boolean>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_403CEF27F18D6744_METHOD_1_0218BE15F87E704F_OFFSET))(a1, a2, a3);
	}

	static ::Class_0_16E4307DCC419505_331* Method_1_40257C42BB1D025A(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_331*>* a1, ::Class_2_F1524D4665C20B71* a2, ::System::Int32 a3)
	{
		return ((::Class_0_16E4307DCC419505_331*(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_331*>*, ::Class_2_F1524D4665C20B71*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_403CEF27F18D6744_METHOD_1_40257C42BB1D025A_OFFSET))(a1, a2, a3);
	}
};
