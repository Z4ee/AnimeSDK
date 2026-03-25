#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LightCone3DColorType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class GyroManager; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class LightCone3D_UpdateFunc; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Sprite; }

#define RPG_CLIENT_LIGHTCONE3D_ADD_UPDATEGYROEVENT_OFFSET UNITYSDK_OFFSET(0x9978C80)
#define RPG_CLIENT_LIGHTCONE3D_AWAKE_OFFSET UNITYSDK_OFFSET(0x9978D40)
#define RPG_CLIENT_LIGHTCONE3D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99786D0)
#define RPG_CLIENT_LIGHTCONE3D_REMOVE_UPDATEGYROEVENT_OFFSET UNITYSDK_OFFSET(0x9978CE0)
#define RPG_CLIENT_LIGHTCONE3D_SETACRYLICSTARTEXTURE_OFFSET UNITYSDK_OFFSET(0x9978260)
#define RPG_CLIENT_LIGHTCONE3D_SETACRYLICTEXTURE_OFFSET UNITYSDK_OFFSET(0x9977FC0)
#define RPG_CLIENT_LIGHTCONE3D_SETBACKFACETEXTURE_OFFSET UNITYSDK_OFFSET(0x9978AA0)
#define RPG_CLIENT_LIGHTCONE3D_SETBACKIMAGE_OFFSET UNITYSDK_OFFSET(0x9978900)
#define RPG_CLIENT_LIGHTCONE3D_SETCOLORTYPE_OFFSET UNITYSDK_OFFSET(0x99784F0)
#define RPG_CLIENT_LIGHTCONE3D_SETGYROEVENT_OFFSET UNITYSDK_OFFSET(0x99788B0)
#define RPG_CLIENT_LIGHTCONE3D_SETLIGHTCONE_OFFSET UNITYSDK_OFFSET(0x9977C00)
#define RPG_CLIENT_LIGHTCONE3D_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x9977DB0)
#define RPG_CLIENT_LIGHTCONE3D_SETUSEDIFFERENTBACKFACE_OFFSET UNITYSDK_OFFSET(0x9978960)
#define RPG_CLIENT_LIGHTCONE3D_START_OFFSET UNITYSDK_OFFSET(0x99790F0)
#define RPG_CLIENT_LIGHTCONE3D_UPDATE_OFFSET UNITYSDK_OFFSET(0x9979350)
#define RPG_CLIENT_LIGHTCONE3D__CCTOR_OFFSET UNITYSDK_OFFSET(0x99796C0)
#define RPG_CLIENT_LIGHTCONE3D__CTOR_OFFSET UNITYSDK_OFFSET(0x99796B0)

namespace RPG::Client
{
	inline static constexpr unsigned int LightCone3D_TypeDefinitionIndex = 59819;

	class LightCone3D : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__StarTexPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightCone3D_TypeDefinitionIndex)->GetStaticField(0x8F60);
		}
		static ::System::UInt32* StaticGet_FrameCounter()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LightCone3D_TypeDefinitionIndex)->GetStaticField(0x8F64);
		}
		static ::System::Boolean* StaticGet_IsShowGyroInfo()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LightCone3D_TypeDefinitionIndex)->GetStaticField(0x8F68);
		}
		static ::System::Int32* StaticGet__UseDifferentBackfacePropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightCone3D_TypeDefinitionIndex)->GetStaticField(0x8F6C);
		}
		static ::System::Single* StaticGet_SmoothTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(LightCone3D_TypeDefinitionIndex)->GetStaticField(0x8F70);
		}
		static ::System::Int32* StaticGet__MainTexPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightCone3D_TypeDefinitionIndex)->GetStaticField(0x8F74);
		}
		static ::System::Single* StaticGet_GyroMaxRotX()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(LightCone3D_TypeDefinitionIndex)->GetStaticField(0x8F78);
		}
		static ::System::Int32* StaticGet__BackfaceTexPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightCone3D_TypeDefinitionIndex)->GetStaticField(0x8F7C);
		}
		::RPG::Client::LightCone3D_UpdateFunc* UpdateGyroEvent; // 0x18
		::UnityEngine::MeshRenderer* _ContentMeshRenderer; // 0x20
		::UnityEngine::MeshRenderer* _AcrylicFrontMeshRenderer; // 0x28
		::UnityEngine::MeshRenderer* _AcrylicBackMeshRenderer; // 0x30
		::UnityEngine::Sprite* _TextureSprite; // 0x38
		::UnityEngine::Sprite* _BackfaceTextureSprite; // 0x40
		::UnityEngine::Sprite* _AcrylicTextureSprite; // 0x48
		::UnityEngine::Sprite* _AcrylicStarTextureSprite; // 0x50
		::RPG::Client::IAssetOperation* _TextureOpt; // 0x58
		::RPG::Client::IAssetOperation* _AcrylicTextureOpt; // 0x60
		::RPG::Client::IAssetOperation* _AcrylicStarTextureOpt; // 0x68
		::UnityEngine::Animator* _ColorAnimator; // 0x70
		::RPG::Client::EquipmentItemData* _LastLightConeData; // 0x78
		::System::Boolean _IsFirst; // 0x80
		::System::Boolean _IsAntiAlias; // 0x81
		::RPG::Client::GyroManager* _GyroManagerInstance; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D__CCTOR_OFFSET))();
		}

		::System::Void SetLightCone(::RPG::Client::EquipmentItemData* equipData, ::System::Boolean isAntiAlias, ::System::String* emptyTexturePath)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentItemData*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_SETLIGHTCONE_OFFSET))(this, equipData, isAntiAlias, emptyTexturePath);
		}

		::System::Void SetTexture(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_SETTEXTURE_OFFSET))(this, path);
		}

		::System::Void SetAcrylicTexture(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_SETACRYLICTEXTURE_OFFSET))(this, path);
		}

		::System::Void SetAcrylicStarTexture(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_SETACRYLICSTARTEXTURE_OFFSET))(this, path);
		}

		::System::Void SetColorType(::RPG::GameCore::LightCone3DColorType colorType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LightCone3DColorType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_SETCOLORTYPE_OFFSET))(this, colorType);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_DISPOSE_OFFSET))(this);
		}

		::System::Void SetGyroEvent(::RPG::Client::LightCone3D_UpdateFunc* func)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightCone3D_UpdateFunc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_SETGYROEVENT_OFFSET))(this, func);
		}

		::System::Void SetBackImage(::System::String* imagePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_SETBACKIMAGE_OFFSET))(this, imagePath);
		}

		::System::Void SetUseDifferentBackface(::System::Boolean isUse)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_SETUSEDIFFERENTBACKFACE_OFFSET))(this, isUse);
		}

		::System::Void SetBackfaceTexture(::System::String* imagePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_SETBACKFACETEXTURE_OFFSET))(this, imagePath);
		}

		::System::Void add_UpdateGyroEvent(::RPG::Client::LightCone3D_UpdateFunc* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightCone3D_UpdateFunc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_ADD_UPDATEGYROEVENT_OFFSET))(this, value);
		}

		::System::Void remove_UpdateGyroEvent(::RPG::Client::LightCone3D_UpdateFunc* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightCone3D_UpdateFunc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_REMOVE_UPDATEGYROEVENT_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_UPDATE_OFFSET))(this);
		}
	};
}
