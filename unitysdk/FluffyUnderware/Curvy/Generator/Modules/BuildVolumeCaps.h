#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGYesNoAuto.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/ContourVertex.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy::Generator { class CGMaterialSettings; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGVolume; }
namespace UnityEngine { class Material; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_APPLYMATRIX_OFFSET UNITYSDK_OFFSET(0x1EEC49D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_APPLYUV2_OFFSET UNITYSDK_OFFSET(0x1EEC5170)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_APPLYUV_OFFSET UNITYSDK_OFFSET(0x1EEC4D40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EEC2030)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_FLIPTRIS_OFFSET UNITYSDK_OFFSET(0x1EEC4CA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GETMATRIX_OFFSET UNITYSDK_OFFSET(0x1EEC44E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_CLONESTARTCAP_OFFSET UNITYSDK_OFFSET(0x1EEC1F20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_ENDCAP_OFFSET UNITYSDK_OFFSET(0x1EEC1ED0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_ENDMATERIALSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EEC1F70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_ENDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1EEC1F80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_GENERATEUV2_OFFSET UNITYSDK_OFFSET(0x1EEC1D20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_GENERATEUV_OFFSET UNITYSDK_OFFSET(0x1EEC1CD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_REVERSETRIORDER_OFFSET UNITYSDK_OFFSET(0x1EEC1D70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_STARTCAP_OFFSET UNITYSDK_OFFSET(0x1EEC1DC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_STARTMATERIALSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EEC1EC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_STARTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1EEC1E10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_MAKE2DSEGMENT_OFFSET UNITYSDK_OFFSET(0x1EEC4280)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_REFRESH_OFFSET UNITYSDK_OFFSET(0x1EEC2660)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_RESET_OFFSET UNITYSDK_OFFSET(0x1EEC2380)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_SET_CLONESTARTCAP_OFFSET UNITYSDK_OFFSET(0x1EEC1F30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_SET_ENDCAP_OFFSET UNITYSDK_OFFSET(0x1EEC1EE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_SET_ENDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1EEC1F90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_SET_GENERATEUV2_OFFSET UNITYSDK_OFFSET(0x1EEC1D30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_SET_GENERATEUV_OFFSET UNITYSDK_OFFSET(0x1EEC1CE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_SET_REVERSETRIORDER_OFFSET UNITYSDK_OFFSET(0x1EEC1D80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_SET_STARTCAP_OFFSET UNITYSDK_OFFSET(0x1EEC1DD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_SET_STARTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1EEC1E20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEC5280)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int BuildVolumeCaps_TypeDefinitionIndex = 39591;

	class BuildVolumeCaps : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InVolume; // 0xB8
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InVolumeHoles; // 0xC0
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutVMesh; // 0xC8
		::FluffyUnderware::Curvy::Generator::CGYesNoAuto m_StartCap; // 0xD0
		::FluffyUnderware::Curvy::Generator::CGYesNoAuto m_EndCap; // 0xD4
		::System::Boolean m_ReverseTriOrder; // 0xD8
		::System::Boolean m_GenerateUV; // 0xD9
		::System::Boolean m_GenerateUV2; // 0xDA
		::FluffyUnderware::Curvy::Generator::CGMaterialSettings* m_StartMaterialSettings; // 0xE0
		::UnityEngine::Material* m_StartMaterial; // 0xE8
		::System::Boolean m_CloneStartCap; // 0xF0
		::FluffyUnderware::Curvy::Generator::CGMaterialSettings* m_EndMaterialSettings; // 0xF8
		::UnityEngine::Material* m_EndMaterial; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_GenerateUV()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_GENERATEUV_OFFSET))(this);
		}

		::System::Void set_GenerateUV(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_SET_GENERATEUV_OFFSET))(this, value);
		}

		::System::Boolean get_GenerateUV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_GENERATEUV2_OFFSET))(this);
		}

		::System::Void set_GenerateUV2(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_SET_GENERATEUV2_OFFSET))(this, value);
		}

		::System::Boolean get_ReverseTriOrder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_REVERSETRIORDER_OFFSET))(this);
		}

		::System::Void set_ReverseTriOrder(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_SET_REVERSETRIORDER_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Generator::CGYesNoAuto get_StartCap()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGYesNoAuto(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_STARTCAP_OFFSET))(this);
		}

		::System::Void set_StartCap(::FluffyUnderware::Curvy::Generator::CGYesNoAuto value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGYesNoAuto))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_SET_STARTCAP_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_StartMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_STARTMATERIAL_OFFSET))(this);
		}

		::System::Void set_StartMaterial(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_SET_STARTMATERIAL_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Generator::CGMaterialSettings* get_StartMaterialSettings()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGMaterialSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_STARTMATERIALSETTINGS_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::CGYesNoAuto get_EndCap()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGYesNoAuto(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_ENDCAP_OFFSET))(this);
		}

		::System::Void set_EndCap(::FluffyUnderware::Curvy::Generator::CGYesNoAuto value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGYesNoAuto))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_SET_ENDCAP_OFFSET))(this, value);
		}

		::System::Boolean get_CloneStartCap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_CLONESTARTCAP_OFFSET))(this);
		}

		::System::Void set_CloneStartCap(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_SET_CLONESTARTCAP_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Generator::CGMaterialSettings* get_EndMaterialSettings()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGMaterialSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_ENDMATERIALSETTINGS_OFFSET))(this);
		}

		::UnityEngine::Material* get_EndMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GET_ENDMATERIAL_OFFSET))(this);
		}

		::System::Void set_EndMaterial(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_SET_ENDMATERIAL_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_REFRESH_OFFSET))(this);
		}

		static ::UnityEngine::Matrix4x4 getMatrix(::FluffyUnderware::Curvy::Generator::CGVolume* vol, ::System::Int32 index, ::System::Boolean inverse)
		{
			return ((::UnityEngine::Matrix4x4(*)(::FluffyUnderware::Curvy::Generator::CGVolume*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_GETMATRIX_OFFSET))(vol, index, inverse);
		}

		static ::System::Void flipTris(::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32> indices, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Void(*)(::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_FLIPTRIS_OFFSET))(indices, start, end);
		}

		static ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> applyMatrix(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> vt, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Bounds& bounds)
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>(*)(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>, ::UnityEngine::Matrix4x4, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_APPLYMATRIX_OFFSET))(vt, matrix, bounds);
		}

		static ::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>* make2DSegment(::FluffyUnderware::Curvy::Generator::CGVolume* vol, ::System::Int32 segmentIndex)
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>*(*)(::FluffyUnderware::Curvy::Generator::CGVolume*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_MAKE2DSEGMENT_OFFSET))(vol, segmentIndex);
		}

		static ::System::Void applyUV(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> vts, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2> uvArray, ::System::Int32 index, ::System::Int32 count, ::FluffyUnderware::Curvy::Generator::CGMaterialSettings* mat, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2>, ::System::Int32, ::System::Int32, ::FluffyUnderware::Curvy::Generator::CGMaterialSettings*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_APPLYUV_OFFSET))(vts, uvArray, index, count, mat, bounds);
		}

		static ::System::Void applyUV2(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> vertice, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2> uv2Array, ::System::Int32 index, ::System::Int32 count, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2>, ::System::Int32, ::System::Int32, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS_APPLYUV2_OFFSET))(vertice, uv2Array, index, count, bounds);
		}
	};
}
