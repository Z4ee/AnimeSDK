#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_898DC1EA1181F3B8;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define CLASS_1_247CFE1A792FB6EF_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x118FD620)
#define CLASS_1_247CFE1A792FB6EF_INIT_OFFSET UNITYSDK_OFFSET(0x118FD660)
#define CLASS_1_247CFE1A792FB6EF_REFRESH_OFFSET UNITYSDK_OFFSET(0x118FD6D0)
#define CLASS_1_247CFE1A792FB6EF_RESET_OFFSET UNITYSDK_OFFSET(0x118FD7E0)
#define CLASS_1_247CFE1A792FB6EF__CTOR_OFFSET UNITYSDK_OFFSET(0x118FD930)

inline static constexpr unsigned int Class_1_247CFE1A792FB6EF_TypeDefinitionIndex = 65061;

class Class_1_247CFE1A792FB6EF : public ::System::Object
{
public:
	::Class_2_898DC1EA1181F3B8* Field_1_0; // 0x10
	::RPG::Client::CameraDataAndFlags* Field_1_1; // 0x18
	::RPG::Client::CameraFightStateCommonConfig* Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247CFE1A792FB6EF__CTOR_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247CFE1A792FB6EF_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Init(::Class_2_898DC1EA1181F3B8* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_898DC1EA1181F3B8*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_247CFE1A792FB6EF_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247CFE1A792FB6EF_REFRESH_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247CFE1A792FB6EF_RESET_OFFSET))(this);
	}
};
