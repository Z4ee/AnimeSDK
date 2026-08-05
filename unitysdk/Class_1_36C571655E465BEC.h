#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/Struct_2_143B7A497B890286.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BuddyCollider;
class Class_1_2CB185F86C732591;
class Class_1_945ACFB1FEBC7A2C_1;
class Class_1_A59025D696FD25CD;
class Class_2_208CC9941471731A_1162;
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

#define CLASS_1_36C571655E465BEC_METHOD_1_018D6E18107F76A0_OFFSET UNITYSDK_OFFSET(0x12CC1640)
#define CLASS_1_36C571655E465BEC_METHOD_1_025E4B1A2211CF52_OFFSET UNITYSDK_OFFSET(0x12CC1000)
#define CLASS_1_36C571655E465BEC_METHOD_1_0478B32235735BFE_OFFSET UNITYSDK_OFFSET(0x12CC4070)
#define CLASS_1_36C571655E465BEC_METHOD_1_101950726F8C57B5_OFFSET UNITYSDK_OFFSET(0x12CC13A0)
#define CLASS_1_36C571655E465BEC_METHOD_1_143005669CBBEB09_1_OFFSET UNITYSDK_OFFSET(0x12CC25D0)
#define CLASS_1_36C571655E465BEC_METHOD_1_143005669CBBEB09_OFFSET UNITYSDK_OFFSET(0x12CC2690)
#define CLASS_1_36C571655E465BEC_METHOD_1_1E7938971FE45655_OFFSET UNITYSDK_OFFSET(0x12CC39B0)
#define CLASS_1_36C571655E465BEC_METHOD_1_1F01745FCE507115_OFFSET UNITYSDK_OFFSET(0x12CC2750)
#define CLASS_1_36C571655E465BEC_METHOD_1_24A0772048A301C1_OFFSET UNITYSDK_OFFSET(0x12CC1520)
#define CLASS_1_36C571655E465BEC_METHOD_1_29664ED19BC153C1_OFFSET UNITYSDK_OFFSET(0x12CC67E0)
#define CLASS_1_36C571655E465BEC_METHOD_1_2F4BAC499A06B7EE_OFFSET UNITYSDK_OFFSET(0x12CC41D0)
#define CLASS_1_36C571655E465BEC_METHOD_1_35089460DAD2BB79_OFFSET UNITYSDK_OFFSET(0x12CC4F70)
#define CLASS_1_36C571655E465BEC_METHOD_1_3E123EF70AC62D50_OFFSET UNITYSDK_OFFSET(0x12CC2E20)
#define CLASS_1_36C571655E465BEC_METHOD_1_3FBFF4AA9AE2C521_OFFSET UNITYSDK_OFFSET(0x12CC6570)
#define CLASS_1_36C571655E465BEC_METHOD_1_48CDCE8C38EFF7E6_OFFSET UNITYSDK_OFFSET(0x12CC3F40)
#define CLASS_1_36C571655E465BEC_METHOD_1_4C2D8F7FDB543B6A_OFFSET UNITYSDK_OFFSET(0x12CC1CB0)
#define CLASS_1_36C571655E465BEC_METHOD_1_4C7C98EBC53B7741_OFFSET UNITYSDK_OFFSET(0x12CC4D50)
#define CLASS_1_36C571655E465BEC_METHOD_1_643FFA1166071130_OFFSET UNITYSDK_OFFSET(0x12CC1880)
#define CLASS_1_36C571655E465BEC_METHOD_1_6747250BC2D13457_OFFSET UNITYSDK_OFFSET(0x12CC5610)
#define CLASS_1_36C571655E465BEC_METHOD_1_6E793510D10B5A80_OFFSET UNITYSDK_OFFSET(0x12CC68E0)
#define CLASS_1_36C571655E465BEC_METHOD_1_6EE8D6AB8E629D5C_OFFSET UNITYSDK_OFFSET(0x12CC1EA0)
#define CLASS_1_36C571655E465BEC_METHOD_1_704CAEDCD95E9E98_OFFSET UNITYSDK_OFFSET(0x12CC6470)
#define CLASS_1_36C571655E465BEC_METHOD_1_76D287B304B2A633_OFFSET UNITYSDK_OFFSET(0x12CC6350)
#define CLASS_1_36C571655E465BEC_METHOD_1_776F730E02A69051_OFFSET UNITYSDK_OFFSET(0x12CC5CE0)
#define CLASS_1_36C571655E465BEC_METHOD_1_7B93D6C424E3B6EA_OFFSET UNITYSDK_OFFSET(0x12CC4730)
#define CLASS_1_36C571655E465BEC_METHOD_1_8A7B5568426DEBC0_OFFSET UNITYSDK_OFFSET(0x12CC3E10)
#define CLASS_1_36C571655E465BEC_METHOD_1_953D2CD0B3E2948C_OFFSET UNITYSDK_OFFSET(0x12CC5850)
#define CLASS_1_36C571655E465BEC_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12CC3FC0)
#define CLASS_1_36C571655E465BEC_METHOD_1_98BCD64ECCE6E99D_OFFSET UNITYSDK_OFFSET(0x12CC3840)
#define CLASS_1_36C571655E465BEC_METHOD_1_B0CB59D54933F418_OFFSET UNITYSDK_OFFSET(0x12CC19A0)
#define CLASS_1_36C571655E465BEC_METHOD_1_BB4EDE0E0C478397_OFFSET UNITYSDK_OFFSET(0x12CC3390)
#define CLASS_1_36C571655E465BEC_METHOD_1_C14376CF564FA48C_OFFSET UNITYSDK_OFFSET(0x12CC6860)
#define CLASS_1_36C571655E465BEC_METHOD_1_C293B8F3ADB851B9_OFFSET UNITYSDK_OFFSET(0x12CC3D40)
#define CLASS_1_36C571655E465BEC_METHOD_1_C4E914B667DFF4B7_OFFSET UNITYSDK_OFFSET(0x12CC2870)
#define CLASS_1_36C571655E465BEC_METHOD_1_CB84F723B566C3F0_OFFSET UNITYSDK_OFFSET(0x12CC2A40)
#define CLASS_1_36C571655E465BEC_METHOD_1_CC7B2DCBE9DDE156_OFFSET UNITYSDK_OFFSET(0x12CC5920)
#define CLASS_1_36C571655E465BEC_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x12CC1C30)
#define CLASS_1_36C571655E465BEC_METHOD_1_CF207CF7AA579828_OFFSET UNITYSDK_OFFSET(0x12CC27B0)
#define CLASS_1_36C571655E465BEC_METHOD_1_D99C470BF16DEA6E_OFFSET UNITYSDK_OFFSET(0x12CC69D0)
#define CLASS_1_36C571655E465BEC_METHOD_1_DBB139BB40D53A1D_OFFSET UNITYSDK_OFFSET(0x12CC1AD0)
#define CLASS_1_36C571655E465BEC_METHOD_1_DEABF45BA8221542_OFFSET UNITYSDK_OFFSET(0x12CC54D0)
#define CLASS_1_36C571655E465BEC_METHOD_1_E98857764E6851D6_OFFSET UNITYSDK_OFFSET(0x12CC1FF0)
#define CLASS_1_36C571655E465BEC_METHOD_1_F28136982D1084AB_OFFSET UNITYSDK_OFFSET(0x12CC6200)
#define CLASS_1_36C571655E465BEC_METHOD_1_F71995332F57AE0F_OFFSET UNITYSDK_OFFSET(0x12CC2810)
#define CLASS_1_36C571655E465BEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x12CC0ED0)

