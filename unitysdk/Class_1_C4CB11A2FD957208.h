#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_0CBD995A0EAC9829.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_E71A4E719BBCD0AD_1.h"
#include "unitysdk/Enum_3_3A280D225275881D.h"
#include "unitysdk/Enum_3_4A52FBC3F77FB1B3.h"
#include "unitysdk/Enum_3_96F6662CA3713095_1.h"
#include "unitysdk/Struct_2_C2C4FAC151E77BCA.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_208CC9941471731A_131;
class Class_3_10F339609BE79763;
class Class_3_1A345EAE5F749316_33;
class Class_3_E54D0DE062FD8194;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;
template <typename T> class Class_1_8CC15846339E7FB0;

#define CLASS_1_C4CB11A2FD957208_METHOD_1_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x13CB0DE0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_069D35236ADDB56F_OFFSET UNITYSDK_OFFSET(0x13CB64D0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_18EB0FBB40445558_OFFSET UNITYSDK_OFFSET(0x13CB2120)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_379E1C91C966369C_OFFSET UNITYSDK_OFFSET(0x13CB4790)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_40CBBF52249861D3_OFFSET UNITYSDK_OFFSET(0x13CB1160)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_464ADDFAC17B9FA4_OFFSET UNITYSDK_OFFSET(0x13C992E0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_5957498A6751A6F6_OFFSET UNITYSDK_OFFSET(0x13CB4630)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_5970203F82A878BF_OFFSET UNITYSDK_OFFSET(0x13CB5AB0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_605D5BCB6137D2A9_OFFSET UNITYSDK_OFFSET(0x13CB3160)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_681541C128727B36_OFFSET UNITYSDK_OFFSET(0x13CB3B30)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_7AFC0F5D0BABB447_OFFSET UNITYSDK_OFFSET(0x13CB1770)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_7DDD777C13DD1288_OFFSET UNITYSDK_OFFSET(0x13CB27E0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_8368ED63FC681B9D_OFFSET UNITYSDK_OFFSET(0x13CB53E0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_83A6BD0346DDF639_OFFSET UNITYSDK_OFFSET(0x13CB16E0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_8C0BA32FC960EDC9_OFFSET UNITYSDK_OFFSET(0x13CB15B0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_A11D95E8C9C58C6C_OFFSET UNITYSDK_OFFSET(0x13CB3820)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_A2DE18DA90CF1F41_OFFSET UNITYSDK_OFFSET(0x13CB35A0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_B9C57699C1B45791_OFFSET UNITYSDK_OFFSET(0x13CB10B0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_BAEA97D0B659484E_OFFSET UNITYSDK_OFFSET(0x13CB0C40)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_BC9E468D27AA3ACC_OFFSET UNITYSDK_OFFSET(0x13CB6780)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_C67098AB660F69DE_OFFSET UNITYSDK_OFFSET(0x13CB1F20)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_C94687E95DDFA271_OFFSET UNITYSDK_OFFSET(0x13CB66D0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_CF3CFB8D8484423E_OFFSET UNITYSDK_OFFSET(0x13CB1240)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_D24F5FD68E1D9C92_OFFSET UNITYSDK_OFFSET(0x13CB25D0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_E11D2CD92DB68A17_OFFSET UNITYSDK_OFFSET(0x13CB58B0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_E41318BA1295EAF2_OFFSET UNITYSDK_OFFSET(0x13CB6800)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_E97DEACAA0C524BA_OFFSET UNITYSDK_OFFSET(0x13CB2510)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_F286BB6AB4BD9A20_OFFSET UNITYSDK_OFFSET(0x13CB4F20)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_FB16F2BBA114A18E_OFFSET UNITYSDK_OFFSET(0x13CB3E40)
#define CLASS_1_C4CB11A2FD957208__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CB08F0)

inline static constexpr unsigned int Class_1_C4CB11A2FD957208_TypeDefinitionIndex = 44080;

