#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_81F92B0B04671207;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCasterToTargetConfig; }
namespace RPG::Client { class CameraSomatoDynamicOffset; }
namespace RPG::Client { class CloseupShotData; }
namespace RPG::Client { class FightModuleConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5C16A1F7496735F4_METHOD_1_0B8EFE5D289B7D3F_OFFSET UNITYSDK_OFFSET(0xC70BF90)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_31F1C58AB372DEB4_OFFSET UNITYSDK_OFFSET(0xC70A930)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_3ABD0165571B5EF8_OFFSET UNITYSDK_OFFSET(0xC70B1D0)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_71DD74098CFB7065_OFFSET UNITYSDK_OFFSET(0xC70BD40)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_7BF0BA6C204CED90_OFFSET UNITYSDK_OFFSET(0xC709DA0)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_8240BDD4F62E3F20_OFFSET UNITYSDK_OFFSET(0xC709400)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_95C211358C4AF964_OFFSET UNITYSDK_OFFSET(0xC70A5A0)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_B153DBF66F2B9EE2_OFFSET UNITYSDK_OFFSET(0xC70ABC0)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xC7092F0)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_B51668C48B36C071_1_OFFSET UNITYSDK_OFFSET(0xC70B4B0)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_B51668C48B36C071_OFFSET UNITYSDK_OFFSET(0xC70B2C0)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xC70B6A0)
#define CLASS_1_5C16A1F7496735F4__CTOR_OFFSET UNITYSDK_OFFSET(0xC709020)

inline static constexpr unsigned int Class_1_5C16A1F7496735F4_TypeDefinitionIndex = 64203;

class Class_1_5C16A1F7496735F4 : public ::System::Object
{
public:
	::RPG::Client::FightModuleConfig* Field_1_10; // 0x10
	::RPG::Client::CameraDataAndFlags* Field_1_0; // 0x18
	::RPG::Client::CloseupShotData* Field_1_1; // 0x20
	::RPG::Client::CameraFightStateCasterToTargetConfig* Field_1_9; // 0x28
	::Class_2_81F92B0B04671207* Field_1_20; // 0x30
	::UnityEngine::Quaternion Field_1_3; // 0x38
	::UnityEngine::Vector3 Field_1_22; // 0x48
	::System::Single Field_1_19; // 0x54
	::System::Boolean Field_1_11; // 0x58
	::System::Boolean Field_1_13; // 0x59
	::System::Single Field_1_6; // 0x5C
	::UnityEngine::Vector3 Field_1_14; // 0x60
	::RPG::MVector3 Field_1_17; // 0x6C
	::UnityEngine::Vector3 Field_1_21; // 0x78
	::UnityEngine::Quaternion Field_1_5; // 0x84
	::UnityEngine::Vector3 Field_1_4; // 0x94
	::UnityEngine::Vector3 Field_1_2; // 0xA0
	::System::Single Field_1_12; // 0xAC
	::UnityEngine::Quaternion Field_1_16; // 0xB0
	::UnityEngine::Vector3 Field_1_8; // 0xC0
	::UnityEngine::Vector3 Field_1_15; // 0xCC
	::System::Single Field_1_18; // 0xD8
	::System::Single Field_1_7; // 0xDC

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

	::System::Void Method_1_B153DBF66F2B9EE2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_B153DBF66F2B9EE2_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}

	::RPG::Client::CameraSomatoDynamicOffset* Method_1_0B8EFE5D289B7D3F(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Single& a2)
	{
		return ((::RPG::Client::CameraSomatoDynamicOffset*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_0B8EFE5D289B7D3F_OFFSET))(this, a1, a2);
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
