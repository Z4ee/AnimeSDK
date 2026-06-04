#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CharacterModelShadowCmd_BodySizeShadow.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class ICmdExecuteCb;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_ADDEXTRARENDERERTOSINGLECHARACTER_OFFSET UNITYSDK_OFFSET(0x18ECBD60)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18ECBF00)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_GETSINGLECHARACTERSHADOWDIR_OFFSET UNITYSDK_OFFSET(0x18ECD1F0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_GETTEAMCHARACTERSHADOWDIR_OFFSET UNITYSDK_OFFSET(0x18ECD3F0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_GET_CHARACTERBODYSIZESHADOW_OFFSET UNITYSDK_OFFSET(0x18ECA8F0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_GET_ISHIGHQUALITYEFFECT_OFFSET UNITYSDK_OFFSET(0x18ECAE40)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_GET_ISNEEDTHREESHADOW_OFFSET UNITYSDK_OFFSET(0x18ECAD10)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_GET_KEY_OFFSET UNITYSDK_OFFSET(0x18ECBEF0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_GET_TEAMPOSITIONS_OFFSET UNITYSDK_OFFSET(0x18ECAE20)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_INITHIGHQUALITYSHADOW_OFFSET UNITYSDK_OFFSET(0x18ECAD30)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_INITLOWQUALITYSHADOW_OFFSET UNITYSDK_OFFSET(0x18ECB540)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_INIT_OFFSET UNITYSDK_OFFSET(0x18ECAE90)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18ECBE70)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18ECB370)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18ECB1C0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18ECAEB0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_REMOVEEXTRARENDERERTOSINGLECHARACTER_OFFSET UNITYSDK_OFFSET(0x18ECBDF0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_SETMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x18ECA920)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_SET_CHARACTERBODYSIZESHADOW_OFFSET UNITYSDK_OFFSET(0x18ECA900)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_SET_ISNEEDTHREESHADOW_OFFSET UNITYSDK_OFFSET(0x18ECAD20)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_SET_TEAMPOSITIONS_OFFSET UNITYSDK_OFFSET(0x18ECAE30)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_START_OFFSET UNITYSDK_OFFSET(0x18ECAE50)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ECD8B0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD__CTOR_OFFSET UNITYSDK_OFFSET(0x18ECD500)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD__DRAWSINGLECHARACTERRENDERERS_OFFSET UNITYSDK_OFFSET(0x18ECC280)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD__GETMATERIALSYNCEDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x18ECC7C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CharacterModelShadowCmd_TypeDefinitionIndex = 35277;

	class CharacterModelShadowCmd : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::ICmdExecuteCb** StaticGet_current()
		{
			return (::ICmdExecuteCb**)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x2CE20);
		}
		static ::System::Int32* StaticGet__ShadowAttenStartPosShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9C70);
		}
		static ::System::Int32* StaticGet__ShadowAttenScaleShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9C74);
		}
		static ::System::Int32* StaticGet__DissolveOnShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9C78);
		}
		static ::System::Int32* StaticGet__UseDitherAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9C7C);
		}
		static ::System::Int32* StaticGet__DissolveDistortionIntensityShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9C80);
		}
		static ::System::Int32* StaticGet__ModelShadowColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9C84);
		}
		static ::System::Int32* StaticGet__DissolveSTShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9C88);
		}
		static ::System::Int32* StaticGet__DissolveRateShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9C8C);
		}
		static ::System::Int32* StaticGet__DissolveMapAddShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9C90);
		}
		static ::System::Int32* StaticGet__DissolveMapShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9C94);
		}
		static ::System::Int32* StaticGet__OpacityShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9C98);
		}
		static ::System::Int32* StaticGet__DissolveUVShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9C9C);
		}
		static ::System::Int32* StaticGet__DistortionSTShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9CA0);
		}
		static ::System::Int32* StaticGet__DitherAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9CA4);
		}
		static ::System::Int32* StaticGet__ShadowDirAttenShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9CA8);
		}
		static ::System::Int32* StaticGet__DissolveUVSpeedShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9CAC);
		}
		static ::System::Int32* StaticGet__ShadowGroundShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmd_TypeDefinitionIndex)->GetStaticField(0x9CB0);
		}
		::UnityEngine::GameObject* SingleCharacterShadowReceiver; // 0x18
		::UnityEngine::GameObject* SingleCharacterShadowDrawDepth; // 0x20
		::UnityEngine::GameObject* TeamCharacterShadowReceiver; // 0x28
		::UnityEngine::GameObject* TeamCharacterShadowDrawDepth; // 0x30
		::Il2CppArray<::UnityEngine::Vector4>* SingelCharacterShadowDir; // 0x38
		::Il2CppArray<::UnityEngine::Vector4>* SingelCharacterShadowDirKidOffset; // 0x40
		::Il2CppArray<::UnityEngine::Vector4>* TeamCharacterShadowDir; // 0x48
		::UnityEngine::Shader* ModelShadowShader; // 0x50
		::UnityEngine::Color ModelShadowColorSingle; // 0x58
		::UnityEngine::Color ModelShadowColorTeam; // 0x68
		::System::Single SingleCharacterShadowOpacity; // 0x78
		::System::Single TeamCharacterShadowOpacity; // 0x7C
		::Il2CppArray<::UnityEngine::Vector4>* SingelCharacterShadowDirLowQuality; // 0x80
		::Il2CppArray<::UnityEngine::Vector4>* SingelCharacterShadowDirKidOffsetLowQuality; // 0x88
		::Il2CppArray<::UnityEngine::Vector4>* TeamCharacterShadowDirLowQuality; // 0x90
		::Il2CppArray<::UnityEngine::Renderer*>* SingleCharacterRenderers; // 0x98
		::Il2CppArray<::Il2CppArray<::UnityEngine::Renderer*>*>* TeamCharacterRenderers; // 0xA0
		::RPG::CustomRP::CharacterModelShadowCmd_BodySizeShadow characterBodySizeShadow; // 0xA8
		::System::Boolean isNeedThreeShadow; // 0xAC
		::System::Int32 TeamNumber; // 0xB0
		::Il2CppArray<::UnityEngine::Vector3>* teamPositions; // 0xB8
		::System::Boolean _IsInited; // 0xC0
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _ExtraRenderer; // 0xC8
		::Il2CppArray<::UnityEngine::Material*>* ShadowMats; // 0xD0
		::Il2CppArray<::UnityEngine::Material*>* ShadowMatsTeam; // 0xD8
		::System::Boolean isHighQualityEffect; // 0xE0
		::System::Boolean isGlobalEnableShadow; // 0xE1
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* _materialInstances; // 0xE8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _singleCharacterShadowDir; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD__CCTOR_OFFSET))();
		}

		::System::Int32 get_CharacterBodySizeShadow()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_GET_CHARACTERBODYSIZESHADOW_OFFSET))(this);
		}

		::System::Void set_CharacterBodySizeShadow(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_SET_CHARACTERBODYSIZESHADOW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNeedThreeShadow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_GET_ISNEEDTHREESHADOW_OFFSET))(this);
		}

		::System::Void set_IsNeedThreeShadow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_SET_ISNEEDTHREESHADOW_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_TeamPositions()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_GET_TEAMPOSITIONS_OFFSET))(this);
		}

		::System::Void set_TeamPositions(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_SET_TEAMPOSITIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHighQualityEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_GET_ISHIGHQUALITYEFFECT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_INIT_OFFSET))(this);
		}

		::System::Void AddExtraRendererToSingleCharacter(::Il2CppArray<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_ADDEXTRARENDERERTOSINGLECHARACTER_OFFSET))(this, a1);
		}

		::System::Void RemoveExtraRendererToSingleCharacter(::Il2CppArray<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_REMOVEEXTRARENDERERTOSINGLECHARACTER_OFFSET))(this, a1);
		}

		::System::Void InitHighQualityShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_INITHIGHQUALITYSHADOW_OFFSET))(this);
		}

		::System::Void InitLowQualityShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_INITLOWQUALITYSHADOW_OFFSET))(this);
		}

		::System::Void SetMaterialProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_SETMATERIALPROPERTIES_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_LATEUPDATE_OFFSET))(this);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void _DrawSingleCharacterRenderers(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Renderer*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Collections::Generic::IList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD__DRAWSINGLECHARACTERRENDERERS_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Material* _GetMaterialSyncedProperties(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::UnityEngine::Material* a3)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD__GETMATERIALSYNCEDPROPERTIES_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetSingleCharacterShadowDir()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_GETSINGLECHARACTERSHADOWDIR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetTeamCharacterShadowDir(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMD_GETTEAMCHARACTERSHADOWDIR_OFFSET))(this, a1);
		}
	};
}