inline static constexpr unsigned int Class_1_36C571655E465BEC_TypeDefinitionIndex = 49352;

class Class_1_36C571655E465BEC : public ::System::Object
{
public:
	static ::MoleMole::UIBuddyDIYComponentWidgetController** StaticGet_Field_1_14()
	{
		return (::MoleMole::UIBuddyDIYComponentWidgetController**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3CE70);
	}
	static ::UnityEngine::MeshCollider** StaticGet_Field_1_23()
	{
		return (::UnityEngine::MeshCollider**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3CE78);
	}
	static ::Il2CppArray<::Class_1_2CB185F86C732591*>** StaticGet_Field_1_18()
	{
		return (::Il2CppArray<::Class_1_2CB185F86C732591*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3CE80);
	}
	static ::UnityEngine::Canvas** StaticGet_Field_1_10()
	{
		return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3CE88);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_4()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3CE90);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_5()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3CE98);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_6()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3CEA0);
	}
	static ::UnityEngine::Camera** StaticGet_Field_1_7()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3CEA8);
	}
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_28()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3CEB0);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_11()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3CEB8);
	}
	static ::UnityEngine::Camera** StaticGet_Field_1_0()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0x3CEC0);
	}
	static ::System::Single* StaticGet_Field_1_19()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE410);
	}
	static ::System::Single* StaticGet_Field_1_13()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE414);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_22()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE418);
	}
	static ::System::Boolean* StaticGet_Field_1_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE420);
	}
	static ::System::Boolean* StaticGet_Field_1_26()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE421);
	}
	static ::System::Boolean* StaticGet_Field_1_25()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE422);
	}
	static ::System::Boolean* StaticGet_Field_1_27()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE423);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_31()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE424);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_29()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE42C);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_8()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE434);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_24()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE43C);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_21()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE444);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_30()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE44C);
	}
	static ::Struct_2_143B7A497B890286* StaticGet_Field_1_16()
	{
		return (::Struct_2_143B7A497B890286*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE454);
	}
	static ::Struct_2_143B7A497B890286* StaticGet_Field_1_17()
	{
		return (::Struct_2_143B7A497B890286*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE46C);
	}
	static ::System::Int32* StaticGet_Field_1_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE484);
	}
	static ::System::Single* StaticGet_Field_1_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE488);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_15()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36C571655E465BEC_TypeDefinitionIndex)->GetStaticField(0xE48C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_025E4B1A2211CF52()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_025E4B1A2211CF52_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_1_101950726F8C57B5(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::UnityEngine::Vector2(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_101950726F8C57B5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_643FFA1166071130()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_643FFA1166071130_OFFSET))();
	}

	static ::Struct_2_143B7A497B890286 Method_1_B0CB59D54933F418(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::Struct_2_143B7A497B890286(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_B0CB59D54933F418_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector2 Method_1_DBB139BB40D53A1D(::UnityEngine::Vector2 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::UnityEngine::Vector2 a3)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_DBB139BB40D53A1D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::System::Void Method_1_4C2D8F7FDB543B6A(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_4C2D8F7FDB543B6A_OFFSET))(a1, a2);
	}

	static ::BuddyCollider* Method_1_6EE8D6AB8E629D5C(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::BuddyCollider*(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_6EE8D6AB8E629D5C_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_E98857764E6851D6(::System::Int32 a1, ::System::String* a2, ::System::Byte a3, ::System::Boolean a4)
	{
		return ((::System::String*(*)(::System::Int32, ::System::String*, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_E98857764E6851D6_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::UIBuddyDIYComponentWidgetController* Method_1_1F01745FCE507115()
	{
		return ((::MoleMole::UIBuddyDIYComponentWidgetController*(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_1F01745FCE507115_OFFSET))();
	}

	static ::System::Int64 Method_1_143005669CBBEB09(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int64(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_143005669CBBEB09_OFFSET))(a1, a2);
	}

	static ::Class_2_208CC9941471731A_1162* Method_1_CF207CF7AA579828(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1162*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_CF207CF7AA579828_OFFSET))(a1);
	}

	static ::System::Void Method_1_F71995332F57AE0F(::MoleMole::UIBuddyDIYComponentWidgetController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIBuddyDIYComponentWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_F71995332F57AE0F_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_C4E914B667DFF4B7(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_C4E914B667DFF4B7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CB84F723B566C3F0(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_CB84F723B566C3F0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3E123EF70AC62D50(::UnityEngine::Vector2 a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_3E123EF70AC62D50_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_BB4EDE0E0C478397()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_BB4EDE0E0C478397_OFFSET))();
	}

	static ::Class_1_A59025D696FD25CD* Method_1_98BCD64ECCE6E99D(::System::Int32 a1)
	{
		return ((::Class_1_A59025D696FD25CD*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_98BCD64ECCE6E99D_OFFSET))(a1);
	}

	static ::Class_1_945ACFB1FEBC7A2C_1* Method_1_1E7938971FE45655(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::Class_1_945ACFB1FEBC7A2C_1*(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_1E7938971FE45655_OFFSET))(a1, a2, a3, a4);
	}

	static ::Struct_2_143B7A497B890286 Method_1_018D6E18107F76A0(::System::Collections::Generic::List_1<::Class_1_2CB185F86C732591*>* a1)
	{
		return ((::Struct_2_143B7A497B890286(*)(::System::Collections::Generic::List_1<::Class_1_2CB185F86C732591*>*))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_018D6E18107F76A0_OFFSET))(a1);
	}

	static ::System::Void Method_1_C293B8F3ADB851B9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_C293B8F3ADB851B9_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_1_8A7B5568426DEBC0(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_8A7B5568426DEBC0_OFFSET))(a1);
	}

	static ::System::Void Method_1_48CDCE8C38EFF7E6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_48CDCE8C38EFF7E6_OFFSET))(a1);
	}

	static ::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_9681042564541CD6_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_1_0478B32235735BFE(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_0478B32235735BFE_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_2F4BAC499A06B7EE(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_2F4BAC499A06B7EE_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_4C7C98EBC53B7741(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_4C7C98EBC53B7741_OFFSET))(a1);
	}

	static ::System::Void Method_1_35089460DAD2BB79(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_35089460DAD2BB79_OFFSET))(a1);
	}

	static ::Share::EPropertyType Method_1_DEABF45BA8221542(::Share::EPropertyType a1)
	{
		return ((::Share::EPropertyType(*)(::Share::EPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_DEABF45BA8221542_OFFSET))(a1);
	}

	static ::System::Void Method_1_6747250BC2D13457()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_6747250BC2D13457_OFFSET))();
	}

	static ::System::Void Method_1_953D2CD0B3E2948C(::MoleMole::UIBuddyDIYComponentWidgetController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIBuddyDIYComponentWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_953D2CD0B3E2948C_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_CC7B2DCBE9DDE156(::UnityEngine::Transform* a1, ::Struct_2_143B7A497B890286 a2)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::Transform*, ::Struct_2_143B7A497B890286))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_CC7B2DCBE9DDE156_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_776F730E02A69051(::MoleMole::UIBuddyDIYComponentWidgetController* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::UIBuddyDIYComponentWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_776F730E02A69051_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_F28136982D1084AB()
	{
		return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_F28136982D1084AB_OFFSET))();
	}

	static ::Class_1_2CB185F86C732591* Method_1_24A0772048A301C1(::UnityEngine::Vector2 a1)
	{
		return ((::Class_1_2CB185F86C732591*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_24A0772048A301C1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_76D287B304B2A633(::Struct_2_143B7A497B890286 a1, ::Struct_2_143B7A497B890286 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_143B7A497B890286, ::Struct_2_143B7A497B890286))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_76D287B304B2A633_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_704CAEDCD95E9E98(::Struct_2_143B7A497B890286 a1, ::Struct_2_143B7A497B890286 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_143B7A497B890286, ::Struct_2_143B7A497B890286))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_704CAEDCD95E9E98_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_7B93D6C424E3B6EA(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_7B93D6C424E3B6EA_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_143005669CBBEB09_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int64(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_143005669CBBEB09_1_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_1*>* Method_1_3FBFF4AA9AE2C521(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_1*>*(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_3FBFF4AA9AE2C521_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_29664ED19BC153C1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_29664ED19BC153C1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C14376CF564FA48C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_C14376CF564FA48C_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_6E793510D10B5A80(::System::Int32 a1, ::System::Boolean& a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_6E793510D10B5A80_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D99C470BF16DEA6E(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_36C571655E465BEC_METHOD_1_D99C470BF16DEA6E_OFFSET))(a1);
	}
};
