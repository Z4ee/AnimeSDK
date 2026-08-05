#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_91AC5172452907E5_Struct_2_462871492B9B399B.h"
#include "unitysdk/Enum_3_65390B67EF8301C5.h"
#include "unitysdk/Enum_3_6D746669983E39EA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Keyframe.h"

class NapGradient;
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }

#define CLASS_1_91AC5172452907E5_METHOD_1_1974814779A27495_1_OFFSET UNITYSDK_OFFSET(0x177390F0)
#define CLASS_1_91AC5172452907E5_METHOD_1_1974814779A27495_OFFSET UNITYSDK_OFFSET(0x17732740)
#define CLASS_1_91AC5172452907E5_METHOD_1_1C479D616A0572EE_OFFSET UNITYSDK_OFFSET(0x17737F80)
#define CLASS_1_91AC5172452907E5_METHOD_1_1E2D10CA4A1CED46_OFFSET UNITYSDK_OFFSET(0x17739300)
#define CLASS_1_91AC5172452907E5_METHOD_1_1F2410DD543E8C6B_OFFSET UNITYSDK_OFFSET(0x17736280)
#define CLASS_1_91AC5172452907E5_METHOD_1_2055BB3F3D0D91C4_OFFSET UNITYSDK_OFFSET(0x17731E60)
#define CLASS_1_91AC5172452907E5_METHOD_1_2089AD72A12466CF_OFFSET UNITYSDK_OFFSET(0x17731A80)
#define CLASS_1_91AC5172452907E5_METHOD_1_2CD6EE04FDA99211_OFFSET UNITYSDK_OFFSET(0x17737740)
#define CLASS_1_91AC5172452907E5_METHOD_1_31923F45F203A52D_OFFSET UNITYSDK_OFFSET(0x17736690)
#define CLASS_1_91AC5172452907E5_METHOD_1_3397289D8E4665EE_OFFSET UNITYSDK_OFFSET(0x17735790)
#define CLASS_1_91AC5172452907E5_METHOD_1_3450ED0E79001372_OFFSET UNITYSDK_OFFSET(0x17739290)
#define CLASS_1_91AC5172452907E5_METHOD_1_358AC0BEB4776BEF_OFFSET UNITYSDK_OFFSET(0x177319A0)
#define CLASS_1_91AC5172452907E5_METHOD_1_3D772A949F061816_OFFSET UNITYSDK_OFFSET(0x17733500)
#define CLASS_1_91AC5172452907E5_METHOD_1_56081D014CCA738C_OFFSET UNITYSDK_OFFSET(0x17735530)
#define CLASS_1_91AC5172452907E5_METHOD_1_583FF85FCCCC5229_OFFSET UNITYSDK_OFFSET(0x1773C560)
#define CLASS_1_91AC5172452907E5_METHOD_1_5DFECD7C0FD826D2_OFFSET UNITYSDK_OFFSET(0x17732900)
#define CLASS_1_91AC5172452907E5_METHOD_1_61E9829591FC8C47_OFFSET UNITYSDK_OFFSET(0x17738A60)
#define CLASS_1_91AC5172452907E5_METHOD_1_61F38E8B05D827CF_OFFSET UNITYSDK_OFFSET(0x17735190)
#define CLASS_1_91AC5172452907E5_METHOD_1_63B02AFE101D5392_OFFSET UNITYSDK_OFFSET(0x177356C0)
#define CLASS_1_91AC5172452907E5_METHOD_1_678BCEC6CEECC4C2_OFFSET UNITYSDK_OFFSET(0x17734030)
#define CLASS_1_91AC5172452907E5_METHOD_1_6B17967F0EDD4958_OFFSET UNITYSDK_OFFSET(0x17732B50)
#define CLASS_1_91AC5172452907E5_METHOD_1_6B7AFA7EB02FDFD5_OFFSET UNITYSDK_OFFSET(0x17737470)
#define CLASS_1_91AC5172452907E5_METHOD_1_7C6D67766FFC0998_OFFSET UNITYSDK_OFFSET(0x17734E50)
#define CLASS_1_91AC5172452907E5_METHOD_1_87B8BFFBF69E263C_OFFSET UNITYSDK_OFFSET(0x1773A270)
#define CLASS_1_91AC5172452907E5_METHOD_1_89465F6A40AF55AA_OFFSET UNITYSDK_OFFSET(0x17737DB0)
#define CLASS_1_91AC5172452907E5_METHOD_1_8A23D1EFA5435ED5_OFFSET UNITYSDK_OFFSET(0x17732DA0)
#define CLASS_1_91AC5172452907E5_METHOD_1_8EF844B4386276D6_OFFSET UNITYSDK_OFFSET(0x17731F00)
#define CLASS_1_91AC5172452907E5_METHOD_1_94886DBC88E18D0E_OFFSET UNITYSDK_OFFSET(0x177370A0)
#define CLASS_1_91AC5172452907E5_METHOD_1_95D75C26EB67D6BB_OFFSET UNITYSDK_OFFSET(0x177364F0)
#define CLASS_1_91AC5172452907E5_METHOD_1_A055A81430D577BF_OFFSET UNITYSDK_OFFSET(0x17732F70)
#define CLASS_1_91AC5172452907E5_METHOD_1_A70CBFF5C6A8D589_OFFSET UNITYSDK_OFFSET(0x1773A5C0)
#define CLASS_1_91AC5172452907E5_METHOD_1_A7AC023E12F5528A_OFFSET UNITYSDK_OFFSET(0x17738FD0)
#define CLASS_1_91AC5172452907E5_METHOD_1_A8D1BC4B4C452FF2_OFFSET UNITYSDK_OFFSET(0x177351F0)
#define CLASS_1_91AC5172452907E5_METHOD_1_B9C2D02177440DDB_OFFSET UNITYSDK_OFFSET(0x17739F20)
#define CLASS_1_91AC5172452907E5_METHOD_1_BCC1667C97B82A35_OFFSET UNITYSDK_OFFSET(0x1773BBD0)
#define CLASS_1_91AC5172452907E5_METHOD_1_BFCB65D520607302_OFFSET UNITYSDK_OFFSET(0x17737E30)
#define CLASS_1_91AC5172452907E5_METHOD_1_C069248284C52D10_OFFSET UNITYSDK_OFFSET(0x17736F80)
#define CLASS_1_91AC5172452907E5_METHOD_1_CE5FA78787A069F0_OFFSET UNITYSDK_OFFSET(0x17733C60)
#define CLASS_1_91AC5172452907E5_METHOD_1_DDFCCE83DBBFD253_OFFSET UNITYSDK_OFFSET(0x17737B90)
#define CLASS_1_91AC5172452907E5_METHOD_1_E226010B0E5DEEA7_OFFSET UNITYSDK_OFFSET(0x177389C0)
#define CLASS_1_91AC5172452907E5_METHOD_1_F89D1DFBEC580C75_OFFSET UNITYSDK_OFFSET(0x1773B220)
#define CLASS_1_91AC5172452907E5_METHOD_1_FFEF42A9BF995F44_OFFSET UNITYSDK_OFFSET(0x17736410)
#define CLASS_1_91AC5172452907E5__CCTOR_OFFSET UNITYSDK_OFFSET(0x177317E0)

