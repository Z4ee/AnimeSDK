#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_148;
class Class_1_6BA4C247593A5A32_Class_1_28A68C04C83E0C9F;
class Class_1_6BA4C247593A5A32_Class_1_F430351B57E59FB6_2;
class Class_1_ABD54481CEEF9667;
class Class_2_2090B77B5C7838F2;
class Class_2_6B60059019300BAD;
class Class_3_543326C044264182;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6BA4C247593A5A32_GET__CONTEXT_OFFSET UNITYSDK_OFFSET(0x17CBDB00)
#define CLASS_1_6BA4C247593A5A32_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x17CBDB40)
#define CLASS_1_6BA4C247593A5A32_GET__SERVICES_OFFSET UNITYSDK_OFFSET(0x17CBDB20)
#define CLASS_1_6BA4C247593A5A32_GET__STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x17CBDB60)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x17CBD9A0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_1ADC5E4C222F6999_OFFSET UNITYSDK_OFFSET(0x17C8AAC0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_1E3DBAF5CED6F908_OFFSET UNITYSDK_OFFSET(0x17CC2610)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_1E5D842A629207ED_OFFSET UNITYSDK_OFFSET(0x17C8DE20)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_337F198488CF765A_OFFSET UNITYSDK_OFFSET(0x17CC29D0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_3534CF2C51C37C8D_OFFSET UNITYSDK_OFFSET(0x17C8DD90)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_3AAD4B5D0F6F1082_OFFSET UNITYSDK_OFFSET(0x17CBE210)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_400CE0DEBE7D24E5_OFFSET UNITYSDK_OFFSET(0x17CBFEA0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_4B2D0E39C5A3C698_OFFSET UNITYSDK_OFFSET(0x17CC21C0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_53A862C7070CD7DE_OFFSET UNITYSDK_OFFSET(0x17CC1E80)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_65B0B1FC496C128C_OFFSET UNITYSDK_OFFSET(0x17CC01F0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_7662D15DAA271391_OFFSET UNITYSDK_OFFSET(0x17CC61F0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_79DE8614F7DC76F7_OFFSET UNITYSDK_OFFSET(0x17CC63E0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_7C9C322C96F3C4A6_OFFSET UNITYSDK_OFFSET(0x17CC5CF0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_10_OFFSET UNITYSDK_OFFSET(0x17CC28B0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_11_OFFSET UNITYSDK_OFFSET(0x17CC2940)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_12_OFFSET UNITYSDK_OFFSET(0x17CC2CB0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_13_OFFSET UNITYSDK_OFFSET(0x17CC2B20)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_1_OFFSET UNITYSDK_OFFSET(0x17CC6350)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_2_OFFSET UNITYSDK_OFFSET(0x17CC6710)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_3_OFFSET UNITYSDK_OFFSET(0x17CC3BA0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_4_OFFSET UNITYSDK_OFFSET(0x17CC60D0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_5_OFFSET UNITYSDK_OFFSET(0x17CC6160)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_6_OFFSET UNITYSDK_OFFSET(0x17CC3C30)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_7_OFFSET UNITYSDK_OFFSET(0x17CC2820)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_8_OFFSET UNITYSDK_OFFSET(0x17CC67A0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_9_OFFSET UNITYSDK_OFFSET(0x17CC20E0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x17CC6680)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_8A6F278DFEE244C5_OFFSET UNITYSDK_OFFSET(0x17C8D0E0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_9DC685F3E3A2FC2F_OFFSET UNITYSDK_OFFSET(0x17C8AB70)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_A1D0B70E41520B50_OFFSET UNITYSDK_OFFSET(0x17CC3CC0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_B290BC95F0D39D23_OFFSET UNITYSDK_OFFSET(0x17CC5A70)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_B59780DB8F6B2DFA_OFFSET UNITYSDK_OFFSET(0x17CC2D40)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_C5A330FCA711D6B9_OFFSET UNITYSDK_OFFSET(0x17CC5E00)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_C8224CE3A897CD46_OFFSET UNITYSDK_OFFSET(0x17CC4BD0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_CF862038F478E9B5_OFFSET UNITYSDK_OFFSET(0x17CC1270)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_DF2186C51E25C1BB_OFFSET UNITYSDK_OFFSET(0x17C8B550)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_E88C43AB30548154_OFFSET UNITYSDK_OFFSET(0x17CBDE00)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x17CC2170)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0x17CC2BB0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_FF7B2911BBACA4A9_3_OFFSET UNITYSDK_OFFSET(0x17CC2C50)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_FF7B2911BBACA4A9_4_OFFSET UNITYSDK_OFFSET(0x17CC2C00)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x17CBE180)
#define CLASS_1_6BA4C247593A5A32_SET__CONTEXT_OFFSET UNITYSDK_OFFSET(0x17CBDB10)
#define CLASS_1_6BA4C247593A5A32_SET__OWNER_OFFSET UNITYSDK_OFFSET(0x17CBDB50)
#define CLASS_1_6BA4C247593A5A32_SET__SERVICES_OFFSET UNITYSDK_OFFSET(0x17CBDB30)
#define CLASS_1_6BA4C247593A5A32_SET__STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x17CBDB70)
#define CLASS_1_6BA4C247593A5A32__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CBDB80)
#define CLASS_1_6BA4C247593A5A32__CTOR_OFFSET UNITYSDK_OFFSET(0x17C8A380)

