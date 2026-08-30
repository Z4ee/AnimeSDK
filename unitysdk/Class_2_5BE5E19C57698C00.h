#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/BaseCameraState.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define CLASS_2_5BE5E19C57698C00_GET_CAMERADATA_OFFSET UNITYSDK_OFFSET(0x17E0A690)
#define CLASS_2_5BE5E19C57698C00_GET_GLOBALCONFIGREF_OFFSET UNITYSDK_OFFSET(0x17E0A650)
#define CLASS_2_5BE5E19C57698C00_GET_MODULECONFIGREF_OFFSET UNITYSDK_OFFSET(0x17E0A670)
#define CLASS_2_5BE5E19C57698C00_GET_OWNERCAMERAENGINEREF_OFFSET UNITYSDK_OFFSET(0x17E0A630)
#define CLASS_2_5BE5E19C57698C00_ONSPAWN_OFFSET UNITYSDK_OFFSET(0x17E0A5B0)
#define CLASS_2_5BE5E19C57698C00_ONUNSPAWN_OFFSET UNITYSDK_OFFSET(0x17E0A5F0)
#define CLASS_2_5BE5E19C57698C00_SET_CAMERADATA_OFFSET UNITYSDK_OFFSET(0x17E0A6A0)
#define CLASS_2_5BE5E19C57698C00_SET_GLOBALCONFIGREF_OFFSET UNITYSDK_OFFSET(0x17E0A660)
#define CLASS_2_5BE5E19C57698C00_SET_MODULECONFIGREF_OFFSET UNITYSDK_OFFSET(0x17E0A680)
#define CLASS_2_5BE5E19C57698C00_SET_OWNERCAMERAENGINEREF_OFFSET UNITYSDK_OFFSET(0x17E0A640)
#define CLASS_2_5BE5E19C57698C00__CTOR_OFFSET UNITYSDK_OFFSET(0x17E0A560)

inline static constexpr unsigned int Class_2_5BE5E19C57698C00_TypeDefinitionIndex = 69702;

class Class_2_5BE5E19C57698C00 : public ::RPGCamera::BaseCameraState
{
public:
	::RPG::Client::PipelineCameraGlobalConfig* _GlobalConfigRef_k__BackingField; // 0xA8
	::RPG::Client::CameraDataAndFlags* _CameraData_k__BackingField; // 0xB0
	::RPG::Client::CameraModuleConfigCollection* _ModuleConfigRef_k__BackingField; // 0xB8
	::RPG::Client::PipelineCameraEngine* _OwnerCameraEngineRef_k__BackingField; // 0xC0

	::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_5BE5E19C57698C00__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnSpawn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BE5E19C57698C00_ONSPAWN_OFFSET))(this);
	}

	::System::Void OnUnSpawn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BE5E19C57698C00_ONUNSPAWN_OFFSET))(this);
	}

	::RPG::Client::PipelineCameraEngine* get_OwnerCameraEngineRef()
	{
		return ((::RPG::Client::PipelineCameraEngine*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BE5E19C57698C00_GET_OWNERCAMERAENGINEREF_OFFSET))(this);
	}

	::System::Void set_OwnerCameraEngineRef(::RPG::Client::PipelineCameraEngine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*))((::PBYTE)hIl2Cpp + CLASS_2_5BE5E19C57698C00_SET_OWNERCAMERAENGINEREF_OFFSET))(this, a1);
	}

	::RPG::Client::PipelineCameraGlobalConfig* get_GlobalConfigRef()
	{
		return ((::RPG::Client::PipelineCameraGlobalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BE5E19C57698C00_GET_GLOBALCONFIGREF_OFFSET))(this);
	}

	::System::Void set_GlobalConfigRef(::RPG::Client::PipelineCameraGlobalConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraGlobalConfig*))((::PBYTE)hIl2Cpp + CLASS_2_5BE5E19C57698C00_SET_GLOBALCONFIGREF_OFFSET))(this, a1);
	}

	::RPG::Client::CameraModuleConfigCollection* get_ModuleConfigRef()
	{
		return ((::RPG::Client::CameraModuleConfigCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BE5E19C57698C00_GET_MODULECONFIGREF_OFFSET))(this);
	}

	::System::Void set_ModuleConfigRef(::RPG::Client::CameraModuleConfigCollection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraModuleConfigCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5BE5E19C57698C00_SET_MODULECONFIGREF_OFFSET))(this, a1);
	}

	::RPG::Client::CameraDataAndFlags* get_CameraData()
	{
		return ((::RPG::Client::CameraDataAndFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BE5E19C57698C00_GET_CAMERADATA_OFFSET))(this);
	}

	::System::Void set_CameraData(::RPG::Client::CameraDataAndFlags* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_5BE5E19C57698C00_SET_CAMERADATA_OFFSET))(this, a1);
	}
};
