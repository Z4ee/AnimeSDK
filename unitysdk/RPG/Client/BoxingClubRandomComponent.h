#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UIContextAssetLoader; }
namespace RPG::GameCore { class BoxingClubStageGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_ACTIVEFINISHNODE_OFFSET UNITYSDK_OFFSET(0x9EB39D0)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_FORCERESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x9EB3520)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_GENERATEPREFABRELATEDINFO_OFFSET UNITYSDK_OFFSET(0x9EB2AE0)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_GENERATEREALRANDOMLIST_OFFSET UNITYSDK_OFFSET(0x9EB2D30)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_GETENEMYIMAGECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9EB3640)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_GETFINISHNODE_OFFSET UNITYSDK_OFFSET(0x9EB38E0)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_GETHINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9EB37F0)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_GETSHOWMONSTERICONINDEX_OFFSET UNITYSDK_OFFSET(0x9EB3A80)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_INITICONS_OFFSET UNITYSDK_OFFSET(0x9EB30A0)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_INITRANDOMCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9EB2A30)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_ISCURINDEXSELECTED_OFFSET UNITYSDK_OFFSET(0x9EB3B00)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_LIGHTWEIGHTCLEAR_OFFSET UNITYSDK_OFFSET(0x9EB34E0)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_ONSELECTNEXT_OFFSET UNITYSDK_OFFSET(0x9EB3C10)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_ONWAITEND_OFFSET UNITYSDK_OFFSET(0x9EB2990)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_PLAY_OFFSET UNITYSDK_OFFSET(0x9EB33E0)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_TRYSELECTNEXT_OFFSET UNITYSDK_OFFSET(0x9EB2880)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_UPDATESPEED_OFFSET UNITYSDK_OFFSET(0x9EB27F0)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x9EB2680)
#define RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9EB3D10)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubRandomComponent_TypeDefinitionIndex = 66814;

	class BoxingClubRandomComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _ImagePath; // 0x0
		// static const ::System::String* _HintPath; // 0x0
		// static const ::System::String* _FinishNodePath; // 0x0
		::System::Boolean _ShouldTick; // 0x18
		::System::Boolean _IsInWaitStatus; // 0x19
		::System::Single _CurWaitTime; // 0x1C
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _EnemyList; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* _ImageList; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _HintsList; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _FinishNodeList; // 0x38
		::System::Action_2<::XLua::LuaTable*, ::System::UInt32>* _OnEnemyChanged; // 0x40
		::System::Action_1<::XLua::LuaTable*>* _OnRandomFinished; // 0x48
		::XLua::LuaTable* _Panel; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _AllRandomTargets; // 0x58
		::System::Int32 _FinalTarget; // 0x60
		::System::Int32 _CurIndex; // 0x64
		::RPG::Client::UIContextAssetLoader* _AssetLoader; // 0x68
		::RPG::GameCore::BoxingClubStageGroupConfigRow* _Row; // 0x70
		::System::Single _CurGap; // 0x78
		::System::Single _CurTime; // 0x7C
		::System::UInt32 _CurRoundIndex; // 0x80
		::UnityEngine::Transform* RandomRoot; // 0x88
		::System::Single MinGap; // 0x90
		::System::Single MaxGap; // 0x94
		::System::Int32 DecelerateZoneSize; // 0x98
		::System::Single FinalDisplayInverval; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_UPDATE_OFFSET))(this);
		}

		::System::Void InitRandomComponent(::System::UInt32 stageGroupID, ::System::UInt32 roundIndex, ::System::UInt32 challengeID, ::XLua::LuaTable* listener, ::System::Action_2<::XLua::LuaTable*, ::System::UInt32>* onEnemyChanged, ::System::Action_1<::XLua::LuaTable*>* onRandomFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::XLua::LuaTable*, ::System::Action_2<::XLua::LuaTable*, ::System::UInt32>*, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_INITRANDOMCOMPONENT_OFFSET))(this, stageGroupID, roundIndex, challengeID, listener, onEnemyChanged, onRandomFinished);
		}

		::System::Void Play(::System::Int32 round)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_PLAY_OFFSET))(this, round);
		}

		::System::Void LightWeightClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_LIGHTWEIGHTCLEAR_OFFSET))(this);
		}

		::System::Void ForceResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_FORCERESETTODEFAULT_OFFSET))(this);
		}

		::System::Void GeneratePrefabRelatedInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_GENERATEPREFABRELATEDINFO_OFFSET))(this);
		}

		::System::Void GenerateRealRandomList(::System::UInt32 stageGroupID, ::System::UInt32 roundIndex, ::System::UInt32 challengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_GENERATEREALRANDOMLIST_OFFSET))(this, stageGroupID, roundIndex, challengeID);
		}

		::System::Void ActiveFinishNode(::System::Int32 curIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_ACTIVEFINISHNODE_OFFSET))(this, curIndex);
		}

		::System::Void InitIcons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_INITICONS_OFFSET))(this);
		}

		::System::UInt32 GetShowMonsterIconIndex(::System::UInt32 stageID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_GETSHOWMONSTERICONINDEX_OFFSET))(this, stageID);
		}

		::UnityEngine::UI::Image* GetEnemyImageComponent(::UnityEngine::Transform* tf)
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_GETENEMYIMAGECOMPONENT_OFFSET))(this, tf);
		}

		::UnityEngine::Transform* GetHintTransform(::UnityEngine::Transform* tf)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_GETHINTTRANSFORM_OFFSET))(this, tf);
		}

		::UnityEngine::Transform* GetFinishNode(::UnityEngine::Transform* tf)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_GETFINISHNODE_OFFSET))(this, tf);
		}

		::System::Void UpdateSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_UPDATESPEED_OFFSET))(this);
		}

		::System::Void TrySelectNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_TRYSELECTNEXT_OFFSET))(this);
		}

		::System::Boolean IsCurIndexSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_ISCURINDEXSELECTED_OFFSET))(this);
		}

		::System::Void OnSelectNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_ONSELECTNEXT_OFFSET))(this);
		}

		::System::Void OnWaitEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRANDOMCOMPONENT_ONWAITEND_OFFSET))(this);
		}
	};
}
