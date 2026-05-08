#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/DamageHitType.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"

class Class_1_3310A831794D334B;
class Class_1_65C4858BE1BE185B;
class Class_1_B3D1A9F25DF6353D;
class Class_1_EF896E1D0FDF202A;
class Class_2_7C9A70DC3FC57CDC;
class Class_3_BE7AE8CF6B035880;
namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_E45A002CE39DE740;

#define CLASS_1_D600CCD897E7E742_METHOD_1_01953D7882459DEC_OFFSET UNITYSDK_OFFSET(0x107F1E10)
#define CLASS_1_D600CCD897E7E742_METHOD_1_13D2B9DCC4B7565C_OFFSET UNITYSDK_OFFSET(0x107EF8C0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_183C8058C39C9EC3_OFFSET UNITYSDK_OFFSET(0x107F2870)
#define CLASS_1_D600CCD897E7E742_METHOD_1_1B0FD6E7BF5CEDE2_OFFSET UNITYSDK_OFFSET(0x107F3190)
#define CLASS_1_D600CCD897E7E742_METHOD_1_2025DD35291324CA_1_OFFSET UNITYSDK_OFFSET(0x107F2FF0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_2025DD35291324CA_OFFSET UNITYSDK_OFFSET(0x107EFC70)
#define CLASS_1_D600CCD897E7E742_METHOD_1_24B39354D1FCD13B_OFFSET UNITYSDK_OFFSET(0x107F2420)
#define CLASS_1_D600CCD897E7E742_METHOD_1_288EC329E86E6919_OFFSET UNITYSDK_OFFSET(0x107F2510)
#define CLASS_1_D600CCD897E7E742_METHOD_1_2C34586F670BB0A2_OFFSET UNITYSDK_OFFSET(0x107F3120)
#define CLASS_1_D600CCD897E7E742_METHOD_1_2DC90EE759C8637B_OFFSET UNITYSDK_OFFSET(0x107F0BA0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_35975E23AA6669AE_OFFSET UNITYSDK_OFFSET(0x107F00C0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x107F0960)
#define CLASS_1_D600CCD897E7E742_METHOD_1_460AE5949F4C524E_OFFSET UNITYSDK_OFFSET(0x107F0CD0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_4AC6820E1139BA13_OFFSET UNITYSDK_OFFSET(0x107F3300)
#define CLASS_1_D600CCD897E7E742_METHOD_1_507C5AE0B7FFE1BB_OFFSET UNITYSDK_OFFSET(0x107F21B0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_5A3F0AE8BB52BDBB_OFFSET UNITYSDK_OFFSET(0x107EF070)
#define CLASS_1_D600CCD897E7E742_METHOD_1_5E0897D4702C4CE9_OFFSET UNITYSDK_OFFSET(0x107F3750)
#define CLASS_1_D600CCD897E7E742_METHOD_1_61E5085A6684840B_OFFSET UNITYSDK_OFFSET(0x107F3690)
#define CLASS_1_D600CCD897E7E742_METHOD_1_675EF25D2C0D5995_OFFSET UNITYSDK_OFFSET(0x107F2AF0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_73DE55699C2EC611_OFFSET UNITYSDK_OFFSET(0x107EEE40)
#define CLASS_1_D600CCD897E7E742_METHOD_1_7F7BA654D7330B91_OFFSET UNITYSDK_OFFSET(0x107EE730)
#define CLASS_1_D600CCD897E7E742_METHOD_1_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x107EB8C0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_870AF3CD1D0A67B1_1_OFFSET UNITYSDK_OFFSET(0x107EEAC0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x107EEC30)
#define CLASS_1_D600CCD897E7E742_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x107ED850)
#define CLASS_1_D600CCD897E7E742_METHOD_1_94CFEBA1C53E48B0_OFFSET UNITYSDK_OFFSET(0x107EF760)
#define CLASS_1_D600CCD897E7E742_METHOD_1_9515F66211A37EC7_OFFSET UNITYSDK_OFFSET(0x107F0BF0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x107EE890)
#define CLASS_1_D600CCD897E7E742_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x107F14E0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x107F0E20)
#define CLASS_1_D600CCD897E7E742_METHOD_1_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x107EF2B0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_CDDBE7F12D191EB9_OFFSET UNITYSDK_OFFSET(0x107F22D0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_CEE48EDDEAA61CBE_OFFSET UNITYSDK_OFFSET(0x107EE380)
#define CLASS_1_D600CCD897E7E742_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x107EFF90)
#define CLASS_1_D600CCD897E7E742_METHOD_1_D3C23A282695FA91_OFFSET UNITYSDK_OFFSET(0x107F2CB0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_D3C6AECBC4FFB6CD_OFFSET UNITYSDK_OFFSET(0x107F0320)
#define CLASS_1_D600CCD897E7E742_METHOD_1_D6021EF926004667_OFFSET UNITYSDK_OFFSET(0x107EFDA0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_DB92C7A10479067F_OFFSET UNITYSDK_OFFSET(0x107F2B80)
#define CLASS_1_D600CCD897E7E742_METHOD_1_DD05496C2D1E4224_OFFSET UNITYSDK_OFFSET(0x107EDFF0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E03391BCE5AF2926_OFFSET UNITYSDK_OFFSET(0x107F1F40)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E07323E4DD886B2A_OFFSET UNITYSDK_OFFSET(0x107EED00)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E164ECAE7FCAD4A8_1_OFFSET UNITYSDK_OFFSET(0x107F2150)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E164ECAE7FCAD4A8_OFFSET UNITYSDK_OFFSET(0x107F0360)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E2F05B37853FFCDD_OFFSET UNITYSDK_OFFSET(0x107F03C0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E300F8F9BDE9A987_OFFSET UNITYSDK_OFFSET(0x107F3580)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E53E1BC37B67A643_OFFSET UNITYSDK_OFFSET(0x107F27E0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E6D71834C2A20AB6_OFFSET UNITYSDK_OFFSET(0x107F0D90)
#define CLASS_1_D600CCD897E7E742__CCTOR_OFFSET UNITYSDK_OFFSET(0x107E9A80)

