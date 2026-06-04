#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_77D77BC5957EDBB1_Class_1_0768C4BEC10E6AAD;
class Class_1_B2388953D46D7EF4;
class Class_2_898DC1EA1181F3B8;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateOrbitCruiseConfig; }
namespace RPG::Client { class CameraFightStateOrbitCruiseConfigData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_77D77BC5957EDBB1_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x1364B590)
#define CLASS_1_77D77BC5957EDBB1_GET_MARKDISABLE_OFFSET UNITYSDK_OFFSET(0x13649180)
#define CLASS_1_77D77BC5957EDBB1_INIT_OFFSET UNITYSDK_OFFSET(0x136491A0)
#define CLASS_1_77D77BC5957EDBB1_METHOD_1_0CC1EA4372265873_OFFSET UNITYSDK_OFFSET(0x13649410)
#define CLASS_1_77D77BC5957EDBB1_METHOD_1_1B8A7D152370AD2C_OFFSET UNITYSDK_OFFSET(0x1364AF00)
#define CLASS_1_77D77BC5957EDBB1_METHOD_1_1D897375118954FE_OFFSET UNITYSDK_OFFSET(0x1364C730)
#define CLASS_1_77D77BC5957EDBB1_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1364B5D0)
#define CLASS_1_77D77BC5957EDBB1_METHOD_1_49085A3FC0F13F5E_OFFSET UNITYSDK_OFFSET(0x13649240)
#define CLASS_1_77D77BC5957EDBB1_METHOD_1_5F1978205E005603_OFFSET UNITYSDK_OFFSET(0x136497B0)
#define CLASS_1_77D77BC5957EDBB1_METHOD_1_5F9F5EB6A660BE4E_OFFSET UNITYSDK_OFFSET(0x1364B640)
#define CLASS_1_77D77BC5957EDBB1_METHOD_1_862ACF0AE239B7AE_OFFSET UNITYSDK_OFFSET(0x1364A4A0)
#define CLASS_1_77D77BC5957EDBB1_METHOD_1_920DE8F4A8DAE754_OFFSET UNITYSDK_OFFSET(0x1364A440)
#define CLASS_1_77D77BC5957EDBB1_METHOD_1_999B8B439422C7E7_OFFSET UNITYSDK_OFFSET(0x1364C890)
#define CLASS_1_77D77BC5957EDBB1_METHOD_1_CC324EA2E7C18FE7_OFFSET UNITYSDK_OFFSET(0x13649900)
#define CLASS_1_77D77BC5957EDBB1_METHOD_1_E1C8EBE68635D7A7_OFFSET UNITYSDK_OFFSET(0x13649800)
#define CLASS_1_77D77BC5957EDBB1_METHOD_1_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0x13649B50)
#define CLASS_1_77D77BC5957EDBB1_REFRESH_OFFSET UNITYSDK_OFFSET(0x13649C10)
#define CLASS_1_77D77BC5957EDBB1_RESET_OFFSET UNITYSDK_OFFSET(0x136495B0)
#define CLASS_1_77D77BC5957EDBB1_SET_MARKDISABLE_OFFSET UNITYSDK_OFFSET(0x13649190)
#define CLASS_1_77D77BC5957EDBB1__CTOR_OFFSET UNITYSDK_OFFSET(0x1364C920)

inline static constexpr unsigned int Class_1_77D77BC5957EDBB1_TypeDefinitionIndex = 65066;

