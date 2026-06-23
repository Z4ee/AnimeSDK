#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/Struct_2_143B7A497B890286.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BuddyCollider;
class Class_1_2CB185F86C732591;
class Class_1_945ACFB1FEBC7A2C;
class Class_1_A59025D696FD25CD;
class Class_2_208CC9941471731A_360;
namespace MoleMole { class UIBuddyDIYComponentWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_36C571655E465BEC_METHOD_1_00D13835C93434FD_OFFSET UNITYSDK_OFFSET(0x13120C10)
#define CLASS_1_36C571655E465BEC_METHOD_1_018D6E18107F76A0_OFFSET UNITYSDK_OFFSET(0x1311D6B0)
#define CLASS_1_36C571655E465BEC_METHOD_1_025E4B1A2211CF52_OFFSET UNITYSDK_OFFSET(0x1311F660)
#define CLASS_1_36C571655E465BEC_METHOD_1_0478B32235735BFE_OFFSET UNITYSDK_OFFSET(0x131212E0)
#define CLASS_1_36C571655E465BEC_METHOD_1_101950726F8C57B5_OFFSET UNITYSDK_OFFSET(0x1311D420)
#define CLASS_1_36C571655E465BEC_METHOD_1_143005669CBBEB09_1_OFFSET UNITYSDK_OFFSET(0x1311F520)
#define CLASS_1_36C571655E465BEC_METHOD_1_143005669CBBEB09_OFFSET UNITYSDK_OFFSET(0x1311D1D0)
#define CLASS_1_36C571655E465BEC_METHOD_1_1E7938971FE45655_OFFSET UNITYSDK_OFFSET(0x1311E3F0)
#define CLASS_1_36C571655E465BEC_METHOD_1_1F01745FCE507115_OFFSET UNITYSDK_OFFSET(0x13121280)
#define CLASS_1_36C571655E465BEC_METHOD_1_24A0772048A301C1_OFFSET UNITYSDK_OFFSET(0x1311D5A0)
#define CLASS_1_36C571655E465BEC_METHOD_1_27195BC33A93240B_OFFSET UNITYSDK_OFFSET(0x1311FA00)
#define CLASS_1_36C571655E465BEC_METHOD_1_3E123EF70AC62D50_OFFSET UNITYSDK_OFFSET(0x131221D0)
#define CLASS_1_36C571655E465BEC_METHOD_1_3FBFF4AA9AE2C521_OFFSET UNITYSDK_OFFSET(0x1311E170)
#define CLASS_1_36C571655E465BEC_METHOD_1_48CDCE8C38EFF7E6_OFFSET UNITYSDK_OFFSET(0x1311DB30)
#define CLASS_1_36C571655E465BEC_METHOD_1_4C2D8F7FDB543B6A_OFFSET UNITYSDK_OFFSET(0x1311E780)
#define CLASS_1_36C571655E465BEC_METHOD_1_4C7C98EBC53B7741_OFFSET UNITYSDK_OFFSET(0x1311FF60)
#define CLASS_1_36C571655E465BEC_METHOD_1_5A9EBA0114E7EA5A_OFFSET UNITYSDK_OFFSET(0x1311DBB0)
#define CLASS_1_36C571655E465BEC_METHOD_1_643FFA1166071130_OFFSET UNITYSDK_OFFSET(0x13121F50)
#define CLASS_1_36C571655E465BEC_METHOD_1_6E793510D10B5A80_OFFSET UNITYSDK_OFFSET(0x1311D8F0)
#define CLASS_1_36C571655E465BEC_METHOD_1_6EE8D6AB8E629D5C_OFFSET UNITYSDK_OFFSET(0x13121440)
#define CLASS_1_36C571655E465BEC_METHOD_1_704CAEDCD95E9E98_OFFSET UNITYSDK_OFFSET(0x1311E970)
#define CLASS_1_36C571655E465BEC_METHOD_1_76D287B304B2A633_OFFSET UNITYSDK_OFFSET(0x1311EA70)
#define CLASS_1_36C571655E465BEC_METHOD_1_776F730E02A69051_OFFSET UNITYSDK_OFFSET(0x13121590)
#define CLASS_1_36C571655E465BEC_METHOD_1_7B93D6C424E3B6EA_OFFSET UNITYSDK_OFFSET(0x1311EF00)
#define CLASS_1_36C571655E465BEC_METHOD_1_8A7B5568426DEBC0_OFFSET UNITYSDK_OFFSET(0x1311D2F0)
#define CLASS_1_36C571655E465BEC_METHOD_1_923A2311C7ACA5ED_OFFSET UNITYSDK_OFFSET(0x1311CFC0)
#define CLASS_1_36C571655E465BEC_METHOD_1_953D2CD0B3E2948C_OFFSET UNITYSDK_OFFSET(0x13120B40)
#define CLASS_1_36C571655E465BEC_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1311CB30)
#define CLASS_1_36C571655E465BEC_METHOD_1_98BCD64ECCE6E99D_OFFSET UNITYSDK_OFFSET(0x131209D0)
#define CLASS_1_36C571655E465BEC_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x13120790)
#define CLASS_1_36C571655E465BEC_METHOD_1_BB4EDE0E0C478397_OFFSET UNITYSDK_OFFSET(0x13121AA0)
#define CLASS_1_36C571655E465BEC_METHOD_1_C14376CF564FA48C_OFFSET UNITYSDK_OFFSET(0x13120710)
#define CLASS_1_36C571655E465BEC_METHOD_1_C293B8F3ADB851B9_OFFSET UNITYSDK_OFFSET(0x1311D100)
#define CLASS_1_36C571655E465BEC_METHOD_1_C4E914B667DFF4B7_OFFSET UNITYSDK_OFFSET(0x13120180)
#define CLASS_1_36C571655E465BEC_METHOD_1_CB84F723B566C3F0_OFFSET UNITYSDK_OFFSET(0x1311CBE0)
#define CLASS_1_36C571655E465BEC_METHOD_1_CC7B2DCBE9DDE156_OFFSET UNITYSDK_OFFSET(0x13120350)
#define CLASS_1_36C571655E465BEC_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x1311F5E0)
#define CLASS_1_36C571655E465BEC_METHOD_1_D99C470BF16DEA6E_OFFSET UNITYSDK_OFFSET(0x1311ECD0)
#define CLASS_1_36C571655E465BEC_METHOD_1_DEABF45BA8221542_OFFSET UNITYSDK_OFFSET(0x1311EB90)
#define CLASS_1_36C571655E465BEC_METHOD_1_E5DD0AE394898247_OFFSET UNITYSDK_OFFSET(0x1311D290)
#define CLASS_1_36C571655E465BEC_METHOD_1_E98857764E6851D6_OFFSET UNITYSDK_OFFSET(0x13120C90)
#define CLASS_1_36C571655E465BEC_METHOD_1_F28136982D1084AB_OFFSET UNITYSDK_OFFSET(0x1311D9E0)
#define CLASS_1_36C571655E465BEC_METHOD_1_F71995332F57AE0F_OFFSET UNITYSDK_OFFSET(0x1311E110)
#define CLASS_1_36C571655E465BEC_METHOD_1_FA5892FBC9D6223A_OFFSET UNITYSDK_OFFSET(0x13122070)
#define CLASS_1_36C571655E465BEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1311CA00)

inline static constexpr unsigned int Class_1_36C571655E465BEC_TypeDefinitionIndex = 83620;

class Class_1_36C571655E465BEC : public ::System::Object
{
public:
	static ::UnityEngine::GameObject** StaticGet_Field_1_3()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3A0F0);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_5()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3A0F8);
	}
	static ::UnityEngine::MeshCollider** StaticGet_Field_1_17()
	{
		return (::UnityEngine::MeshCollider**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3A100);
	}
	static ::UnityEngine::Canvas** StaticGet_Field_1_6()
	{
		return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3A108);
	}
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_28()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3A110);
	}
	static ::UnityEngine::Camera** StaticGet_Field_1_0()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3A118);
	}
	static ::MoleMole::UIBuddyDIYComponentWidgetController** StaticGet_Field_1_10()
	{
		return (::MoleMole::UIBuddyDIYComponentWidgetController**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3A120);
	}
	static ::Il2CppArray<::Class_1_2CB185F86C732591*>** StaticGet_Field_1_14()
	{
		return (::Il2CppArray<::Class_1_2CB185F86C732591*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3A128);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_4()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3A130);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_2()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3A138);
	}
	static ::UnityEngine::Camera** StaticGet_Field_1_1()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3A140);
	}
	static ::System::Single* StaticGet_Field_1_13()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE470);
	}
	static ::System::Int32* StaticGet_Field_1_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE474);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_18()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE478);
	}
	static ::System::Boolean* StaticGet_Field_1_23()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE480);
	}
	static ::System::Boolean* StaticGet_Field_1_22()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE481);
	}
	static ::System::Boolean* StaticGet_Field_1_21()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE482);
	}
	static ::System::Boolean* StaticGet_Field_1_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE483);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_25()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE484);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_19()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE48C);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_8()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE494);
	}
	static ::Struct_2_143B7A497B890286* StaticGet_Field_1_15()
	{
		return (::Struct_2_143B7A497B890286*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE49C);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_9()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE4B4);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_27()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE4BC);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_26()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE4C4);
	}
	static ::Struct_2_143B7A497B890286* StaticGet_Field_1_16()
	{
		return (::Struct_2_143B7A497B890286*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE4CC);
	}
	static ::System::Single* StaticGet_Field_1_11()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE4E4);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_24()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE4E8);
	}
	static ::System::Single* StaticGet_Field_1_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE4F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_9681042564541CD6_OFFSET))();
	}

	static ::System::Boolean Method_1_CB84F723B566C3F0(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_CB84F723B566C3F0_OFFSET))(a1);
	}

	static ::Struct_2_143B7A497B890286 Method_1_923A2311C7ACA5ED(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::Struct_2_143B7A497B890286(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_923A2311C7ACA5ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C293B8F3ADB851B9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_C293B8F3ADB851B9_OFFSET))();
	}

	static ::System::Int64 Method_1_143005669CBBEB09(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int64(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_143005669CBBEB09_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector2 Method_1_8A7B5568426DEBC0(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_8A7B5568426DEBC0_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_101950726F8C57B5(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::UnityEngine::Vector2(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_101950726F8C57B5_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_6E793510D10B5A80(::System::Int32 a1, ::System::Boolean& a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_6E793510D10B5A80_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector2 Method_1_F28136982D1084AB()
	{
		return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_F28136982D1084AB_OFFSET))();
	}

	static ::Class_2_208CC9941471731A_360* Method_1_E5DD0AE394898247(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_360*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_E5DD0AE394898247_OFFSET))(a1);
	}

	static ::System::Void Method_1_48CDCE8C38EFF7E6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_48CDCE8C38EFF7E6_OFFSET))(a1);
	}

	static ::System::Void Method_1_5A9EBA0114E7EA5A(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_5A9EBA0114E7EA5A_OFFSET))(a1);
	}

	static ::Struct_2_143B7A497B890286 Method_1_018D6E18107F76A0(::System::Collections::Generic::List_1<::Class_1_2CB185F86C732591*>* a1)
	{
		return ((::Struct_2_143B7A497B890286(*)(::System::Collections::Generic::List_1<::Class_1_2CB185F86C732591*>*))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_018D6E18107F76A0_OFFSET))(a1);
	}

	static ::System::Void Method_1_F71995332F57AE0F(::MoleMole::UIBuddyDIYComponentWidgetController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIBuddyDIYComponentWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_F71995332F57AE0F_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C*>* Method_1_3FBFF4AA9AE2C521(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C*>*(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_3FBFF4AA9AE2C521_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4C2D8F7FDB543B6A(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_4C2D8F7FDB543B6A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_704CAEDCD95E9E98(::Struct_2_143B7A497B890286 a1, ::Struct_2_143B7A497B890286 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_143B7A497B890286, ::Struct_2_143B7A497B890286))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_704CAEDCD95E9E98_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_76D287B304B2A633(::Struct_2_143B7A497B890286 a1, ::Struct_2_143B7A497B890286 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_143B7A497B890286, ::Struct_2_143B7A497B890286))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_76D287B304B2A633_OFFSET))(a1, a2);
	}

	static ::Share::EPropertyType Method_1_DEABF45BA8221542(::Share::EPropertyType a1)
	{
		return ((::Share::EPropertyType(*)(::Share::EPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_DEABF45BA8221542_OFFSET))(a1);
	}

	static ::System::Void Method_1_D99C470BF16DEA6E(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_D99C470BF16DEA6E_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_143005669CBBEB09_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int64(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_143005669CBBEB09_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::System::Void Method_1_025E4B1A2211CF52()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_025E4B1A2211CF52_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_1_27195BC33A93240B(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_27195BC33A93240B_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_4C7C98EBC53B7741(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_4C7C98EBC53B7741_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_CC7B2DCBE9DDE156(::UnityEngine::Transform* a1, ::Struct_2_143B7A497B890286 a2)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::Transform*, ::Struct_2_143B7A497B890286))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_CC7B2DCBE9DDE156_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C14376CF564FA48C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_C14376CF564FA48C_OFFSET))(a1);
	}

	static ::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_A984848EA3E436DA_OFFSET))();
	}

	static ::Class_1_A59025D696FD25CD* Method_1_98BCD64ECCE6E99D(::System::Int32 a1)
	{
		return ((::Class_1_A59025D696FD25CD*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_98BCD64ECCE6E99D_OFFSET))(a1);
	}

	static ::System::Void Method_1_953D2CD0B3E2948C(::MoleMole::UIBuddyDIYComponentWidgetController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIBuddyDIYComponentWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_953D2CD0B3E2948C_OFFSET))(a1);
	}

	static ::System::String* Method_1_00D13835C93434FD(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_00D13835C93434FD_OFFSET))(a1);
	}

	static ::System::String* Method_1_E98857764E6851D6(::System::Int32 a1, ::System::String* a2, ::System::Byte a3, ::System::Boolean a4)
	{
		return ((::System::String*(*)(::System::Int32, ::System::String*, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_E98857764E6851D6_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_2CB185F86C732591* Method_1_24A0772048A301C1(::UnityEngine::Vector2 a1)
	{
		return ((::Class_1_2CB185F86C732591*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_24A0772048A301C1_OFFSET))(a1);
	}

	static ::MoleMole::UIBuddyDIYComponentWidgetController* Method_1_1F01745FCE507115()
	{
		return ((::MoleMole::UIBuddyDIYComponentWidgetController*(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_1F01745FCE507115_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_1_0478B32235735BFE(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_0478B32235735BFE_OFFSET))(a1);
	}

	static ::BuddyCollider* Method_1_6EE8D6AB8E629D5C(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::BuddyCollider*(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_6EE8D6AB8E629D5C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_776F730E02A69051(::MoleMole::UIBuddyDIYComponentWidgetController* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::UIBuddyDIYComponentWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_776F730E02A69051_OFFSET))(a1);
	}

	static ::System::String* Method_1_BB4EDE0E0C478397()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_BB4EDE0E0C478397_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_1_7B93D6C424E3B6EA(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_7B93D6C424E3B6EA_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_C4E914B667DFF4B7(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_C4E914B667DFF4B7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_643FFA1166071130()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_643FFA1166071130_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_1_FA5892FBC9D6223A(::UnityEngine::Vector2 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::UnityEngine::Vector2 a3)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_FA5892FBC9D6223A_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_945ACFB1FEBC7A2C* Method_1_1E7938971FE45655(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::Class_1_945ACFB1FEBC7A2C*(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_1E7938971FE45655_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_3E123EF70AC62D50(::UnityEngine::Vector2 a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_3E123EF70AC62D50_OFFSET))(a1, a2);
	}
};
