#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class MaterialInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_CHECKRENDERERMATERIALINDEX_OFFSET UNITYSDK_OFFSET(0x1F8B33E0)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_GETALLRENDERERS_OFFSET UNITYSDK_OFFSET(0x1F8B39C0)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_GET_INSTANCEMATERIALS_OFFSET UNITYSDK_OFFSET(0x1F8B31B0)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_GET_MATERIALINFODIC_OFFSET UNITYSDK_OFFSET(0x1F8B21E0)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_INIT_OFFSET UNITYSDK_OFFSET(0x1F8B24F0)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_MATERIALCHANGED_OFFSET UNITYSDK_OFFSET(0x1F8B2860)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F8B3F10)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1F8B3F00)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1F8B3D80)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x1F8B39B0)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1F8B3EF0)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_RECORDMESHRENDERS_OFFSET UNITYSDK_OFFSET(0x1F8B2F70)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_RECOVERINSTANCEMESHRENDERS_OFFSET UNITYSDK_OFFSET(0x1F8B3F20)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_RECOVERMESHRENDERS_OFFSET UNITYSDK_OFFSET(0x1F8B2C80)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8B40D0)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B4050)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SceneMaterialRecorderBehavior_TypeDefinitionIndex = 32829;

	class SceneMaterialRecorderBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Il2CppArray<::UnityEngine::Renderer*>*>** StaticGet_cacheRecorderList()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Il2CppArray<::UnityEngine::Renderer*>*>**)Il2CppClass::FromTypeDefinitionIndex(SceneMaterialRecorderBehavior_TypeDefinitionIndex)->GetStaticField(0x28320);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* AlterMaterials; // 0x18
		::UnityEngine::GameObject* referenceGameObj; // 0x20
		::UnityEngine::Timeline::TimelineClip* parentClip; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Timeline::MaterialInfo*>* MaterialInfos; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::MoleMole::Timeline::MaterialInfo*>* get_MaterialInfoDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::MoleMole::Timeline::MaterialInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_GET_MATERIALINFODIC_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::GameObject* referenceGo, ::UnityEngine::Timeline::TimelineClip* parentClip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_INIT_OFFSET))(this, referenceGo, parentClip);
		}

		::System::Void MaterialChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_MATERIALCHANGED_OFFSET))(this);
		}

		::System::Void RecordMeshRenders(::System::Boolean isInit, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_RECORDMESHRENDERS_OFFSET))(this, isInit, material);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* get_instanceMaterials()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_GET_INSTANCEMATERIALS_OFFSET))(this);
		}

		::System::Int32 CheckRendererMaterialIndex(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_CHECKRENDERERMATERIALINDEX_OFFSET))(this, renderer, material);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* GetAllRenderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_GETALLRENDERERS_OFFSET))(this);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_ONPLAYABLECREATE_OFFSET))(this, playable);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable rootPlayable, ::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData, ::System::Single weight, ::System::Int32 mixerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_ONPROCESSFRAME_OFFSET))(this, rootPlayable, playable, info, playerData, weight, mixerIndex);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void RecoverInstanceMeshRenders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_RECOVERINSTANCEMESHRENDERS_OFFSET))(this);
		}

		::System::Void RecoverMeshRenders(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERBEHAVIOR_RECOVERMESHRENDERS_OFFSET))(this, isInit);
		}
	};
}