inline static constexpr unsigned int Class_1_91AC5172452907E5_TypeDefinitionIndex = 77235;

class Class_1_91AC5172452907E5 : public ::System::Object
{
public:
	static ::Sirenix::OdinInspector::ValueDropdownList_1<::Enum_3_65390B67EF8301C5>** StaticGet_Field_1_0()
	{
		return (::Sirenix::OdinInspector::ValueDropdownList_1<::Enum_3_65390B67EF8301C5>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91AC5172452907E5_TypeDefinitionIndex)->GetStaticField(0x3E0C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_358AC0BEB4776BEF(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_358AC0BEB4776BEF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2089AD72A12466CF(::UnityEngine::AnimationCurve* a1, ::Il2CppArray<::UnityEngine::AnimationCurve*>* a2)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::Il2CppArray<::UnityEngine::AnimationCurve*>*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_2089AD72A12466CF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2055BB3F3D0D91C4(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_2055BB3F3D0D91C4_OFFSET))(a1);
	}

	static ::System::Void Method_1_1974814779A27495(::UnityEngine::AnimationCurve* a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_1974814779A27495_OFFSET))(a1, a2);
	}

	static ::NapGradient* Method_1_5DFECD7C0FD826D2(::UnityEngine::Gradient* a1)
	{
		return ((::NapGradient*(*)(::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_5DFECD7C0FD826D2_OFFSET))(a1);
	}

	static ::System::Void Method_1_6B17967F0EDD4958(::UnityEngine::Gradient* a1, ::UnityEngine::Color a2, ::Enum_3_65390B67EF8301C5 a3)
	{
		return ((::System::Void(*)(::UnityEngine::Gradient*, ::UnityEngine::Color, ::Enum_3_65390B67EF8301C5))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_6B17967F0EDD4958_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::AnimationCurve* Method_1_8A23D1EFA5435ED5(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_8A23D1EFA5435ED5_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_A055A81430D577BF(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::String*(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_A055A81430D577BF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3D772A949F061816(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single& a4, ::System::Single& a5)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_3D772A949F061816_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_CE5FA78787A069F0(::UnityEngine::Gradient* a1, ::UnityEngine::Color a2, ::Enum_3_65390B67EF8301C5 a3)
	{
		return ((::System::Void(*)(::UnityEngine::Gradient*, ::UnityEngine::Color, ::Enum_3_65390B67EF8301C5))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_CE5FA78787A069F0_OFFSET))(a1, a2, a3);
	}

	static ::NapGradient* Method_1_678BCEC6CEECC4C2(::NapGradient* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::NapGradient*(*)(::NapGradient*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_678BCEC6CEECC4C2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_61F38E8B05D827CF(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_61F38E8B05D827CF_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_A8D1BC4B4C452FF2(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Int32& a4, ::System::Int32& a5)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_A8D1BC4B4C452FF2_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::NapGradient* Method_1_56081D014CCA738C(::NapGradient* a1, ::System::Single a2)
	{
		return ((::NapGradient*(*)(::NapGradient*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_56081D014CCA738C_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Gradient* Method_1_63B02AFE101D5392(::UnityEngine::Gradient* a1)
	{
		return ((::UnityEngine::Gradient*(*)(::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_63B02AFE101D5392_OFFSET))(a1);
	}

	static ::UnityEngine::Gradient* Method_1_3397289D8E4665EE(::UnityEngine::Gradient* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Gradient*(*)(::UnityEngine::Gradient*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_3397289D8E4665EE_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::AnimationCurve* Method_1_1F2410DD543E8C6B(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::Enum_3_65390B67EF8301C5 a3)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::Enum_3_65390B67EF8301C5))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_1F2410DD543E8C6B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FFEF42A9BF995F44(::UnityEngine::AnimationCurve* a1, ::Enum_3_6D746669983E39EA a2, ::Enum_3_65390B67EF8301C5 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::Enum_3_6D746669983E39EA, ::Enum_3_65390B67EF8301C5, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_FFEF42A9BF995F44_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_31923F45F203A52D(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3, ::UnityEngine::AnimationCurve* a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_31923F45F203A52D_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_C069248284C52D10(::NapGradient* a1, ::Enum_3_6D746669983E39EA a2, ::Enum_3_65390B67EF8301C5 a3, ::UnityEngine::Color a4)
	{
		return ((::System::Void(*)(::NapGradient*, ::Enum_3_6D746669983E39EA, ::Enum_3_65390B67EF8301C5, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_C069248284C52D10_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_2CD6EE04FDA99211(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_2CD6EE04FDA99211_OFFSET))(a1);
	}

	static ::System::Void Method_1_8EF844B4386276D6(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_8EF844B4386276D6_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_89465F6A40AF55AA(::UnityEngine::Gradient* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_89465F6A40AF55AA_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_BFCB65D520607302(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_BFCB65D520607302_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::AnimationCurve* Method_1_1C479D616A0572EE(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_1C479D616A0572EE_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_61E9829591FC8C47(::UnityEngine::AnimationCurve* a1, ::Il2CppArray<::UnityEngine::AnimationCurve*>* a2)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::Il2CppArray<::UnityEngine::AnimationCurve*>*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_61E9829591FC8C47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A7AC023E12F5528A(::UnityEngine::Gradient* a1, ::Enum_3_6D746669983E39EA a2, ::Enum_3_65390B67EF8301C5 a3, ::UnityEngine::Color a4)
	{
		return ((::System::Void(*)(::UnityEngine::Gradient*, ::Enum_3_6D746669983E39EA, ::Enum_3_65390B67EF8301C5, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_A7AC023E12F5528A_OFFSET))(a1, a2, a3, a4);
	}

	static ::NapGradient* Method_1_7C6D67766FFC0998(::NapGradient* a1)
	{
		return ((::NapGradient*(*)(::NapGradient*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_7C6D67766FFC0998_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_E226010B0E5DEEA7(::UnityEngine::AnimationCurve* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_E226010B0E5DEEA7_OFFSET))(a1);
	}

	static ::System::Void Method_1_1974814779A27495_1(::UnityEngine::AnimationCurve* a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_1974814779A27495_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3450ED0E79001372(::NapGradient* a1)
	{
		return ((::System::Boolean(*)(::NapGradient*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_3450ED0E79001372_OFFSET))(a1);
	}

	static ::System::Void Method_1_95D75C26EB67D6BB(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::Enum_3_65390B67EF8301C5 a3)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::Enum_3_65390B67EF8301C5))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_95D75C26EB67D6BB_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_1E2D10CA4A1CED46(::NapGradient* a1, ::System::Single a2, ::UnityEngine::Color a3)
	{
		return ((::System::String*(*)(::NapGradient*, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_1E2D10CA4A1CED46_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B9C2D02177440DDB(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>* a4)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_B9C2D02177440DDB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_87B8BFFBF69E263C(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_87B8BFFBF69E263C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6B7AFA7EB02FDFD5(::NapGradient* a1, ::UnityEngine::Color a2, ::Enum_3_65390B67EF8301C5 a3)
	{
		return ((::System::Void(*)(::NapGradient*, ::UnityEngine::Color, ::Enum_3_65390B67EF8301C5))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_6B7AFA7EB02FDFD5_OFFSET))(a1, a2, a3);
	}

	static ::NapGradient* Method_1_A70CBFF5C6A8D589(::NapGradient* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::NapGradient*(*)(::NapGradient*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_A70CBFF5C6A8D589_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_94886DBC88E18D0E(::NapGradient* a1, ::UnityEngine::Color a2, ::Enum_3_65390B67EF8301C5 a3)
	{
		return ((::System::Void(*)(::NapGradient*, ::UnityEngine::Color, ::Enum_3_65390B67EF8301C5))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_94886DBC88E18D0E_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_DDFCCE83DBBFD253(::UnityEngine::Keyframe a1, ::Class_1_91AC5172452907E5_Struct_2_462871492B9B399B& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Keyframe, ::Class_1_91AC5172452907E5_Struct_2_462871492B9B399B&))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_DDFCCE83DBBFD253_OFFSET))(a1, a2);
	}

	static ::UnityEngine::AnimationCurve* Method_1_F89D1DFBEC580C75(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_F89D1DFBEC580C75_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_BCC1667C97B82A35(::UnityEngine::Gradient* a1, ::System::Single a2, ::UnityEngine::Color a3)
	{
		return ((::System::String*(*)(::UnityEngine::Gradient*, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_BCC1667C97B82A35_OFFSET))(a1, a2, a3);
	}

	static ::NapGradient* Method_1_583FF85FCCCC5229(::NapGradient* a1, ::System::Single a2)
	{
		return ((::NapGradient*(*)(::NapGradient*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_583FF85FCCCC5229_OFFSET))(a1, a2);
	}
};
