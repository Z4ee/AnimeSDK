#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5D178EC982C80153;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateDarkAttackConfig; }

#define CLASS_1_EF1975771F669218_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x99E7750)
#define CLASS_1_EF1975771F669218_GET_STATECONFIGWHENRANGEATK_OFFSET UNITYSDK_OFFSET(0x99E77C0)
#define CLASS_1_EF1975771F669218_INIT_OFFSET UNITYSDK_OFFSET(0x99E66F0)
#define CLASS_1_EF1975771F669218_METHOD_1_00BDF8C06314026D_OFFSET UNITYSDK_OFFSET(0x99E77E0)
#define CLASS_1_EF1975771F669218_METHOD_1_2EDAC8CAFF864AE8_OFFSET UNITYSDK_OFFSET(0x99E8140)
#define CLASS_1_EF1975771F669218_METHOD_1_D56C1A4C75B97C47_OFFSET UNITYSDK_OFFSET(0x99E6990)
#define CLASS_1_EF1975771F669218_REFRESH_OFFSET UNITYSDK_OFFSET(0x99E6830)
#define CLASS_1_EF1975771F669218_RESET_OFFSET UNITYSDK_OFFSET(0x99E6790)
#define CLASS_1_EF1975771F669218_SET_STATECONFIGWHENRANGEATK_OFFSET UNITYSDK_OFFSET(0x99E77D0)
#define CLASS_1_EF1975771F669218__CTOR_OFFSET UNITYSDK_OFFSET(0x99E8200)

inline static constexpr unsigned int Class_1_EF1975771F669218_TypeDefinitionIndex = 56889;

class Class_1_EF1975771F669218 : public ::System::Object
{
public:
	::Class_2_5D178EC982C80153* Field_1_1; // 0x10
	::RPG::Client::CameraDataAndFlags* Field_1_2; // 0x18
	::RPG::Client::CameraFightStateDarkAttackConfig* _StateConfigWhenRangeAtk_k__BackingField; // 0x20
	::RPG::Client::CameraFightStateDarkAttackConfig* Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_5; // 0x30
	::System::Boolean Field_1_4; // 0x3C
	::UnityEngine::Vector3 Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF1975771F669218__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_5D178EC982C80153* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D178EC982C80153*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EF1975771F669218_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF1975771F669218_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF1975771F669218_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF1975771F669218_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateDarkAttackConfig* get_StateConfigWhenRangeAtk()
	{
		return ((::RPG::Client::CameraFightStateDarkAttackConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF1975771F669218_GET_STATECONFIGWHENRANGEATK_OFFSET))(this);
	}

	::System::Void set_StateConfigWhenRangeAtk(::RPG::Client::CameraFightStateDarkAttackConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFightStateDarkAttackConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EF1975771F669218_SET_STATECONFIGWHENRANGEATK_OFFSET))(this, value);
	}

	::System::Void Method_1_D56C1A4C75B97C47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF1975771F669218_METHOD_1_D56C1A4C75B97C47_OFFSET))(this);
	}

	::System::Void Method_1_00BDF8C06314026D(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EF1975771F669218_METHOD_1_00BDF8C06314026D_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_2EDAC8CAFF864AE8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EF1975771F669218_METHOD_1_2EDAC8CAFF864AE8_OFFSET))(this, a1, a2);
	}
};
