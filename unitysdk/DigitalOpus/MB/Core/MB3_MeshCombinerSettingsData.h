#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LightmapOptions.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_OutputOptions.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_MeshCombineAPIType.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_MeshPivotLocation.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_RenderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DigitalOpus::MB::Core { class IAssignToMeshCustomizer; }
namespace UnityEngine { class Object; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_ASSIGNTOMESHCUSTOMIZER_OFFSET UNITYSDK_OFFSET(0x1C044140)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_CLEARBUFFERSAFTERBAKE_OFFSET UNITYSDK_OFFSET(0x1C044080)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOBLENDSHAPES_OFFSET UNITYSDK_OFFSET(0x1C044010)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOCOL_OFFSET UNITYSDK_OFFSET(0x1C043F10)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DONORM_OFFSET UNITYSDK_OFFSET(0x1C043ED0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOTAN_OFFSET UNITYSDK_OFFSET(0x1C043EF0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOUV3_OFFSET UNITYSDK_OFFSET(0x1C043F50)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOUV4_OFFSET UNITYSDK_OFFSET(0x1C043F70)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOUV5_OFFSET UNITYSDK_OFFSET(0x1C043F90)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOUV6_OFFSET UNITYSDK_OFFSET(0x1C043FB0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOUV7_OFFSET UNITYSDK_OFFSET(0x1C043FD0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOUV8_OFFSET UNITYSDK_OFFSET(0x1C043FF0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOUV_OFFSET UNITYSDK_OFFSET(0x1C043F30)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_LIGHTMAPOPTION_OFFSET UNITYSDK_OFFSET(0x1C043EB0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_MESHAPI_OFFSET UNITYSDK_OFFSET(0x1C044260)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_OPTIMIZEAFTERBAKE_OFFSET UNITYSDK_OFFSET(0x1C0440A0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_OUTPUTOPTION_OFFSET UNITYSDK_OFFSET(0x1C043E90)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_PIVOTLOCATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C044030)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x1C044050)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_RENDERTYPE_OFFSET UNITYSDK_OFFSET(0x1C043E70)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_SMRMERGEBLENDSHAPESWITHSAMENAMES_OFFSET UNITYSDK_OFFSET(0x1C044120)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_SMRNOEXTRABONESWHENCOMBININGMESHRENDERERS_OFFSET UNITYSDK_OFFSET(0x1C044100)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_UV2UNWRAPPINGPARAMSHARDANGLE_OFFSET UNITYSDK_OFFSET(0x1C0440C0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_UV2UNWRAPPINGPARAMSPACKMARGIN_OFFSET UNITYSDK_OFFSET(0x1C0440E0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_ASSIGNTOMESHCUSTOMIZER_OFFSET UNITYSDK_OFFSET(0x1C0441C0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_CLEARBUFFERSAFTERBAKE_OFFSET UNITYSDK_OFFSET(0x1C044090)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOBLENDSHAPES_OFFSET UNITYSDK_OFFSET(0x1C044020)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOCOL_OFFSET UNITYSDK_OFFSET(0x1C043F20)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DONORM_OFFSET UNITYSDK_OFFSET(0x1C043EE0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOTAN_OFFSET UNITYSDK_OFFSET(0x1C043F00)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOUV3_OFFSET UNITYSDK_OFFSET(0x1C043F60)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOUV4_OFFSET UNITYSDK_OFFSET(0x1C043F80)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOUV5_OFFSET UNITYSDK_OFFSET(0x1C043FA0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOUV6_OFFSET UNITYSDK_OFFSET(0x1C043FC0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOUV7_OFFSET UNITYSDK_OFFSET(0x1C043FE0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOUV8_OFFSET UNITYSDK_OFFSET(0x1C044000)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOUV_OFFSET UNITYSDK_OFFSET(0x1C043F40)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_LIGHTMAPOPTION_OFFSET UNITYSDK_OFFSET(0x1C043EC0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_MESHAPI_OFFSET UNITYSDK_OFFSET(0x1C0442C0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_OPTIMIZEAFTERBAKE_OFFSET UNITYSDK_OFFSET(0x1C0440B0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_OUTPUTOPTION_OFFSET UNITYSDK_OFFSET(0x1C043EA0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_PIVOTLOCATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C044040)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x1C044070)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_RENDERTYPE_OFFSET UNITYSDK_OFFSET(0x1C043E80)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_SMRMERGEBLENDSHAPESWITHSAMENAMES_OFFSET UNITYSDK_OFFSET(0x1C044130)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_SMRNOEXTRABONESWHENCOMBININGMESHRENDERERS_OFFSET UNITYSDK_OFFSET(0x1C044110)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_UV2UNWRAPPINGPARAMSHARDANGLE_OFFSET UNITYSDK_OFFSET(0x1C0440D0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_UV2UNWRAPPINGPARAMSPACKMARGIN_OFFSET UNITYSDK_OFFSET(0x1C0440F0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0442D0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSettingsData_TypeDefinitionIndex = 85053;

	class MB3_MeshCombinerSettingsData : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB_RenderType _renderType; // 0x10
		::DigitalOpus::MB::Core::MB2_OutputOptions _outputOption; // 0x14
		::DigitalOpus::MB::Core::MB2_LightmapOptions _lightmapOption; // 0x18
		::System::Boolean _doNorm; // 0x1C
		::System::Boolean _doTan; // 0x1D
		::System::Boolean _doCol; // 0x1E
		::System::Boolean _doUV; // 0x1F
		::System::Boolean _doUV3; // 0x20
		::System::Boolean _doUV4; // 0x21
		::System::Boolean _doUV5; // 0x22
		::System::Boolean _doUV6; // 0x23
		::System::Boolean _doUV7; // 0x24
		::System::Boolean _doUV8; // 0x25
		::System::Boolean _doBlendShapes; // 0x26
		::DigitalOpus::MB::Core::MB_MeshPivotLocation _pivotLocationType; // 0x28
		::UnityEngine::Vector3 _pivotLocation; // 0x2C
		::System::Boolean _clearBuffersAfterBake; // 0x38
		::System::Boolean _optimizeAfterBake; // 0x39
		::System::Single _uv2UnwrappingParamsHardAngle; // 0x3C
		::System::Single _uv2UnwrappingParamsPackMargin; // 0x40
		::System::Boolean _smrNoExtraBonesWhenCombiningMeshRenderers; // 0x44
		::System::Boolean _smrMergeBlendShapesWithSameNames; // 0x45
		::UnityEngine::Object* _assignToMeshCustomizer; // 0x48
		::DigitalOpus::MB::Core::MB_MeshCombineAPIType _meshAPItoUse; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA__CTOR_OFFSET))(this);
		}

		::DigitalOpus::MB::Core::MB_RenderType get_renderType()
		{
			return ((::DigitalOpus::MB::Core::MB_RenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_RENDERTYPE_OFFSET))(this);
		}

		::System::Void set_renderType(::DigitalOpus::MB::Core::MB_RenderType value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_RenderType))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_RENDERTYPE_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::MB2_OutputOptions get_outputOption()
		{
			return ((::DigitalOpus::MB::Core::MB2_OutputOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_OUTPUTOPTION_OFFSET))(this);
		}

		::System::Void set_outputOption(::DigitalOpus::MB::Core::MB2_OutputOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_OutputOptions))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_OUTPUTOPTION_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::MB2_LightmapOptions get_lightmapOption()
		{
			return ((::DigitalOpus::MB::Core::MB2_LightmapOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_LIGHTMAPOPTION_OFFSET))(this);
		}

		::System::Void set_lightmapOption(::DigitalOpus::MB::Core::MB2_LightmapOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_LightmapOptions))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_LIGHTMAPOPTION_OFFSET))(this, value);
		}

		::System::Boolean get_doNorm()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DONORM_OFFSET))(this);
		}

		::System::Void set_doNorm(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DONORM_OFFSET))(this, value);
		}

		::System::Boolean get_doTan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOTAN_OFFSET))(this);
		}

		::System::Void set_doTan(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOTAN_OFFSET))(this, value);
		}

		::System::Boolean get_doCol()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOCOL_OFFSET))(this);
		}

		::System::Void set_doCol(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOCOL_OFFSET))(this, value);
		}

		::System::Boolean get_doUV()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOUV_OFFSET))(this);
		}

		::System::Void set_doUV(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOUV_OFFSET))(this, value);
		}

		::System::Boolean get_doUV3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOUV3_OFFSET))(this);
		}

		::System::Void set_doUV3(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOUV3_OFFSET))(this, value);
		}

		::System::Boolean get_doUV4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOUV4_OFFSET))(this);
		}

		::System::Void set_doUV4(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOUV4_OFFSET))(this, value);
		}

		::System::Boolean get_doUV5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOUV5_OFFSET))(this);
		}

		::System::Void set_doUV5(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOUV5_OFFSET))(this, value);
		}

		::System::Boolean get_doUV6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOUV6_OFFSET))(this);
		}

		::System::Void set_doUV6(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOUV6_OFFSET))(this, value);
		}

		::System::Boolean get_doUV7()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOUV7_OFFSET))(this);
		}

		::System::Void set_doUV7(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOUV7_OFFSET))(this, value);
		}

		::System::Boolean get_doUV8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOUV8_OFFSET))(this);
		}

		::System::Void set_doUV8(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOUV8_OFFSET))(this, value);
		}

		::System::Boolean get_doBlendShapes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_DOBLENDSHAPES_OFFSET))(this);
		}

		::System::Void set_doBlendShapes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_DOBLENDSHAPES_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::MB_MeshPivotLocation get_pivotLocationType()
		{
			return ((::DigitalOpus::MB::Core::MB_MeshPivotLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_PIVOTLOCATIONTYPE_OFFSET))(this);
		}

		::System::Void set_pivotLocationType(::DigitalOpus::MB::Core::MB_MeshPivotLocation value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_MeshPivotLocation))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_PIVOTLOCATIONTYPE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_pivotLocation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_PIVOTLOCATION_OFFSET))(this);
		}

		::System::Void set_pivotLocation(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_PIVOTLOCATION_OFFSET))(this, value);
		}

		::System::Boolean get_clearBuffersAfterBake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_CLEARBUFFERSAFTERBAKE_OFFSET))(this);
		}

		::System::Void set_clearBuffersAfterBake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_CLEARBUFFERSAFTERBAKE_OFFSET))(this, value);
		}

		::System::Boolean get_optimizeAfterBake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_OPTIMIZEAFTERBAKE_OFFSET))(this);
		}

		::System::Void set_optimizeAfterBake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_OPTIMIZEAFTERBAKE_OFFSET))(this, value);
		}

		::System::Single get_uv2UnwrappingParamsHardAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_UV2UNWRAPPINGPARAMSHARDANGLE_OFFSET))(this);
		}

		::System::Void set_uv2UnwrappingParamsHardAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_UV2UNWRAPPINGPARAMSHARDANGLE_OFFSET))(this, value);
		}

		::System::Single get_uv2UnwrappingParamsPackMargin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_UV2UNWRAPPINGPARAMSPACKMARGIN_OFFSET))(this);
		}

		::System::Void set_uv2UnwrappingParamsPackMargin(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_UV2UNWRAPPINGPARAMSPACKMARGIN_OFFSET))(this, value);
		}

		::System::Boolean get_smrNoExtraBonesWhenCombiningMeshRenderers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_SMRNOEXTRABONESWHENCOMBININGMESHRENDERERS_OFFSET))(this);
		}

		::System::Void set_smrNoExtraBonesWhenCombiningMeshRenderers(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_SMRNOEXTRABONESWHENCOMBININGMESHRENDERERS_OFFSET))(this, value);
		}

		::System::Boolean get_smrMergeBlendShapesWithSameNames()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_SMRMERGEBLENDSHAPESWITHSAMENAMES_OFFSET))(this);
		}

		::System::Void set_smrMergeBlendShapesWithSameNames(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_SMRMERGEBLENDSHAPESWITHSAMENAMES_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::IAssignToMeshCustomizer* get_assignToMeshCustomizer()
		{
			return ((::DigitalOpus::MB::Core::IAssignToMeshCustomizer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_ASSIGNTOMESHCUSTOMIZER_OFFSET))(this);
		}

		::System::Void set_assignToMeshCustomizer(::DigitalOpus::MB::Core::IAssignToMeshCustomizer* value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_ASSIGNTOMESHCUSTOMIZER_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::MB_MeshCombineAPIType get_meshAPI()
		{
			return ((::DigitalOpus::MB::Core::MB_MeshCombineAPIType(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_GET_MESHAPI_OFFSET))(this);
		}

		::System::Void set_meshAPI(::DigitalOpus::MB::Core::MB_MeshCombineAPIType value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_MeshCombineAPIType))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGSDATA_SET_MESHAPI_OFFSET))(this, value);
		}
	};
}
