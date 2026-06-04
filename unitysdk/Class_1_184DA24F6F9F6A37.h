#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_898DC1EA1181F3B8;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateDarkAttackConfig; }

#define CLASS_1_184DA24F6F9F6A37_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x13C33EF0)
#define CLASS_1_184DA24F6F9F6A37_GET_STATECONFIGWHENRANGEATK_OFFSET UNITYSDK_OFFSET(0x13C33F60)
#define CLASS_1_184DA24F6F9F6A37_INIT_OFFSET UNITYSDK_OFFSET(0x13C32EE0)
#define CLASS_1_184DA24F6F9F6A37_METHOD_1_2EDAC8CAFF864AE8_OFFSET UNITYSDK_OFFSET(0x13C349A0)
#define CLASS_1_184DA24F6F9F6A37_METHOD_1_43F61CBC46441777_OFFSET UNITYSDK_OFFSET(0x13C33F80)
#define CLASS_1_184DA24F6F9F6A37_METHOD_1_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x13C33170)
#define CLASS_1_184DA24F6F9F6A37_REFRESH_OFFSET UNITYSDK_OFFSET(0x13C33020)
#define CLASS_1_184DA24F6F9F6A37_RESET_OFFSET UNITYSDK_OFFSET(0x13C32F80)
#define CLASS_1_184DA24F6F9F6A37_SET_STATECONFIGWHENRANGEATK_OFFSET UNITYSDK_OFFSET(0x13C33F70)
#define CLASS_1_184DA24F6F9F6A37__CTOR_OFFSET UNITYSDK_OFFSET(0x13C34A60)

inline static constexpr unsigned int Class_1_184DA24F6F9F6A37_TypeDefinitionIndex = 65060;

class Class_1_184DA24F6F9F6A37 : public ::System::Object
{
public:
	::RPG::Client::CameraDataAndFlags* Field_1_0; // 0x10
	::RPG::Client::CameraFightStateDarkAttackConfig* _StateConfigWhenRangeAtk_k__BackingField; // 0x18
	::RPG::Client::CameraFightStateDarkAttackConfig* Field_1_2; // 0x20
	::Class_2_898DC1EA1181F3B8* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x34
	::UnityEngine::Vector3 Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_184DA24F6F9F6A37__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_898DC1EA1181F3B8* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_898DC1EA1181F3B8*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_184DA24F6F9F6A37_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_184DA24F6F9F6A37_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_184DA24F6F9F6A37_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_184DA24F6F9F6A37_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateDarkAttackConfig* get_StateConfigWhenRangeAtk()
	{
		return ((::RPG::Client::CameraFightStateDarkAttackConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_184DA24F6F9F6A37_GET_STATECONFIGWHENRANGEATK_OFFSET))(this);
	}

	::System::Void set_StateConfigWhenRangeAtk(::RPG::Client::CameraFightStateDarkAttackConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFightStateDarkAttackConfig*))((::PBYTE)hIl2Cpp + CLASS_1_184DA24F6F9F6A37_SET_STATECONFIGWHENRANGEATK_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_184DA24F6F9F6A37_METHOD_1_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Void Method_1_43F61CBC46441777(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_184DA24F6F9F6A37_METHOD_1_43F61CBC46441777_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_2EDAC8CAFF864AE8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_184DA24F6F9F6A37_METHOD_1_2EDAC8CAFF864AE8_OFFSET))(this, a1, a2);
	}
};
