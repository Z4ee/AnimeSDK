#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/FilterType.h"
#include "unitysdk/DG/Tweening/Core/Enums/OperationType.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateMode.h"
#include "unitysdk/DG/Tweening/Core/TweenManager_CapacityIncreaseMode.h"
#include "unitysdk/DG/Tweening/UpdateType.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Sequence; }
namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define DG_TWEENING_CORE_TWEENMANAGER_ADDACTIVETWEENTOSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1E267690)
#define DG_TWEENING_CORE_TWEENMANAGER_ADDACTIVETWEEN_OFFSET UNITYSDK_OFFSET(0x1E267060)
#define DG_TWEENING_CORE_TWEENMANAGER_CLEARTWEENARRAY_OFFSET UNITYSDK_OFFSET(0x1E2684B0)
#define DG_TWEENING_CORE_TWEENMANAGER_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1E26A670)
#define DG_TWEENING_CORE_TWEENMANAGER_DESPAWNALL_OFFSET UNITYSDK_OFFSET(0x1E267BA0)
#define DG_TWEENING_CORE_TWEENMANAGER_DESPAWNTWEENS_OFFSET UNITYSDK_OFFSET(0x1E269160)
#define DG_TWEENING_CORE_TWEENMANAGER_DESPAWN_OFFSET UNITYSDK_OFFSET(0x1E267DC0)
#define DG_TWEENING_CORE_TWEENMANAGER_FILTEREDOPERATION_OFFSET UNITYSDK_OFFSET(0x1E269B20)
#define DG_TWEENING_CORE_TWEENMANAGER_FLIP_OFFSET UNITYSDK_OFFSET(0x1E26A750)
#define DG_TWEENING_CORE_TWEENMANAGER_FORCEINIT_OFFSET UNITYSDK_OFFSET(0x1E26B010)
#define DG_TWEENING_CORE_TWEENMANAGER_GETACTIVETWEENS_OFFSET UNITYSDK_OFFSET(0x1E26B2C0)
#define DG_TWEENING_CORE_TWEENMANAGER_GETSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1E266CD0)
#define DG_TWEENING_CORE_TWEENMANAGER_GETTWEENSBYID_OFFSET UNITYSDK_OFFSET(0x1E26B580)
#define DG_TWEENING_CORE_TWEENMANAGER_GETTWEENSBYTARGET_OFFSET UNITYSDK_OFFSET(0x1E26B9D0)
#define DG_TWEENING_CORE_TWEENMANAGER_GOTO_OFFSET UNITYSDK_OFFSET(0x1E26A770)
#define DG_TWEENING_CORE_TWEENMANAGER_INCREASECAPACITIES_OFFSET UNITYSDK_OFFSET(0x1E267300)
#define DG_TWEENING_CORE_TWEENMANAGER_MARKFORKILLING_OFFSET UNITYSDK_OFFSET(0x1E2690D0)
#define DG_TWEENING_CORE_TWEENMANAGER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1E26A860)
#define DG_TWEENING_CORE_TWEENMANAGER_PLAYBACKWARDS_OFFSET UNITYSDK_OFFSET(0x1E26A920)
#define DG_TWEENING_CORE_TWEENMANAGER_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0x1E26AAA0)
#define DG_TWEENING_CORE_TWEENMANAGER_PLAY_OFFSET UNITYSDK_OFFSET(0x1E26A8A0)
#define DG_TWEENING_CORE_TWEENMANAGER_PURGEALL_OFFSET UNITYSDK_OFFSET(0x1E2684F0)
#define DG_TWEENING_CORE_TWEENMANAGER_PURGEPOOLS_OFFSET UNITYSDK_OFFSET(0x1E268720)
#define DG_TWEENING_CORE_TWEENMANAGER_REMOVEACTIVETWEEN_OFFSET UNITYSDK_OFFSET(0x1E2676F0)
#define DG_TWEENING_CORE_TWEENMANAGER_REORGANIZEACTIVETWEENS_OFFSET UNITYSDK_OFFSET(0x1E268DA0)
#define DG_TWEENING_CORE_TWEENMANAGER_RESETCAPACITIES_OFFSET UNITYSDK_OFFSET(0x1E268830)
#define DG_TWEENING_CORE_TWEENMANAGER_RESTART_OFFSET UNITYSDK_OFFSET(0x1E26AC10)
#define DG_TWEENING_CORE_TWEENMANAGER_REWIND_OFFSET UNITYSDK_OFFSET(0x1E26AD50)
#define DG_TWEENING_CORE_TWEENMANAGER_SETCAPACITIES_OFFSET UNITYSDK_OFFSET(0x1E268890)
#define DG_TWEENING_CORE_TWEENMANAGER_SETUPDATETYPE_OFFSET UNITYSDK_OFFSET(0x1E267510)
#define DG_TWEENING_CORE_TWEENMANAGER_SMOOTHREWIND_OFFSET UNITYSDK_OFFSET(0x1E26AE40)
#define DG_TWEENING_CORE_TWEENMANAGER_TOGGLEPAUSE_OFFSET UNITYSDK_OFFSET(0x1E26AF00)
#define DG_TWEENING_CORE_TWEENMANAGER_TOTALPLAYINGTWEENS_OFFSET UNITYSDK_OFFSET(0x1E26B130)
#define DG_TWEENING_CORE_TWEENMANAGER_TOTALPOOLEDTWEENS_OFFSET UNITYSDK_OFFSET(0x1E26B0D0)
#define DG_TWEENING_CORE_TWEENMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E269200)
#define DG_TWEENING_CORE_TWEENMANAGER_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1E268960)
#define DG_TWEENING_CORE_TWEENMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26BE00)

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int TweenManager_TypeDefinitionIndex = 27992;

	class TweenManager : public ::System::Object
	{
	public:
		static ::Il2CppArray<::DG::Tweening::Tween*>** StaticGet__pooledTweeners()
		{
			return (::Il2CppArray<::DG::Tweening::Tween*>**)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x22A70);
		}
		static ::System::Collections::Generic::Stack_1<::DG::Tweening::Tween*>** StaticGet__PooledSequences()
		{
			return (::System::Collections::Generic::Stack_1<::DG::Tweening::Tween*>**)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x22A78);
		}
		static ::Il2CppArray<::DG::Tweening::Tween*>** StaticGet__activeTweens()
		{
			return (::Il2CppArray<::DG::Tweening::Tween*>**)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x22A80);
		}
		static ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>** StaticGet__KillList()
		{
			return (::System::Collections::Generic::List_1<::DG::Tweening::Tween*>**)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x22A88);
		}
		static ::System::Int32* StaticGet__reorganizeFromId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7830);
		}
		static ::System::Int32* StaticGet__maxPooledTweenerId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7834);
		}
		static ::System::Int32* StaticGet__maxActiveLookupId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7838);
		}
		static ::System::Int32* StaticGet_maxSequences()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x783C);
		}
		static ::System::Int32* StaticGet_maxActive()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7840);
		}
		static ::System::Boolean* StaticGet_hasActiveTweens()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7844);
		}
		static ::System::Boolean* StaticGet__requiresActiveReorganization()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7845);
		}
		static ::System::Boolean* StaticGet_hasActiveLateTweens()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7846);
		}
		static ::System::Boolean* StaticGet_isUpdateLoop()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7847);
		}
		static ::System::Int32* StaticGet_totPooledSequences()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7848);
		}
		static ::System::Int32* StaticGet_totActiveTweeners()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x784C);
		}
		static ::System::Int32* StaticGet_totPooledTweeners()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7850);
		}
		static ::System::Int32* StaticGet_totActiveTweens()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7854);
		}
		static ::System::Int32* StaticGet_totActiveSequences()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7858);
		}
		static ::System::Int32* StaticGet_totTweeners()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x785C);
		}
		static ::System::Int32* StaticGet_totActiveFixedTweens()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7860);
		}
		static ::System::Int32* StaticGet_totActiveLateTweens()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7864);
		}
		static ::System::Int32* StaticGet_totSequences()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7868);
		}
		static ::System::Int32* StaticGet_maxTweeners()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x786C);
		}
		static ::System::Int32* StaticGet__minPooledTweenerId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7870);
		}
		static ::System::Int32* StaticGet_totActiveDefaultTweens()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7874);
		}
		static ::System::Boolean* StaticGet_hasActiveDefaultTweens()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7878);
		}
		static ::System::Boolean* StaticGet__despawnAllCalledFromUpdateLoopCallback()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x7879);
		}
		static ::System::Boolean* StaticGet_hasActiveFixedTweens()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TweenManager_TypeDefinitionIndex)->GetStaticField(0x787A);
		}
		// static const ::System::Int32 _DefaultMaxTweeners = 0xC8; // 0x0
		// static const ::System::Int32 _DefaultMaxSequences = 0x32; // 0x0
		// static const ::System::String* _MaxTweensReached; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER__CCTOR_OFFSET))();
		}

		static ::DG::Tweening::Sequence* GetSequence()
		{
			return ((::DG::Tweening::Sequence*(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_GETSEQUENCE_OFFSET))();
		}

		static ::System::Void SetUpdateType(::DG::Tweening::Tween* t, ::DG::Tweening::UpdateType updateType, ::System::Boolean isIndependentUpdate)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*, ::DG::Tweening::UpdateType, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_SETUPDATETYPE_OFFSET))(t, updateType, isIndependentUpdate);
		}

		static ::System::Void AddActiveTweenToSequence(::DG::Tweening::Tween* t)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_ADDACTIVETWEENTOSEQUENCE_OFFSET))(t);
		}

		static ::System::Int32 DespawnAll()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_DESPAWNALL_OFFSET))();
		}

		static ::System::Void Despawn(::DG::Tweening::Tween* t, ::System::Boolean modifyActiveLists)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_DESPAWN_OFFSET))(t, modifyActiveLists);
		}

		static ::System::Void PurgeAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_PURGEALL_OFFSET))();
		}

		static ::System::Void PurgePools()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_PURGEPOOLS_OFFSET))();
		}

		static ::System::Void ResetCapacities()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_RESETCAPACITIES_OFFSET))();
		}

		static ::System::Void SetCapacities(::System::Int32 tweenersCapacity, ::System::Int32 sequencesCapacity)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_SETCAPACITIES_OFFSET))(tweenersCapacity, sequencesCapacity);
		}

		static ::System::Int32 Validate()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_VALIDATE_OFFSET))();
		}

		static ::System::Void Update(::DG::Tweening::UpdateType updateType, ::System::Single deltaTime, ::System::Single independentTime)
		{
			return ((::System::Void(*)(::DG::Tweening::UpdateType, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_UPDATE_OFFSET))(updateType, deltaTime, independentTime);
		}

		static ::System::Int32 FilteredOperation(::DG::Tweening::Core::Enums::OperationType operationType, ::DG::Tweening::Core::Enums::FilterType filterType, ::System::Object* id, ::System::Boolean optionalBool, ::System::Single optionalFloat, ::System::Object* optionalObj, ::Il2CppArray<::System::Object*>* optionalArray)
		{
			return ((::System::Int32(*)(::DG::Tweening::Core::Enums::OperationType, ::DG::Tweening::Core::Enums::FilterType, ::System::Object*, ::System::Boolean, ::System::Single, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_FILTEREDOPERATION_OFFSET))(operationType, filterType, id, optionalBool, optionalFloat, optionalObj, optionalArray);
		}

		static ::System::Boolean Complete(::DG::Tweening::Tween* t, ::System::Boolean modifyActiveLists, ::DG::Tweening::Core::Enums::UpdateMode updateMode)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateMode))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_COMPLETE_OFFSET))(t, modifyActiveLists, updateMode);
		}

		static ::System::Boolean Flip(::DG::Tweening::Tween* t)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_FLIP_OFFSET))(t);
		}

		static ::System::Void ForceInit(::DG::Tweening::Tween* t, ::System::Boolean isSequenced)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_FORCEINIT_OFFSET))(t, isSequenced);
		}

		static ::System::Boolean Goto(::DG::Tweening::Tween* t, ::System::Single to, ::System::Boolean andPlay, ::DG::Tweening::Core::Enums::UpdateMode updateMode)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateMode))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_GOTO_OFFSET))(t, to, andPlay, updateMode);
		}

		static ::System::Boolean Pause(::DG::Tweening::Tween* t)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_PAUSE_OFFSET))(t);
		}

		static ::System::Boolean Play(::DG::Tweening::Tween* t)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_PLAY_OFFSET))(t);
		}

		static ::System::Boolean PlayBackwards(::DG::Tweening::Tween* t)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_PLAYBACKWARDS_OFFSET))(t);
		}

		static ::System::Boolean PlayForward(::DG::Tweening::Tween* t)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_PLAYFORWARD_OFFSET))(t);
		}

		static ::System::Boolean Restart(::DG::Tweening::Tween* t, ::System::Boolean includeDelay)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_RESTART_OFFSET))(t, includeDelay);
		}

		static ::System::Boolean Rewind(::DG::Tweening::Tween* t, ::System::Boolean includeDelay)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_REWIND_OFFSET))(t, includeDelay);
		}

		static ::System::Boolean SmoothRewind(::DG::Tweening::Tween* t)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_SMOOTHREWIND_OFFSET))(t);
		}

		static ::System::Boolean TogglePause(::DG::Tweening::Tween* t)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_TOGGLEPAUSE_OFFSET))(t);
		}

		static ::System::Int32 TotalPooledTweens()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_TOTALPOOLEDTWEENS_OFFSET))();
		}

		static ::System::Int32 TotalPlayingTweens()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_TOTALPLAYINGTWEENS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* GetActiveTweens(::System::Boolean playing)
		{
			return ((::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_GETACTIVETWEENS_OFFSET))(playing);
		}

		static ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* GetTweensById(::System::Object* id, ::System::Boolean playingOnly)
		{
			return ((::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_GETTWEENSBYID_OFFSET))(id, playingOnly);
		}

		static ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* GetTweensByTarget(::System::Object* target, ::System::Boolean playingOnly)
		{
			return ((::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_GETTWEENSBYTARGET_OFFSET))(target, playingOnly);
		}

		static ::System::Void MarkForKilling(::DG::Tweening::Tween* t)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_MARKFORKILLING_OFFSET))(t);
		}

		static ::System::Void AddActiveTween(::DG::Tweening::Tween* t)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_ADDACTIVETWEEN_OFFSET))(t);
		}

		static ::System::Void ReorganizeActiveTweens()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_REORGANIZEACTIVETWEENS_OFFSET))();
		}

		static ::System::Void DespawnTweens(::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* tweens, ::System::Boolean modifyActiveLists)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_DESPAWNTWEENS_OFFSET))(tweens, modifyActiveLists);
		}

		static ::System::Void RemoveActiveTween(::DG::Tweening::Tween* t)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_REMOVEACTIVETWEEN_OFFSET))(t);
		}

		static ::System::Void ClearTweenArray(::Il2CppArray<::DG::Tweening::Tween*>* tweens)
		{
			return ((::System::Void(*)(::Il2CppArray<::DG::Tweening::Tween*>*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_CLEARTWEENARRAY_OFFSET))(tweens);
		}

		static ::System::Void IncreaseCapacities(::DG::Tweening::Core::TweenManager_CapacityIncreaseMode increaseMode)
		{
			return ((::System::Void(*)(::DG::Tweening::Core::TweenManager_CapacityIncreaseMode))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_TWEENMANAGER_INCREASECAPACITIES_OFFSET))(increaseMode);
		}
	};
}
