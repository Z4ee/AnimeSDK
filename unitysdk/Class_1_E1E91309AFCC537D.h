#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_898DC1EA1181F3B8;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateSelectServantConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E1E91309AFCC537D_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x1433FBC0)
#define CLASS_1_E1E91309AFCC537D_INIT_OFFSET UNITYSDK_OFFSET(0x1433EEC0)
#define CLASS_1_E1E91309AFCC537D_METHOD_1_AEF77B72895129F4_OFFSET UNITYSDK_OFFSET(0x1433F5B0)
#define CLASS_1_E1E91309AFCC537D_REFRESH_OFFSET UNITYSDK_OFFSET(0x1433F010)
#define CLASS_1_E1E91309AFCC537D_RESET_OFFSET UNITYSDK_OFFSET(0x1433EF70)
#define CLASS_1_E1E91309AFCC537D__CTOR_OFFSET UNITYSDK_OFFSET(0x1433FC00)

inline static constexpr unsigned int Class_1_E1E91309AFCC537D_TypeDefinitionIndex = 65071;

class Class_1_E1E91309AFCC537D : public ::System::Object
{
public:
	::RPG::Client::CameraDataAndFlags* Field_1_0; // 0x10
	::RPG::Client::CameraFightStateSelectServantConfig* Field_1_1; // 0x18
	::Class_2_898DC1EA1181F3B8* Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1E91309AFCC537D__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_898DC1EA1181F3B8* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_898DC1EA1181F3B8*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E1E91309AFCC537D_INIT_OFFSET))(this, a1, a2, a3);
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

	::RPG::MVector3 Method_1_AEF77B72895129F4(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_E1E91309AFCC537D_METHOD_1_AEF77B72895129F4_OFFSET))(this, a1);
	}
};
