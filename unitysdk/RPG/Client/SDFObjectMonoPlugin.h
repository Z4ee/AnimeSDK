#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class MeshSDFRendererMonoPlugin; }
namespace RPG::Client { class SDFObjectBehavior; }

#define RPG_CLIENT_SDFOBJECTMONOPLUGIN_GETCHILDRENDERERS_OFFSET UNITYSDK_OFFSET(0x16A38A40)
#define RPG_CLIENT_SDFOBJECTMONOPLUGIN_GETLOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x16A38620)
#define RPG_CLIENT_SDFOBJECTMONOPLUGIN_GETOBJECTID_OFFSET UNITYSDK_OFFSET(0x16A38400)
#define RPG_CLIENT_SDFOBJECTMONOPLUGIN_GETPRIMARYRENDERER_OFFSET UNITYSDK_OFFSET(0x16A38B00)
#define RPG_CLIENT_SDFOBJECTMONOPLUGIN_GETWORLDBOUNDS_OFFSET UNITYSDK_OFFSET(0x16A384B0)
#define RPG_CLIENT_SDFOBJECTMONOPLUGIN_GETWORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x16A38790)
#define RPG_CLIENT_SDFOBJECTMONOPLUGIN_HASSURFACECARD_OFFSET UNITYSDK_OFFSET(0x16A389B0)
#define RPG_CLIENT_SDFOBJECTMONOPLUGIN_ISVALID_OFFSET UNITYSDK_OFFSET(0x16A38900)
#define RPG_CLIENT_SDFOBJECTMONOPLUGIN_UPDATERUNTIMEINFO_OFFSET UNITYSDK_OFFSET(0x16A36C00)
#define RPG_CLIENT_SDFOBJECTMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x16A38B90)

namespace RPG::Client
{
	inline static constexpr unsigned int SDFObjectMonoPlugin_TypeDefinitionIndex = 70913;

	class SDFObjectMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::SDFObjectBehavior*>
	{
	public:
		::System::Int32 objectID; // 0x30
		::System::Boolean isRegistered; // 0x34
		::System::Int32 rendererCount; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void UpdateRuntimeInfo(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTMONOPLUGIN_UPDATERUNTIMEINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetObjectID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTMONOPLUGIN_GETOBJECTID_OFFSET))(this);
		}

		::UnityEngine::Bounds GetWorldBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTMONOPLUGIN_GETWORLDBOUNDS_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetLocalToWorldMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTMONOPLUGIN_GETLOCALTOWORLDMATRIX_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetWorldToLocalMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTMONOPLUGIN_GETWORLDTOLOCALMATRIX_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTMONOPLUGIN_ISVALID_OFFSET))(this);
		}

		::System::Boolean HasSurfaceCard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTMONOPLUGIN_HASSURFACECARD_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MeshSDFRendererMonoPlugin*>* GetChildRenderers()
		{
			return ((::Il2CppArray<::RPG::Client::MeshSDFRendererMonoPlugin*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTMONOPLUGIN_GETCHILDRENDERERS_OFFSET))(this);
		}

		::RPG::Client::MeshSDFRendererMonoPlugin* GetPrimaryRenderer()
		{
			return ((::RPG::Client::MeshSDFRendererMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTMONOPLUGIN_GETPRIMARYRENDERER_OFFSET))(this);
		}
	};
}
