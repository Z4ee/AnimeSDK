#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_299;
class Class_1_65C4858BE1BE185B;
class Class_1_B3D1A9F25DF6353D;
class Class_1_EF896E1D0FDF202A;
class Class_1_F969215F73192D65;
class Class_2_11995F30C0EF4036_1;
class Class_2_2A56CCCB20A346FA;
class Class_3_BE7AE8CF6B035880;
namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_FE03A3C217EBE85C;

#define CLASS_1_D600CCD897E7E742_METHOD_1_01953D7882459DEC_OFFSET UNITYSDK_OFFSET(0xDC820C0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_106289055FB804CE_OFFSET UNITYSDK_OFFSET(0xDC7D490)
#define CLASS_1_D600CCD897E7E742_METHOD_1_13D2B9DCC4B7565C_OFFSET UNITYSDK_OFFSET(0xDC81480)
#define CLASS_1_D600CCD897E7E742_METHOD_1_15B7949B0EDF5C80_OFFSET UNITYSDK_OFFSET(0xDC82D60)
#define CLASS_1_D600CCD897E7E742_METHOD_1_1B0FD6E7BF5CEDE2_OFFSET UNITYSDK_OFFSET(0xDC83600)
#define CLASS_1_D600CCD897E7E742_METHOD_1_2025DD35291324CA_1_OFFSET UNITYSDK_OFFSET(0xDC84370)
#define CLASS_1_D600CCD897E7E742_METHOD_1_2025DD35291324CA_OFFSET UNITYSDK_OFFSET(0xDC821F0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_24B39354D1FCD13B_OFFSET UNITYSDK_OFFSET(0xDC83C70)
#define CLASS_1_D600CCD897E7E742_METHOD_1_288EC329E86E6919_OFFSET UNITYSDK_OFFSET(0xDC839A0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_2C34586F670BB0A2_OFFSET UNITYSDK_OFFSET(0xDC84B40)
#define CLASS_1_D600CCD897E7E742_METHOD_1_2DC90EE759C8637B_OFFSET UNITYSDK_OFFSET(0xDC84BB0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_35975E23AA6669AE_OFFSET UNITYSDK_OFFSET(0xDC84690)
#define CLASS_1_D600CCD897E7E742_METHOD_1_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0xDC7F3F0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_460AE5949F4C524E_OFFSET UNITYSDK_OFFSET(0xDC82000)
#define CLASS_1_D600CCD897E7E742_METHOD_1_4A9D115CA87E2674_OFFSET UNITYSDK_OFFSET(0xDC82DF0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0xDC81DE0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_507C5AE0B7FFE1BB_OFFSET UNITYSDK_OFFSET(0xDC82C60)
#define CLASS_1_D600CCD897E7E742_METHOD_1_5D96F37F7AE7ED6C_OFFSET UNITYSDK_OFFSET(0xDC81AB0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_5E0897D4702C4CE9_OFFSET UNITYSDK_OFFSET(0xDC82530)
#define CLASS_1_D600CCD897E7E742_METHOD_1_61E5085A6684840B_OFFSET UNITYSDK_OFFSET(0xDC83540)
#define CLASS_1_D600CCD897E7E742_METHOD_1_6E75B750D2108F68_OFFSET UNITYSDK_OFFSET(0xDC844A0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_6F264A9013BD05BC_OFFSET UNITYSDK_OFFSET(0xDC84C00)
#define CLASS_1_D600CCD897E7E742_METHOD_1_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0xDC848F0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_708735AB8B91FFB2_OFFSET UNITYSDK_OFFSET(0xDC808B0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_77F000CFDDE37C41_OFFSET UNITYSDK_OFFSET(0xDC83330)
#define CLASS_1_D600CCD897E7E742_METHOD_1_7F7BA654D7330B91_OFFSET UNITYSDK_OFFSET(0xDC801A0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_870AF3CD1D0A67B1_1_OFFSET UNITYSDK_OFFSET(0xDC806A0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0xDC80530)
#define CLASS_1_D600CCD897E7E742_METHOD_1_87676495ABE7B7BE_OFFSET UNITYSDK_OFFSET(0xDC83770)
#define CLASS_1_D600CCD897E7E742_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0xDC840A0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_94CFEBA1C53E48B0_OFFSET UNITYSDK_OFFSET(0xDC81320)
#define CLASS_1_D600CCD897E7E742_METHOD_1_96F57F7EC39E9689_OFFSET UNITYSDK_OFFSET(0xDC81830)
#define CLASS_1_D600CCD897E7E742_METHOD_1_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0xDC80300)
#define CLASS_1_D600CCD897E7E742_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0xDC80B70)
#define CLASS_1_D600CCD897E7E742_METHOD_1_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0xDC82670)
#define CLASS_1_D600CCD897E7E742_METHOD_1_CDDBE7F12D191EB9_OFFSET UNITYSDK_OFFSET(0xDC841C0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_CEE48EDDEAA61CBE_OFFSET UNITYSDK_OFFSET(0xDC7FDF0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xDC83410)
#define CLASS_1_D600CCD897E7E742_METHOD_1_D3C23A282695FA91_OFFSET UNITYSDK_OFFSET(0xDC83D60)
#define CLASS_1_D600CCD897E7E742_METHOD_1_D3C6AECBC4FFB6CD_OFFSET UNITYSDK_OFFSET(0xDC832F0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_DB92C7A10479067F_OFFSET UNITYSDK_OFFSET(0xDC82B30)
#define CLASS_1_D600CCD897E7E742_METHOD_1_DD05496C2D1E4224_OFFSET UNITYSDK_OFFSET(0xDC7FA50)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E03391BCE5AF2926_OFFSET UNITYSDK_OFFSET(0xDC82320)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E07323E4DD886B2A_OFFSET UNITYSDK_OFFSET(0xDC80770)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E164ECAE7FCAD4A8_1_OFFSET UNITYSDK_OFFSET(0xDC84310)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E164ECAE7FCAD4A8_OFFSET UNITYSDK_OFFSET(0xDC81230)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E300F8F9BDE9A987_OFFSET UNITYSDK_OFFSET(0xDC84E70)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E53E1BC37B67A643_OFFSET UNITYSDK_OFFSET(0xDC81290)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E6D71834C2A20AB6_OFFSET UNITYSDK_OFFSET(0xDC80AE0)
#define CLASS_1_D600CCD897E7E742__CCTOR_OFFSET UNITYSDK_OFFSET(0xDC7B230)