inline static constexpr unsigned int Class_1_6BA4C247593A5A32_TypeDefinitionIndex = 73979;

class Class_1_6BA4C247593A5A32 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BA4C247593A5A32_TypeDefinitionIndex)->GetStaticField(0x561B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_6BA4C247593A5A32_Class_1_28A68C04C83E0C9F*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_6BA4C247593A5A32_Class_1_28A68C04C83E0C9F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BA4C247593A5A32_TypeDefinitionIndex)->GetStaticField(0x561B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_6BA4C247593A5A32_Class_1_F430351B57E59FB6_2*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_6BA4C247593A5A32_Class_1_F430351B57E59FB6_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BA4C247593A5A32_TypeDefinitionIndex)->GetStaticField(0x561C0);
	}
	// static const ::System::Int32 Field_1_3 = 0x10; // 0x0
	// static const ::System::Single Field_1_4; // 0x0
	// static const ::System::Single Field_1_5; // 0x0
	::Il2CppArray<::System::Single>* Field_1_6; // 0x10
	::Class_2_6B60059019300BAD* __Owner_k__BackingField; // 0x18
	::Il2CppArray<::System::Single>* Field_1_8; // 0x20
	::Class_1_ABD54481CEEF9667* Field_1_9; // 0x28
	::Class_2_2090B77B5C7838F2* __Context_k__BackingField; // 0x30
	::Class_3_543326C044264182* __Services_k__BackingField; // 0x38
	::Il2CppArray<::System::Single>* Field_1_12; // 0x40
	::Class_0_16E4307DCC419505_148* __StateMachine_k__BackingField; // 0x48
	::System::Single Field_1_14; // 0x50

	::System::Void _ctor(::Class_2_2090B77B5C7838F2* a1, ::Class_3_543326C044264182* a2, ::Class_2_6B60059019300BAD* a3, ::Class_0_16E4307DCC419505_148* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2090B77B5C7838F2*, ::Class_3_543326C044264182*, ::Class_2_6B60059019300BAD*, ::Class_0_16E4307DCC419505_148*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32__CCTOR_OFFSET))();
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::Class_2_6B60059019300BAD* Method_1_DF2186C51E25C1BB()
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_DF2186C51E25C1BB_OFFSET))(this);
	}

	::Class_2_2090B77B5C7838F2* get__Context()
	{
		return ((::Class_2_2090B77B5C7838F2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_GET__CONTEXT_OFFSET))(this);
	}

	::System::Void set__Context(::Class_2_2090B77B5C7838F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2090B77B5C7838F2*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_SET__CONTEXT_OFFSET))(this, a1);
	}

	::Class_3_543326C044264182* get__Services()
	{
		return ((::Class_3_543326C044264182*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_GET__SERVICES_OFFSET))(this);
	}

	::System::Void set__Services(::Class_3_543326C044264182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_SET__SERVICES_OFFSET))(this, a1);
	}

	::Class_2_6B60059019300BAD* get__Owner()
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_GET__OWNER_OFFSET))(this);
	}

	::System::Void set__Owner(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_SET__OWNER_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_148* get__StateMachine()
	{
		return ((::Class_0_16E4307DCC419505_148*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_GET__STATEMACHINE_OFFSET))(this);
	}

	::System::Void set__StateMachine(::Class_0_16E4307DCC419505_148* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_148*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_SET__STATEMACHINE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1ADC5E4C222F6999()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_1ADC5E4C222F6999_OFFSET))(this);
	}

	::System::Boolean Method_1_E88C43AB30548154()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_E88C43AB30548154_OFFSET))(this);
	}

	::System::Boolean Method_1_9DC685F3E3A2FC2F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_9DC685F3E3A2FC2F_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_3AAD4B5D0F6F1082(::Class_2_6B60059019300BAD* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>* a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::UnityEngine::Vector3, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_3AAD4B5D0F6F1082_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_1E3DBAF5CED6F908(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_1E3DBAF5CED6F908_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2Int Method_1_3534CF2C51C37C8D(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_3534CF2C51C37C8D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1E5D842A629207ED(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_1E5D842A629207ED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_53A862C7070CD7DE(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_53A862C7070CD7DE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>* Method_1_65B0B1FC496C128C(::Class_2_6B60059019300BAD* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>*(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::UnityEngine::Vector3, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_65B0B1FC496C128C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_400CE0DEBE7D24E5(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_400CE0DEBE7D24E5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4B2D0E39C5A3C698(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_4B2D0E39C5A3C698_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_337F198488CF765A(::System::Single& a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_337F198488CF765A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CF862038F478E9B5(::Class_2_6B60059019300BAD* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_CF862038F478E9B5_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_B59780DB8F6B2DFA(::Class_2_6B60059019300BAD* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>* a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_B59780DB8F6B2DFA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8A6F278DFEE244C5(::Class_2_6B60059019300BAD* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>* a4, ::Class_2_2090B77B5C7838F2* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>*, ::Class_2_2090B77B5C7838F2*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_8A6F278DFEE244C5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_B290BC95F0D39D23(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_B290BC95F0D39D23_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_7C9C322C96F3C4A6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_7C9C322C96F3C4A6_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Quaternion Method_1_C5A330FCA711D6B9(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_C5A330FCA711D6B9_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_A1D0B70E41520B50(::Class_2_6B60059019300BAD* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>* a2, ::Class_2_2090B77B5C7838F2* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>*, ::Class_2_2090B77B5C7838F2*, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_A1D0B70E41520B50_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_7662D15DAA271391(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_7662D15DAA271391_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_C8224CE3A897CD46(::Class_2_6B60059019300BAD* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>* a2, ::Class_2_2090B77B5C7838F2* a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>*, ::Class_2_2090B77B5C7838F2*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_C8224CE3A897CD46_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_79DE8614F7DC76F7(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_79DE8614F7DC76F7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single Method_1_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_1_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_2_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_3_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_4_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_5_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_6()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_6_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_7_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_8_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_9_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_10()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_10_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_11()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_11_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_12()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_12_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_13()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_13_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_FF7B2911BBACA4A9_2_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_FF7B2911BBACA4A9_3_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_FF7B2911BBACA4A9_4_OFFSET))(this);
	}
};
