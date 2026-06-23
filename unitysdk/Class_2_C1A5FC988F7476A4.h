#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C1A5FC988F7476A4_Enum_3_F891C4FF2EB291D9.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_A3CFE8F0400B82CA.h"
#include "unitysdk/Struct_2_DFE3CCC69423CB71.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7D3E1A59001AFDA6;
class Class_2_1124F1635B357D15;
class Class_2_378DC12A9E644947;
class Class_3_42E99B6238AA7291_2;
class Class_3_46898B6305AC9CE9_2;
class Class_3_A1DA0C4DC6D1529F_1;
class Class_3_C3F0E3B5AB5977AE_34;
namespace MoleMole { class SceneObjectStateWidget; }
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class StaticSceneObjectWidget; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_C1A5FC988F7476A4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13E99CE0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_038349821F206DD5_OFFSET UNITYSDK_OFFSET(0x13E9F740)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x13E99E90)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_0D1FE04D54BD7FF2_OFFSET UNITYSDK_OFFSET(0x13EA7B00)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_14B0887B6DDD3006_OFFSET UNITYSDK_OFFSET(0x13E9ABA0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_1B3D8773D1869301_OFFSET UNITYSDK_OFFSET(0x13EA36E0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_1B8139AE71A3FDE1_OFFSET UNITYSDK_OFFSET(0x13EA0D80)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0x13EA5390)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_22E26A255EB831DA_OFFSET UNITYSDK_OFFSET(0x13EA9890)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_29BA8077AA07CB4F_OFFSET UNITYSDK_OFFSET(0x13EA4C70)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x13E9AB00)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_33F2998170C3679F_OFFSET UNITYSDK_OFFSET(0x13EA21A0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_3459E40A07B7915B_OFFSET UNITYSDK_OFFSET(0x13EA1FC0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_350F1548BE252980_OFFSET UNITYSDK_OFFSET(0x13E9DFF0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_358B66F4AB7257FE_OFFSET UNITYSDK_OFFSET(0x13E9F820)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x13E9FE60)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_4884A93D44347692_OFFSET UNITYSDK_OFFSET(0x13EA2F40)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_4B967A5E70FF7EE4_OFFSET UNITYSDK_OFFSET(0x13E9D580)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x13EA0C80)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_4EABA0671C5D4363_OFFSET UNITYSDK_OFFSET(0x13EA20C0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_51BE72C14E5DDF09_1_OFFSET UNITYSDK_OFFSET(0x13EA9B90)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_51BE72C14E5DDF09_OFFSET UNITYSDK_OFFSET(0x13EA25D0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_55E0D5787DE6BEB0_OFFSET UNITYSDK_OFFSET(0x13EA1D50)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_592D566646B2F14E_OFFSET UNITYSDK_OFFSET(0x13EA9A60)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_5B8FA454F81A3609_OFFSET UNITYSDK_OFFSET(0x13E9D680)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_5C21143D796C35F7_OFFSET UNITYSDK_OFFSET(0x13EA2760)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_621E876613F53112_OFFSET UNITYSDK_OFFSET(0x13EA1FB0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_6392BADEA68B73FB_OFFSET UNITYSDK_OFFSET(0x13EA6240)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_65C58C84CF706254_OFFSET UNITYSDK_OFFSET(0x13E9CA20)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_6A621F0C23580BC6_OFFSET UNITYSDK_OFFSET(0x13EA77F0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_73E572B6404DDFDC_OFFSET UNITYSDK_OFFSET(0x13EA6BD0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_7435303307FA82B1_OFFSET UNITYSDK_OFFSET(0x13EA0840)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_7613189810C6E4A8_OFFSET UNITYSDK_OFFSET(0x13E9B860)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_768C598BFF1DF121_OFFSET UNITYSDK_OFFSET(0x13EA2A30)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x13EA7EA0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_8492E95B6B136F31_OFFSET UNITYSDK_OFFSET(0x13EA1BD0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_88E73C0ABCC4541C_OFFSET UNITYSDK_OFFSET(0x13EA8C60)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x13EA9A00)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_916868CC0CC973CA_OFFSET UNITYSDK_OFFSET(0x13E9E7C0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_932E0718231FB60C_OFFSET UNITYSDK_OFFSET(0x13EA00D0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_937D954B79349074_OFFSET UNITYSDK_OFFSET(0x13EA4B90)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_93FDBCD097650A07_OFFSET UNITYSDK_OFFSET(0x13EA75E0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_9755F057F5C9C905_OFFSET UNITYSDK_OFFSET(0x13EA2A90)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x13EA1430)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_9F813FFF1B5848F2_OFFSET UNITYSDK_OFFSET(0x13E9F750)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x13E9D9B0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_A6C2F368C29B47B4_OFFSET UNITYSDK_OFFSET(0x13E9B550)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_A8AB75EDE8976432_OFFSET UNITYSDK_OFFSET(0x13EA1710)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_AA08720895458700_OFFSET UNITYSDK_OFFSET(0x13EA61F0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_AC2203B30CADD67E_OFFSET UNITYSDK_OFFSET(0x13EA6B70)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_AD62A0428D1644F7_OFFSET UNITYSDK_OFFSET(0x13E9F2D0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_B2404DAB113F1057_OFFSET UNITYSDK_OFFSET(0x13EA78D0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_B55529803B8C3EA5_OFFSET UNITYSDK_OFFSET(0x13EA2D30)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_B77A8CFF9DB03ADE_OFFSET UNITYSDK_OFFSET(0x13E9F5E0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_BAE31916328829B3_OFFSET UNITYSDK_OFFSET(0x13EA7AF0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0x13EA8D60)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_CB52EE6D5A014F54_OFFSET UNITYSDK_OFFSET(0x13EA3C40)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0x13EA7AA0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x13EA0120)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_CE7DD1A4F75322E2_OFFSET UNITYSDK_OFFSET(0x13EA3A60)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_D958A281077FC109_OFFSET UNITYSDK_OFFSET(0x13EA51D0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_D9C8212D0CA02CC0_OFFSET UNITYSDK_OFFSET(0x13E9F6E0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_E3C215C1185CCD05_OFFSET UNITYSDK_OFFSET(0x13E9FD60)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x13E9F540)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0x13EA3330)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_EC7C65582B49BD39_OFFSET UNITYSDK_OFFSET(0x13EA0D30)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x13E9DC40)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_F34E4C09054C6E37_OFFSET UNITYSDK_OFFSET(0x13EA7C60)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_F3B5FA8EDB061C44_OFFSET UNITYSDK_OFFSET(0x13EA7C70)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_F98A71FE615A562C_OFFSET UNITYSDK_OFFSET(0x13EA02A0)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_FA7B71FAA012E53D_OFFSET UNITYSDK_OFFSET(0x13E9C760)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_FC1480F8EEC2C4B4_OFFSET UNITYSDK_OFFSET(0x13EA9520)
#define CLASS_2_C1A5FC988F7476A4_METHOD_2_FD779DD6D247D814_OFFSET UNITYSDK_OFFSET(0x13E9F950)
#define CLASS_2_C1A5FC988F7476A4_ONCREATE_OFFSET UNITYSDK_OFFSET(0x13E99F00)
#define CLASS_2_C1A5FC988F7476A4_UPDATE_OFFSET UNITYSDK_OFFSET(0x13E9A0F0)
#define CLASS_2_C1A5FC988F7476A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E9AA90)
#define CLASS_2_C1A5FC988F7476A4__CTOR_OFFSET UNITYSDK_OFFSET(0x13E9A580)

inline static constexpr unsigned int Class_2_C1A5FC988F7476A4_TypeDefinitionIndex = 54989;

class Class_2_C1A5FC988F7476A4 : public ::Foundation::SingletonDisposable_1<::Class_2_C1A5FC988F7476A4*>
{
public:
	static ::System::Int32* StaticGet_Field_2_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C1A5FC988F7476A4_TypeDefinitionIndex)->GetStaticField(0xAED0);
	}
	static ::System::Boolean* StaticGet_Field_2_19()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C1A5FC988F7476A4_TypeDefinitionIndex)->GetStaticField(0xAED4);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C1A5FC988F7476A4_TypeDefinitionIndex)->GetStaticField(0xAED5);
	}
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::StaticSceneObjectWidget*>* Field_2_10; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SceneObjectStateWidget*>* Field_2_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>* Field_2_12; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_8; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>* Field_2_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_7D3E1A59001AFDA6*>* Field_2_2; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_1124F1635B357D15*>*>* Field_2_21; // 0x40
	::UnityEngine::GameObject* Field_2_17; // 0x48
	::System::Collections::Generic::List_1<::Struct_2_A3CFE8F0400B82CA>* Field_2_22; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_7D3E1A59001AFDA6*>* Field_2_13; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>* Field_2_9; // 0x60
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_1; // 0x68
	::System::Collections::Generic::List_1<::Class_2_378DC12A9E644947*>* Field_2_20; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SceneObjectStateWidget*>* Field_2_11; // 0x78
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_14; // 0x80
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_15; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ScreenPlayer*>* Field_2_0; // 0x90
	::Class_2_C1A5FC988F7476A4_Enum_3_F891C4FF2EB291D9 Field_2_18; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_14B0887B6DDD3006(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_14B0887B6DDD3006_OFFSET))(this, a1);
	}

	::System::Void Method_2_7613189810C6E4A8(::Class_3_A1DA0C4DC6D1529F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A1DA0C4DC6D1529F_1*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_7613189810C6E4A8_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_4B967A5E70FF7EE4(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_4B967A5E70FF7EE4_OFFSET))(a1);
	}

	::System::Void Method_2_5B8FA454F81A3609(::System::Collections::Generic::List_1<::Class_3_42E99B6238AA7291_2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_42E99B6238AA7291_2*>*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_5B8FA454F81A3609_OFFSET))(this, a1);
	}

	::System::Void Method_2_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_A61A196E6AD5766D_OFFSET))(this);
	}

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Method_2_350F1548BE252980(::Class_2_C1A5FC988F7476A4_Enum_3_F891C4FF2EB291D9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C1A5FC988F7476A4_Enum_3_F891C4FF2EB291D9))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_350F1548BE252980_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_916868CC0CC973CA()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_916868CC0CC973CA_OFFSET))(this);
	}

	::System::Boolean Method_2_AD62A0428D1644F7(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_AD62A0428D1644F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_D9C8212D0CA02CC0(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_D9C8212D0CA02CC0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_038349821F206DD5()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_038349821F206DD5_OFFSET))(this);
	}

	::System::Boolean Method_2_9F813FFF1B5848F2(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_9F813FFF1B5848F2_OFFSET))(this, a1);
	}

	::System::Void Method_2_358B66F4AB7257FE(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_358B66F4AB7257FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD779DD6D247D814(::MoleMole::SceneObjectStateWidget* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_FD779DD6D247D814_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E3C215C1185CCD05(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_E3C215C1185CCD05_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_932E0718231FB60C(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_932E0718231FB60C_OFFSET))(this, a1);
	}

	::System::Void Method_2_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Int32 Method_2_F98A71FE615A562C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_F98A71FE615A562C_OFFSET))(this);
	}

	::System::Void Method_2_7435303307FA82B1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_7435303307FA82B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC7C65582B49BD39(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_EC7C65582B49BD39_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B8139AE71A3FDE1(::Class_3_46898B6305AC9CE9_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46898B6305AC9CE9_2*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_1B8139AE71A3FDE1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_9765352E01408D38_OFFSET))(this);
	}

	::System::Void Method_2_A8AB75EDE8976432(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_A8AB75EDE8976432_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>* Method_2_621E876613F53112()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_621E876613F53112_OFFSET))(this);
	}

	::System::Void Method_2_3459E40A07B7915B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_3459E40A07B7915B_OFFSET))(this, a1);
	}

	::Class_1_7D3E1A59001AFDA6* Method_2_4EABA0671C5D4363(::System::Int32 a1)
	{
		return ((::Class_1_7D3E1A59001AFDA6*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_4EABA0671C5D4363_OFFSET))(this, a1);
	}

	::System::Void Method_2_33F2998170C3679F(::MoleMole::SceneObjectStateWidget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_33F2998170C3679F_OFFSET))(this, a1);
	}

	::System::Void Method_2_51BE72C14E5DDF09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_51BE72C14E5DDF09_OFFSET))(this, a1);
	}

	::System::Void Method_2_768C598BFF1DF121(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_768C598BFF1DF121_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_9755F057F5C9C905(::System::Collections::Generic::List_1<::Class_3_42E99B6238AA7291_2*>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_42E99B6238AA7291_2*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_9755F057F5C9C905_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_B55529803B8C3EA5(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_B55529803B8C3EA5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4884A93D44347692(::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_34*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_34*>*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_4884A93D44347692_OFFSET))(this, a1);
	}

	::System::Void Method_2_E824431C22EF9361()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_E824431C22EF9361_OFFSET))(this);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DFE3CCC69423CB71>* Method_2_CB52EE6D5A014F54(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DFE3CCC69423CB71>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_CB52EE6D5A014F54_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>* Method_2_937D954B79349074(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_937D954B79349074_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_29BA8077AA07CB4F(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_29BA8077AA07CB4F_OFFSET))(this, a1);
	}

	::System::Void Method_2_D958A281077FC109(::MoleMole::SceneObjectStateWidget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_D958A281077FC109_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F3793A40D6D0F7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_1F3793A40D6D0F7F_OFFSET))(this);
	}

	::System::Void Method_2_AA08720895458700(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_AA08720895458700_OFFSET))(this, a1);
	}

	::System::Void Method_2_6392BADEA68B73FB(::UnityEngine::SceneManagement::Scene a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_6392BADEA68B73FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC2203B30CADD67E(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_AC2203B30CADD67E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_73E572B6404DDFDC(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_73E572B6404DDFDC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_93FDBCD097650A07(::UnityEngine::GameObject* a1, ::MoleMole::ScreenPlayer*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::ScreenPlayer*&))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_93FDBCD097650A07_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6A621F0C23580BC6(::UnityEngine::GameObject* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_6A621F0C23580BC6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B2404DAB113F1057(::System::Int32 a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_B2404DAB113F1057_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_CCD88C0D86A5A786_OFFSET))(this);
	}

	::System::Void Method_2_65C58C84CF706254(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_65C58C84CF706254_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_55E0D5787DE6BEB0(::System::Int32 a1, ::MoleMole::ScreenPlayer* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ScreenPlayer*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_55E0D5787DE6BEB0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8492E95B6B136F31(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_8492E95B6B136F31_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE7DD1A4F75322E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_CE7DD1A4F75322E2_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_7D3E1A59001AFDA6*>* Method_2_BAE31916328829B3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_7D3E1A59001AFDA6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_BAE31916328829B3_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_A6C2F368C29B47B4()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_A6C2F368C29B47B4_OFFSET))(this);
	}

	::System::Void Method_2_0D1FE04D54BD7FF2(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_0D1FE04D54BD7FF2_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Struct_2_A3CFE8F0400B82CA>* Method_2_F34E4C09054C6E37()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_A3CFE8F0400B82CA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_F34E4C09054C6E37_OFFSET))(this);
	}

	::System::Void Method_2_1B3D8773D1869301()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_1B3D8773D1869301_OFFSET))(this);
	}

	::System::Void Method_2_FA7B71FAA012E53D(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_FA7B71FAA012E53D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F3B5FA8EDB061C44(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_F3B5FA8EDB061C44_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_81FEFD1B22CE37A2_OFFSET))(this);
	}

	::System::Boolean Method_2_88E73C0ABCC4541C(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_88E73C0ABCC4541C_OFFSET))(this, a1);
	}

	::System::Void Method_2_B77A8CFF9DB03ADE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_B77A8CFF9DB03ADE_OFFSET))(this, a1);
	}

	::System::Void Method_2_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_BFB00779E460D7A3_OFFSET))(this);
	}

	::System::Void Method_2_FC1480F8EEC2C4B4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_FC1480F8EEC2C4B4_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_22E26A255EB831DA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_22E26A255EB831DA_OFFSET))(this);
	}

	::System::Void Method_2_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_2_5C21143D796C35F7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_5C21143D796C35F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_592D566646B2F14E(::MoleMole::SceneObjectStateWidget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_592D566646B2F14E_OFFSET))(this, a1);
	}

	::System::Void Method_2_51BE72C14E5DDF09_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C1A5FC988F7476A4_METHOD_2_51BE72C14E5DDF09_1_OFFSET))(this, a1);
	}
};
