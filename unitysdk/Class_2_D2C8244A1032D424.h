#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D2C8244A1032D424_Enum_3_F891C4FF2EB291D9.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7D3E1A59001AFDA6;
class Class_2_1124F1635B357D15;
class Class_2_378DC12A9E644947;
class Class_3_1CE500D7108AED56_1;
class Class_3_42E99B6238AA7291_2;
class Class_3_46898B6305AC9CE9_3;
class Class_3_C3F0E3B5AB5977AE_44;
namespace MoleMole { class SceneObjectStateWidget; }
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class StaticSceneObjectWidget; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_D2C8244A1032D424_DISPOSE_OFFSET UNITYSDK_OFFSET(0x120951E0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_038349821F206DD5_OFFSET UNITYSDK_OFFSET(0x1209E820)
#define CLASS_2_D2C8244A1032D424_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x12095390)
#define CLASS_2_D2C8244A1032D424_METHOD_2_0D1FE04D54BD7FF2_OFFSET UNITYSDK_OFFSET(0x1209D530)
#define CLASS_2_D2C8244A1032D424_METHOD_2_14B0887B6DDD3006_OFFSET UNITYSDK_OFFSET(0x1209EA20)
#define CLASS_2_D2C8244A1032D424_METHOD_2_16F41D4D0D2CA1FA_OFFSET UNITYSDK_OFFSET(0x1209A4A0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x12099F60)
#define CLASS_2_D2C8244A1032D424_METHOD_2_1B3D8773D1869301_OFFSET UNITYSDK_OFFSET(0x12095FC0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_1B8139AE71A3FDE1_OFFSET UNITYSDK_OFFSET(0x1209D690)
#define CLASS_2_D2C8244A1032D424_METHOD_2_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x120A0130)
#define CLASS_2_D2C8244A1032D424_METHOD_2_22E26A255EB831DA_OFFSET UNITYSDK_OFFSET(0x1209C460)
#define CLASS_2_D2C8244A1032D424_METHOD_2_29BA8077AA07CB4F_OFFSET UNITYSDK_OFFSET(0x120A0FA0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x120A1500)
#define CLASS_2_D2C8244A1032D424_METHOD_2_33F2998170C3679F_OFFSET UNITYSDK_OFFSET(0x1209AA90)
#define CLASS_2_D2C8244A1032D424_METHOD_2_350F1548BE252980_OFFSET UNITYSDK_OFFSET(0x12096390)
#define CLASS_2_D2C8244A1032D424_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x1209F590)
#define CLASS_2_D2C8244A1032D424_METHOD_2_4884A93D44347692_OFFSET UNITYSDK_OFFSET(0x12098870)
#define CLASS_2_D2C8244A1032D424_METHOD_2_4B967A5E70FF7EE4_OFFSET UNITYSDK_OFFSET(0x12098770)
#define CLASS_2_D2C8244A1032D424_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1209F3D0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_4EABA0671C5D4363_OFFSET UNITYSDK_OFFSET(0x1209E3B0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_51BE72C14E5DDF09_1_OFFSET UNITYSDK_OFFSET(0x1209E890)
#define CLASS_2_D2C8244A1032D424_METHOD_2_51BE72C14E5DDF09_OFFSET UNITYSDK_OFFSET(0x1209B820)
#define CLASS_2_D2C8244A1032D424_METHOD_2_592D566646B2F14E_OFFSET UNITYSDK_OFFSET(0x1209D400)
#define CLASS_2_D2C8244A1032D424_METHOD_2_5B8FA454F81A3609_OFFSET UNITYSDK_OFFSET(0x120A1E90)
#define CLASS_2_D2C8244A1032D424_METHOD_2_5C21143D796C35F7_OFFSET UNITYSDK_OFFSET(0x1209B9B0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_621E876613F53112_OFFSET UNITYSDK_OFFSET(0x1209B1E0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_6392BADEA68B73FB_OFFSET UNITYSDK_OFFSET(0x1209F800)
#define CLASS_2_D2C8244A1032D424_METHOD_2_65C58C84CF706254_OFFSET UNITYSDK_OFFSET(0x12097C30)
#define CLASS_2_D2C8244A1032D424_METHOD_2_73E572B6404DDFDC_OFFSET UNITYSDK_OFFSET(0x120A21B0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_7435303307FA82B1_OFFSET UNITYSDK_OFFSET(0x1209DD40)
#define CLASS_2_D2C8244A1032D424_METHOD_2_754748ACD747E361_OFFSET UNITYSDK_OFFSET(0x120A15A0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x1209C5D0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_88E73C0ABCC4541C_OFFSET UNITYSDK_OFFSET(0x1209E710)
#define CLASS_2_D2C8244A1032D424_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x1209D3A0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_8C68B593FC7099A7_OFFSET UNITYSDK_OFFSET(0x1209A850)
#define CLASS_2_D2C8244A1032D424_METHOD_2_932E0718231FB60C_OFFSET UNITYSDK_OFFSET(0x1209B0B0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_937D954B79349074_OFFSET UNITYSDK_OFFSET(0x1209B100)
#define CLASS_2_D2C8244A1032D424_METHOD_2_9755F057F5C9C905_OFFSET UNITYSDK_OFFSET(0x1209E490)
#define CLASS_2_D2C8244A1032D424_METHOD_2_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x12097950)
#define CLASS_2_D2C8244A1032D424_METHOD_2_9F813FFF1B5848F2_OFFSET UNITYSDK_OFFSET(0x1209F4D0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x1209B240)
#define CLASS_2_D2C8244A1032D424_METHOD_2_A6C2F368C29B47B4_OFFSET UNITYSDK_OFFSET(0x12096F30)
#define CLASS_2_D2C8244A1032D424_METHOD_2_AA08720895458700_OFFSET UNITYSDK_OFFSET(0x1209F480)
#define CLASS_2_D2C8244A1032D424_METHOD_2_AC2203B30CADD67E_OFFSET UNITYSDK_OFFSET(0x1209E830)
#define CLASS_2_D2C8244A1032D424_METHOD_2_B2404DAB113F1057_OFFSET UNITYSDK_OFFSET(0x12099D80)
#define CLASS_2_D2C8244A1032D424_METHOD_2_B77A8CFF9DB03ADE_OFFSET UNITYSDK_OFFSET(0x1209A3A0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_B7DF4E6E7DB52EAA_OFFSET UNITYSDK_OFFSET(0x1209B530)
#define CLASS_2_D2C8244A1032D424_METHOD_2_BAE31916328829B3_OFFSET UNITYSDK_OFFSET(0x1209E810)
#define CLASS_2_D2C8244A1032D424_METHOD_2_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0x1209BC80)
#define CLASS_2_D2C8244A1032D424_METHOD_2_C61B3E967EE99517_OFFSET UNITYSDK_OFFSET(0x12096B70)
#define CLASS_2_D2C8244A1032D424_METHOD_2_C7E039FB0453A06F_OFFSET UNITYSDK_OFFSET(0x12096D30)
#define CLASS_2_D2C8244A1032D424_METHOD_2_C984F74D042AAFA9_OFFSET UNITYSDK_OFFSET(0x12098C50)
#define CLASS_2_D2C8244A1032D424_METHOD_2_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0x12096340)
#define CLASS_2_D2C8244A1032D424_METHOD_2_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x12097240)
#define CLASS_2_D2C8244A1032D424_METHOD_2_CE7DD1A4F75322E2_OFFSET UNITYSDK_OFFSET(0x120973C0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_D958A281077FC109_OFFSET UNITYSDK_OFFSET(0x1209B660)
#define CLASS_2_D2C8244A1032D424_METHOD_2_D9C8212D0CA02CC0_OFFSET UNITYSDK_OFFSET(0x1209B4D0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_E3C215C1185CCD05_OFFSET UNITYSDK_OFFSET(0x12096E30)
#define CLASS_2_D2C8244A1032D424_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x1209A300)
#define CLASS_2_D2C8244A1032D424_METHOD_2_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0x120975A0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_EC7C65582B49BD39_OFFSET UNITYSDK_OFFSET(0x1209B1F0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_F3B5FA8EDB061C44_OFFSET UNITYSDK_OFFSET(0x1209E180)
#define CLASS_2_D2C8244A1032D424_METHOD_2_F98A71FE615A562C_OFFSET UNITYSDK_OFFSET(0x12099530)
#define CLASS_2_D2C8244A1032D424_METHOD_2_FC5D5CDBAE1F0404_OFFSET UNITYSDK_OFFSET(0x1209AEC0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_FD779DD6D247D814_OFFSET UNITYSDK_OFFSET(0x12099970)
#define CLASS_2_D2C8244A1032D424_ONCREATE_OFFSET UNITYSDK_OFFSET(0x12095400)
#define CLASS_2_D2C8244A1032D424_UPDATE_OFFSET UNITYSDK_OFFSET(0x120955F0)
#define CLASS_2_D2C8244A1032D424__CCTOR_OFFSET UNITYSDK_OFFSET(0x12095F50)
#define CLASS_2_D2C8244A1032D424__CTOR_OFFSET UNITYSDK_OFFSET(0x12095A80)

inline static constexpr unsigned int Class_2_D2C8244A1032D424_TypeDefinitionIndex = 52967;

class Class_2_D2C8244A1032D424 : public ::Foundation::SingletonDisposable_1<::Class_2_D2C8244A1032D424*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_18()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D2C8244A1032D424_TypeDefinitionIndex)->GetStaticField(0x11150);
	}
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D2C8244A1032D424_TypeDefinitionIndex)->GetStaticField(0x11151);
	}
	static ::System::Int32* StaticGet_Field_2_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D2C8244A1032D424_TypeDefinitionIndex)->GetStaticField(0x11154);
	}
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ScreenPlayer*>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_378DC12A9E644947*>* Field_2_19; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_13; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SceneObjectStateWidget*>* Field_2_10; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_1124F1635B357D15*>*>* Field_2_20; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_7D3E1A59001AFDA6*>* Field_2_1; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_14; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SceneObjectStateWidget*>* Field_2_2; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>* Field_2_8; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_7D3E1A59001AFDA6*>* Field_2_12; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::StaticSceneObjectWidget*>* Field_2_9; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>* Field_2_3; // 0x70
	::UnityEngine::GameObject* Field_2_16; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>* Field_2_11; // 0x80
	::Class_2_D2C8244A1032D424_Enum_3_F891C4FF2EB291D9 Field_2_17; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B3D8773D1869301()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_1B3D8773D1869301_OFFSET))(this);
	}

	::System::Void Method_2_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_CCD88C0D86A5A786_OFFSET))(this);
	}

	::System::Void Method_2_C61B3E967EE99517(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_C61B3E967EE99517_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E3C215C1185CCD05(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_E3C215C1185CCD05_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_A6C2F368C29B47B4()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_A6C2F368C29B47B4_OFFSET))(this);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_2_65C58C84CF706254(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_65C58C84CF706254_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4884A93D44347692(::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_44*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_44*>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_4884A93D44347692_OFFSET))(this, a1);
	}

	::System::Void Method_2_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_9765352E01408D38_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_1124F1635B357D15*>* Method_2_C984F74D042AAFA9()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1124F1635B357D15*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_C984F74D042AAFA9_OFFSET))(this);
	}

	::System::Int32 Method_2_F98A71FE615A562C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_F98A71FE615A562C_OFFSET))(this);
	}

	::System::Void Method_2_FD779DD6D247D814(::MoleMole::SceneObjectStateWidget* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_FD779DD6D247D814_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B2404DAB113F1057(::System::Int32 a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_B2404DAB113F1057_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_16F41D4D0D2CA1FA(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_16F41D4D0D2CA1FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33F2998170C3679F(::MoleMole::SceneObjectStateWidget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_33F2998170C3679F_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC5D5CDBAE1F0404(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_FC5D5CDBAE1F0404_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_4B967A5E70FF7EE4(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_4B967A5E70FF7EE4_OFFSET))(a1);
	}

	::System::Void Method_2_350F1548BE252980(::Class_2_D2C8244A1032D424_Enum_3_F891C4FF2EB291D9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D2C8244A1032D424_Enum_3_F891C4FF2EB291D9))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_350F1548BE252980_OFFSET))(this, a1);
	}

	::System::Void Method_2_932E0718231FB60C(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_932E0718231FB60C_OFFSET))(this, a1);
	}

	::System::Void Method_2_E824431C22EF9361()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_E824431C22EF9361_OFFSET))(this);
	}

	::System::Void Method_2_C7E039FB0453A06F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_C7E039FB0453A06F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>* Method_2_937D954B79349074(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_937D954B79349074_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>* Method_2_621E876613F53112()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_621E876613F53112_OFFSET))(this);
	}

	::System::Void Method_2_EC7C65582B49BD39(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_EC7C65582B49BD39_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CE7DD1A4F75322E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_CE7DD1A4F75322E2_OFFSET))(this);
	}

	::System::Void Method_2_D9C8212D0CA02CC0(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_D9C8212D0CA02CC0_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C68B593FC7099A7(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_8C68B593FC7099A7_OFFSET))(this, a1);
	}

	::System::Void Method_2_B7DF4E6E7DB52EAA(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_B7DF4E6E7DB52EAA_OFFSET))(this, a1);
	}

	::System::Void Method_2_D958A281077FC109(::MoleMole::SceneObjectStateWidget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_D958A281077FC109_OFFSET))(this, a1);
	}

	::System::Void Method_2_51BE72C14E5DDF09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_51BE72C14E5DDF09_OFFSET))(this, a1);
	}

	::System::Void Method_2_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_BFB00779E460D7A3_OFFSET))(this);
	}

	::System::Int32 Method_2_22E26A255EB831DA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_22E26A255EB831DA_OFFSET))(this);
	}

	::System::Void Method_2_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_2_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_81FEFD1B22CE37A2_OFFSET))(this);
	}

	::System::Void Method_2_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_2_592D566646B2F14E(::MoleMole::SceneObjectStateWidget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_592D566646B2F14E_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D1FE04D54BD7FF2(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_0D1FE04D54BD7FF2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B8139AE71A3FDE1(::Class_3_46898B6305AC9CE9_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46898B6305AC9CE9_3*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_1B8139AE71A3FDE1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5C21143D796C35F7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_5C21143D796C35F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F3B5FA8EDB061C44(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_F3B5FA8EDB061C44_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_7D3E1A59001AFDA6* Method_2_4EABA0671C5D4363(::System::Int32 a1)
	{
		return ((::Class_1_7D3E1A59001AFDA6*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_4EABA0671C5D4363_OFFSET))(this, a1);
	}

	::System::Void Method_2_9755F057F5C9C905(::System::Collections::Generic::List_1<::Class_3_42E99B6238AA7291_2*>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_42E99B6238AA7291_2*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_9755F057F5C9C905_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_88E73C0ABCC4541C(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_88E73C0ABCC4541C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_7D3E1A59001AFDA6*>* Method_2_BAE31916328829B3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_7D3E1A59001AFDA6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_BAE31916328829B3_OFFSET))(this);
	}

	::System::Void Method_2_B77A8CFF9DB03ADE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_B77A8CFF9DB03ADE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_038349821F206DD5()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_038349821F206DD5_OFFSET))(this);
	}

	::System::Void Method_2_AC2203B30CADD67E(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_AC2203B30CADD67E_OFFSET))(this, a1);
	}

	::System::Void Method_2_51BE72C14E5DDF09_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_51BE72C14E5DDF09_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_AA08720895458700(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_AA08720895458700_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9F813FFF1B5848F2(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_9F813FFF1B5848F2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_14B0887B6DDD3006(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_14B0887B6DDD3006_OFFSET))(this, a1);
	}

	::System::Void Method_2_6392BADEA68B73FB(::UnityEngine::SceneManagement::Scene a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_6392BADEA68B73FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Int32 Method_2_29BA8077AA07CB4F(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_29BA8077AA07CB4F_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_754748ACD747E361(::Class_3_1CE500D7108AED56_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1CE500D7108AED56_1*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_754748ACD747E361_OFFSET))(this, a1);
	}

	::System::Void Method_2_7435303307FA82B1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_7435303307FA82B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B8FA454F81A3609(::System::Collections::Generic::List_1<::Class_3_42E99B6238AA7291_2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_42E99B6238AA7291_2*>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_5B8FA454F81A3609_OFFSET))(this, a1);
	}

	::System::Void Method_2_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_A61A196E6AD5766D_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_73E572B6404DDFDC(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_73E572B6404DDFDC_OFFSET))(this, a1);
	}
};
