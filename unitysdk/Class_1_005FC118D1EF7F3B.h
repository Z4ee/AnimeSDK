#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/LightTypeID.h"
#include "unitysdk/System/Object.h"

class Class_1_E4CB20B056222958;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class BillboardController_SceneLightExportData; }
namespace ScenenLightManager { class CharacterLineLightGroup_SceneLightExportData; }
namespace ScenenLightManager { class EasyFog_SceneLightExportData; }
namespace ScenenLightManager { class EngineLight_SceneLightExportData; }
namespace ScenenLightManager { class EngineReflectionProbe_SceneLightExportData; }
namespace ScenenLightManager { class IrradianceCache_SceneLightExportData; }
namespace ScenenLightManager { class LightWeightPrefab_SceneLightExportData; }
namespace ScenenLightManager { class LineGlow_SceneLightExportData; }
namespace ScenenLightManager { class LocalAmbientVolume_SceneLightExportData; }
namespace ScenenLightManager { class LocalFogSphereInstance_SceneLightExportData; }
namespace ScenenLightManager { class VolumetricLightBeam_SceneLightExportData; }
namespace System { class Type; }

#define CLASS_1_005FC118D1EF7F3B_METHOD_1_196BD71D4C9922BF_OFFSET UNITYSDK_OFFSET(0x1185ECB0)
#define CLASS_1_005FC118D1EF7F3B_METHOD_1_29827D11E8565095_OFFSET UNITYSDK_OFFSET(0x1185E6A0)
#define CLASS_1_005FC118D1EF7F3B_METHOD_1_2CB32FBDE92CFFCD_OFFSET UNITYSDK_OFFSET(0x1185EE70)
#define CLASS_1_005FC118D1EF7F3B_METHOD_1_3D5268A6CD5ED204_OFFSET UNITYSDK_OFFSET(0x1185EF50)
#define CLASS_1_005FC118D1EF7F3B_METHOD_1_6C84C320AE6F4773_OFFSET UNITYSDK_OFFSET(0x1185EB60)
#define CLASS_1_005FC118D1EF7F3B_METHOD_1_7869FC37CE04AB5F_OFFSET UNITYSDK_OFFSET(0x1185EFC0)
#define CLASS_1_005FC118D1EF7F3B_METHOD_1_8513F9F12C0A1BA2_OFFSET UNITYSDK_OFFSET(0x1185EC40)
#define CLASS_1_005FC118D1EF7F3B_METHOD_1_9C8B296AEC3C6D0A_OFFSET UNITYSDK_OFFSET(0x1185EE00)
#define CLASS_1_005FC118D1EF7F3B_METHOD_1_C8A58EF7DDB32163_OFFSET UNITYSDK_OFFSET(0x1185EAF0)
#define CLASS_1_005FC118D1EF7F3B_METHOD_1_C91425FEF0D33A8E_OFFSET UNITYSDK_OFFSET(0x1185ED20)
#define CLASS_1_005FC118D1EF7F3B_METHOD_1_DE8CE60D0345CE25_OFFSET UNITYSDK_OFFSET(0x1185EBD0)
#define CLASS_1_005FC118D1EF7F3B_METHOD_1_E3B978F7DEA4E8FC_OFFSET UNITYSDK_OFFSET(0x1185F110)
#define CLASS_1_005FC118D1EF7F3B_METHOD_1_F445D12E8E4E6DED_OFFSET UNITYSDK_OFFSET(0x1185ED90)
#define CLASS_1_005FC118D1EF7F3B_METHOD_1_FDFC97D70C99216A_OFFSET UNITYSDK_OFFSET(0x1185EEE0)

inline static constexpr unsigned int Class_1_005FC118D1EF7F3B_TypeDefinitionIndex = 39753;

