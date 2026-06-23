#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CameraShotData; }
namespace MoleMole::Cameras { class BangbooCameraEntry; }
namespace MoleMole::Cameras { class CameraOverrideTrackEntry; }
namespace MoleMole::Cameras { class ConfigCameraBangbooAdjustment; }
namespace MoleMole::Cameras { class ConfigCameraOverrideTrack; }
namespace MoleMole::Cameras { class DefaultFrameTwoShapeConfig; }
namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace MoleMole::Config { class ConfigCameraCutsceneGroups; }
namespace MoleMole::Config { class ConfigCameraCutscenes; }
namespace MoleMole::Config { class ConfigCameraLockTargetBase; }
namespace MoleMole::Config { class ConfigCameraLockTargetDatas; }
namespace MoleMole::Config { class ConfigCameraPitchPolar; }
namespace MoleMole::Config { class ConfigCameraPitchPolars; }
namespace MoleMole::Config { class ConfigCameraScreenOffset; }
namespace MoleMole::Config { class ConfigCameraScreenOffsetDatas; }
namespace MoleMole::Config { class ConfigCameraShake; }
namespace MoleMole::Config { class ConfigCameraShakes; }
namespace MoleMole::Config { class ConfigCameraStory; }
namespace MoleMole::Config { class ConfigCameraStoryDatas; }
namespace MoleMole::Config { class ConfigCameraStretch; }
namespace MoleMole::Config { class ConfigCameraStretchs; }
namespace MoleMole::Config { class ConfigCameraZoom; }
namespace MoleMole::Config { class ConfigCameraZooms; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6D3799F67B8415DA_METHOD_1_22DB4CCA85AC4D80_OFFSET UNITYSDK_OFFSET(0x1324A440)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_236F2949A2DA3E31_OFFSET UNITYSDK_OFFSET(0x1324EAC0)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_2E04E911EC2F4E81_1_OFFSET UNITYSDK_OFFSET(0x13249600)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_2E04E911EC2F4E81_2_OFFSET UNITYSDK_OFFSET(0x1324B190)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_2E04E911EC2F4E81_3_OFFSET UNITYSDK_OFFSET(0x1324BA10)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_2E04E911EC2F4E81_4_OFFSET UNITYSDK_OFFSET(0x1324DDC0)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_2E04E911EC2F4E81_5_OFFSET UNITYSDK_OFFSET(0x1324E830)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_2E04E911EC2F4E81_6_OFFSET UNITYSDK_OFFSET(0x1324F220)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0x13249380)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_3BFF817575E8DECC_OFFSET UNITYSDK_OFFSET(0x1324E6E0)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_41F968BD43BAD855_OFFSET UNITYSDK_OFFSET(0x1324A8F0)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_4434DBCBF65DA891_OFFSET UNITYSDK_OFFSET(0x1324A7B0)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_45DA178CA5F6B5A3_OFFSET UNITYSDK_OFFSET(0x1324CA30)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_462986B061852E28_OFFSET UNITYSDK_OFFSET(0x13250C10)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_4D11FA110316A313_OFFSET UNITYSDK_OFFSET(0x1324ACF0)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_53C7FECB15B7E478_OFFSET UNITYSDK_OFFSET(0x13249CE0)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_5C460B446BE8E722_OFFSET UNITYSDK_OFFSET(0x1324F4A0)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_6565BD4CA906EFAC_OFFSET UNITYSDK_OFFSET(0x1324BC90)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_6BAB42D831F467FA_OFFSET UNITYSDK_OFFSET(0x1324F5F0)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_7AA32856710C04C7_OFFSET UNITYSDK_OFFSET(0x132504B0)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_7F883226A0ED2B25_OFFSET UNITYSDK_OFFSET(0x1324E040)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_821EA1FB88A99485_OFFSET UNITYSDK_OFFSET(0x1324FD50)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_8533906206528A21_OFFSET UNITYSDK_OFFSET(0x1324ABA0)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_8E2C129DE4FC3609_1_OFFSET UNITYSDK_OFFSET(0x1324D4A0)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x1324C860)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_A09A55886BD7EC21_OFFSET UNITYSDK_OFFSET(0x1324C3F0)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_ABF113C1FB272E7F_OFFSET UNITYSDK_OFFSET(0x1324E390)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_AEE30FF405110201_OFFSET UNITYSDK_OFFSET(0x1324D350)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_B508FD1F30805E9B_1_OFFSET UNITYSDK_OFFSET(0x1324CD40)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_B508FD1F30805E9B_OFFSET UNITYSDK_OFFSET(0x1324C540)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_B87197B4FFFA424C_OFFSET UNITYSDK_OFFSET(0x1324AA40)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_BFA3B46E9E2A71F0_OFFSET UNITYSDK_OFFSET(0x1324D060)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_D089533F2507FC5C_OFFSET UNITYSDK_OFFSET(0x1324CB90)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_D7BA65B1BBDE51E0_OFFSET UNITYSDK_OFFSET(0x1324B410)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_DCCA26CCDF96182C_OFFSET UNITYSDK_OFFSET(0x1324D200)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_E56CD84D40B4ADEC_OFFSET UNITYSDK_OFFSET(0x1324D660)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_E8615CCA6AACA8F5_OFFSET UNITYSDK_OFFSET(0x13250360)
#define CLASS_1_6D3799F67B8415DA_METHOD_1_FF32C7746B81CE01_OFFSET UNITYSDK_OFFSET(0x132498A0)
#define CLASS_1_6D3799F67B8415DA__CCTOR_OFFSET UNITYSDK_OFFSET(0x13249220)

