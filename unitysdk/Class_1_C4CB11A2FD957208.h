#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_0CBD995A0EAC9829.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564_4.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_E71A4E719BBCD0AD_1.h"
#include "unitysdk/Enum_3_3A280D225275881D.h"
#include "unitysdk/Enum_3_413212C3F231D1B9.h"
#include "unitysdk/Enum_3_96F6662CA3713095_3.h"
#include "unitysdk/Struct_2_C2C4FAC151E77BCA.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_208CC9941471731A_477;
class Class_3_10F339609BE79763;
class Class_3_1A345EAE5F749316_10;
class Class_3_E54D0DE062FD8194;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_1_C4CB11A2FD957208_METHOD_1_069D35236ADDB56F_OFFSET UNITYSDK_OFFSET(0x12F68000)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_17957167F758B123_OFFSET UNITYSDK_OFFSET(0x12F65F30)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_40CBBF52249861D3_1_OFFSET UNITYSDK_OFFSET(0x12F645C0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_40CBBF52249861D3_OFFSET UNITYSDK_OFFSET(0x12F63AB0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_464ADDFAC17B9FA4_OFFSET UNITYSDK_OFFSET(0x12F65C00)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_4AF88A6C3AAF4835_OFFSET UNITYSDK_OFFSET(0x12F663E0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_5957498A6751A6F6_OFFSET UNITYSDK_OFFSET(0x12F646A0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_5970203F82A878BF_1_OFFSET UNITYSDK_OFFSET(0x12F63B90)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_5970203F82A878BF_OFFSET UNITYSDK_OFFSET(0x12F63080)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_60BE582942E70B13_OFFSET UNITYSDK_OFFSET(0x12F61E40)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_681541C128727B36_OFFSET UNITYSDK_OFFSET(0x12F62890)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_7AFC0F5D0BABB447_OFFSET UNITYSDK_OFFSET(0x12F65270)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_7DDD777C13DD1288_OFFSET UNITYSDK_OFFSET(0x12F61090)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_7F4A056BD5E4418E_OFFSET UNITYSDK_OFFSET(0x12F60F50)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0x12F64F10)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_8368ED63FC681B9D_OFFSET UNITYSDK_OFFSET(0x12F62BA0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_83A6BD0346DDF639_OFFSET UNITYSDK_OFFSET(0x12F651E0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_8C0BA32FC960EDC9_1_OFFSET UNITYSDK_OFFSET(0x12F67430)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_8C0BA32FC960EDC9_OFFSET UNITYSDK_OFFSET(0x12F66EF0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_A2DE18DA90CF1F41_OFFSET UNITYSDK_OFFSET(0x12F65CB0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_AE236DC7FE10C5C8_OFFSET UNITYSDK_OFFSET(0x12F61A00)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_BAEA97D0B659484E_OFFSET UNITYSDK_OFFSET(0x12F64D70)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_BC9E468D27AA3ACC_OFFSET UNITYSDK_OFFSET(0x12F67760)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_C67098AB660F69DE_OFFSET UNITYSDK_OFFSET(0x12F64B70)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_C94687E95DDFA271_OFFSET UNITYSDK_OFFSET(0x12F67F50)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_CF3CFB8D8484423E_OFFSET UNITYSDK_OFFSET(0x12F64800)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_D24F5FD68E1D9C92_1_OFFSET UNITYSDK_OFFSET(0x12F67020)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_D24F5FD68E1D9C92_OFFSET UNITYSDK_OFFSET(0x12F67210)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_E11D2CD92DB68A17_1_OFFSET UNITYSDK_OFFSET(0x12F67560)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_E11D2CD92DB68A17_OFFSET UNITYSDK_OFFSET(0x12F65A00)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_E97DEACAA0C524BA_OFFSET UNITYSDK_OFFSET(0x12F66330)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_F4A7F2F7A094702C_OFFSET UNITYSDK_OFFSET(0x12F677E0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_FB16F2BBA114A18E_OFFSET UNITYSDK_OFFSET(0x12F666F0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_FD9F51A6B2E30C7D_OFFSET UNITYSDK_OFFSET(0x12F62300)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_FFEAF975DA8697BA_OFFSET UNITYSDK_OFFSET(0x12F60FF0)
#define CLASS_1_C4CB11A2FD957208__CCTOR_OFFSET UNITYSDK_OFFSET(0x12F60C00)

inline static constexpr unsigned int Class_1_C4CB11A2FD957208_TypeDefinitionIndex = 63300;

class Class_1_C4CB11A2FD957208 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3EA00);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3EA08);
	}
	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3EA10);
	}
	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3EA18);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3EA20);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3EA28);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_10()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3EA30);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3EA38);
	}
	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3EA40);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3EA48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_7F4A056BD5E4418E(::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32> a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_7F4A056BD5E4418E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7DDD777C13DD1288(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_E54D0DE062FD8194*>* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_E54D0DE062FD8194*>*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_7DDD777C13DD1288_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Method_1_60BE582942E70B13(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a1, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a2, ::System::Collections::Generic::IList_1<::Enum_3_3A280D225275881D>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::Collections::Generic::IList_1<::Enum_3_3A280D225275881D>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_60BE582942E70B13_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_681541C128727B36(::System::Nullable_1<::System::Int32> a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Nullable_1<::System::Int32>, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_681541C128727B36_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5970203F82A878BF(::System::Collections::Generic::List_1<::Class_3_E54D0DE062FD8194*>* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_3_E54D0DE062FD8194*>*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_5970203F82A878BF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5970203F82A878BF_1(::System::Collections::Generic::List_1<::Class_3_E54D0DE062FD8194*>* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_3_E54D0DE062FD8194*>*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_5970203F82A878BF_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FD9F51A6B2E30C7D(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a1, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*& a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*&))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_FD9F51A6B2E30C7D_OFFSET))(a1, a2);
	}

	static ::Class_1_0D6706375CDAAE8C* Method_1_5957498A6751A6F6(::Class_3_10F339609BE79763* a1, ::Enum_3_413212C3F231D1B9 a2)
	{
		return ((::Class_1_0D6706375CDAAE8C*(*)(::Class_3_10F339609BE79763*, ::Enum_3_413212C3F231D1B9))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_5957498A6751A6F6_OFFSET))(a1, a2);
	}

	static ::Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564_4 Method_1_CF3CFB8D8484423E(::MoleMole::Battle::Entity* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564_4(*)(::MoleMole::Battle::Entity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_CF3CFB8D8484423E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AE236DC7FE10C5C8(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_0CBD995A0EAC9829>* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_0CBD995A0EAC9829>*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_AE236DC7FE10C5C8_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_BAEA97D0B659484E(::Class_1_0D6706375CDAAE8C* a1, ::Class_1_0D6706375CDAAE8C* a2)
	{
		return ((::System::Int32(*)(::Class_1_0D6706375CDAAE8C*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_BAEA97D0B659484E_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Method_1_83A6BD0346DDF639(::Class_1_516A565475879095<::System::UInt32, ::Class_3_1A345EAE5F749316_10*>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::Class_1_516A565475879095<::System::UInt32, ::Class_3_1A345EAE5F749316_10*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_83A6BD0346DDF639_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E11D2CD92DB68A17(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_E11D2CD92DB68A17_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C67098AB660F69DE(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_0CBD995A0EAC9829>* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_0CBD995A0EAC9829>*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_C67098AB660F69DE_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_464ADDFAC17B9FA4(::System::Nullable_1<::System::Int32> a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Nullable_1<::System::Int32>, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_464ADDFAC17B9FA4_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Method_1_7AFC0F5D0BABB447(::Class_1_516A565475879095<::System::UInt32, ::Class_3_1A345EAE5F749316_10*>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::Class_1_516A565475879095<::System::UInt32, ::Class_3_1A345EAE5F749316_10*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_7AFC0F5D0BABB447_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_17957167F758B123(::Struct_2_C2C4FAC151E77BCA& a1, ::System::Boolean& a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::Struct_2_C2C4FAC151E77BCA&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_17957167F758B123_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_A2DE18DA90CF1F41(::System::Nullable_1<::System::Int32> a1, ::System::Nullable_1<::System::Int32> a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a5, ::System::Boolean a6)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_A2DE18DA90CF1F41_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_40CBBF52249861D3(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>>* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>>*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_40CBBF52249861D3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8C0BA32FC960EDC9(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>>* a1, ::Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564_4 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>>*, ::Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564_4, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_8C0BA32FC960EDC9_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_E97DEACAA0C524BA(::System::Int32& a1, ::Enum_3_96F6662CA3713095_3& a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::System::Int32&, ::Enum_3_96F6662CA3713095_3&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_E97DEACAA0C524BA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D24F5FD68E1D9C92(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>>* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>>*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_D24F5FD68E1D9C92_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_40CBBF52249861D3_1(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>>* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>>*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_40CBBF52249861D3_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E11D2CD92DB68A17_1(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_E11D2CD92DB68A17_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_4AF88A6C3AAF4835(::System::Nullable_1<::System::Int32> a1, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Nullable_1<::System::Int32>, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_4AF88A6C3AAF4835_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_BC9E468D27AA3ACC(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_BC9E468D27AA3ACC_OFFSET))(a1);
	}

	static ::System::Void Method_1_F4A7F2F7A094702C(::System::Collections::Generic::List_1<::Class_1_27F786FF2A30778C<::Class_3_10F339609BE79763*>*>* a1, ::System::Func_2<::Class_3_10F339609BE79763*, ::Class_1_0D6706375CDAAE8C*>* a2, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a3, ::Class_1_C4CB11A2FD957208_Struct_2_E71A4E719BBCD0AD_1& a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_27F786FF2A30778C<::Class_3_10F339609BE79763*>*>*, ::System::Func_2<::Class_3_10F339609BE79763*, ::Class_1_0D6706375CDAAE8C*>*, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::Class_1_C4CB11A2FD957208_Struct_2_E71A4E719BBCD0AD_1&))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_F4A7F2F7A094702C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_C94687E95DDFA271(::System::Nullable_1<::System::Int32> a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Nullable_1<::System::Int32>, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_C94687E95DDFA271_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8C0BA32FC960EDC9_1(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>>* a1, ::Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564_4 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>>*, ::Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564_4, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_8C0BA32FC960EDC9_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FFEAF975DA8697BA(::Class_2_208CC9941471731A_477* a1, ::System::Int32 a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_477*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_FFEAF975DA8697BA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D24F5FD68E1D9C92_1(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>>* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>>*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_D24F5FD68E1D9C92_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_816ED7FC0A7FCCD1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_816ED7FC0A7FCCD1_OFFSET))();
	}

	static ::System::String* Method_1_069D35236ADDB56F(::System::String*& a1, ::System::Int32& a2)
	{
		return ((::System::String*(*)(::System::String*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_069D35236ADDB56F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8368ED63FC681B9D(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_8368ED63FC681B9D_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_FB16F2BBA114A18E(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_FB16F2BBA114A18E_OFFSET))(a1);
	}
};
