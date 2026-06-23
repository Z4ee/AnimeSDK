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

#define CLASS_1_91AC5172452907E5_METHOD_1_167B0EE5EF8BCA7E_OFFSET UNITYSDK_OFFSET(0xEBEA390)
#define CLASS_1_91AC5172452907E5_METHOD_1_1974814779A27495_1_OFFSET UNITYSDK_OFFSET(0xEBF38F0)
#define CLASS_1_91AC5172452907E5_METHOD_1_1974814779A27495_OFFSET UNITYSDK_OFFSET(0xEBEE850)
#define CLASS_1_91AC5172452907E5_METHOD_1_2055BB3F3D0D91C4_OFFSET UNITYSDK_OFFSET(0xEBF05C0)
#define CLASS_1_91AC5172452907E5_METHOD_1_2085C42F54EF92FD_OFFSET UNITYSDK_OFFSET(0xEBEC310)
#define CLASS_1_91AC5172452907E5_METHOD_1_2089AD72A12466CF_OFFSET UNITYSDK_OFFSET(0xEBF3AD0)
#define CLASS_1_91AC5172452907E5_METHOD_1_2CD6EE04FDA99211_OFFSET UNITYSDK_OFFSET(0xEBEEBB0)
#define CLASS_1_91AC5172452907E5_METHOD_1_31923F45F203A52D_OFFSET UNITYSDK_OFFSET(0xEBEC940)
#define CLASS_1_91AC5172452907E5_METHOD_1_3450ED0E79001372_OFFSET UNITYSDK_OFFSET(0xEBE9FA0)
#define CLASS_1_91AC5172452907E5_METHOD_1_3D772A949F061816_OFFSET UNITYSDK_OFFSET(0xEBEE0D0)
#define CLASS_1_91AC5172452907E5_METHOD_1_404B828CD80A8F29_OFFSET UNITYSDK_OFFSET(0xEBEB390)
#define CLASS_1_91AC5172452907E5_METHOD_1_4194F8632A27C94B_OFFSET UNITYSDK_OFFSET(0xEBF24A0)
#define CLASS_1_91AC5172452907E5_METHOD_1_4FDACE5642F3007B_OFFSET UNITYSDK_OFFSET(0xEBED210)
#define CLASS_1_91AC5172452907E5_METHOD_1_55165EB5770E97B7_OFFSET UNITYSDK_OFFSET(0xEBEB6E0)
#define CLASS_1_91AC5172452907E5_METHOD_1_5DFECD7C0FD826D2_OFFSET UNITYSDK_OFFSET(0xEBEF9B0)
#define CLASS_1_91AC5172452907E5_METHOD_1_61E9829591FC8C47_OFFSET UNITYSDK_OFFSET(0xEBF1180)
#define CLASS_1_91AC5172452907E5_METHOD_1_61F38E8B05D827CF_OFFSET UNITYSDK_OFFSET(0xEBE9F40)
#define CLASS_1_91AC5172452907E5_METHOD_1_63B02AFE101D5392_OFFSET UNITYSDK_OFFSET(0xEBF10B0)
#define CLASS_1_91AC5172452907E5_METHOD_1_692F73256CE3CC69_OFFSET UNITYSDK_OFFSET(0xEBEA5D0)
#define CLASS_1_91AC5172452907E5_METHOD_1_78B3F71A3C504B04_OFFSET UNITYSDK_OFFSET(0xEBEF000)
#define CLASS_1_91AC5172452907E5_METHOD_1_80CF43B06BF69C6C_OFFSET UNITYSDK_OFFSET(0xEBF30D0)
#define CLASS_1_91AC5172452907E5_METHOD_1_8825F423F19AD4CC_OFFSET UNITYSDK_OFFSET(0xEBF3340)
#define CLASS_1_91AC5172452907E5_METHOD_1_89465F6A40AF55AA_OFFSET UNITYSDK_OFFSET(0xEBEEB30)
#define CLASS_1_91AC5172452907E5_METHOD_1_8E4AFC10203FA3CE_OFFSET UNITYSDK_OFFSET(0xEBEFC00)
#define CLASS_1_91AC5172452907E5_METHOD_1_8EF844B4386276D6_OFFSET UNITYSDK_OFFSET(0xEBF0660)
#define CLASS_1_91AC5172452907E5_METHOD_1_A055A81430D577BF_OFFSET UNITYSDK_OFFSET(0xEBF3FD0)
#define CLASS_1_91AC5172452907E5_METHOD_1_A7AC023E12F5528A_OFFSET UNITYSDK_OFFSET(0xEBEEA10)
#define CLASS_1_91AC5172452907E5_METHOD_1_A83D7423E5A3FDC9_OFFSET UNITYSDK_OFFSET(0xEBF31B0)
#define CLASS_1_91AC5172452907E5_METHOD_1_A8D1BC4B4C452FF2_OFFSET UNITYSDK_OFFSET(0xEBF46F0)
#define CLASS_1_91AC5172452907E5_METHOD_1_B1C92ECBB42040AA_OFFSET UNITYSDK_OFFSET(0xEBEC690)
#define CLASS_1_91AC5172452907E5_METHOD_1_B9C2D02177440DDB_OFFSET UNITYSDK_OFFSET(0xEBF34C0)
#define CLASS_1_91AC5172452907E5_METHOD_1_BCC1667C97B82A35_OFFSET UNITYSDK_OFFSET(0xEBED730)
#define CLASS_1_91AC5172452907E5_METHOD_1_BFCB65D520607302_OFFSET UNITYSDK_OFFSET(0xEBF4A30)
#define CLASS_1_91AC5172452907E5_METHOD_1_C069248284C52D10_OFFSET UNITYSDK_OFFSET(0xEBF3EB0)
#define CLASS_1_91AC5172452907E5_METHOD_1_D647F4CADAF47D57_OFFSET UNITYSDK_OFFSET(0xEBF1710)
#define CLASS_1_91AC5172452907E5_METHOD_1_D679D4499D49777B_OFFSET UNITYSDK_OFFSET(0xEBED560)
#define CLASS_1_91AC5172452907E5_METHOD_1_DDFCCE83DBBFD253_OFFSET UNITYSDK_OFFSET(0xEBF0E90)
#define CLASS_1_91AC5172452907E5_METHOD_1_E226010B0E5DEEA7_OFFSET UNITYSDK_OFFSET(0xEBEF910)
#define CLASS_1_91AC5172452907E5_METHOD_1_EA94DF5B19C94743_OFFSET UNITYSDK_OFFSET(0xEBEA010)
#define CLASS_1_91AC5172452907E5_METHOD_1_F268A6E2208FBAE6_OFFSET UNITYSDK_OFFSET(0xEBF4570)
#define CLASS_1_91AC5172452907E5_METHOD_1_FCD124DB8F707321_OFFSET UNITYSDK_OFFSET(0xEBF3810)
#define CLASS_1_91AC5172452907E5_METHOD_1_FDE49E00056F22D6_OFFSET UNITYSDK_OFFSET(0xEBF19D0)
#define CLASS_1_91AC5172452907E5__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBE9D80)

