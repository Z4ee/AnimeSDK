#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5D178EC982C80153;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define CLASS_1_567FE103CF0E7FD4_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x119D7910)
#define CLASS_1_567FE103CF0E7FD4_GET_STATECONFIGWHENRANGEATK_OFFSET UNITYSDK_OFFSET(0x119D7980)
#define CLASS_1_567FE103CF0E7FD4_INIT_OFFSET UNITYSDK_OFFSET(0x119D6740)
#define CLASS_1_567FE103CF0E7FD4_METHOD_1_499C93D7C9F81C2E_OFFSET UNITYSDK_OFFSET(0x119D7230)
#define CLASS_1_567FE103CF0E7FD4_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x119D6F30)
#define CLASS_1_567FE103CF0E7FD4_METHOD_1_D56DAA96379ECAB9_OFFSET UNITYSDK_OFFSET(0x119D6C20)
#define CLASS_1_567FE103CF0E7FD4_METHOD_1_FF11A7936E830212_OFFSET UNITYSDK_OFFSET(0x119D79A0)
#define CLASS_1_567FE103CF0E7FD4_REFRESH_OFFSET UNITYSDK_OFFSET(0x119D6850)
#define CLASS_1_567FE103CF0E7FD4_RESET_OFFSET UNITYSDK_OFFSET(0x119D67B0)
#define CLASS_1_567FE103CF0E7FD4_SET_STATECONFIGWHENRANGEATK_OFFSET UNITYSDK_OFFSET(0x119D7990)
#define CLASS_1_567FE103CF0E7FD4__CTOR_OFFSET UNITYSDK_OFFSET(0x119D7BA0)

inline static constexpr unsigned int Class_1_567FE103CF0E7FD4_TypeDefinitionIndex = 64143;

class Class_1_567FE103CF0E7FD4 : public ::System::Object
{
public:
	::RPG::Client::CameraFightStateCommonConfig* _StateConfigWhenRangeAtk_k__BackingField; // 0x10
	::RPG::Client::CameraDataAndFlags* Field_1_2; // 0x18
	::Class_2_5D178EC982C80153* Field_1_1; // 0x20
	::RPG::Client::CameraFightStateCommonConfig* Field_1_3; // 0x28
	::System::Boolean Field_1_6; // 0x30
	::System::Single Field_1_4; // 0x34
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_5; // 0x38
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_7; // 0x48
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_5D178EC982C80153* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D178EC982C80153*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* get_StateConfigWhenRangeAtk()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_GET_STATECONFIGWHENRANGEATK_OFFSET))(this);
	}

	::System::Void set_StateConfigWhenRangeAtk(::RPG::Client::CameraFightStateCommonConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_SET_STATECONFIGWHENRANGEATK_OFFSET))(this, value);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_499C93D7C9F81C2E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_METHOD_1_499C93D7C9F81C2E_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FF11A7936E830212()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_METHOD_1_FF11A7936E830212_OFFSET))(this);
	}

	::System::Void Method_1_D56DAA96379ECAB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_METHOD_1_D56DAA96379ECAB9_OFFSET))(this);
	}
};
