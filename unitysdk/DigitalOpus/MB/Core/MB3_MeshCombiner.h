#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LightmapOptions.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_OutputOptions.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_ValidationLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_MeshCombiner_MeshCombiningStatus.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_MeshCombineAPIType.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_MeshPivotLocation.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_RenderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MB2_TextureBakeResults;
namespace DigitalOpus::MB::Core { class IAssignToMeshCustomizer; }
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombiner_GenerateUV2Delegate; }
namespace DigitalOpus::MB::Core { class MB_IMeshBakerSettings; }
namespace DigitalOpus::MB::Core { class MB_IMeshBakerSettingsHolder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_APPLY_OFFSET UNITYSDK_OFFSET(0x1E2D11F0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_DISPOSERUNTIMECREATED_OFFSET UNITYSDK_OFFSET(0x1E2D1170)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E2D11C0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E2D1190)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_DOUV2_OFFSET UNITYSDK_OFFSET(0x1E2D0BA0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_ASSIGNTOMESHCUSTOMIZER_OFFSET UNITYSDK_OFFSET(0x1E2D0FD0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_BAKESTATUS_OFFSET UNITYSDK_OFFSET(0x1E2D01D0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_CLEARBUFFERSAFTERBAKE_OFFSET UNITYSDK_OFFSET(0x1E2D0F10)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOBLENDSHAPES_OFFSET UNITYSDK_OFFSET(0x1E2D0EA0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOCOL_OFFSET UNITYSDK_OFFSET(0x1E2D0B40)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DONORM_OFFSET UNITYSDK_OFFSET(0x1E2D0B00)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOTAN_OFFSET UNITYSDK_OFFSET(0x1E2D0B20)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOUV1_OFFSET UNITYSDK_OFFSET(0x1E2D0B80)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOUV3_OFFSET UNITYSDK_OFFSET(0x1E2D0DE0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOUV4_OFFSET UNITYSDK_OFFSET(0x1E2D0E00)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOUV5_OFFSET UNITYSDK_OFFSET(0x1E2D0E20)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOUV6_OFFSET UNITYSDK_OFFSET(0x1E2D0E40)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOUV7_OFFSET UNITYSDK_OFFSET(0x1E2D0E60)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOUV8_OFFSET UNITYSDK_OFFSET(0x1E2D0E80)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOUV_OFFSET UNITYSDK_OFFSET(0x1E2D0B60)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_EVAL_VERSION_OFFSET UNITYSDK_OFFSET(0x1E2D01C0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_LIGHTMAPOPTION_OFFSET UNITYSDK_OFFSET(0x1E2D0AE0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_LOG_LEVEL_OFFSET UNITYSDK_OFFSET(0x1E2D0670)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_MESHAPI_OFFSET UNITYSDK_OFFSET(0x1E2D10F0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E2D0200)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_OPTIMIZEAFTERBAKE_OFFSET UNITYSDK_OFFSET(0x1E2D0F30)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_OUTPUTOPTION_OFFSET UNITYSDK_OFFSET(0x1E2D0AA0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_PIVOTLOCATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1E2D0EC0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x1E2D0EE0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_RENDERTYPE_OFFSET UNITYSDK_OFFSET(0x1E2D0AC0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_RESULTSCENEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E2D0240)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_SETTINGSHOLDER_OFFSET UNITYSDK_OFFSET(0x1E2D0860)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1E2D0690)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_SMRMERGEBLENDSHAPESWITHSAMENAMES_OFFSET UNITYSDK_OFFSET(0x1E2D0FB0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_SMRNOEXTRABONESWHENCOMBININGMESHRENDERERS_OFFSET UNITYSDK_OFFSET(0x1E2D0F90)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_TARGETRENDERER_OFFSET UNITYSDK_OFFSET(0x1E2D0260)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_TEXTUREBAKERESULTS_OFFSET UNITYSDK_OFFSET(0x1E2D0220)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_UV2UNWRAPPINGPARAMSHARDANGLE_OFFSET UNITYSDK_OFFSET(0x1E2D0F50)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_UV2UNWRAPPINGPARAMSPACKMARGIN_OFFSET UNITYSDK_OFFSET(0x1E2D0F70)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_VALIDATIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1E2D01E0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1E2D11B0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_ASSIGNTOMESHCUSTOMIZER_OFFSET UNITYSDK_OFFSET(0x1E2D1050)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_CLEARBUFFERSAFTERBAKE_OFFSET UNITYSDK_OFFSET(0x1E2D0F20)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOBLENDSHAPES_OFFSET UNITYSDK_OFFSET(0x1E2D0EB0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOCOL_OFFSET UNITYSDK_OFFSET(0x1E2D0B50)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DONORM_OFFSET UNITYSDK_OFFSET(0x1E2D0B10)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOTAN_OFFSET UNITYSDK_OFFSET(0x1E2D0B30)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOUV1_OFFSET UNITYSDK_OFFSET(0x1E2D0B90)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOUV3_OFFSET UNITYSDK_OFFSET(0x1E2D0DF0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOUV4_OFFSET UNITYSDK_OFFSET(0x1E2D0E10)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOUV5_OFFSET UNITYSDK_OFFSET(0x1E2D0E30)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOUV6_OFFSET UNITYSDK_OFFSET(0x1E2D0E50)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOUV7_OFFSET UNITYSDK_OFFSET(0x1E2D0E70)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOUV8_OFFSET UNITYSDK_OFFSET(0x1E2D0E90)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOUV_OFFSET UNITYSDK_OFFSET(0x1E2D0B70)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_LIGHTMAPOPTION_OFFSET UNITYSDK_OFFSET(0x1E2D0AF0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_LOG_LEVEL_OFFSET UNITYSDK_OFFSET(0x1E2D0680)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_MESHAPI_OFFSET UNITYSDK_OFFSET(0x1E2D1160)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1E2D0210)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_OPTIMIZEAFTERBAKE_OFFSET UNITYSDK_OFFSET(0x1E2D0F40)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_OUTPUTOPTION_OFFSET UNITYSDK_OFFSET(0x1E2D0AB0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_PIVOTLOCATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1E2D0ED0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x1E2D0F00)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_RENDERTYPE_OFFSET UNITYSDK_OFFSET(0x1E2D0AD0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_RESULTSCENEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E2D0250)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_SETTINGSHOLDER_OFFSET UNITYSDK_OFFSET(0x1E2D09E0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_SMRMERGEBLENDSHAPESWITHSAMENAMES_OFFSET UNITYSDK_OFFSET(0x1E2D0FC0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_SMRNOEXTRABONESWHENCOMBININGMESHRENDERERS_OFFSET UNITYSDK_OFFSET(0x1E2D0FA0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_TARGETRENDERER_OFFSET UNITYSDK_OFFSET(0x1E2D0270)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_TEXTUREBAKERESULTS_OFFSET UNITYSDK_OFFSET(0x1E2D0230)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_UV2UNWRAPPINGPARAMSHARDANGLE_OFFSET UNITYSDK_OFFSET(0x1E2D0F60)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_UV2UNWRAPPINGPARAMSPACKMARGIN_OFFSET UNITYSDK_OFFSET(0x1E2D0F80)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_VALIDATIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1E2D01F0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_UPDATEGAMEOBJECTS_1_OFFSET UNITYSDK_OFFSET(0x1E2D1280)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_UPDATEGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1E2D1210)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_UPDATESKINNEDMESHAPPROXIMATEBOUNDSFROMBONESSTATIC_OFFSET UNITYSDK_OFFSET(0x1E2D12F0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_UPDATESKINNEDMESHAPPROXIMATEBOUNDSFROMBOUNDSSTATIC_OFFSET UNITYSDK_OFFSET(0x1E2D16D0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER__CREATETEMPORARYTEXTRUEBAKERESULT_OFFSET UNITYSDK_OFFSET(0x1E2D18F0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D1980)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombiner_TypeDefinitionIndex = 90621;

	class MB3_MeshCombiner : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_MeshCombiner_MeshCombiningStatus _bakeStatus; // 0x10
		::DigitalOpus::MB::Core::MB2_ValidationLevel _validationLevel; // 0x14
		::System::String* _name; // 0x18
		::MB2_TextureBakeResults* _textureBakeResults; // 0x20
		::UnityEngine::GameObject* _resultSceneObject; // 0x28
		::UnityEngine::Renderer* _targetRenderer; // 0x30
		::DigitalOpus::MB::Core::MB2_LogLevel _LOG_LEVEL; // 0x38
		::UnityEngine::Object* _settingsHolder; // 0x40
		::DigitalOpus::MB::Core::MB2_OutputOptions _outputOption; // 0x48
		::DigitalOpus::MB::Core::MB_RenderType _renderType; // 0x4C
		::DigitalOpus::MB::Core::MB2_LightmapOptions _lightmapOption; // 0x50
		::System::Boolean _doNorm; // 0x54
		::System::Boolean _doTan; // 0x55
		::System::Boolean _doCol; // 0x56
		::System::Boolean _doUV; // 0x57
		::System::Boolean _doUV3; // 0x58
		::System::Boolean _doUV4; // 0x59
		::System::Boolean _doUV5; // 0x5A
		::System::Boolean _doUV6; // 0x5B
		::System::Boolean _doUV7; // 0x5C
		::System::Boolean _doUV8; // 0x5D
		::System::Boolean _doBlendShapes; // 0x5E
		::DigitalOpus::MB::Core::MB_MeshPivotLocation _pivotLocationType; // 0x60
		::UnityEngine::Vector3 _pivotLocation; // 0x64
		::System::Boolean _clearBuffersAfterBake; // 0x70
		::System::Boolean _optimizeAfterBake; // 0x71
		::System::Single _uv2UnwrappingParamsHardAngle; // 0x74
		::System::Single _uv2UnwrappingParamsPackMargin; // 0x78
		::System::Boolean _smrNoExtraBonesWhenCombiningMeshRenderers; // 0x7C
		::System::Boolean _smrMergeBlendShapesWithSameNames; // 0x7D
		::UnityEngine::Object* _assignToMeshCustomizer; // 0x80
		::DigitalOpus::MB::Core::MB_MeshCombineAPIType _meshAPItoUse; // 0x88
		::System::Boolean _usingTemporaryTextureBakeResult; // 0x8C
		::System::Boolean _disposed; // 0x8D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_EVAL_VERSION()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_EVAL_VERSION_OFFSET))();
		}

		::DigitalOpus::MB::Core::MB3_MeshCombiner_MeshCombiningStatus get_bakeStatus()
		{
			return ((::DigitalOpus::MB::Core::MB3_MeshCombiner_MeshCombiningStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_BAKESTATUS_OFFSET))(this);
		}

		::DigitalOpus::MB::Core::MB2_ValidationLevel get_validationLevel()
		{
			return ((::DigitalOpus::MB::Core::MB2_ValidationLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_VALIDATIONLEVEL_OFFSET))(this);
		}

		::System::Void set_validationLevel(::DigitalOpus::MB::Core::MB2_ValidationLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_ValidationLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_VALIDATIONLEVEL_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_NAME_OFFSET))(this, value);
		}

		::MB2_TextureBakeResults* get_textureBakeResults()
		{
			return ((::MB2_TextureBakeResults*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_TEXTUREBAKERESULTS_OFFSET))(this);
		}

		::System::Void set_textureBakeResults(::MB2_TextureBakeResults* value)
		{
			return ((::System::Void(*)(::PVOID, ::MB2_TextureBakeResults*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_TEXTUREBAKERESULTS_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_resultSceneObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_RESULTSCENEOBJECT_OFFSET))(this);
		}

		::System::Void set_resultSceneObject(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_RESULTSCENEOBJECT_OFFSET))(this, value);
		}

		::UnityEngine::Renderer* get_targetRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_TARGETRENDERER_OFFSET))(this);
		}

		::System::Void set_targetRenderer(::UnityEngine::Renderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_TARGETRENDERER_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::MB2_LogLevel get_LOG_LEVEL()
		{
			return ((::DigitalOpus::MB::Core::MB2_LogLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_LOG_LEVEL_OFFSET))(this);
		}

		::System::Void set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_LOG_LEVEL_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::MB_IMeshBakerSettings* get_settings()
		{
			return ((::DigitalOpus::MB::Core::MB_IMeshBakerSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_SETTINGS_OFFSET))(this);
		}

		::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder* get_settingsHolder()
		{
			return ((::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_SETTINGSHOLDER_OFFSET))(this);
		}

		::System::Void set_settingsHolder(::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder* value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_SETTINGSHOLDER_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::MB2_OutputOptions get_outputOption()
		{
			return ((::DigitalOpus::MB::Core::MB2_OutputOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_OUTPUTOPTION_OFFSET))(this);
		}

		::System::Void set_outputOption(::DigitalOpus::MB::Core::MB2_OutputOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_OutputOptions))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_OUTPUTOPTION_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::MB_RenderType get_renderType()
		{
			return ((::DigitalOpus::MB::Core::MB_RenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_RENDERTYPE_OFFSET))(this);
		}

		::System::Void set_renderType(::DigitalOpus::MB::Core::MB_RenderType value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_RenderType))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_RENDERTYPE_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::MB2_LightmapOptions get_lightmapOption()
		{
			return ((::DigitalOpus::MB::Core::MB2_LightmapOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_LIGHTMAPOPTION_OFFSET))(this);
		}

		::System::Void set_lightmapOption(::DigitalOpus::MB::Core::MB2_LightmapOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_LightmapOptions))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_LIGHTMAPOPTION_OFFSET))(this, value);
		}

		::System::Boolean get_doNorm()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DONORM_OFFSET))(this);
		}

