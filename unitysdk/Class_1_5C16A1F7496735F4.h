#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_24A88014580ADDB3;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCasterToTargetConfig; }
namespace RPG::Client { class CameraSomatoDynamicOffset; }
namespace RPG::Client { class CloseupShotData; }
namespace RPG::Client { class FightModuleConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5C16A1F7496735F4_METHOD_1_13D78D8CCC5186FB_OFFSET UNITYSDK_OFFSET(0x13C471A0)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_31F1C58AB372DEB4_OFFSET UNITYSDK_OFFSET(0x13C46F10)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_3ABD0165571B5EF8_OFFSET UNITYSDK_OFFSET(0x13C47750)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_71DD74098CFB7065_OFFSET UNITYSDK_OFFSET(0x13C48280)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_7BF0BA6C204CED90_OFFSET UNITYSDK_OFFSET(0x13C463E0)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_8240BDD4F62E3F20_OFFSET UNITYSDK_OFFSET(0x13C45A30)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_95C211358C4AF964_OFFSET UNITYSDK_OFFSET(0x13C46B90)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13C45920)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_B51668C48B36C071_1_OFFSET UNITYSDK_OFFSET(0x13C47A30)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_B51668C48B36C071_OFFSET UNITYSDK_OFFSET(0x13C47840)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_B57F451F6CE4E576_OFFSET UNITYSDK_OFFSET(0x13C484E0)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x13C47C20)
#define CLASS_1_5C16A1F7496735F4__CTOR_OFFSET UNITYSDK_OFFSET(0x13C45690)

inline static constexpr unsigned int Class_1_5C16A1F7496735F4_TypeDefinitionIndex = 65124;

class Class_1_5C16A1F7496735F4 : public ::System::Object
{
public:
	::RPG::Client::FightModuleConfig* Field_1_0; // 0x10
	::RPG::Client::CameraFightStateCasterToTargetConfig* Field_1_1; // 0x18
	::RPG::Client::CameraDataAndFlags* Field_1_2; // 0x20
	::RPG::Client::CloseupShotData* Field_1_3; // 0x28
	::Class_2_24A88014580ADDB3* Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x38
	::UnityEngine::Vector3 Field_1_6; // 0x44
	::UnityEngine::Quaternion Field_1_7; // 0x50
	::System::Boolean Field_1_8; // 0x60
	::System::Boolean Field_1_9; // 0x61
	::UnityEngine::Vector3 Field_1_10; // 0x64
	::RPG::MVector3 Field_1_11; // 0x70
	::UnityEngine::Vector3 Field_1_12; // 0x7C
	::System::Single Field_1_13; // 0x88
	::System::Single Field_1_14; // 0x8C
	::UnityEngine::Quaternion Field_1_15; // 0x90
	::System::Single Field_1_16; // 0xA0
	::UnityEngine::Vector3 Field_1_17; // 0xA4
	::UnityEngine::Vector3 Field_1_18; // 0xB0
	::UnityEngine::Quaternion Field_1_19; // 0xBC
	::System::Single Field_1_20; // 0xCC
	::System::Single Field_1_21; // 0xD0
	::UnityEngine::Vector3 Field_1_22; // 0xD4

	::System::Void _ctor(::RPG::Client::CameraDataAndFlags* a1, ::RPG::Client::CloseupShotData* a2, ::System::Nullable_1<::UnityEngine::Vector3> a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CloseupShotData*, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_8240BDD4F62E3F20(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::System::Nullable_1<::UnityEngine::Quaternion> a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Nullable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_8240BDD4F62E3F20_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_95C211358C4AF964(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_95C211358C4AF964_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7BF0BA6C204CED90(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_7BF0BA6C204CED90_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_13D78D8CCC5186FB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_13D78D8CCC5186FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}

	::RPG::Client::CameraSomatoDynamicOffset* Method_1_B57F451F6CE4E576(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Single& a2)
	{
		return ((::RPG::Client::CameraSomatoDynamicOffset*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_B57F451F6CE4E576_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_71DD74098CFB7065(::RPG::Client::CameraSomatoDynamicOffset* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraSomatoDynamicOffset*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_71DD74098CFB7065_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_31F1C58AB372DEB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_31F1C58AB372DEB4_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_B51668C48B36C071(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_B51668C48B36C071_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_B51668C48B36C071_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_B51668C48B36C071_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_3ABD0165571B5EF8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_3ABD0165571B5EF8_OFFSET))(this);
	}
};