inline static constexpr unsigned int Class_1_6D3799F67B8415DA_TypeDefinitionIndex = 85490;

class Class_1_6D3799F67B8415DA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraPitchPolar*>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraPitchPolar*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D3799F67B8415DA_TypeDefinitionIndex)->GetStaticField(0x388D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraZoom*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraZoom*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D3799F67B8415DA_TypeDefinitionIndex)->GetStaticField(0x388D8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraScreenOffset*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraScreenOffset*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D3799F67B8415DA_TypeDefinitionIndex)->GetStaticField(0x388E0);
	}
	static ::MoleMole::Config::ConfigCameraStoryDatas** StaticGet_Field_1_9()
	{
		return (::MoleMole::Config::ConfigCameraStoryDatas**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D3799F67B8415DA_TypeDefinitionIndex)->GetStaticField(0x388E8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraLockTargetBase*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraLockTargetBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D3799F67B8415DA_TypeDefinitionIndex)->GetStaticField(0x388F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D3799F67B8415DA_TypeDefinitionIndex)->GetStaticField(0x388F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStretch*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStretch*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D3799F67B8415DA_TypeDefinitionIndex)->GetStaticField(0x38900);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::BangbooCameraEntry*>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::BangbooCameraEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D3799F67B8415DA_TypeDefinitionIndex)->GetStaticField(0x38908);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraShotData*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraShotData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D3799F67B8415DA_TypeDefinitionIndex)->GetStaticField(0x38910);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStory*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStory*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D3799F67B8415DA_TypeDefinitionIndex)->GetStaticField(0x38918);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::CameraOverrideTrackEntry*>** StaticGet_Field_1_10()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::CameraOverrideTrackEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D3799F67B8415DA_TypeDefinitionIndex)->GetStaticField(0x38920);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraShake*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraShake*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D3799F67B8415DA_TypeDefinitionIndex)->GetStaticField(0x38928);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81_1(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_2E04E911EC2F4E81_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FF32C7746B81CE01(::MoleMole::Config::ConfigCameraPitchPolars* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigCameraPitchPolars*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_FF32C7746B81CE01_OFFSET))(a1);
	}

	static ::System::Void Method_1_53C7FECB15B7E478(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraScreenOffsetDatas*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraScreenOffsetDatas*>*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_53C7FECB15B7E478_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigCameraStory* Method_1_22DB4CCA85AC4D80(::System::String* a1, ::Nap::NapECS::EcsWorld* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::MoleMole::Config::ConfigCameraStory*(*)(::System::String*, ::Nap::NapECS::EcsWorld*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_22DB4CCA85AC4D80_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigCameraScreenOffset* Method_1_41F968BD43BAD855(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigCameraScreenOffset*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_41F968BD43BAD855_OFFSET))(a1);
	}

	static ::MoleMole::Cameras::BangbooCameraEntry* Method_1_B87197B4FFFA424C(::System::String* a1, ::System::String*& a2)
	{
		return ((::MoleMole::Cameras::BangbooCameraEntry*(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_B87197B4FFFA424C_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigCameraLockTargetBase* Method_1_8533906206528A21(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigCameraLockTargetBase*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_8533906206528A21_OFFSET))(a1);
	}

	static ::System::Void Method_1_4D11FA110316A313(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_4D11FA110316A313_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81_2(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_2E04E911EC2F4E81_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D7BA65B1BBDE51E0(::MoleMole::Config::ConfigCameraStoryDatas* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigCameraStoryDatas*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_D7BA65B1BBDE51E0_OFFSET))(a1);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81_3(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_2E04E911EC2F4E81_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6565BD4CA906EFAC(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraZooms*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraZooms*>*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_6565BD4CA906EFAC_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_A09A55886BD7EC21(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_A09A55886BD7EC21_OFFSET))(a1);
	}

	static ::System::Void Method_1_B508FD1F30805E9B(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_B508FD1F30805E9B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::MoleMole::Cameras::CameraOverrideTrackEntry* Method_1_45DA178CA5F6B5A3(::System::String* a1, ::System::String*& a2)
	{
		return ((::MoleMole::Cameras::CameraOverrideTrackEntry*(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_45DA178CA5F6B5A3_OFFSET))(a1, a2);
	}

	static ::MoleMole::Cameras::DefaultFrameTwoShapeConfig* Method_1_D089533F2507FC5C(::System::String* a1)
	{
		return ((::MoleMole::Cameras::DefaultFrameTwoShapeConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_D089533F2507FC5C_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigCameraStory* Method_1_4434DBCBF65DA891(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigCameraStory*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_4434DBCBF65DA891_OFFSET))(a1);
	}

	static ::System::Void Method_1_B508FD1F30805E9B_1(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_B508FD1F30805E9B_1_OFFSET))(a1, a2);
	}

	static ::MoleMole::Cameras::FixedCameraConfig* Method_1_BFA3B46E9E2A71F0(::System::Int32 a1)
	{
		return ((::MoleMole::Cameras::FixedCameraConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_BFA3B46E9E2A71F0_OFFSET))(a1);
	}

	static ::MoleMole::CameraShotData* Method_1_DCCA26CCDF96182C(::System::String* a1)
	{
		return ((::MoleMole::CameraShotData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_DCCA26CCDF96182C_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigCameraStretch* Method_1_AEE30FF405110201(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigCameraStretch*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_AEE30FF405110201_OFFSET))(a1);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609_1(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_8E2C129DE4FC3609_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E56CD84D40B4ADEC(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutsceneGroups*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutsceneGroups*>*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_E56CD84D40B4ADEC_OFFSET))(a1);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81_4(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_2E04E911EC2F4E81_4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F883226A0ED2B25(::MoleMole::Cameras::ConfigCameraBangbooAdjustment* a1)
	{
		return ((::System::Void(*)(::MoleMole::Cameras::ConfigCameraBangbooAdjustment*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_7F883226A0ED2B25_OFFSET))(a1);
	}

	static ::System::Void Method_1_ABF113C1FB272E7F(::MoleMole::Cameras::ConfigCameraOverrideTrack* a1)
	{
		return ((::System::Void(*)(::MoleMole::Cameras::ConfigCameraOverrideTrack*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_ABF113C1FB272E7F_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigCameraPitchPolar* Method_1_3BFF817575E8DECC(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigCameraPitchPolar*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_3BFF817575E8DECC_OFFSET))(a1);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81_5(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_2E04E911EC2F4E81_5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_236F2949A2DA3E31(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutscenes*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutscenes*>*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_236F2949A2DA3E31_OFFSET))(a1);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81_6(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_2E04E911EC2F4E81_6_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigCameraShake* Method_1_5C460B446BE8E722(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigCameraShake*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_5C460B446BE8E722_OFFSET))(a1);
	}

	static ::System::Void Method_1_6BAB42D831F467FA(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraStretchs*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraStretchs*>*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_6BAB42D831F467FA_OFFSET))(a1);
	}

	static ::System::Void Method_1_821EA1FB88A99485(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraShakes*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraShakes*>*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_821EA1FB88A99485_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigCameraZoom* Method_1_E8615CCA6AACA8F5(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigCameraZoom*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_E8615CCA6AACA8F5_OFFSET))(a1);
	}

	static ::System::Void Method_1_7AA32856710C04C7(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraLockTargetDatas*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraLockTargetDatas*>*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_7AA32856710C04C7_OFFSET))(a1);
	}

	static ::System::Void Method_1_462986B061852E28(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_METHOD_1_462986B061852E28_OFFSET))(a1, a2);
	}
};