class Class_1_005FC118D1EF7F3B : public ::System::Object
{
public:
	static ::System::Void Method_1_29827D11E8565095(::ScenenLightManager::LightTypeID a1, ::System::Object* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::ScenenLightManager::LightTypeID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_005FC118D1EF7F3B_METHOD_1_29827D11E8565095_OFFSET))(a1, a2, a3);
	}

	static ::ScenenLightManager::BillboardController_SceneLightExportData* Method_1_C8A58EF7DDB32163()
	{
		return ((::ScenenLightManager::BillboardController_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_005FC118D1EF7F3B_METHOD_1_C8A58EF7DDB32163_OFFSET))();
	}

	static ::ScenenLightManager::VolumetricLightBeam_SceneLightExportData* Method_1_6C84C320AE6F4773()
	{
		return ((::ScenenLightManager::VolumetricLightBeam_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_005FC118D1EF7F3B_METHOD_1_6C84C320AE6F4773_OFFSET))();
	}

	static ::ScenenLightManager::LocalAmbientVolume_SceneLightExportData* Method_1_DE8CE60D0345CE25()
	{
		return ((::ScenenLightManager::LocalAmbientVolume_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_005FC118D1EF7F3B_METHOD_1_DE8CE60D0345CE25_OFFSET))();
	}

	static ::ScenenLightManager::EngineLight_SceneLightExportData* Method_1_8513F9F12C0A1BA2()
	{
		return ((::ScenenLightManager::EngineLight_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_005FC118D1EF7F3B_METHOD_1_8513F9F12C0A1BA2_OFFSET))();
	}

	static ::ScenenLightManager::EngineReflectionProbe_SceneLightExportData* Method_1_196BD71D4C9922BF()
	{
		return ((::ScenenLightManager::EngineReflectionProbe_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_005FC118D1EF7F3B_METHOD_1_196BD71D4C9922BF_OFFSET))();
	}

	static ::ScenenLightManager::CharacterLineLightGroup_SceneLightExportData* Method_1_C91425FEF0D33A8E()
	{
		return ((::ScenenLightManager::CharacterLineLightGroup_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_005FC118D1EF7F3B_METHOD_1_C91425FEF0D33A8E_OFFSET))();
	}

	static ::ScenenLightManager::LocalFogSphereInstance_SceneLightExportData* Method_1_F445D12E8E4E6DED()
	{
		return ((::ScenenLightManager::LocalFogSphereInstance_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_005FC118D1EF7F3B_METHOD_1_F445D12E8E4E6DED_OFFSET))();
	}

	static ::ScenenLightManager::LightWeightPrefab_SceneLightExportData* Method_1_9C8B296AEC3C6D0A()
	{
		return ((::ScenenLightManager::LightWeightPrefab_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_005FC118D1EF7F3B_METHOD_1_9C8B296AEC3C6D0A_OFFSET))();
	}

	static ::ScenenLightManager::LineGlow_SceneLightExportData* Method_1_2CB32FBDE92CFFCD()
	{
		return ((::ScenenLightManager::LineGlow_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_005FC118D1EF7F3B_METHOD_1_2CB32FBDE92CFFCD_OFFSET))();
	}

	static ::ScenenLightManager::EasyFog_SceneLightExportData* Method_1_FDFC97D70C99216A()
	{
		return ((::ScenenLightManager::EasyFog_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_005FC118D1EF7F3B_METHOD_1_FDFC97D70C99216A_OFFSET))();
	}

	static ::ScenenLightManager::IrradianceCache_SceneLightExportData* Method_1_3D5268A6CD5ED204()
	{
		return ((::ScenenLightManager::IrradianceCache_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_005FC118D1EF7F3B_METHOD_1_3D5268A6CD5ED204_OFFSET))();
	}

	static ::System::Type* Method_1_7869FC37CE04AB5F(::ScenenLightManager::LightTypeID a1)
	{
		return ((::System::Type*(*)(::ScenenLightManager::LightTypeID))((::PBYTE)hIl2Cpp + CLASS_1_005FC118D1EF7F3B_METHOD_1_7869FC37CE04AB5F_OFFSET))(a1);
	}

	static ::System::Void Method_1_E3B978F7DEA4E8FC(::ScenenLightManager::LightTypeID a1, ::Class_1_E4CB20B056222958* a2, ::ScenenLightManager::BaseComponentExportData* a3)
	{
		return ((::System::Void(*)(::ScenenLightManager::LightTypeID, ::Class_1_E4CB20B056222958*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_1_005FC118D1EF7F3B_METHOD_1_E3B978F7DEA4E8FC_OFFSET))(a1, a2, a3);
	}
};
