#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelChimeraModelView_MaterialCategory.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelChimeraModelView_MaterialVersion.h"
#include "unitysdk/RPG/GameCore/ChimeraHornsPartType.h"
#include "unitysdk/RPG/GameCore/ChimeraMaterialType.h"
#include "unitysdk/RPG/GameCore/ChimeraTailPartType.h"
#include "unitysdk/RPG/GameCore/ChimeraWingsPartType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class IChimeraModelConfig; }
namespace RPG::Client { class IChimeraModelPartsConfig; }
namespace RPG::Client::Prop { class ChimeraDuelChimeraOutlineDrawer; }
namespace RPG::Client::Prop { class ChimeraDuelModelShadowView; }
namespace RPG::GameCore { class CharacterReplaceMaterialPartShow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_BUILDCHIMERA_OFFSET UNITYSDK_OFFSET(0xA042780)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_BUILDHOLLOW_OFFSET UNITYSDK_OFFSET(0xA043BB0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0xA041D00)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_GET_OUTLINEDRAWER_OFFSET UNITYSDK_OFFSET(0xA041BE0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_GET__BODYCONSTVALUE_OFFSET UNITYSDK_OFFSET(0xA041BF0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_HIDEOUTLINE_OFFSET UNITYSDK_OFFSET(0xA0424A0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA044EA0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_SETSHADOWCASTINGENABLED_OFFSET UNITYSDK_OFFSET(0xA044E40)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_SHOWHIGHLIGHTOUTLINE_OFFSET UNITYSDK_OFFSET(0xA041DB0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDBLUSH_OFFSET UNITYSDK_OFFSET(0xA044350)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDBODY_OFFSET UNITYSDK_OFFSET(0xA044410)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDEYE_OFFSET UNITYSDK_OFFSET(0xA0437F0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDFACE_OFFSET UNITYSDK_OFFSET(0xA044720)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDITEMS_1_OFFSET UNITYSDK_OFFSET(0xA0449D0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDITEMS_OFFSET UNITYSDK_OFFSET(0xA044C40)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDMATERIALPATH_OFFSET UNITYSDK_OFFSET(0xA044FC0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDPARTS_1_OFFSET UNITYSDK_OFFSET(0xA044D00)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDPARTS_OFFSET UNITYSDK_OFFSET(0xA043220)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0455E0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__CREATEMATERIALPARTCONFIG_OFFSET UNITYSDK_OFFSET(0xA0442B0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA0455D0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__GETCHIMERACONFIG_OFFSET UNITYSDK_OFFSET(0xA042A20)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__GETVERSION_OFFSET UNITYSDK_OFFSET(0xA042CC0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__ISASSETEXISTS_OFFSET UNITYSDK_OFFSET(0xA045380)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__ISGAMEINITIALIZED_OFFSET UNITYSDK_OFFSET(0xA045570)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__ISVALID_OFFSET UNITYSDK_OFFSET(0xA042BC0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__ITERATEPARTS_OFFSET UNITYSDK_OFFSET(0xA041E80)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__LOADANDBINDCHIMERA_OFFSET UNITYSDK_OFFSET(0xA042D10)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__LOADMATERIALWITHFALLBACK_OFFSET UNITYSDK_OFFSET(0xA044EF0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__SYNCLOADMATERIAL_OFFSET UNITYSDK_OFFSET(0xA044910)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__TRYLOADMATERIAL_OFFSET UNITYSDK_OFFSET(0xA0454E0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__TRYSETWWISESWITCH_OFFSET UNITYSDK_OFFSET(0xA043980)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelChimeraModelView_TypeDefinitionIndex = 63774;

	class ChimeraDuelChimeraModelView : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__EyeState()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraModelView_TypeDefinitionIndex)->GetStaticField(0x12AF0);
		}
		::System::UInt32 ChimeraID; // 0x18
		::RPG::Client::Prop::ChimeraDuelModelShadowView* _Shadow; // 0x20
		::RPG::Client::Prop::ChimeraDuelChimeraOutlineDrawer* _OutlineDrawer; // 0x28
		::UnityEngine::Renderer* Body; // 0x30
		::UnityEngine::Renderer* Item_; // 0x38
		::UnityEngine::Renderer* Face; // 0x40
		::UnityEngine::Renderer* Blush; // 0x48
		::UnityEngine::Transform* _ArtRoot; // 0x50
		::UnityEngine::Transform* _ModelNormal; // 0x58
		::UnityEngine::Transform* _ModelMaster; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__CCTOR_OFFSET))();
		}

		::RPG::Client::Prop::ChimeraDuelChimeraOutlineDrawer* get_OutlineDrawer()
		{
			return ((::RPG::Client::Prop::ChimeraDuelChimeraOutlineDrawer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_GET_OUTLINEDRAWER_OFFSET))(this);
		}

		static ::System::UInt32 get__BodyConstValue()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_GET__BODYCONSTVALUE_OFFSET))();
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_GET_ANIMATOR_OFFSET))(this);
		}

		::System::Void ShowHighlightOutline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_SHOWHIGHLIGHTOUTLINE_OFFSET))(this);
		}

		::System::Void HideOutline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_HIDEOUTLINE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>* _IterateParts()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__ITERATEPARTS_OFFSET))(this);
		}

		::System::Void BuildChimera(::System::UInt32 chimeraID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_BUILDCHIMERA_OFFSET))(this, chimeraID);
		}

		::System::Void BuildHollow(::UnityEngine::Material* hollowMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_BUILDHOLLOW_OFFSET))(this, hollowMaterial);
		}

		::System::Void _BuildParts(::RPG::Client::IChimeraModelPartsConfig* config, ::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialVersion version)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IChimeraModelPartsConfig*, ::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialVersion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDPARTS_OFFSET))(this, config, version);
		}

		::System::Void _BuildParts_1(::RPG::GameCore::ChimeraMaterialType body, ::RPG::GameCore::ChimeraHornsPartType horns, ::RPG::GameCore::ChimeraWingsPartType wings, ::RPG::GameCore::ChimeraTailPartType tail, ::System::String* itemMatOverride)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraMaterialType, ::RPG::GameCore::ChimeraHornsPartType, ::RPG::GameCore::ChimeraWingsPartType, ::RPG::GameCore::ChimeraTailPartType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDPARTS_1_OFFSET))(this, body, horns, wings, tail, itemMatOverride);
		}

		::System::Void _LoadAndBindChimera(::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialVersion version)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialVersion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__LOADANDBINDCHIMERA_OFFSET))(this, version);
		}

		::System::Void SetShadowCastingEnabled(::System::Boolean isEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_SETSHADOWCASTINGENABLED_OFFSET))(this, isEnabled);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Void _BuildFace(::RPG::GameCore::ChimeraMaterialType materialType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraMaterialType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDFACE_OFFSET))(this, materialType);
		}

		::System::Void _BuildBlush(::RPG::GameCore::ChimeraMaterialType materialType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraMaterialType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDBLUSH_OFFSET))(this, materialType);
		}

		::System::Void _BuildBody(::RPG::GameCore::ChimeraMaterialType materialType, ::RPG::GameCore::ChimeraTailPartType tail)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraMaterialType, ::RPG::GameCore::ChimeraTailPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDBODY_OFFSET))(this, materialType, tail);
		}

		::System::Void _BuildItems(::RPG::GameCore::ChimeraMaterialType materialType, ::RPG::GameCore::ChimeraHornsPartType horns, ::RPG::GameCore::ChimeraWingsPartType wings)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraMaterialType, ::RPG::GameCore::ChimeraHornsPartType, ::RPG::GameCore::ChimeraWingsPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDITEMS_OFFSET))(this, materialType, horns, wings);
		}

		::System::Void _BuildItems_1(::UnityEngine::Material* material, ::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialVersion version, ::RPG::GameCore::ChimeraHornsPartType horns, ::RPG::GameCore::ChimeraWingsPartType wings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialVersion, ::RPG::GameCore::ChimeraHornsPartType, ::RPG::GameCore::ChimeraWingsPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDITEMS_1_OFFSET))(this, material, version, horns, wings);
		}

		::System::Void _BuildEye(::System::Int32 eyeParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDEYE_OFFSET))(this, eyeParam);
		}

		::System::Void _TrySetWwiseSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__TRYSETWWISESWITCH_OFFSET))(this);
		}

		::System::String* _BuildMaterialPath(::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialCategory category, ::RPG::GameCore::ChimeraMaterialType type)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialCategory, ::RPG::GameCore::ChimeraMaterialType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDMATERIALPATH_OFFSET))(this, category, type);
		}

		::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialVersion _GetVersion(::RPG::GameCore::ChimeraMaterialType type)
		{
			return ((::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialVersion(*)(::PVOID, ::RPG::GameCore::ChimeraMaterialType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__GETVERSION_OFFSET))(this, type);
		}

		::UnityEngine::Material* _LoadMaterialWithFallback(::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialCategory category, ::RPG::GameCore::ChimeraMaterialType type)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialCategory, ::RPG::GameCore::ChimeraMaterialType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__LOADMATERIALWITHFALLBACK_OFFSET))(this, category, type);
		}

		::System::Boolean _TryLoadMaterial(::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialCategory category, ::RPG::GameCore::ChimeraMaterialType type, ::UnityEngine::Material*& material)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialCategory, ::RPG::GameCore::ChimeraMaterialType, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__TRYLOADMATERIAL_OFFSET))(this, category, type, material);
		}

		::RPG::GameCore::CharacterReplaceMaterialPartShow* _CreateMaterialPartConfig(::Il2CppArray<::System::UInt32>* parts, ::System::Boolean hideNpc)
		{
			return ((::RPG::GameCore::CharacterReplaceMaterialPartShow*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__CREATEMATERIALPARTCONFIG_OFFSET))(this, parts, hideNpc);
		}

		::RPG::Client::IChimeraModelConfig* _GetChimeraConfig()
		{
			return ((::RPG::Client::IChimeraModelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__GETCHIMERACONFIG_OFFSET))(this);
		}

		::System::Boolean _IsGameInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__ISGAMEINITIALIZED_OFFSET))(this);
		}

		::System::Boolean _IsValid(::RPG::Client::IChimeraModelConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IChimeraModelConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__ISVALID_OFFSET))(this, config);
		}

		::System::Boolean _IsAssetExists(::System::String* asbPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__ISASSETEXISTS_OFFSET))(this, asbPath);
		}

		::UnityEngine::Material* _SyncLoadMaterial(::System::String* asbPath)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__SYNCLOADMATERIAL_OFFSET))(this, asbPath);
		}
	};
}