		::System::Void set_doNorm(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DONORM_OFFSET))(this, value);
		}

		::System::Boolean get_doTan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOTAN_OFFSET))(this);
		}

		::System::Void set_doTan(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOTAN_OFFSET))(this, value);
		}

		::System::Boolean get_doCol()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOCOL_OFFSET))(this);
		}

		::System::Void set_doCol(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOCOL_OFFSET))(this, value);
		}

		::System::Boolean get_doUV()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOUV_OFFSET))(this);
		}

		::System::Void set_doUV(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOUV_OFFSET))(this, value);
		}

		::System::Boolean get_doUV1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOUV1_OFFSET))(this);
		}

		::System::Void set_doUV1(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOUV1_OFFSET))(this, value);
		}

		::System::Boolean doUV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_DOUV2_OFFSET))(this);
		}

		::System::Boolean get_doUV3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOUV3_OFFSET))(this);
		}

		::System::Void set_doUV3(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOUV3_OFFSET))(this, value);
		}

		::System::Boolean get_doUV4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOUV4_OFFSET))(this);
		}

		::System::Void set_doUV4(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOUV4_OFFSET))(this, value);
		}

		::System::Boolean get_doUV5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOUV5_OFFSET))(this);
		}

		::System::Void set_doUV5(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOUV5_OFFSET))(this, value);
		}

		::System::Boolean get_doUV6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOUV6_OFFSET))(this);
		}

		::System::Void set_doUV6(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOUV6_OFFSET))(this, value);
		}

		::System::Boolean get_doUV7()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOUV7_OFFSET))(this);
		}

		::System::Void set_doUV7(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOUV7_OFFSET))(this, value);
		}

		::System::Boolean get_doUV8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOUV8_OFFSET))(this);
		}

		::System::Void set_doUV8(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOUV8_OFFSET))(this, value);
		}

		::System::Boolean get_doBlendShapes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_DOBLENDSHAPES_OFFSET))(this);
		}

		::System::Void set_doBlendShapes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_DOBLENDSHAPES_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::MB_MeshPivotLocation get_pivotLocationType()
		{
			return ((::DigitalOpus::MB::Core::MB_MeshPivotLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_PIVOTLOCATIONTYPE_OFFSET))(this);
		}

		::System::Void set_pivotLocationType(::DigitalOpus::MB::Core::MB_MeshPivotLocation value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_MeshPivotLocation))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_PIVOTLOCATIONTYPE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_pivotLocation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_PIVOTLOCATION_OFFSET))(this);
		}

		::System::Void set_pivotLocation(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_PIVOTLOCATION_OFFSET))(this, value);
		}

		::System::Boolean get_clearBuffersAfterBake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_CLEARBUFFERSAFTERBAKE_OFFSET))(this);
		}

		::System::Void set_clearBuffersAfterBake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_CLEARBUFFERSAFTERBAKE_OFFSET))(this, value);
		}

		::System::Boolean get_optimizeAfterBake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_OPTIMIZEAFTERBAKE_OFFSET))(this);
		}

		::System::Void set_optimizeAfterBake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_OPTIMIZEAFTERBAKE_OFFSET))(this, value);
		}

		::System::Single get_uv2UnwrappingParamsHardAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_UV2UNWRAPPINGPARAMSHARDANGLE_OFFSET))(this);
		}

		::System::Void set_uv2UnwrappingParamsHardAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_UV2UNWRAPPINGPARAMSHARDANGLE_OFFSET))(this, value);
		}

		::System::Single get_uv2UnwrappingParamsPackMargin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_UV2UNWRAPPINGPARAMSPACKMARGIN_OFFSET))(this);
		}

		::System::Void set_uv2UnwrappingParamsPackMargin(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_UV2UNWRAPPINGPARAMSPACKMARGIN_OFFSET))(this, value);
		}

		::System::Boolean get_smrNoExtraBonesWhenCombiningMeshRenderers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_SMRNOEXTRABONESWHENCOMBININGMESHRENDERERS_OFFSET))(this);
		}

		::System::Void set_smrNoExtraBonesWhenCombiningMeshRenderers(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_SMRNOEXTRABONESWHENCOMBININGMESHRENDERERS_OFFSET))(this, value);
		}

		::System::Boolean get_smrMergeBlendShapesWithSameNames()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_SMRMERGEBLENDSHAPESWITHSAMENAMES_OFFSET))(this);
		}

		::System::Void set_smrMergeBlendShapesWithSameNames(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_SMRMERGEBLENDSHAPESWITHSAMENAMES_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::IAssignToMeshCustomizer* get_assignToMeshCustomizer()
		{
			return ((::DigitalOpus::MB::Core::IAssignToMeshCustomizer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_ASSIGNTOMESHCUSTOMIZER_OFFSET))(this);
		}

		::System::Void set_assignToMeshCustomizer(::DigitalOpus::MB::Core::IAssignToMeshCustomizer* value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_ASSIGNTOMESHCUSTOMIZER_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::MB_MeshCombineAPIType get_meshAPI()
		{
			return ((::DigitalOpus::MB::Core::MB_MeshCombineAPIType(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GET_MESHAPI_OFFSET))(this);
		}

		::System::Void set_meshAPI(::DigitalOpus::MB::Core::MB_MeshCombineAPIType value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_MeshCombineAPIType))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_SET_MESHAPI_OFFSET))(this, value);
		}

		::System::Void DisposeRuntimeCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_DISPOSERUNTIMECREATED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_ISDISPOSED_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Boolean Apply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_APPLY_OFFSET))(this);
		}

		::System::Boolean UpdateGameObjects(::Il2CppArray<::UnityEngine::GameObject*>* gos)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_UPDATEGAMEOBJECTS_OFFSET))(this, gos);
		}

		::System::Boolean UpdateGameObjects_1(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::System::Boolean updateBounds)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_UPDATEGAMEOBJECTS_1_OFFSET))(this, gos, updateBounds);
		}

		static ::System::Void UpdateSkinnedMeshApproximateBoundsFromBonesStatic(::Il2CppArray<::UnityEngine::Transform*>* bs, ::UnityEngine::SkinnedMeshRenderer* smr)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_UPDATESKINNEDMESHAPPROXIMATEBOUNDSFROMBONESSTATIC_OFFSET))(bs, smr);
		}

		static ::System::Void UpdateSkinnedMeshApproximateBoundsFromBoundsStatic(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objectsInCombined, ::UnityEngine::SkinnedMeshRenderer* smr)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_UPDATESKINNEDMESHAPPROXIMATEBOUNDSFROMBOUNDSSTATIC_OFFSET))(objectsInCombined, smr);
		}

		::System::Boolean _CreateTemporaryTextrueBakeResult(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* matsOnTargetRenderer)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER__CREATETEMPORARYTEXTRUEBAKERESULT_OFFSET))(this, gos, matsOnTargetRenderer);
		}
	};
}