inline static constexpr unsigned int Class_1_D600CCD897E7E742_TypeDefinitionIndex = 43138;

class Class_1_D600CCD897E7E742 : public ::System::Object
{
public:
	static ::Il2CppArray<::MoleMole::Config::DamageElementType>** StaticGet_Field_1_10()
	{
		return (::Il2CppArray<::MoleMole::Config::DamageElementType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x3BEB0);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::BaseProperty>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::BaseProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x3BEB8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Tuple_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction>*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Tuple_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x3BEC0);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x3BEC8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_65C4858BE1BE185B*>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_65C4858BE1BE185B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x3BED0);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_17()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x3BED8);
	}
	static ::Class_1_E45A002CE39DE740<::System::Int32, ::System::Int32>** StaticGet_Field_1_18()
	{
		return (::Class_1_E45A002CE39DE740<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x3BEE0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x3BEE8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet_Field_1_16()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x3BEF0);
	}
	static ::Foundation::DoubleKeyDictionary_3<::System::Int32, ::System::String*, ::System::String*>** StaticGet_Field_1_12()
	{
		return (::Foundation::DoubleKeyDictionary_3<::System::Int32, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x3BEF8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x3BF00);
	}
	static ::Il2CppArray<::MoleMole::Config::DamageHitType>** StaticGet_Field_1_11()
	{
		return (::Il2CppArray<::MoleMole::Config::DamageHitType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x3BF08);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x3BF10);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_65C4858BE1BE185B*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_65C4858BE1BE185B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x3BF18);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_Field_1_15()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x3BF20);
	}
	static ::System::Int32* StaticGet_Field_1_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0xEC40);
	}
	static ::System::Boolean* StaticGet_Field_1_14()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0xEC44);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0xEC45);
	}
	// static const ::System::Single Field_1_9; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_CEE48EDDEAA61CBE(::System::String* a1, ::System::Single a2, ::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_CEE48EDDEAA61CBE_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_5A3F0AE8BB52BDBB(::System::String* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_5A3F0AE8BB52BDBB_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_94CFEBA1C53E48B0(::System::String* a1)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_94CFEBA1C53E48B0_OFFSET))(a1);
	}

	static ::System::Void Method_1_73DE55699C2EC611(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_73DE55699C2EC611_OFFSET))(a1);
	}

	static ::System::String* Method_1_2025DD35291324CA(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_2025DD35291324CA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D6021EF926004667(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_D6021EF926004667_OFFSET))(a1);
	}

	static ::System::Void Method_1_CFC95121222309BD(::Class_1_EF896E1D0FDF202A* a1)
	{
		return ((::System::Void(*)(::Class_1_EF896E1D0FDF202A*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_CFC95121222309BD_OFFSET))(a1);
	}

	static ::Class_3_BE7AE8CF6B035880* Method_1_35975E23AA6669AE(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_3_BE7AE8CF6B035880*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_35975E23AA6669AE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F7BA654D7330B91(::System::String* a1, ::System::Single a2, ::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_7F7BA654D7330B91_OFFSET))(a1, a2, a3);
	}

	static ::System::UInt32 Method_1_13D2B9DCC4B7565C(::System::String* a1)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_13D2B9DCC4B7565C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D3C6AECBC4FFB6CD(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_D3C6AECBC4FFB6CD_OFFSET))(a1);
	}

	static ::MoleMole::Config::BaseProperty Method_1_E164ECAE7FCAD4A8(::MoleMole::Config::DamageElementType a1)
	{
		return ((::MoleMole::Config::BaseProperty(*)(::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E164ECAE7FCAD4A8_OFFSET))(a1);
	}

	static ::System::Void Method_1_E2F05B37853FFCDD(::Class_1_3310A831794D334B* a1)
	{
		return ((::System::Void(*)(::Class_1_3310A831794D334B*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E2F05B37853FFCDD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2DC90EE759C8637B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_2DC90EE759C8637B_OFFSET))(a1);
	}

	static ::System::Void Method_1_9515F66211A37EC7(::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::Class_1_EF896E1D0FDF202A*>*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_9515F66211A37EC7_OFFSET))(a1);
	}

	static ::System::String* Method_1_460AE5949F4C524E(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_460AE5949F4C524E_OFFSET))(a1);
	}

	static ::System::Void Method_1_821BBDC04720A2EB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_821BBDC04720A2EB_OFFSET))();
	}

	static ::System::Void Method_1_DD05496C2D1E4224(::System::String* a1, ::System::Single a2, ::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_DD05496C2D1E4224_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_870AF3CD1D0A67B1_OFFSET))();
	}

	static ::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_BB881F05E41D3A04_OFFSET))();
	}

	static ::System::Void Method_1_01953D7882459DEC(::Class_2_7C9A70DC3FC57CDC* a1)
	{
		return ((::System::Void(*)(::Class_2_7C9A70DC3FC57CDC*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_01953D7882459DEC_OFFSET))(a1);
	}

	static ::System::Void Method_1_E03391BCE5AF2926(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3310A831794D334B*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3310A831794D334B*>*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E03391BCE5AF2926_OFFSET))(a1);
	}

	static ::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))();
	}

	static ::MoleMole::Config::BaseProperty Method_1_E164ECAE7FCAD4A8_1(::MoleMole::Config::DamageElementType a1)
	{
		return ((::MoleMole::Config::BaseProperty(*)(::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E164ECAE7FCAD4A8_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_507C5AE0B7FFE1BB(::MoleMole::Config::ValueCompareType a1, ::System::Double a2, ::System::Double a3, ::System::Double a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ValueCompareType, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_507C5AE0B7FFE1BB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_CDDBE7F12D191EB9(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_CDDBE7F12D191EB9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_24B39354D1FCD13B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_24B39354D1FCD13B_OFFSET))(a1);
	}

	static ::System::Void Method_1_C8D6B29192F288ED()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_C8D6B29192F288ED_OFFSET))();
	}

	static ::System::Void Method_1_288EC329E86E6919(::System::String* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_288EC329E86E6919_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_8D61BE16C9463302_OFFSET))();
	}

	static ::System::Void Method_1_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_BB2928BEC244DEB7_OFFSET))();
	}

	static ::System::Void Method_1_3B10EBB5408EF02E(::Class_1_B3D1A9F25DF6353D* a1)
	{
		return ((::System::Void(*)(::Class_1_B3D1A9F25DF6353D*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_3B10EBB5408EF02E_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_183C8058C39C9EC3(::Class_3_BE7AE8CF6B035880* a1)
	{
		return ((::System::UInt32(*)(::Class_3_BE7AE8CF6B035880*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_183C8058C39C9EC3_OFFSET))(a1);
	}

	static ::System::Void Method_1_675EF25D2C0D5995(::System::String* a1, ::Class_1_3310A831794D334B* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_3310A831794D334B*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_675EF25D2C0D5995_OFFSET))(a1, a2);
	}

	static ::System::Tuple_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction>* Method_1_E6D71834C2A20AB6(::MoleMole::Config::BaseProperty a1, ::MoleMole::Config::PropertyModifyFunction a2)
	{
		return ((::System::Tuple_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction>*(*)(::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E6D71834C2A20AB6_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_DB92C7A10479067F(::MoleMole::Config::BuffGroupName a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::MoleMole::Config::BuffGroupName))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_DB92C7A10479067F_OFFSET))(a1);
	}

	static ::System::String* Method_1_D3C23A282695FA91(::Class_3_BE7AE8CF6B035880* a1)
	{
		return ((::System::String*(*)(::Class_3_BE7AE8CF6B035880*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_D3C23A282695FA91_OFFSET))(a1);
	}

	static ::System::Void Method_1_870AF3CD1D0A67B1_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_870AF3CD1D0A67B1_1_OFFSET))();
	}

	static ::System::String* Method_1_2025DD35291324CA_1(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_2025DD35291324CA_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2C34586F670BB0A2(::MoleMole::Config::ValueCompareType a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ValueCompareType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_2C34586F670BB0A2_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_1B0FD6E7BF5CEDE2(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_1B0FD6E7BF5CEDE2_OFFSET))(a1);
	}

	static ::System::Void Method_1_E53E1BC37B67A643(::MoleMole::Config::BaseProperty& a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::BaseProperty&))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E53E1BC37B67A643_OFFSET))(a1);
	}

	static ::System::String* Method_1_4AC6820E1139BA13(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_4AC6820E1139BA13_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E300F8F9BDE9A987(::MoleMole::Config::ValueCompareType a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ValueCompareType, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E300F8F9BDE9A987_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_E07323E4DD886B2A(::System::String* a1, ::System::Int32 a2, ::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32, ::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E07323E4DD886B2A_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_61E5085A6684840B(::MoleMole::Config::ValueCompareType a1, ::System::String* a2, ::Foundation::AssetPath a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ValueCompareType, ::System::String*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_61E5085A6684840B_OFFSET))(a1, a2, a3);
	}

	static ::System::UInt32 Method_1_5E0897D4702C4CE9(::System::String* a1)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_5E0897D4702C4CE9_OFFSET))(a1);
	}
};