inline static constexpr unsigned int Class_1_D600CCD897E7E742_TypeDefinitionIndex = 88565;

class Class_1_D600CCD897E7E742 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x35400);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_65C4858BE1BE185B*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_65C4858BE1BE185B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x35408);
	}
	static ::Foundation::DoubleKeyDictionary_3<::System::Int32, ::System::String*, ::System::String*>** StaticGet_Field_1_9()
	{
		return (::Foundation::DoubleKeyDictionary_3<::System::Int32, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x35410);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_12()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x35418);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x35420);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x35428);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_Field_1_14()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x35430);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Tuple_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction>*>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Tuple_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x35438);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x35440);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_65C4858BE1BE185B*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_65C4858BE1BE185B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x35448);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::BaseProperty>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::BaseProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x35450);
	}
	static ::Class_1_FE03A3C217EBE85C<::System::Int32, ::System::Int32>** StaticGet_Field_1_19()
	{
		return (::Class_1_FE03A3C217EBE85C<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x35458);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet_Field_1_13()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x35460);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0xC610);
	}
	static ::System::Boolean* StaticGet_Field_1_15()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0xC611);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0xC614);
	}
	// static const ::System::Single Field_1_10; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_106289055FB804CE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_106289055FB804CE_OFFSET))();
	}

	static ::System::Void Method_1_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_BB2928BEC244DEB7_OFFSET))();
	}

	static ::System::Void Method_1_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_3BC8B8F2BB08C1C2_OFFSET))();
	}

	static ::System::UInt32 Method_1_94CFEBA1C53E48B0(::System::String* a1)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_94CFEBA1C53E48B0_OFFSET))(a1);
	}

	static ::System::Void Method_1_E53E1BC37B67A643(::MoleMole::Config::BaseProperty& a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::BaseProperty&))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E53E1BC37B67A643_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_96F57F7EC39E9689(::Class_3_BE7AE8CF6B035880* a1)
	{
		return ((::System::UInt32(*)(::Class_3_BE7AE8CF6B035880*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_96F57F7EC39E9689_OFFSET))(a1);
	}

	static ::System::Void Method_1_5D96F37F7AE7ED6C(::Class_2_11995F30C0EF4036_1* a1)
	{
		return ((::System::Void(*)(::Class_2_11995F30C0EF4036_1*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_5D96F37F7AE7ED6C_OFFSET))(a1);
	}

	static ::System::Void Method_1_CEE48EDDEAA61CBE(::System::String* a1, ::System::Single a2, ::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_CEE48EDDEAA61CBE_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_5DA2E7556103D5A3_299* a1)
	{
		return ((::System::Void(*)(::Class_1_5DA2E7556103D5A3_299*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(a1);
	}

	static ::System::Void Method_1_DD05496C2D1E4224(::System::String* a1, ::System::Single a2, ::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_DD05496C2D1E4224_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_01953D7882459DEC(::Class_2_2A56CCCB20A346FA* a1)
	{
		return ((::System::Void(*)(::Class_2_2A56CCCB20A346FA*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_01953D7882459DEC_OFFSET))(a1);
	}

	static ::System::String* Method_1_2025DD35291324CA(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_2025DD35291324CA_OFFSET))(a1);
	}

	static ::System::Void Method_1_E03391BCE5AF2926(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F969215F73192D65*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F969215F73192D65*>*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E03391BCE5AF2926_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_5E0897D4702C4CE9(::System::String* a1)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_5E0897D4702C4CE9_OFFSET))(a1);
	}

	static ::System::Void Method_1_C8D6B29192F288ED()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_C8D6B29192F288ED_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_DB92C7A10479067F(::MoleMole::Config::BuffGroupName a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::MoleMole::Config::BuffGroupName))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_DB92C7A10479067F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_507C5AE0B7FFE1BB(::MoleMole::Config::ValueCompareType a1, ::System::Double a2, ::System::Double a3, ::System::Double a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ValueCompareType, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_507C5AE0B7FFE1BB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_15B7949B0EDF5C80(::System::String* a1, ::Class_1_F969215F73192D65* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_F969215F73192D65*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_15B7949B0EDF5C80_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D3C6AECBC4FFB6CD(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_D3C6AECBC4FFB6CD_OFFSET))(a1);
	}

	static ::System::Void Method_1_77F000CFDDE37C41(::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::Class_1_EF896E1D0FDF202A*>*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_77F000CFDDE37C41_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_61E5085A6684840B(::MoleMole::Config::ValueCompareType a1, ::System::String* a2, ::Foundation::AssetPath a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ValueCompareType, ::System::String*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_61E5085A6684840B_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_1B0FD6E7BF5CEDE2(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_1B0FD6E7BF5CEDE2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_87676495ABE7B7BE(::System::String* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_87676495ABE7B7BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::BaseProperty Method_1_E164ECAE7FCAD4A8(::MoleMole::Config::DamageElementType a1)
	{
		return ((::MoleMole::Config::BaseProperty(*)(::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E164ECAE7FCAD4A8_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_13D2B9DCC4B7565C(::System::String* a1)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_13D2B9DCC4B7565C_OFFSET))(a1);
	}

	static ::System::Void Method_1_288EC329E86E6919(::System::String* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_288EC329E86E6919_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_870AF3CD1D0A67B1_OFFSET))();
	}

	static ::System::String* Method_1_460AE5949F4C524E(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_460AE5949F4C524E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_24B39354D1FCD13B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_24B39354D1FCD13B_OFFSET))(a1);
	}

	static ::System::String* Method_1_D3C23A282695FA91(::Class_3_BE7AE8CF6B035880* a1)
	{
		return ((::System::String*(*)(::Class_3_BE7AE8CF6B035880*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_D3C23A282695FA91_OFFSET))(a1);
	}

	static ::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_921C3C3E09D59CD4_OFFSET))();
	}

	static ::System::Void Method_1_CDDBE7F12D191EB9(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_CDDBE7F12D191EB9_OFFSET))(a1);
	}

	static ::MoleMole::Config::BaseProperty Method_1_E164ECAE7FCAD4A8_1(::MoleMole::Config::DamageElementType a1)
	{
		return ((::MoleMole::Config::BaseProperty(*)(::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E164ECAE7FCAD4A8_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_2025DD35291324CA_1(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_2025DD35291324CA_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_870AF3CD1D0A67B1_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_870AF3CD1D0A67B1_1_OFFSET))();
	}

	static ::System::Boolean Method_1_6E75B750D2108F68(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_6E75B750D2108F68_OFFSET))(a1);
	}

	static ::Class_3_BE7AE8CF6B035880* Method_1_35975E23AA6669AE(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_3_BE7AE8CF6B035880*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_35975E23AA6669AE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_70603E2AE56EBD6B(::Class_1_B3D1A9F25DF6353D* a1)
	{
		return ((::System::Void(*)(::Class_1_B3D1A9F25DF6353D*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_70603E2AE56EBD6B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2C34586F670BB0A2(::MoleMole::Config::ValueCompareType a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ValueCompareType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_2C34586F670BB0A2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))();
	}

	static ::System::Void Method_1_4A9D115CA87E2674(::Class_1_F969215F73192D65* a1)
	{
		return ((::System::Void(*)(::Class_1_F969215F73192D65*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_4A9D115CA87E2674_OFFSET))(a1);
	}

	static ::System::Void Method_1_7F7BA654D7330B91(::System::String* a1, ::System::Single a2, ::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_7F7BA654D7330B91_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_2DC90EE759C8637B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_2DC90EE759C8637B_OFFSET))(a1);
	}

	static ::System::Void Method_1_CFC95121222309BD(::Class_1_EF896E1D0FDF202A* a1)
	{
		return ((::System::Void(*)(::Class_1_EF896E1D0FDF202A*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_CFC95121222309BD_OFFSET))(a1);
	}

	static ::System::Void Method_1_708735AB8B91FFB2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_708735AB8B91FFB2_OFFSET))(a1);
	}

	static ::System::Void Method_1_E07323E4DD886B2A(::System::String* a1, ::System::Int32 a2, ::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32, ::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E07323E4DD886B2A_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::String* Method_1_6F264A9013BD05BC(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_6F264A9013BD05BC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E300F8F9BDE9A987(::MoleMole::Config::ValueCompareType a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ValueCompareType, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E300F8F9BDE9A987_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Tuple_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction>* Method_1_E6D71834C2A20AB6(::MoleMole::Config::BaseProperty a1, ::MoleMole::Config::PropertyModifyFunction a2)
	{
		return ((::System::Tuple_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction>*(*)(::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E6D71834C2A20AB6_OFFSET))(a1, a2);
	}
};