class Class_1_77D77BC5957EDBB1 : public ::System::Object
{
public:
	static ::RPG::Client::CameraFightStateOrbitCruiseConfig** StaticGet_Field_1_0()
	{
		return (::RPG::Client::CameraFightStateOrbitCruiseConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77D77BC5957EDBB1_TypeDefinitionIndex)->GetStaticField(0x6AFB0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_77D77BC5957EDBB1_TypeDefinitionIndex)->GetStaticField(0x14440);
	}
	::UnityEngine::Transform* Field_1_2; // 0x10
	::RPG::Client::CameraFightStateOrbitCruiseConfigData* Field_1_3; // 0x18
	::System::String* Field_1_4; // 0x20
	::Class_1_B2388953D46D7EF4* Field_1_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* Field_1_6; // 0x30
	::UnityEngine::Transform* Field_1_7; // 0x38
	::RPG::Client::CameraFightStateOrbitCruiseConfig* Field_1_8; // 0x40
	::Class_2_898DC1EA1181F3B8* Field_1_9; // 0x48
	::UnityEngine::AnimationCurve* Field_1_10; // 0x50
	::Class_1_77D77BC5957EDBB1_Class_1_0768C4BEC10E6AAD* Field_1_11; // 0x58
	::UnityEngine::Transform* Field_1_12; // 0x60
	::Class_1_B2388953D46D7EF4* Field_1_13; // 0x68
	::RPG::Client::CameraDataAndFlags* Field_1_14; // 0x70
	::System::Single Field_1_15; // 0x78
	::System::Single Field_1_16; // 0x7C
	::UnityEngine::Vector3 Field_1_17; // 0x80
	::System::Int32 Field_1_18; // 0x8C
	::UnityEngine::Vector3 Field_1_19; // 0x90
	::System::Single Field_1_20; // 0x9C
	::RPG::MVector3 Field_1_21; // 0xA0
	::RPG::MVector3 Field_1_22; // 0xAC
	::System::Boolean Field_1_23; // 0xB8
	::System::Boolean Field_1_24; // 0xB9
	::System::Boolean _MarkDisable_k__BackingField; // 0xBA
	::System::Boolean Field_1_26; // 0xBB
	::UnityEngine::Vector3 Field_1_27; // 0xBC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1__CTOR_OFFSET))(this);
	}

	::System::Boolean get_MarkDisable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_GET_MARKDISABLE_OFFSET))(this);
	}

	::System::Void set_MarkDisable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_SET_MARKDISABLE_OFFSET))(this, a1);
	}

	::System::Void Init(::Class_2_898DC1EA1181F3B8* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_898DC1EA1181F3B8*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_49085A3FC0F13F5E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_METHOD_1_49085A3FC0F13F5E_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* Method_1_0CC1EA4372265873(::System::String* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_METHOD_1_0CC1EA4372265873_OFFSET))(this, a1);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_RESET_OFFSET))(this);
	}

	::System::Void Method_1_5F1978205E005603(::RPG::Client::CameraFightStateOrbitCruiseConfigData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFightStateOrbitCruiseConfigData*))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_METHOD_1_5F1978205E005603_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_E1C8EBE68635D7A7()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_METHOD_1_E1C8EBE68635D7A7_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_1_CC324EA2E7C18FE7(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_METHOD_1_CC324EA2E7C18FE7_OFFSET))(a1, a2);
	}

	::System::Void Method_1_ED79705457B92B5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_METHOD_1_ED79705457B92B5C_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_1B8A7D152370AD2C(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_METHOD_1_1B8A7D152370AD2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_862ACF0AE239B7AE(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single& a4, ::System::Single& a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_METHOD_1_862ACF0AE239B7AE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_5F9F5EB6A660BE4E(::UnityEngine::Camera* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_METHOD_1_5F9F5EB6A660BE4E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::CameraFightStateOrbitCruiseConfigData* Method_1_920DE8F4A8DAE754()
	{
		return ((::RPG::Client::CameraFightStateOrbitCruiseConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_METHOD_1_920DE8F4A8DAE754_OFFSET))(this);
	}

	::System::Void Method_1_1D897375118954FE(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_METHOD_1_1D897375118954FE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_999B8B439422C7E7(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_77D77BC5957EDBB1_METHOD_1_999B8B439422C7E7_OFFSET))(this, a1, a2);
	}
};
