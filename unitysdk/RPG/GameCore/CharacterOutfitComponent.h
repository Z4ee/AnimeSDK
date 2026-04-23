#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CharacterOutfitComponent_ESlot.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_999AE0B49D951C72;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class CharacterOutfitComponent_CharacterOutfitInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0xB604740)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CONTAINS_OFFSET UNITYSDK_OFFSET(0xB6041B0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6007B0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_DUPLICATETO_OFFSET UNITYSDK_OFFSET(0xB6040E0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARBASETYPE_1_OFFSET UNITYSDK_OFFSET(0xB605AB0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARBASETYPE_2_OFFSET UNITYSDK_OFFSET(0xB605950)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0xB604970)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_FINDMODELRENDERERSIMPL_OFFSET UNITYSDK_OFFSET(0xB604AA0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_FINDMODELRENDERERS_OFFSET UNITYSDK_OFFSET(0xB602AE0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_GETAVATAROUTFITTYPE_OFFSET UNITYSDK_OFFSET(0xB6048C0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_GETOUTFITTYPE_OFFSET UNITYSDK_OFFSET(0xB601D10)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENTFORSTORYCHARACTER_OFFSET UNITYSDK_OFFSET(0xB600700)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0xB600650)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_2_OFFSET UNITYSDK_OFFSET(0xB6006A0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB6005C0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ISEQUAL_OFFSET UNITYSDK_OFFSET(0xB6024E0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ISPLAYERAVATARID_OFFSET UNITYSDK_OFFSET(0xB6053E0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADOUTFITMODELSIMPL_OFFSET UNITYSDK_OFFSET(0xB6055F0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADOUTFITMODELS_OFFSET UNITYSDK_OFFSET(0xB6010E0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADSOURCEOUTFITMODELS_OFFSET UNITYSDK_OFFSET(0xB602470)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONLOADMODEL_OFFSET UNITYSDK_OFFSET(0xB5F94F0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xB600C20)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB600C60)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELCOMPONENTLOADEDART_OFFSET UNITYSDK_OFFSET(0xB5FC480)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xB600EF0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB600F30)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONPOSTMODELCOMPONENTLOADEDART_OFFSET UNITYSDK_OFFSET(0xB5FC540)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OVERRIDEOUTFITID_OFFSET UNITYSDK_OFFSET(0xB601500)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OVERRIDEOUTFIT_OFFSET UNITYSDK_OFFSET(0xB601980)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_REFRESHOUTFITPARTS_OFFSET UNITYSDK_OFFSET(0xB5F40B0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_RESETOUTFITSPRINGBONE_OFFSET UNITYSDK_OFFSET(0xB6014A0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETANIMATORSPEED_OFFSET UNITYSDK_OFFSET(0xB603BD0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFITFORSHAMAN_OFFSET UNITYSDK_OFFSET(0xB604550)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFIT_1_OFFSET UNITYSDK_OFFSET(0xB603E20)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFIT_OFFSET UNITYSDK_OFFSET(0xB603DC0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_TRIGGERDEFAULTCHANGEMODELEFFECTS_OFFSET UNITYSDK_OFFSET(0xB603430)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB600510)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__EVALUATEFORCEUSEDEFAULTOUTFITSLOT_OFFSET UNITYSDK_OFFSET(0xB6045F0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__ONPLAYEROUTFITCHANGED_OFFSET UNITYSDK_OFFSET(0xB605430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_TypeDefinitionIndex = 52728;

	class CharacterOutfitComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::IAvatarInfoProvider* _CurrentAvatar; // 0x18
		::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>* _OverrideOutfitModels; // 0x20
		::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* _Instance; // 0x28
		::RPG::GameCore::GenderType _StoryGenderType; // 0x30
		::RPG::GameCore::AvatarBaseType _CurrentAvatarBaseType; // 0x34
		::System::Boolean _ForceUseDefaultOutfitForShaman; // 0x38
		::RPG::GameCore::CharacterOutfitComponent_ESlot _ForceUseDefaultOutfitSlot; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void InitComponent_1(::RPG::GameCore::AvatarBaseType avatarBaseType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_1_OFFSET))(this, avatarBaseType);
		}

		::System::Void InitComponent_2(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_2_OFFSET))(this, avatar);
		}

		::System::Void InitComponentForStoryCharacter(::System::String* storyCharacterName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENTFORSTORYCHARACTER_OFFSET))(this, storyCharacterName);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelComponentLoadedArt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELCOMPONENTLOADEDART_OFFSET))(this);
		}

		::System::Void OnPostModelComponentLoadedArt(::UnityEngine::GameObject* modelObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONPOSTMODELCOMPONENTLOADEDART_OFFSET))(this, modelObject);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void OnLoadModel(::System::Boolean sync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONLOADMODEL_OFFSET))(this, sync);
		}

		::System::Void RefreshOutfitParts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_REFRESHOUTFITPARTS_OFFSET))(this);
		}

		::System::Void OverrideOutfitID(::System::Collections::Generic::IList_1<::System::UInt32>* outfitIDs, ::System::Boolean triggerEffect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OVERRIDEOUTFITID_OFFSET))(this, outfitIDs, triggerEffect);
		}

		::System::Void OverrideOutfit(::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>* outfitModels, ::System::Boolean triggerEffect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OVERRIDEOUTFIT_OFFSET))(this, outfitModels, triggerEffect);
		}

		::System::Void ResetOutfitSpringBone(::System::Boolean resetAllData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_RESETOUTFITSPRINGBONE_OFFSET))(this, resetAllData);
		}

		::System::Void SetAnimatorSpeed(::System::Single fAnimSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETANIMATORSPEED_OFFSET))(this, fAnimSpeed);
		}

		static ::System::Void TriggerDefaultChangeModelEffects(::RPG::GameCore::GameEntity* entity, ::System::Collections::Generic::List_1<::System::String*>* targetRendererNames)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_TRIGGERDEFAULTCHANGEMODELEFFECTS_OFFSET))(entity, targetRendererNames);
		}

		::System::Boolean SetForceUseDefaultOutfit(::RPG::GameCore::CharacterOutfitComponent_ESlot forceSlot)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterOutfitComponent_ESlot))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFIT_OFFSET))(this, forceSlot);
		}

		::System::Boolean SetForceUseDefaultOutfit_1(::RPG::GameCore::CharacterOutfitComponent_ESlot forceSlot, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>* outputAdd, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>* outputRemove)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterOutfitComponent_ESlot, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>*, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFIT_1_OFFSET))(this, forceSlot, outputAdd, outputRemove);
		}

		::System::Void DuplicateTo(::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* outfitInstance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_DUPLICATETO_OFFSET))(this, outfitInstance);
		}

		::System::Boolean IsEqual(::Collections::Pooled::PooledList_1<::Class_1_999AE0B49D951C72*>* lastOutfit, ::Collections::Pooled::PooledList_1<::Class_1_999AE0B49D951C72*>* currentOutfit, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>* outputAdd, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>* outputRemove)
		{
			return ((::System::Boolean(*)(::PVOID, ::Collections::Pooled::PooledList_1<::Class_1_999AE0B49D951C72*>*, ::Collections::Pooled::PooledList_1<::Class_1_999AE0B49D951C72*>*, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>*, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ISEQUAL_OFFSET))(this, lastOutfit, currentOutfit, outputAdd, outputRemove);
		}

		static ::System::Boolean Contains(::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>* outfitModels, ::Class_1_999AE0B49D951C72* outfitModel)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>*, ::Class_1_999AE0B49D951C72*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CONTAINS_OFFSET))(outfitModels, outfitModel);
		}

		::System::Void SetForceUseDefaultOutfitForShaman(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFITFORSHAMAN_OFFSET))(this, force);
		}

		::System::Boolean Contains_1(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CONTAINS_1_OFFSET))(this, id);
		}

		::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType> GetOutfitType()
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_GETOUTFITTYPE_OFFSET))(this);
		}

		::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType> GetAvatarOutfitType()
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_GETAVATAROUTFITTYPE_OFFSET))(this);
		}

		::System::Void FindModelRenderers(::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>* addModels, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>* removeModels, ::System::Collections::Generic::IList_1<::System::String*>* targetRendererNames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>*, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_FINDMODELRENDERERS_OFFSET))(this, addModels, removeModels, targetRendererNames);
		}

		::System::Void FindModelRenderersImpl(::Class_1_999AE0B49D951C72* model, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* outputMap)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_999AE0B49D951C72*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_FINDMODELRENDERERSIMPL_OFFSET))(this, model, outputMap);
		}

		static ::System::Boolean IsPlayerAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ISPLAYERAVATARID_OFFSET))(avatarID);
		}

		::System::Void _OnPlayerOutfitChanged(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__ONPLAYEROUTFITCHANGED_OFFSET))(this, param);
		}

		::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>* LoadOutfitModels(::System::Boolean checkOverrideMaterialKey)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADOUTFITMODELS_OFFSET))(this, checkOverrideMaterialKey);
		}

		::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>* LoadSourceOutfitModels()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADSOURCEOUTFITMODELS_OFFSET))(this);
		}

		::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType> EvaluateAvatarBaseType(::RPG::GameCore::CharacterDataComponent* dataComponent)
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType>(*)(::PVOID, ::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARBASETYPE_OFFSET))(this, dataComponent);
		}

		::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType> EvaluateAvatarBaseType_1(::RPG::GameCore::AdventureCharacterDataComponent* dataComponent)
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType>(*)(::PVOID, ::RPG::GameCore::AdventureCharacterDataComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARBASETYPE_1_OFFSET))(this, dataComponent);
		}

		::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType> EvaluateAvatarBaseType_2(::System::UInt32 avatarID)
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARBASETYPE_2_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>* LoadOutfitModelsImpl(::RPG::GameCore::GenderType genderType, ::RPG::GameCore::AvatarBaseType avatarBaseType, ::System::Boolean checkOverrideMaterialKey)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>*(*)(::PVOID, ::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADOUTFITMODELSIMPL_OFFSET))(this, genderType, avatarBaseType, checkOverrideMaterialKey);
		}

		::RPG::GameCore::CharacterOutfitComponent_ESlot _EvaluateForceUseDefaultOutfitSlot(::RPG::GameCore::AvatarBaseType avatarBaseType)
		{
			return ((::RPG::GameCore::CharacterOutfitComponent_ESlot(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__EVALUATEFORCEUSEDEFAULTOUTFITSLOT_OFFSET))(this, avatarBaseType);
		}
	};
}
