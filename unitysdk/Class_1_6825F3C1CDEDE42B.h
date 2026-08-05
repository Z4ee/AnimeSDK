#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_12.h"
#include "unitysdk/Enum_3_B4F9C1A2827CAB53.h"
#include "unitysdk/Enum_3_DB663931210BBC27_38.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/MissionResult.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_178;
class Class_1_5DA2E7556103D5A3_218;
class Class_1_5DA2E7556103D5A3_344;
class Class_1_5DA2E7556103D5A3_446;
class Class_2_468A4FBF2E9F527C;
class Class_3_3BE9E985CC6DA44B;
class Class_3_6E9568744155E92F;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralDetailWithTabDialogPopWindowController; }
namespace MoleMole { class UIHadalZoneLayer_RankingRowWidgetController; }
namespace MoleMole { class UIHadalZone_Common_RatingRowContext; }
namespace MoleMole { class UIHadal_InPauseRatingInfoRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_0449585A751BC584_OFFSET UNITYSDK_OFFSET(0x1594F5E0)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_0B120D4C593AA8FA_OFFSET UNITYSDK_OFFSET(0x1594E310)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_1E5813C9C9F1D91A_OFFSET UNITYSDK_OFFSET(0x1594DD70)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_1E6CC19045258125_1_OFFSET UNITYSDK_OFFSET(0x1594E610)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_1E6CC19045258125_OFFSET UNITYSDK_OFFSET(0x1594C790)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_2C49F5B9F4E8B256_OFFSET UNITYSDK_OFFSET(0x1594BB90)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_3129BDB20712C068_OFFSET UNITYSDK_OFFSET(0x1594CBF0)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_3426B8B66D2A55AB_OFFSET UNITYSDK_OFFSET(0x1594CF00)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_406E08A57A423A2F_OFFSET UNITYSDK_OFFSET(0x15950170)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_46CC96260A79024D_OFFSET UNITYSDK_OFFSET(0x1594F2C0)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x1594FE10)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_5640B50718193CC8_OFFSET UNITYSDK_OFFSET(0x1594F970)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_61CC7B5937FBBAFA_OFFSET UNITYSDK_OFFSET(0x1594DC60)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_6A1F36B8E93793D4_OFFSET UNITYSDK_OFFSET(0x1594E130)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_6AA581BE0B50758A_OFFSET UNITYSDK_OFFSET(0x1594FC60)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_6B2BC02998B71E49_OFFSET UNITYSDK_OFFSET(0x1594E050)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_71D3482E257A4261_OFFSET UNITYSDK_OFFSET(0x1594D960)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_8D7AF529D633A451_OFFSET UNITYSDK_OFFSET(0x1594CD70)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_905A15ADCD8CEDD5_OFFSET UNITYSDK_OFFSET(0x1594C240)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_9A57F29F28168952_1_OFFSET UNITYSDK_OFFSET(0x1594D830)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_9A57F29F28168952_OFFSET UNITYSDK_OFFSET(0x1594C1F0)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_9B682E90D47788BA_OFFSET UNITYSDK_OFFSET(0x1594BDC0)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_9FD5E80CE5235099_OFFSET UNITYSDK_OFFSET(0x1594F690)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_A32FADA3D082DA9D_OFFSET UNITYSDK_OFFSET(0x15950600)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_A6543F12A6B58A69_1_OFFSET UNITYSDK_OFFSET(0x1594EF70)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_A6543F12A6B58A69_OFFSET UNITYSDK_OFFSET(0x1594E6E0)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_A7D1A74B05FAAD01_OFFSET UNITYSDK_OFFSET(0x1594EA40)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_B6DE734A0DB0B61C_1_OFFSET UNITYSDK_OFFSET(0x1594DF70)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_B6DE734A0DB0B61C_OFFSET UNITYSDK_OFFSET(0x1594D880)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_B73A06E1D49BC2E3_OFFSET UNITYSDK_OFFSET(0x1594D010)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_B9A691A20FE23012_OFFSET UNITYSDK_OFFSET(0x1594C860)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_BD5BF13092464F58_OFFSET UNITYSDK_OFFSET(0x1594E200)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_C1C5AB73E443B1B4_OFFSET UNITYSDK_OFFSET(0x1594CEB0)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_D536B193F915130D_OFFSET UNITYSDK_OFFSET(0x1594F6E0)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_D6CB6F5F3E75C218_OFFSET UNITYSDK_OFFSET(0x1594DD20)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_D72B06D13A5A7C9F_OFFSET UNITYSDK_OFFSET(0x1594EF10)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_D8C9D457F1AEC5A6_OFFSET UNITYSDK_OFFSET(0x1594ED40)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_E5FFECA12CBACED3_OFFSET UNITYSDK_OFFSET(0x1594C470)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x1594DCE0)
#define CLASS_1_6825F3C1CDEDE42B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1594C1B0)
#define CLASS_1_6825F3C1CDEDE42B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1594BAD0)

