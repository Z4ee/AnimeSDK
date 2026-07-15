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

#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_BUILDCHIMERA_OFFSET UNITYSDK_OFFSET(0x16E1B700)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_BUILDHOLLOW_OFFSET UNITYSDK_OFFSET(0x16E1D060)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x16E1AB70)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_GET_OUTLINEDRAWER_OFFSET UNITYSDK_OFFSET(0x16E1AA50)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_GET__BODYCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x16E1AA60)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_HIDEOUTLINE_OFFSET UNITYSDK_OFFSET(0x16E1B470)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16E1E280)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_SETSHADOWCASTINGENABLED_OFFSET UNITYSDK_OFFSET(0x16E1E220)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_SHOWHIGHLIGHTOUTLINE_OFFSET UNITYSDK_OFFSET(0x16E1AC20)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDBLUSH_OFFSET UNITYSDK_OFFSET(0x16E1D790)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDBODY_OFFSET UNITYSDK_OFFSET(0x16E1D850)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDEYE_OFFSET UNITYSDK_OFFSET(0x16E1CBF0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDFACE_OFFSET UNITYSDK_OFFSET(0x16E1DB50)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDITEMS_1_OFFSET UNITYSDK_OFFSET(0x16E1DDC0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDITEMS_OFFSET UNITYSDK_OFFSET(0x16E1E020)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x16E1E3A0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDPARTS_1_OFFSET UNITYSDK_OFFSET(0x16E1E0E0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDPARTS_OFFSET UNITYSDK_OFFSET(0x16E1C240)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E1E910)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__CREATEMATERIALPARTCONFIG_OFFSET UNITYSDK_OFFSET(0x16E1D6F0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x16E1E900)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__GETCHIMERACONFIG_OFFSET UNITYSDK_OFFSET(0x16E1BA50)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__GETVERSION_OFFSET UNITYSDK_OFFSET(0x16E1BCF0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__ISASSETEXISTS_OFFSET UNITYSDK_OFFSET(0x16E1E6B0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__ISGAMEINITIALIZED_OFFSET UNITYSDK_OFFSET(0x16E1E8A0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__ISVALID_OFFSET UNITYSDK_OFFSET(0x16E1BBA0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__ITERATEPARTS_OFFSET UNITYSDK_OFFSET(0x16E1ACF0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__LOADANDBINDCHIMERA_OFFSET UNITYSDK_OFFSET(0x16E1BD40)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__LOADMATERIALWITHFALLBACK_OFFSET UNITYSDK_OFFSET(0x16E1E2D0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__SYNCLOADMATERIAL_OFFSET UNITYSDK_OFFSET(0x16E1DD00)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__TRYLOADMATERIAL_OFFSET UNITYSDK_OFFSET(0x16E1E810)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__TRYSETWWISESWITCH_OFFSET UNITYSDK_OFFSET(0x16E1CD80)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelChimeraModelView_TypeDefinitionIndex = 74367;

	class ChimeraDuelChimeraModelView : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__EyeState()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraModelView_TypeDefinitionIndex)->GetStaticField(0x145D0);
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

		::System::Void BuildChimera(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_BUILDCHIMERA_OFFSET))(this, a1);
		}

		::System::Void BuildHollow(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_BUILDHOLLOW_OFFSET))(this, a1);
		}

		::System::Void _BuildParts(::RPG::Client::IChimeraModelPartsConfig* a1, ::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialVersion a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IChimeraModelPartsConfig*, ::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialVersion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDPARTS_OFFSET))(this, a1, a2);
		}

		::System::Void _BuildParts_1(::RPG::GameCore::ChimeraMaterialType a1, ::RPG::GameCore::ChimeraHornsPartType a2, ::RPG::GameCore::ChimeraWingsPartType a3, ::RPG::GameCore::ChimeraTailPartType a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraMaterialType, ::RPG::GameCore::ChimeraHornsPartType, ::RPG::GameCore::ChimeraWingsPartType, ::RPG::GameCore::ChimeraTailPartType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDPARTS_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _LoadAndBindChimera(::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialVersion a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialVersion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__LOADANDBINDCHIMERA_OFFSET))(this, a1);
		}

		::System::Void SetShadowCastingEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_SETSHADOWCASTINGENABLED_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Void _BuildFace(::RPG::GameCore::ChimeraMaterialType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraMaterialType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDFACE_OFFSET))(this, a1);
		}

		::System::Void _BuildBlush(::RPG::GameCore::ChimeraMaterialType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraMaterialType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDBLUSH_OFFSET))(this, a1);
		}

		::System::Void _BuildBody(::RPG::GameCore::ChimeraMaterialType a1, ::RPG::GameCore::ChimeraTailPartType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraMaterialType, ::RPG::GameCore::ChimeraTailPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDBODY_OFFSET))(this, a1, a2);
		}

		::System::Void _BuildItems(::RPG::GameCore::ChimeraMaterialType a1, ::RPG::GameCore::ChimeraHornsPartType a2, ::RPG::GameCore::ChimeraWingsPartType a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraMaterialType, ::RPG::GameCore::ChimeraHornsPartType, ::RPG::GameCore::ChimeraWingsPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDITEMS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _BuildItems_1(::UnityEngine::Material* a1, ::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialVersion a2, ::RPG::GameCore::ChimeraHornsPartType a3, ::RPG::GameCore::ChimeraWingsPartType a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialVersion, ::RPG::GameCore::ChimeraHornsPartType, ::RPG::GameCore::ChimeraWingsPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDITEMS_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _BuildEye(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDEYE_OFFSET))(this, a1);
		}

		::System::Void _TrySetWwiseSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__TRYSETWWISESWITCH_OFFSET))(this);
		}

		::System::String* _BuildMaterialPath(::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialCategory a1, ::RPG::GameCore::ChimeraMaterialType a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialCategory, ::RPG::GameCore::ChimeraMaterialType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__BUILDMATERIALPATH_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialVersion _GetVersion(::RPG::GameCore::ChimeraMaterialType a1)
		{
			return ((::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialVersion(*)(::PVOID, ::RPG::GameCore::ChimeraMaterialType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__GETVERSION_OFFSET))(this, a1);
		}

		::UnityEngine::Material* _LoadMaterialWithFallback(::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialCategory a1, ::RPG::GameCore::ChimeraMaterialType a2)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialCategory, ::RPG::GameCore::ChimeraMaterialType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__LOADMATERIALWITHFALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean _TryLoadMaterial(::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialCategory a1, ::RPG::GameCore::ChimeraMaterialType a2, ::UnityEngine::Material*& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelChimeraModelView_MaterialCategory, ::RPG::GameCore::ChimeraMaterialType, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__TRYLOADMATERIAL_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::CharacterReplaceMaterialPartShow* _CreateMaterialPartConfig(::Il2CppArray<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::CharacterReplaceMaterialPartShow*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__CREATEMATERIALPARTCONFIG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IChimeraModelConfig* _GetChimeraConfig()
		{
			return ((::RPG::Client::IChimeraModelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__GETCHIMERACONFIG_OFFSET))(this);
		}

		::System::Boolean _IsGameInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__ISGAMEINITIALIZED_OFFSET))(this);
		}

		::System::Boolean _IsValid(::RPG::Client::IChimeraModelConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IChimeraModelConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__ISVALID_OFFSET))(this, a1);
		}

		::System::Boolean _IsAssetExists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__ISASSETEXISTS_OFFSET))(this, a1);
		}

		::UnityEngine::Material* _SyncLoadMaterial(::System::String* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW__SYNCLOADMATERIAL_OFFSET))(this, a1);
		}
	};
}
