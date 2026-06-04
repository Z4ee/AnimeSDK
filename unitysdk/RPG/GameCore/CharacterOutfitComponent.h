#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CharacterOutfitComponent_ESlot.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_999AE0B49D951C72;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::AvatarSystem { class IAvatar; }
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

#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0xCD6B510)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CONTAINS_OFFSET UNITYSDK_OFFSET(0xCD6AF60)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD67A70)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_DUPLICATETO_OFFSET UNITYSDK_OFFSET(0xCD6AE90)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARBASETYPE_1_OFFSET UNITYSDK_OFFSET(0xCD6C540)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARBASETYPE_2_OFFSET UNITYSDK_OFFSET(0xCD6C3D0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0xCD6B620)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_FINDMODELRENDERERSIMPL_OFFSET UNITYSDK_OFFSET(0xCD6B740)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_FINDMODELRENDERERS_OFFSET UNITYSDK_OFFSET(0xCD69B30)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_GETAVATAROUTFITTYPE_OFFSET UNITYSDK_OFFSET(0xCD6B570)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_GETOUTFITTYPE_OFFSET UNITYSDK_OFFSET(0xCD68640)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENTFORSTORYCHARACTER_OFFSET UNITYSDK_OFFSET(0xCD679C0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0xCD67910)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_2_OFFSET UNITYSDK_OFFSET(0xCD67960)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCD67870)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ISEQUAL_OFFSET UNITYSDK_OFFSET(0xCD68F40)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ISPLAYERAVATARID_OFFSET UNITYSDK_OFFSET(0xCD6BF60)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADOUTFITMODELSIMPL_OFFSET UNITYSDK_OFFSET(0xCD6C170)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADOUTFITMODELS_OFFSET UNITYSDK_OFFSET(0xCD67D00)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADSOURCEOUTFITMODELS_OFFSET UNITYSDK_OFFSET(0xCD68ED0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONLOADMODEL_OFFSET UNITYSDK_OFFSET(0xCD618C0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xCD67BB0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xCD67BF0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELCOMPONENTLOADEDART_OFFSET UNITYSDK_OFFSET(0xCD63D60)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xCD67C70)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xCD67CB0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONPOSTMODELCOMPONENTLOADEDART_OFFSET UNITYSDK_OFFSET(0xCD63E20)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OVERRIDEOUTFITID_OFFSET UNITYSDK_OFFSET(0xCD67DD0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OVERRIDEOUTFIT_OFFSET UNITYSDK_OFFSET(0xCD682B0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_REFRESHOUTFITPARTS_OFFSET UNITYSDK_OFFSET(0xCD5CF50)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_RESETOUTFITSPRINGBONE_OFFSET UNITYSDK_OFFSET(0xCD67D70)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETANIMATORSPEED_OFFSET UNITYSDK_OFFSET(0xCD6AAF0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFITFORSHAMAN_OFFSET UNITYSDK_OFFSET(0xCD6B300)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFIT_1_OFFSET UNITYSDK_OFFSET(0xCD6ABD0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFIT_OFFSET UNITYSDK_OFFSET(0xCD6AB70)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_TRIGGERDEFAULTCHANGEMODELEFFECTS_OFFSET UNITYSDK_OFFSET(0xCD6A4F0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCD67810)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__EVALUATEFORCEUSEDEFAULTOUTFITSLOT_OFFSET UNITYSDK_OFFSET(0xCD6B390)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__ONPLAYEROUTFITCHANGED_OFFSET UNITYSDK_OFFSET(0xCD6BFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_TypeDefinitionIndex = 53432;

	class CharacterOutfitComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* _Instance; // 0x18
		::RPG::AvatarSystem::IAvatar* _CurrentAvatar; // 0x20
		::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>* _OverrideOutfitModels; // 0x28
		::RPG::GameCore::GenderType _StoryGenderType; // 0x30
		::RPG::GameCore::CharacterOutfitComponent_ESlot _ForceUseDefaultOutfitSlot; // 0x38
		::RPG::GameCore::AvatarBaseType _CurrentAvatarBaseType; // 0x40
		::System::Boolean _ForceUseDefaultOutfitForShaman; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void InitComponent_1(::RPG::GameCore::AvatarBaseType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_1_OFFSET))(this, a1);
		}

		::System::Void InitComponent_2(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_2_OFFSET))(this, a1);
		}

		::System::Void InitComponentForStoryCharacter(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENTFORSTORYCHARACTER_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelComponentLoadedArt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELCOMPONENTLOADEDART_OFFSET))(this);
		}

		::System::Void OnPostModelComponentLoadedArt(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONPOSTMODELCOMPONENTLOADEDART_OFFSET))(this, a1);
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

		::System::Void OnLoadModel(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONLOADMODEL_OFFSET))(this, a1);
		}

		::System::Void RefreshOutfitParts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_REFRESHOUTFITPARTS_OFFSET))(this);
		}

		::System::Void OverrideOutfitID(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OVERRIDEOUTFITID_OFFSET))(this, a1, a2);
		}

		::System::Void OverrideOutfit(::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OVERRIDEOUTFIT_OFFSET))(this, a1, a2);
		}

		::System::Void ResetOutfitSpringBone(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_RESETOUTFITSPRINGBONE_OFFSET))(this, a1);
		}

		::System::Void SetAnimatorSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETANIMATORSPEED_OFFSET))(this, a1);
		}

		static ::System::Void TriggerDefaultChangeModelEffects(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_TRIGGERDEFAULTCHANGEMODELEFFECTS_OFFSET))(a1, a2);
		}

		::System::Boolean SetForceUseDefaultOutfit(::RPG::GameCore::CharacterOutfitComponent_ESlot a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterOutfitComponent_ESlot))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFIT_OFFSET))(this, a1);
		}

		::System::Boolean SetForceUseDefaultOutfit_1(::RPG::GameCore::CharacterOutfitComponent_ESlot a1, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>* a2, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterOutfitComponent_ESlot, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>*, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFIT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DuplicateTo(::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_DUPLICATETO_OFFSET))(this, a1);
		}

		::System::Boolean IsEqual(::Collections::Pooled::PooledList_1<::Class_1_999AE0B49D951C72*>* a1, ::Collections::Pooled::PooledList_1<::Class_1_999AE0B49D951C72*>* a2, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>* a3, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::Collections::Pooled::PooledList_1<::Class_1_999AE0B49D951C72*>*, ::Collections::Pooled::PooledList_1<::Class_1_999AE0B49D951C72*>*, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>*, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ISEQUAL_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean Contains(::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>* a1, ::Class_1_999AE0B49D951C72* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>*, ::Class_1_999AE0B49D951C72*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CONTAINS_OFFSET))(a1, a2);
		}

		::System::Void SetForceUseDefaultOutfitForShaman(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFITFORSHAMAN_OFFSET))(this, a1);
		}

		::System::Boolean Contains_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CONTAINS_1_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType> GetOutfitType()
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_GETOUTFITTYPE_OFFSET))(this);
		}

		::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType> GetAvatarOutfitType()
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_GETAVATAROUTFITTYPE_OFFSET))(this);
		}

		::System::Void FindModelRenderers(::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>* a1, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>* a2, ::System::Collections::Generic::IList_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>*, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_FINDMODELRENDERERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FindModelRenderersImpl(::Class_1_999AE0B49D951C72* a1, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_999AE0B49D951C72*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_FINDMODELRENDERERSIMPL_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean IsPlayerAvatarID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ISPLAYERAVATARID_OFFSET))(a1);
		}

		::System::Void _OnPlayerOutfitChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__ONPLAYEROUTFITCHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>* LoadOutfitModels(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADOUTFITMODELS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>* LoadSourceOutfitModels()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADSOURCEOUTFITMODELS_OFFSET))(this);
		}

		::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType> EvaluateAvatarBaseType(::RPG::GameCore::CharacterDataComponent* a1)
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType>(*)(::PVOID, ::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARBASETYPE_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType> EvaluateAvatarBaseType_1(::RPG::GameCore::AdventureCharacterDataComponent* a1)
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType>(*)(::PVOID, ::RPG::GameCore::AdventureCharacterDataComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARBASETYPE_1_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType> EvaluateAvatarBaseType_2(::System::UInt32 a1)
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARBASETYPE_2_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>* LoadOutfitModelsImpl(::RPG::GameCore::GenderType a1, ::RPG::GameCore::AvatarBaseType a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>*(*)(::PVOID, ::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADOUTFITMODELSIMPL_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::CharacterOutfitComponent_ESlot _EvaluateForceUseDefaultOutfitSlot(::RPG::GameCore::AvatarBaseType a1)
		{
			return ((::RPG::GameCore::CharacterOutfitComponent_ESlot(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__EVALUATEFORCEUSEDEFAULTOUTFITSLOT_OFFSET))(this, a1);
		}
	};
}