inline static constexpr unsigned int Class_1_6825F3C1CDEDE42B_TypeDefinitionIndex = 42102;

class Class_1_6825F3C1CDEDE42B : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_14()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6825F3C1CDEDE42B_TypeDefinitionIndex)->GetStaticField(0x43FF0);
	}
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6825F3C1CDEDE42B_TypeDefinitionIndex)->GetStaticField(0x43FF8);
	}
	static ::System::String** StaticGet_Field_1_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6825F3C1CDEDE42B_TypeDefinitionIndex)->GetStaticField(0x44000);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_12()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6825F3C1CDEDE42B_TypeDefinitionIndex)->GetStaticField(0x44008);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6825F3C1CDEDE42B_TypeDefinitionIndex)->GetStaticField(0x44010);
	}
	static ::System::Boolean* StaticGet_Field_1_15()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6825F3C1CDEDE42B_TypeDefinitionIndex)->GetStaticField(0xFD70);
	}
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x1E903E; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_2C49F5B9F4E8B256(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_2C49F5B9F4E8B256_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_9B682E90D47788BA(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_9B682E90D47788BA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Boolean Method_1_9A57F29F28168952(::Class_3_3BE9E985CC6DA44B* a1)
	{
		return ((::System::Boolean(*)(::Class_3_3BE9E985CC6DA44B*))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_9A57F29F28168952_OFFSET))(a1);
	}

	static ::System::Void Method_1_905A15ADCD8CEDD5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::Class_1_5DA2E7556103D5A3_218*& a4, ::Class_1_5DA2E7556103D5A3_446*& a5, ::Class_1_5DA2E7556103D5A3_344*& a6, ::Class_1_5DA2E7556103D5A3_178*& a7)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::Class_1_5DA2E7556103D5A3_218*&, ::Class_1_5DA2E7556103D5A3_446*&, ::Class_1_5DA2E7556103D5A3_344*&, ::Class_1_5DA2E7556103D5A3_178*&))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_905A15ADCD8CEDD5_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_1E6CC19045258125(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_1E6CC19045258125_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3129BDB20712C068(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_3129BDB20712C068_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4(::Enum_3_4608E37A1B3D374A a1)
	{
		return ((::System::Boolean(*)(::Enum_3_4608E37A1B3D374A))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_C1C5AB73E443B1B4_OFFSET))(a1);
	}

	static ::MoleMole::UIHadal_InPauseRatingInfoRowWidgetController* Method_1_3426B8B66D2A55AB(::MoleMole::Level::RatingType a1, ::Class_1_5DA2E7556103D5A3_446* a2, ::MoleMole::UIBaseController* a3, ::UnityEngine::Transform* a4, ::System::Boolean a5)
	{
		return ((::MoleMole::UIHadal_InPauseRatingInfoRowWidgetController*(*)(::MoleMole::Level::RatingType, ::Class_1_5DA2E7556103D5A3_446*, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_3426B8B66D2A55AB_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_9A57F29F28168952_1(::Class_3_6E9568744155E92F* a1)
	{
		return ((::System::Boolean(*)(::Class_3_6E9568744155E92F*))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_9A57F29F28168952_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B6DE734A0DB0B61C(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_B6DE734A0DB0B61C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_71D3482E257A4261(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_71D3482E257A4261_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_F0E307B84478A272_1_OFFSET))();
	}

	static ::System::Void Method_1_E5FFECA12CBACED3(::System::Int32 a1, ::System::Int32 a2, ::Class_1_5DA2E7556103D5A3_218*& a3, ::Class_1_5DA2E7556103D5A3_446*& a4, ::Class_1_5DA2E7556103D5A3_344*& a5)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::Class_1_5DA2E7556103D5A3_218*&, ::Class_1_5DA2E7556103D5A3_446*&, ::Class_1_5DA2E7556103D5A3_344*&))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_E5FFECA12CBACED3_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_D6CB6F5F3E75C218(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_D6CB6F5F3E75C218_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1E5813C9C9F1D91A(::Enum_3_DB663931210BBC27_38 a1)
	{
		return ((::System::Void(*)(::Enum_3_DB663931210BBC27_38))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_1E5813C9C9F1D91A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B6DE734A0DB0B61C_1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_B6DE734A0DB0B61C_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6B2BC02998B71E49(::Class_3_6E9568744155E92F* a1)
	{
		return ((::System::Boolean(*)(::Class_3_6E9568744155E92F*))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_6B2BC02998B71E49_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6A1F36B8E93793D4(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_6A1F36B8E93793D4_OFFSET))(a1);
	}

	static ::MoleMole::UIHadalZoneLayer_RankingRowWidgetController* Method_1_BD5BF13092464F58(::MoleMole::Level::RatingType a1, ::Class_1_5DA2E7556103D5A3_446* a2, ::MoleMole::UIBaseController* a3, ::UnityEngine::Transform* a4, ::System::Boolean a5)
	{
		return ((::MoleMole::UIHadalZoneLayer_RankingRowWidgetController*(*)(::MoleMole::Level::RatingType, ::Class_1_5DA2E7556103D5A3_446*, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_BD5BF13092464F58_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_B9A691A20FE23012(::System::Func_2<::Class_3_3BE9E985CC6DA44B*, ::System::Boolean>* a1)
	{
		return ((::System::Boolean(*)(::System::Func_2<::Class_3_3BE9E985CC6DA44B*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_B9A691A20FE23012_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0B120D4C593AA8FA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_0B120D4C593AA8FA_OFFSET))();
	}

	static ::System::Boolean Method_1_1E6CC19045258125_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_1E6CC19045258125_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A6543F12A6B58A69(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_A6543F12A6B58A69_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_8D7AF529D633A451(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_8D7AF529D633A451_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_61CC7B5937FBBAFA(::Class_2_468A4FBF2E9F527C* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::Class_2_468A4FBF2E9F527C*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_61CC7B5937FBBAFA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A7D1A74B05FAAD01(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_A7D1A74B05FAAD01_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D8C9D457F1AEC5A6(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_D8C9D457F1AEC5A6_OFFSET))(a1, a2);
	}

	static ::MoleMole::MissionResult Method_1_D72B06D13A5A7C9F(::Enum_3_4608E37A1B3D374A_12 a1)
	{
		return ((::MoleMole::MissionResult(*)(::Enum_3_4608E37A1B3D374A_12))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_D72B06D13A5A7C9F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A6543F12A6B58A69_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_A6543F12A6B58A69_1_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::UIHadalZone_Common_RatingRowContext* Method_1_B73A06E1D49BC2E3(::MoleMole::Level::RatingType a1, ::Class_1_5DA2E7556103D5A3_446* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::UIHadalZone_Common_RatingRowContext*(*)(::MoleMole::Level::RatingType, ::Class_1_5DA2E7556103D5A3_446*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_B73A06E1D49BC2E3_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_46CC96260A79024D(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_46CC96260A79024D_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::String*>* Method_1_0449585A751BC584(::System::String* a1)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_0449585A751BC584_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_9FD5E80CE5235099(::Enum_3_4608E37A1B3D374A_12 a1)
	{
		return ((::System::Int32(*)(::Enum_3_4608E37A1B3D374A_12))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_9FD5E80CE5235099_OFFSET))(a1);
	}

	static ::System::Void Method_1_D536B193F915130D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_D536B193F915130D_OFFSET))(a1);
	}

	static ::System::Void Method_1_5640B50718193CC8(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_5640B50718193CC8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6AA581BE0B50758A()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_6AA581BE0B50758A_OFFSET))();
	}

	static ::System::Void Method_1_4805283D59625FD9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_4805283D59625FD9_OFFSET))();
	}

	static ::MoleMole::UIGeneralDetailWithTabDialogPopWindowController* Method_1_406E08A57A423A2F(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4, ::System::String* a5, ::System::Action* a6, ::Enum_3_B4F9C1A2827CAB53 a7, ::System::String* a8, ::System::Action* a9, ::Enum_3_B4F9C1A2827CAB53 a10, ::System::Nullable_1<::System::Boolean> a11, ::System::Action* a12)
	{
		return ((::MoleMole::UIGeneralDetailWithTabDialogPopWindowController*(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::Action*, ::Enum_3_B4F9C1A2827CAB53, ::System::String*, ::System::Action*, ::Enum_3_B4F9C1A2827CAB53, ::System::Nullable_1<::System::Boolean>, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_406E08A57A423A2F_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	static ::MoleMole::UIGeneralDetailWithTabDialogPopWindowController* Method_1_A32FADA3D082DA9D(::Enum_3_DB663931210BBC27_38 a1)
	{
		return ((::MoleMole::UIGeneralDetailWithTabDialogPopWindowController*(*)(::Enum_3_DB663931210BBC27_38))((::PBYTE)hIl2Cpp + CLASS_1_6825F3C1CDEDE42B_METHOD_1_A32FADA3D082DA9D_OFFSET))(a1);
	}
};