class Class_1_C4CB11A2FD957208 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x2FE20);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x2FE28);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x2FE30);
	}
	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x2FE38);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x2FE40);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x2FE48);
	}
	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x2FE50);
	}
	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x2FE58);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_9()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x2FE60);
	}
	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x2FE68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_BAEA97D0B659484E(::Class_1_0D6706375CDAAE8C* a1, ::Class_1_0D6706375CDAAE8C* a2)
	{
		return ((::System::Int32(*)(::Class_1_0D6706375CDAAE8C*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_BAEA97D0B659484E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B9C57699C1B45791(::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_131*, ::System::Int32> a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_131*, ::System::Int32>, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_B9C57699C1B45791_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_40CBBF52249861D3(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_131*, ::System::Int32>>* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_131*, ::System::Int32>>*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_40CBBF52249861D3_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Method_1_83A6BD0346DDF639(::Class_1_516A565475879095<::System::UInt32, ::Class_3_1A345EAE5F749316_33*>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::Class_1_516A565475879095<::System::UInt32, ::Class_3_1A345EAE5F749316_33*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_83A6BD0346DDF639_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C67098AB660F69DE(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_0CBD995A0EAC9829>* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_0CBD995A0EAC9829>*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_C67098AB660F69DE_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_18EB0FBB40445558(::Struct_2_C2C4FAC151E77BCA& a1, ::System::Boolean& a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::Struct_2_C2C4FAC151E77BCA&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_18EB0FBB40445558_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D24F5FD68E1D9C92(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_131*, ::System::Int32>>* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_131*, ::System::Int32>>*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_D24F5FD68E1D9C92_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_E97DEACAA0C524BA(::System::Int32& a1, ::Enum_3_96F6662CA3713095_1& a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::System::Int32&, ::Enum_3_96F6662CA3713095_1&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_E97DEACAA0C524BA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_7DDD777C13DD1288(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_E54D0DE062FD8194*>* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_E54D0DE062FD8194*>*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_7DDD777C13DD1288_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_605D5BCB6137D2A9(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_0CBD995A0EAC9829>* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_0CBD995A0EAC9829>*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_605D5BCB6137D2A9_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_A2DE18DA90CF1F41(::System::Nullable_1<::System::Int32> a1, ::System::Nullable_1<::System::Int32> a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a5, ::System::Boolean a6)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_A2DE18DA90CF1F41_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_464ADDFAC17B9FA4(::System::Nullable_1<::System::Int32> a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Nullable_1<::System::Int32>, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_464ADDFAC17B9FA4_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_0D6706375CDAAE8C* Method_1_5957498A6751A6F6(::Class_3_10F339609BE79763* a1, ::Enum_3_4A52FBC3F77FB1B3 a2)
	{
		return ((::Class_1_0D6706375CDAAE8C*(*)(::Class_3_10F339609BE79763*, ::Enum_3_4A52FBC3F77FB1B3))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_5957498A6751A6F6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_379E1C91C966369C(::System::Collections::Generic::List_1<::Class_1_8CC15846339E7FB0<::Class_3_10F339609BE79763*>*>* a1, ::System::Func_2<::Class_3_10F339609BE79763*, ::Class_1_0D6706375CDAAE8C*>* a2, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a3, ::Class_1_C4CB11A2FD957208_Struct_2_E71A4E719BBCD0AD_1& a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_8CC15846339E7FB0<::Class_3_10F339609BE79763*>*>*, ::System::Func_2<::Class_3_10F339609BE79763*, ::Class_1_0D6706375CDAAE8C*>*, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::Class_1_C4CB11A2FD957208_Struct_2_E71A4E719BBCD0AD_1&))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_379E1C91C966369C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_FB16F2BBA114A18E(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_FB16F2BBA114A18E_OFFSET))(a1);
	}

	static ::System::Void Method_1_8C0BA32FC960EDC9(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_131*, ::System::Int32>>* a1, ::Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_131*, ::System::Int32>>*, ::Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_8C0BA32FC960EDC9_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_A11D95E8C9C58C6C(::System::Nullable_1<::System::Int32> a1, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Nullable_1<::System::Int32>, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_A11D95E8C9C58C6C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E11D2CD92DB68A17(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_E11D2CD92DB68A17_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_069D35236ADDB56F(::System::String*& a1, ::System::Int32& a2)
	{
		return ((::System::String*(*)(::System::String*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_069D35236ADDB56F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5970203F82A878BF(::System::Collections::Generic::List_1<::Class_3_E54D0DE062FD8194*>* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_3_E54D0DE062FD8194*>*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_5970203F82A878BF_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_681541C128727B36(::System::Nullable_1<::System::Int32> a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Nullable_1<::System::Int32>, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_681541C128727B36_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_C94687E95DDFA271(::System::Nullable_1<::System::Int32> a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Nullable_1<::System::Int32>, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_C94687E95DDFA271_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564 Method_1_CF3CFB8D8484423E(::MoleMole::Battle::Entity* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564(*)(::MoleMole::Battle::Entity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_CF3CFB8D8484423E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8368ED63FC681B9D(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_8368ED63FC681B9D_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_BC9E468D27AA3ACC(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_BC9E468D27AA3ACC_OFFSET))(a1);
	}

	static ::System::Void Method_1_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_03BFDB1C3240A55A_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Method_1_F286BB6AB4BD9A20(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a1, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a2, ::System::Collections::Generic::IList_1<::Enum_3_3A280D225275881D>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::Collections::Generic::IList_1<::Enum_3_3A280D225275881D>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_F286BB6AB4BD9A20_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Method_1_7AFC0F5D0BABB447(::Class_1_516A565475879095<::System::UInt32, ::Class_3_1A345EAE5F749316_33*>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::Class_1_516A565475879095<::System::UInt32, ::Class_3_1A345EAE5F749316_33*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_7AFC0F5D0BABB447_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E41318BA1295EAF2(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a1, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*& a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*&))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_E41318BA1295EAF2_OFFSET))(a1, a2);
	}
};
