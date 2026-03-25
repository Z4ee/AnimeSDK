#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CoastinfoWaveMonoPlugin_TileUVWrapMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class CoastinfoWaveBehavior; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x94028B0)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER00LS_OFFSET UNITYSDK_OFFSET(0x94025E0)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER01LS_OFFSET UNITYSDK_OFFSET(0x9402620)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER10LS_OFFSET UNITYSDK_OFFSET(0x9402600)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER11LS_OFFSET UNITYSDK_OFFSET(0x9402640)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERBAKED_OFFSET UNITYSDK_OFFSET(0x94025D0)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERUV00_10_OFFSET UNITYSDK_OFFSET(0x9402660)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERUV01_11_OFFSET UNITYSDK_OFFSET(0x9402670)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFMESHLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x9402680)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_SETREFCORNERDATA_OFFSET UNITYSDK_OFFSET(0x94026A0)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x94029C0)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x9402900)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x9402A20)

namespace RPG::Client
{
	inline static constexpr unsigned int CoastinfoWaveMonoPlugin_TypeDefinitionIndex = 58095;

	class CoastinfoWaveMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::CoastinfoWaveBehavior*>
	{
	public:
		static ::System::String** StaticGet_TessellationAdaptiveShaderPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x41520);
		}
		static ::System::String** StaticGet_CoastInfoShaderPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x41528);
		}
		static ::System::String** StaticGet_RuntimeClipmapShaderPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x41530);
		}
		::UnityEngine::MeshRenderer* waterPlane; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* sceneRoot; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* bakeExcludeRoots; // 0x40
		::UnityEngine::Vector3 boundsMinSize; // 0x48
		::System::Int32 BakeCoastInfoTexHeight; // 0x54
		::System::Single boundsBakePadding; // 0x58
		::System::Single S_MaxWaterDepth; // 0x5C
		::System::Int32 shoreFalloffPx; // 0x60
		::System::Int32 gradBlurRadius; // 0x64
		::System::Single gradBTiling; // 0x68
		::System::Single gradATiling; // 0x6C
		::System::Single maskThreshold; // 0x70
		::UnityEngine::ComputeShader* coastComputeShader; // 0x78
		::System::String* outputPath; // 0x80
		::System::Boolean UseTileMapping; // 0x88
		::UnityEngine::Mesh* TM_TileMesh; // 0x90
		::System::Single TM_TileWorldSize; // 0x98
		::System::Boolean TM_AutoTileCount; // 0x9C
		::System::Int32 TM_TileCountX; // 0xA0
		::System::Int32 TM_TileCountZ; // 0xA4
		::System::Boolean TM_FollowCamera; // 0xA8
		::System::Boolean TM_SnapToGrid; // 0xA9
		::System::Int32 TM_UpdateIntervalFrames; // 0xAC
		::UnityEngine::Camera* RT_TargetCamera; // 0xB0
		::RPG::Client::CoastinfoWaveMonoPlugin_TileUVWrapMode TM_UVWrapMode; // 0xB8
		::System::Int32 TM_TileResolution; // 0xBC
		::UnityEngine::Mesh* FixedReferenceMesh; // 0xC0
		::System::Boolean FixedRef_AutoFillWhenMeshMissing; // 0xC8
		::System::Boolean _refCornerBaked; // 0xC9
		::UnityEngine::Mesh* _refCornerSourceMesh; // 0xD0
		::UnityEngine::Bounds _refMeshLocalBounds; // 0xD8
		::UnityEngine::Vector3 _refCorner00LS; // 0xF0
		::UnityEngine::Vector3 _refCorner10LS; // 0xFC
		::UnityEngine::Vector3 _refCorner01LS; // 0x108
		::UnityEngine::Vector3 _refCorner11LS; // 0x114
		::UnityEngine::Vector4 _refCornerUV00_10; // 0x120
		::UnityEngine::Vector4 _refCornerUV01_11; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN__CCTOR_OFFSET))();
		}

		::System::Boolean get_RefCornerBaked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERBAKED_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RefCorner00LS()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER00LS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RefCorner10LS()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER10LS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RefCorner01LS()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER01LS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RefCorner11LS()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER11LS_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_RefCornerUV00_10()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERUV00_10_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_RefCornerUV01_11()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERUV01_11_OFFSET))(this);
		}

		::UnityEngine::Bounds get_RefMeshLocalBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFMESHLOCALBOUNDS_OFFSET))(this);
		}

		::System::Void SetRefCornerData(::System::Boolean a1, ::UnityEngine::Mesh* a2, ::UnityEngine::Bounds a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector4 a8, ::UnityEngine::Vector4 a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Mesh*, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_SETREFCORNERDATA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
