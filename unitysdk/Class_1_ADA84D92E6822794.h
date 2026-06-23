#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_21.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_23.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/MissionResult.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_386;
class Class_1_5DA2E7556103D5A3_399;
class Class_1_5DA2E7556103D5A3_401;
class Class_1_5DA2E7556103D5A3_414;
class Class_3_6E9568744155E92F;
class Class_3_E9FF194CA9EF9D04;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIHadalZoneLayer_RankingRowWidgetController; }
namespace MoleMole { class UIHadalZone_Common_RatingRowContext; }
namespace MoleMole { class UIHadal_InPauseRatingInfoRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_ADA84D92E6822794_METHOD_1_1E8B33C8507CF317_OFFSET UNITYSDK_OFFSET(0x159BC200)
#define CLASS_1_ADA84D92E6822794_METHOD_1_2C49F5B9F4E8B256_OFFSET UNITYSDK_OFFSET(0x159BBCE0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_3129BDB20712C068_OFFSET UNITYSDK_OFFSET(0x159BC680)
#define CLASS_1_ADA84D92E6822794_METHOD_1_3426B8B66D2A55AB_OFFSET UNITYSDK_OFFSET(0x159BDDF0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_34B74973E2FF3F92_OFFSET UNITYSDK_OFFSET(0x159BBF10)
#define CLASS_1_ADA84D92E6822794_METHOD_1_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x159BB3B0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_5640B50718193CC8_OFFSET UNITYSDK_OFFSET(0x159BB9F0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_6A1F36B8E93793D4_OFFSET UNITYSDK_OFFSET(0x159BC5B0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_6AA581BE0B50758A_OFFSET UNITYSDK_OFFSET(0x159BDA10)
#define CLASS_1_ADA84D92E6822794_METHOD_1_6B2BC02998B71E49_OFFSET UNITYSDK_OFFSET(0x159BB0A0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_75A6ADEFBDDACB8E_OFFSET UNITYSDK_OFFSET(0x159BD700)
#define CLASS_1_ADA84D92E6822794_METHOD_1_895F243A3A7894E0_OFFSET UNITYSDK_OFFSET(0x159BA4F0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_8D7AF529D633A451_OFFSET UNITYSDK_OFFSET(0x159BB220)
#define CLASS_1_ADA84D92E6822794_METHOD_1_905A15ADCD8CEDD5_OFFSET UNITYSDK_OFFSET(0x159BDBC0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_9348084E8BB277FA_1_OFFSET UNITYSDK_OFFSET(0x159BDF00)
#define CLASS_1_ADA84D92E6822794_METHOD_1_9348084E8BB277FA_OFFSET UNITYSDK_OFFSET(0x159BD3A0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_9A57F29F28168952_1_OFFSET UNITYSDK_OFFSET(0x159BB360)
#define CLASS_1_ADA84D92E6822794_METHOD_1_9A57F29F28168952_OFFSET UNITYSDK_OFFSET(0x159BB1D0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_9B682E90D47788BA_OFFSET UNITYSDK_OFFSET(0x159B9FF0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_9FD5E80CE5235099_OFFSET UNITYSDK_OFFSET(0x159BE270)
#define CLASS_1_ADA84D92E6822794_METHOD_1_A6543F12A6B58A69_1_OFFSET UNITYSDK_OFFSET(0x159BD050)
#define CLASS_1_ADA84D92E6822794_METHOD_1_A6543F12A6B58A69_OFFSET UNITYSDK_OFFSET(0x159BC9D0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_BD5BF13092464F58_OFFSET UNITYSDK_OFFSET(0x159BA3E0)
#define CLASS_1_ADA84D92E6822794_METHOD_1_C1C5AB73E443B1B4_OFFSET UNITYSDK_OFFSET(0x159BB180)
#define CLASS_1_ADA84D92E6822794_METHOD_1_CBCE4989F5A02BA4_OFFSET UNITYSDK_OFFSET(0x159BCD30)
#define CLASS_1_ADA84D92E6822794_METHOD_1_D536B193F915130D_OFFSET UNITYSDK_OFFSET(0x159BB760)
#define CLASS_1_ADA84D92E6822794_METHOD_1_D6CB6F5F3E75C218_OFFSET UNITYSDK_OFFSET(0x159BB710)
#define CLASS_1_ADA84D92E6822794_METHOD_1_D72B06D13A5A7C9F_OFFSET UNITYSDK_OFFSET(0x159BC510)
#define CLASS_1_ADA84D92E6822794_METHOD_1_D8C9D457F1AEC5A6_OFFSET UNITYSDK_OFFSET(0x159BC800)
#define CLASS_1_ADA84D92E6822794_METHOD_1_E5FFECA12CBACED3_OFFSET UNITYSDK_OFFSET(0x159BAD40)
#define CLASS_1_ADA84D92E6822794_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x159BC570)
#define CLASS_1_ADA84D92E6822794_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x159BB060)
#define CLASS_1_ADA84D92E6822794__CCTOR_OFFSET UNITYSDK_OFFSET(0x159B9F80)

inline static constexpr unsigned int Class_1_ADA84D92E6822794_TypeDefinitionIndex = 76073;

class Class_1_ADA84D92E6822794 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADA84D92E6822794_TypeDefinitionIndex)->GetStaticField(0x487A0);
	}
	static ::System::String** StaticGet_Field_1_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADA84D92E6822794_TypeDefinitionIndex)->GetStaticField(0x487A8);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADA84D92E6822794_TypeDefinitionIndex)->GetStaticField(0x487B0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADA84D92E6822794_TypeDefinitionIndex)->GetStaticField(0x487B8);
	}
	static ::System::Boolean* StaticGet_Field_1_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADA84D92E6822794_TypeDefinitionIndex)->GetStaticField(0x11590);
	}
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_9B682E90D47788BA(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_9B682E90D47788BA_OFFSET))(a1, a2);
	}

	static ::MoleMole::UIHadalZoneLayer_RankingRowWidgetController* Method_1_BD5BF13092464F58(::MoleMole::Level::RatingType a1, ::Class_1_5DA2E7556103D5A3_399* a2, ::MoleMole::UIBaseController* a3, ::UnityEngine::Transform* a4, ::System::Boolean a5)
	{
		return ((::MoleMole::UIHadalZoneLayer_RankingRowWidgetController*(*)(::MoleMole::Level::RatingType, ::Class_1_5DA2E7556103D5A3_399*, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_BD5BF13092464F58_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_E5FFECA12CBACED3(::System::Int32 a1, ::System::Int32 a2, ::Class_1_5DA2E7556103D5A3_401*& a3, ::Class_1_5DA2E7556103D5A3_399*& a4, ::Class_1_5DA2E7556103D5A3_414*& a5)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::Class_1_5DA2E7556103D5A3_401*&, ::Class_1_5DA2E7556103D5A3_399*&, ::Class_1_5DA2E7556103D5A3_414*&))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_E5FFECA12CBACED3_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Boolean Method_1_6B2BC02998B71E49(::Class_3_6E9568744155E92F* a1)
	{
		return ((::System::Boolean(*)(::Class_3_6E9568744155E92F*))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_6B2BC02998B71E49_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9A57F29F28168952(::Class_3_E9FF194CA9EF9D04* a1)
	{
		return ((::System::Boolean(*)(::Class_3_E9FF194CA9EF9D04*))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_9A57F29F28168952_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_8D7AF529D633A451(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_8D7AF529D633A451_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9A57F29F28168952_1(::Class_3_6E9568744155E92F* a1)
	{
		return ((::System::Boolean(*)(::Class_3_6E9568744155E92F*))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_9A57F29F28168952_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_4805283D59625FD9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_4805283D59625FD9_OFFSET))();
	}

	static ::System::Void Method_1_D6CB6F5F3E75C218(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_D6CB6F5F3E75C218_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D536B193F915130D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_D536B193F915130D_OFFSET))(a1);
	}

	static ::System::Void Method_1_5640B50718193CC8(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_5640B50718193CC8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2C49F5B9F4E8B256(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_2C49F5B9F4E8B256_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_34B74973E2FF3F92()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_34B74973E2FF3F92_OFFSET))();
	}

	static ::MoleMole::MissionResult Method_1_D72B06D13A5A7C9F(::Enum_3_4608E37A1B3D374A_21 a1)
	{
		return ((::MoleMole::MissionResult(*)(::Enum_3_4608E37A1B3D374A_21))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_D72B06D13A5A7C9F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_F0E307B84478A272_1_OFFSET))();
	}

	static ::System::Boolean Method_1_6A1F36B8E93793D4(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_6A1F36B8E93793D4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D8C9D457F1AEC5A6(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_D8C9D457F1AEC5A6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A6543F12A6B58A69(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_A6543F12A6B58A69_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_CBCE4989F5A02BA4(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_CBCE4989F5A02BA4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A6543F12A6B58A69_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_A6543F12A6B58A69_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_3129BDB20712C068(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_3129BDB20712C068_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9348084E8BB277FA(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_9348084E8BB277FA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_75A6ADEFBDDACB8E(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_75A6ADEFBDDACB8E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4(::Enum_3_4608E37A1B3D374A_23 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_4608E37A1B3D374A_23))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_C1C5AB73E443B1B4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6AA581BE0B50758A()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_6AA581BE0B50758A_OFFSET))();
	}

	static ::System::Void Method_1_905A15ADCD8CEDD5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::Class_1_5DA2E7556103D5A3_401*& a4, ::Class_1_5DA2E7556103D5A3_399*& a5, ::Class_1_5DA2E7556103D5A3_414*& a6, ::Class_1_5DA2E7556103D5A3_386*& a7)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::Class_1_5DA2E7556103D5A3_401*&, ::Class_1_5DA2E7556103D5A3_399*&, ::Class_1_5DA2E7556103D5A3_414*&, ::Class_1_5DA2E7556103D5A3_386*&))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_905A15ADCD8CEDD5_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::MoleMole::UIHadal_InPauseRatingInfoRowWidgetController* Method_1_3426B8B66D2A55AB(::MoleMole::Level::RatingType a1, ::Class_1_5DA2E7556103D5A3_399* a2, ::MoleMole::UIBaseController* a3, ::UnityEngine::Transform* a4, ::System::Boolean a5)
	{
		return ((::MoleMole::UIHadal_InPauseRatingInfoRowWidgetController*(*)(::MoleMole::Level::RatingType, ::Class_1_5DA2E7556103D5A3_399*, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_3426B8B66D2A55AB_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::MoleMole::UIHadalZone_Common_RatingRowContext* Method_1_895F243A3A7894E0(::MoleMole::Level::RatingType a1, ::Class_1_5DA2E7556103D5A3_399* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::UIHadalZone_Common_RatingRowContext*(*)(::MoleMole::Level::RatingType, ::Class_1_5DA2E7556103D5A3_399*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_895F243A3A7894E0_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_9348084E8BB277FA_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_9348084E8BB277FA_1_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_9FD5E80CE5235099(::Enum_3_4608E37A1B3D374A_21 a1)
	{
		return ((::System::Int32(*)(::Enum_3_4608E37A1B3D374A_21))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_9FD5E80CE5235099_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1E8B33C8507CF317(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA84D92E6822794_METHOD_1_1E8B33C8507CF317_OFFSET))(a1);
	}
};
