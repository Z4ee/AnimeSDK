#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5D178EC982C80153;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define CLASS_1_567FE103CF0E7FD4_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0xB8DA180)
#define CLASS_1_567FE103CF0E7FD4_GET_STATECONFIGWHENRANGEATK_OFFSET UNITYSDK_OFFSET(0xB8DA1F0)
#define CLASS_1_567FE103CF0E7FD4_INIT_OFFSET UNITYSDK_OFFSET(0xB8D8FB0)
#define CLASS_1_567FE103CF0E7FD4_METHOD_1_047D34745A4B98A3_OFFSET UNITYSDK_OFFSET(0xB8D9480)
#define CLASS_1_567FE103CF0E7FD4_METHOD_1_499C93D7C9F81C2E_OFFSET UNITYSDK_OFFSET(0xB8D9AB0)
#define CLASS_1_567FE103CF0E7FD4_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xB8D97B0)
#define CLASS_1_567FE103CF0E7FD4_METHOD_1_FF11A7936E830212_OFFSET UNITYSDK_OFFSET(0xB8DA210)
#define CLASS_1_567FE103CF0E7FD4_REFRESH_OFFSET UNITYSDK_OFFSET(0xB8D90D0)
#define CLASS_1_567FE103CF0E7FD4_RESET_OFFSET UNITYSDK_OFFSET(0xB8D9020)
#define CLASS_1_567FE103CF0E7FD4_SET_STATECONFIGWHENRANGEATK_OFFSET UNITYSDK_OFFSET(0xB8DA200)
#define CLASS_1_567FE103CF0E7FD4__CTOR_OFFSET UNITYSDK_OFFSET(0xB8DA410)

inline static constexpr unsigned int Class_1_567FE103CF0E7FD4_TypeDefinitionIndex = 56893;

class Class_1_567FE103CF0E7FD4 : public ::System::Object
{
public:
	::RPG::Client::CameraFightStateCommonConfig* _StateConfigWhenRangeAtk_k__BackingField; // 0x10
	::Class_2_5D178EC982C80153* Field_1_1; // 0x18
	::RPG::Client::CameraFightStateCommonConfig* Field_1_3; // 0x20
	::RPG::Client::CameraDataAndFlags* Field_1_2; // 0x28
	::System::Boolean Field_1_6; // 0x30
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_7; // 0x34
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_8; // 0x44
	::System::Single Field_1_4; // 0x54
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_5; // 0x58

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

	::System::Void Method_1_047D34745A4B98A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_METHOD_1_047D34745A4B98A3_OFFSET))(this);
	}
};
