#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_1.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_15.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/MissionResult.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_111;
class Class_1_5DA2E7556103D5A3_219;
class Class_1_5DA2E7556103D5A3_336;
class Class_1_5DA2E7556103D5A3_96;
class Class_3_6E9568744155E92F;
class Class_3_E9FF194CA9EF9D04;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIHadalZoneLayer_RankingRowWidgetController; }
namespace MoleMole { class UIHadalZone_Common_RatingRowContext; }
namespace MoleMole { class UIHadal_InPauseRatingInfoRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_ADA84D92E6822794_METHOD_1_1E8B33C8507CF317_OFFSET UNITYSDK_OFFSET(0x1120C7D0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_2C49F5B9F4E8B256_OFFSET UNITYSDK_OFFSET(0x1120C5A0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_3129BDB20712C068_OFFSET UNITYSDK_OFFSET(0x1120F160)
#define CLASS_1_ADA84D92E6822794_METHOD_1_3426B8B66D2A55AB_OFFSET UNITYSDK_OFFSET(0x1120D860)
#define CLASS_1_ADA84D92E6822794_METHOD_1_34B74973E2FF3F92_OFFSET UNITYSDK_OFFSET(0x1120E130)
#define CLASS_1_ADA84D92E6822794_METHOD_1_5640B50718193CC8_OFFSET UNITYSDK_OFFSET(0x1120F320)
#define CLASS_1_ADA84D92E6822794_METHOD_1_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x1120FA30)
#define CLASS_1_ADA84D92E6822794_METHOD_1_6A1F36B8E93793D4_OFFSET UNITYSDK_OFFSET(0x1120F090)
#define CLASS_1_ADA84D92E6822794_METHOD_1_6AA581BE0B50758A_OFFSET UNITYSDK_OFFSET(0x1120F660)
#define CLASS_1_ADA84D92E6822794_METHOD_1_6B2BC02998B71E49_OFFSET UNITYSDK_OFFSET(0x1120F8B0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_75A6ADEFBDDACB8E_OFFSET UNITYSDK_OFFSET(0x1120ED80)
#define CLASS_1_ADA84D92E6822794_METHOD_1_8D7AF529D633A451_OFFSET UNITYSDK_OFFSET(0x1120D720)
#define CLASS_1_ADA84D92E6822794_METHOD_1_905A15ADCD8CEDD5_OFFSET UNITYSDK_OFFSET(0x112102A0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_9348084E8BB277FA_1_OFFSET UNITYSDK_OFFSET(0x1120E6C0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_9348084E8BB277FA_OFFSET UNITYSDK_OFFSET(0x1120D9D0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_9A57F29F28168952_1_OFFSET UNITYSDK_OFFSET(0x1120F9E0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_9A57F29F28168952_OFFSET UNITYSDK_OFFSET(0x1120F860)
#define CLASS_1_ADA84D92E6822794_METHOD_1_9B682E90D47788BA_OFFSET UNITYSDK_OFFSET(0x1120DD40)
#define CLASS_1_ADA84D92E6822794_METHOD_1_9FD5E80CE5235099_OFFSET UNITYSDK_OFFSET(0x1120F810)
#define CLASS_1_ADA84D92E6822794_METHOD_1_A6543F12A6B58A69_1_OFFSET UNITYSDK_OFFSET(0x1120FF10)
#define CLASS_1_ADA84D92E6822794_METHOD_1_A6543F12A6B58A69_OFFSET UNITYSDK_OFFSET(0x1120EA20)
#define CLASS_1_ADA84D92E6822794_METHOD_1_B83F2D0D95B42CCA_OFFSET UNITYSDK_OFFSET(0x1120CF10)
#define CLASS_1_ADA84D92E6822794_METHOD_1_BD5BF13092464F58_OFFSET UNITYSDK_OFFSET(0x1120CE00)
#define CLASS_1_ADA84D92E6822794_METHOD_1_C1C5AB73E443B1B4_OFFSET UNITYSDK_OFFSET(0x1120F990)
#define CLASS_1_ADA84D92E6822794_METHOD_1_CBCE4989F5A02BA4_OFFSET UNITYSDK_OFFSET(0x1120C280)
#define CLASS_1_ADA84D92E6822794_METHOD_1_D536B193F915130D_OFFSET UNITYSDK_OFFSET(0x1120E420)
#define CLASS_1_ADA84D92E6822794_METHOD_1_D6CB6F5F3E75C218_OFFSET UNITYSDK_OFFSET(0x1120F610)
#define CLASS_1_ADA84D92E6822794_METHOD_1_D72B06D13A5A7C9F_OFFSET UNITYSDK_OFFSET(0x1120D970)
#define CLASS_1_ADA84D92E6822794_METHOD_1_D8C9D457F1AEC5A6_OFFSET UNITYSDK_OFFSET(0x1120FD40)
#define CLASS_1_ADA84D92E6822794_METHOD_1_E5FFECA12CBACED3_OFFSET UNITYSDK_OFFSET(0x1120CAE0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x1120F2E0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x11210260)
#define CLASS_1_ADA84D92E6822794__CCTOR_OFFSET UNITYSDK_OFFSET(0x1120C210)

inline static constexpr unsigned int Class_1_ADA84D92E6822794_TypeDefinitionIndex = 78198;

class Class_1_ADA84D92E6822794 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADA84D92E6822794_TypeDefinitionIndex)->GetStaticField(0x33C30);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADA84D92E6822794_TypeDefinitionIndex)->GetStaticField(0x33C38);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADA84D92E6822794_TypeDefinitionIndex)->GetStaticField(0x33C40);
	}
	static ::System::String** StaticGet_Field_1_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADA84D92E6822794_TypeDefinitionIndex)->GetStaticField(0x33C48);
	}
	static ::System::Boolean* StaticGet_Field_1_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADA84D92E6822794_TypeDefinitionIndex)->GetStaticField(0xCCA0);
	}
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_CBCE4989F5A02BA4(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_CBCE4989F5A02BA4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1E8B33C8507CF317(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_1E8B33C8507CF317_OFFSET))(a1);
	}

	static ::MoleMole::UIHadalZoneLayer_RankingRowWidgetController* Method_1_BD5BF13092464F58(::MoleMole::Level::RatingType a1, ::Class_1_5DA2E7556103D5A3_336* a2, ::MoleMole::UIBaseController* a3, ::UnityEngine::Transform* a4, ::System::Boolean a5)
	{
		return ((::MoleMole::UIHadalZoneLayer_RankingRowWidgetController*(*)(::MoleMole::Level::RatingType, ::Class_1_5DA2E7556103D5A3_336*, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_BD5BF13092464F58_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_8D7AF529D633A451(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_8D7AF529D633A451_OFFSET))(a1);
	}

	static ::MoleMole::UIHadal_InPauseRatingInfoRowWidgetController* Method_1_3426B8B66D2A55AB(::MoleMole::Level::RatingType a1, ::Class_1_5DA2E7556103D5A3_336* a2, ::MoleMole::UIBaseController* a3, ::UnityEngine::Transform* a4, ::System::Boolean a5)
	{
		return ((::MoleMole::UIHadal_InPauseRatingInfoRowWidgetController*(*)(::MoleMole::Level::RatingType, ::Class_1_5DA2E7556103D5A3_336*, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_3426B8B66D2A55AB_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::MoleMole::MissionResult Method_1_D72B06D13A5A7C9F(::Enum_3_4608E37A1B3D374A_15 a1)
	{
		return ((::MoleMole::MissionResult(*)(::Enum_3_4608E37A1B3D374A_15))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_D72B06D13A5A7C9F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9348084E8BB277FA(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_9348084E8BB277FA_OFFSET))(a1);
	}

	static ::System::Void Method_1_9B682E90D47788BA(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_9B682E90D47788BA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_34B74973E2FF3F92()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_34B74973E2FF3F92_OFFSET))();
	}

	static ::System::Void Method_1_D536B193F915130D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_D536B193F915130D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9348084E8BB277FA_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_9348084E8BB277FA_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A6543F12A6B58A69(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_A6543F12A6B58A69_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_75A6ADEFBDDACB8E(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_75A6ADEFBDDACB8E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6A1F36B8E93793D4(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_6A1F36B8E93793D4_OFFSET))(a1);
	}

	static ::System::Void Method_1_5640B50718193CC8(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_5640B50718193CC8_OFFSET))(a1);
	}

	static ::MoleMole::UIHadalZone_Common_RatingRowContext* Method_1_B83F2D0D95B42CCA(::MoleMole::Level::RatingType a1, ::Class_1_5DA2E7556103D5A3_336* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::UIHadalZone_Common_RatingRowContext*(*)(::MoleMole::Level::RatingType, ::Class_1_5DA2E7556103D5A3_336*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_B83F2D0D95B42CCA_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_6AA581BE0B50758A()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_6AA581BE0B50758A_OFFSET))();
	}

	static ::System::Int32 Method_1_9FD5E80CE5235099(::Enum_3_4608E37A1B3D374A_15 a1)
	{
		return ((::System::Int32(*)(::Enum_3_4608E37A1B3D374A_15))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_9FD5E80CE5235099_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9A57F29F28168952(::Class_3_E9FF194CA9EF9D04* a1)
	{
		return ((::System::Boolean(*)(::Class_3_E9FF194CA9EF9D04*))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_9A57F29F28168952_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6B2BC02998B71E49(::Class_3_6E9568744155E92F* a1)
	{
		return ((::System::Boolean(*)(::Class_3_6E9568744155E92F*))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_6B2BC02998B71E49_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9A57F29F28168952_1(::Class_3_6E9568744155E92F* a1)
	{
		return ((::System::Boolean(*)(::Class_3_6E9568744155E92F*))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_9A57F29F28168952_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_6916CB2AB9451DD7_OFFSET))();
	}

	static ::System::Void Method_1_E5FFECA12CBACED3(::System::Int32 a1, ::System::Int32 a2, ::Class_1_5DA2E7556103D5A3_219*& a3, ::Class_1_5DA2E7556103D5A3_336*& a4, ::Class_1_5DA2E7556103D5A3_96*& a5)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::Class_1_5DA2E7556103D5A3_219*&, ::Class_1_5DA2E7556103D5A3_336*&, ::Class_1_5DA2E7556103D5A3_96*&))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_E5FFECA12CBACED3_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_D8C9D457F1AEC5A6(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_D8C9D457F1AEC5A6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A6543F12A6B58A69_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_A6543F12A6B58A69_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Boolean Method_1_3129BDB20712C068(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_3129BDB20712C068_OFFSET))(a1);
	}

	static ::System::Void Method_1_905A15ADCD8CEDD5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::Class_1_5DA2E7556103D5A3_219*& a4, ::Class_1_5DA2E7556103D5A3_336*& a5, ::Class_1_5DA2E7556103D5A3_96*& a6, ::Class_1_5DA2E7556103D5A3_111*& a7)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::Class_1_5DA2E7556103D5A3_219*&, ::Class_1_5DA2E7556103D5A3_336*&, ::Class_1_5DA2E7556103D5A3_96*&, ::Class_1_5DA2E7556103D5A3_111*&))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_905A15ADCD8CEDD5_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_F0E307B84478A272_1_OFFSET))();
	}

	static ::System::Boolean Method_1_2C49F5B9F4E8B256(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_2C49F5B9F4E8B256_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D6CB6F5F3E75C218(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_D6CB6F5F3E75C218_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4(::Enum_3_4608E37A1B3D374A_1 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_4608E37A1B3D374A_1))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_C1C5AB73E443B1B4_OFFSET))(a1);
	}
};