inline static constexpr unsigned int Class_1_91AC5172452907E5_TypeDefinitionIndex = 60453;

class Class_1_91AC5172452907E5 : public ::System::Object
{
public:
	static ::Sirenix::OdinInspector::ValueDropdownList_1<::Enum_3_65390B67EF8301C5>** StaticGet_Field_1_0()
	{
		return (::Sirenix::OdinInspector::ValueDropdownList_1<::Enum_3_65390B67EF8301C5>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91AC5172452907E5_TypeDefinitionIndex)->GetStaticField(0x3AAF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_61F38E8B05D827CF(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_61F38E8B05D827CF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3450ED0E79001372(::NapGradient* a1)
	{
		return ((::System::Boolean(*)(::NapGradient*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_3450ED0E79001372_OFFSET))(a1);
	}

	static ::System::Void Method_1_EA94DF5B19C94743(::UnityEngine::Gradient* a1, ::UnityEngine::Color a2, ::Enum_3_65390B67EF8301C5 a3)
	{
		return ((::System::Void(*)(::UnityEngine::Gradient*, ::UnityEngine::Color, ::Enum_3_65390B67EF8301C5))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_EA94DF5B19C94743_OFFSET))(a1, a2, a3);
	}

	static ::NapGradient* Method_1_692F73256CE3CC69(::NapGradient* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::NapGradient*(*)(::NapGradient*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_692F73256CE3CC69_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_55165EB5770E97B7(::NapGradient* a1, ::System::Single a2, ::UnityEngine::Color a3)
	{
		return ((::System::String*(*)(::NapGradient*, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_55165EB5770E97B7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2085C42F54EF92FD(::NapGradient* a1, ::UnityEngine::Color a2, ::Enum_3_65390B67EF8301C5 a3)
	{
		return ((::System::Void(*)(::NapGradient*, ::UnityEngine::Color, ::Enum_3_65390B67EF8301C5))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_2085C42F54EF92FD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_31923F45F203A52D(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3, ::UnityEngine::AnimationCurve* a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_31923F45F203A52D_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_4FDACE5642F3007B(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_4FDACE5642F3007B_OFFSET))(a1, a2);
	}

	static ::UnityEngine::AnimationCurve* Method_1_D679D4499D49777B(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_D679D4499D49777B_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_BCC1667C97B82A35(::UnityEngine::Gradient* a1, ::System::Single a2, ::UnityEngine::Color a3)
	{
		return ((::System::String*(*)(::UnityEngine::Gradient*, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_BCC1667C97B82A35_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3D772A949F061816(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single& a4, ::System::Single& a5)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_3D772A949F061816_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_1974814779A27495(::UnityEngine::AnimationCurve* a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_1974814779A27495_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_167B0EE5EF8BCA7E(::UnityEngine::Gradient* a1, ::UnityEngine::Color a2, ::Enum_3_65390B67EF8301C5 a3)
	{
		return ((::System::Void(*)(::UnityEngine::Gradient*, ::UnityEngine::Color, ::Enum_3_65390B67EF8301C5))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_167B0EE5EF8BCA7E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A7AC023E12F5528A(::UnityEngine::Gradient* a1, ::Enum_3_6D746669983E39EA a2, ::Enum_3_65390B67EF8301C5 a3, ::UnityEngine::Color a4)
	{
		return ((::System::Void(*)(::UnityEngine::Gradient*, ::Enum_3_6D746669983E39EA, ::Enum_3_65390B67EF8301C5, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_A7AC023E12F5528A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_89465F6A40AF55AA(::UnityEngine::Gradient* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_89465F6A40AF55AA_OFFSET))(a1);
	}

	static ::System::Void Method_1_2CD6EE04FDA99211(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_2CD6EE04FDA99211_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_78B3F71A3C504B04(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_78B3F71A3C504B04_OFFSET))(a1, a2, a3, a4);
	}

	static ::NapGradient* Method_1_5DFECD7C0FD826D2(::UnityEngine::Gradient* a1)
	{
		return ((::NapGradient*(*)(::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_5DFECD7C0FD826D2_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_8E4AFC10203FA3CE(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_8E4AFC10203FA3CE_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_2055BB3F3D0D91C4(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_2055BB3F3D0D91C4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_DDFCCE83DBBFD253(::UnityEngine::Keyframe a1, ::Class_1_91AC5172452907E5_Struct_2_462871492B9B399B& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Keyframe, ::Class_1_91AC5172452907E5_Struct_2_462871492B9B399B&))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_DDFCCE83DBBFD253_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Gradient* Method_1_63B02AFE101D5392(::UnityEngine::Gradient* a1)
	{
		return ((::UnityEngine::Gradient*(*)(::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_63B02AFE101D5392_OFFSET))(a1);
	}

	static ::System::Void Method_1_61E9829591FC8C47(::UnityEngine::AnimationCurve* a1, ::Il2CppArray<::UnityEngine::AnimationCurve*>* a2)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::Il2CppArray<::UnityEngine::AnimationCurve*>*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_61E9829591FC8C47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8EF844B4386276D6(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_8EF844B4386276D6_OFFSET))(a1, a2, a3);
	}

	static ::NapGradient* Method_1_D647F4CADAF47D57(::NapGradient* a1, ::System::Single a2)
	{
		return ((::NapGradient*(*)(::NapGradient*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_D647F4CADAF47D57_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Gradient* Method_1_FDE49E00056F22D6(::UnityEngine::Gradient* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Gradient*(*)(::UnityEngine::Gradient*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_FDE49E00056F22D6_OFFSET))(a1, a2, a3, a4);
	}

	static ::NapGradient* Method_1_4194F8632A27C94B(::NapGradient* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::NapGradient*(*)(::NapGradient*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_4194F8632A27C94B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_80CF43B06BF69C6C(::UnityEngine::AnimationCurve* a1, ::Enum_3_6D746669983E39EA a2, ::Enum_3_65390B67EF8301C5 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::Enum_3_6D746669983E39EA, ::Enum_3_65390B67EF8301C5, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_80CF43B06BF69C6C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B9C2D02177440DDB(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>* a4)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_B9C2D02177440DDB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_FCD124DB8F707321(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_FCD124DB8F707321_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1974814779A27495_1(::UnityEngine::AnimationCurve* a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_1974814779A27495_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2089AD72A12466CF(::UnityEngine::AnimationCurve* a1, ::Il2CppArray<::UnityEngine::AnimationCurve*>* a2)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::Il2CppArray<::UnityEngine::AnimationCurve*>*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_2089AD72A12466CF_OFFSET))(a1, a2);
	}

	static ::UnityEngine::AnimationCurve* Method_1_E226010B0E5DEEA7(::UnityEngine::AnimationCurve* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_E226010B0E5DEEA7_OFFSET))(a1);
	}

	static ::System::Void Method_1_C069248284C52D10(::NapGradient* a1, ::Enum_3_6D746669983E39EA a2, ::Enum_3_65390B67EF8301C5 a3, ::UnityEngine::Color a4)
	{
		return ((::System::Void(*)(::NapGradient*, ::Enum_3_6D746669983E39EA, ::Enum_3_65390B67EF8301C5, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_C069248284C52D10_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_A83D7423E5A3FDC9(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::Enum_3_65390B67EF8301C5 a3)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::Enum_3_65390B67EF8301C5))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_A83D7423E5A3FDC9_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::AnimationCurve* Method_1_8825F423F19AD4CC(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::Enum_3_65390B67EF8301C5 a3)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::Enum_3_65390B67EF8301C5))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_8825F423F19AD4CC_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_A055A81430D577BF(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::String*(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_A055A81430D577BF_OFFSET))(a1, a2, a3);
	}

	static ::NapGradient* Method_1_F268A6E2208FBAE6(::NapGradient* a1, ::System::Single a2)
	{
		return ((::NapGradient*(*)(::NapGradient*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_F268A6E2208FBAE6_OFFSET))(a1, a2);
	}

	static ::UnityEngine::AnimationCurve* Method_1_A8D1BC4B4C452FF2(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Int32& a4, ::System::Int32& a5)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_A8D1BC4B4C452FF2_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_B1C92ECBB42040AA(::NapGradient* a1, ::UnityEngine::Color a2, ::Enum_3_65390B67EF8301C5 a3)
	{
		return ((::System::Void(*)(::NapGradient*, ::UnityEngine::Color, ::Enum_3_65390B67EF8301C5))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_B1C92ECBB42040AA_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::AnimationCurve* Method_1_BFCB65D520607302(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_BFCB65D520607302_OFFSET))(a1, a2, a3);
	}

	static ::NapGradient* Method_1_404B828CD80A8F29(::NapGradient* a1)
	{
		return ((::NapGradient*(*)(::NapGradient*))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_METHOD_1_404B828CD80A8F29_OFFSET))(a1);
	}
};
