#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4C3F9D9CF221EFEC;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateSelectServantConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E1E91309AFCC537D_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x187FCAB0)
#define CLASS_1_E1E91309AFCC537D_INIT_OFFSET UNITYSDK_OFFSET(0x187FBDB0)
#define CLASS_1_E1E91309AFCC537D_METHOD_1_FA7F53A70E53979D_OFFSET UNITYSDK_OFFSET(0x187FC4A0)
#define CLASS_1_E1E91309AFCC537D_REFRESH_OFFSET UNITYSDK_OFFSET(0x187FBF00)
#define CLASS_1_E1E91309AFCC537D_RESET_OFFSET UNITYSDK_OFFSET(0x187FBE60)
#define CLASS_1_E1E91309AFCC537D__CTOR_OFFSET UNITYSDK_OFFSET(0x187FCAF0)

inline static constexpr unsigned int Class_1_E1E91309AFCC537D_TypeDefinitionIndex = 69569;

class Class_1_E1E91309AFCC537D : public ::System::Object
{
public:
	::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x10
	::Class_2_4C3F9D9CF221EFEC* LEOGIKABIGF; // 0x18
	::RPG::Client::CameraFightStateSelectServantConfig* MAFIONBKPIE; // 0x20
	::UnityEngine::Vector3 EPGIKHNGDEB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1E91309AFCC537D__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_4C3F9D9CF221EFEC* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4C3F9D9CF221EFEC*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E1E91309AFCC537D_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1E91309AFCC537D_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1E91309AFCC537D_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1E91309AFCC537D_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_FA7F53A70E53979D(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_E1E91309AFCC537D_METHOD_1_FA7F53A70E53979D_OFFSET))(this, a1);
	}
};
