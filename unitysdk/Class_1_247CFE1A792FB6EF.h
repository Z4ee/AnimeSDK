#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4C3F9D9CF221EFEC;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define CLASS_1_247CFE1A792FB6EF_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x13505020)
#define CLASS_1_247CFE1A792FB6EF_INIT_OFFSET UNITYSDK_OFFSET(0x13505060)
#define CLASS_1_247CFE1A792FB6EF_REFRESH_OFFSET UNITYSDK_OFFSET(0x135050D0)
#define CLASS_1_247CFE1A792FB6EF_RESET_OFFSET UNITYSDK_OFFSET(0x135051E0)
#define CLASS_1_247CFE1A792FB6EF__CTOR_OFFSET UNITYSDK_OFFSET(0x13505330)

inline static constexpr unsigned int Class_1_247CFE1A792FB6EF_TypeDefinitionIndex = 69559;

class Class_1_247CFE1A792FB6EF : public ::System::Object
{
public:
	::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x10
	::Class_2_4C3F9D9CF221EFEC* LEOGIKABIGF; // 0x18
	::RPG::Client::CameraFightStateCommonConfig* MAFIONBKPIE; // 0x20
	::UnityEngine::Vector3 JMHCLMJGDDL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247CFE1A792FB6EF__CTOR_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247CFE1A792FB6EF_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Init(::Class_2_4C3F9D9CF221EFEC* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4C3F9D9CF221EFEC*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_247CFE1A792FB6EF_INIT_OFFSET))(this, a1, a2, a3);
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
