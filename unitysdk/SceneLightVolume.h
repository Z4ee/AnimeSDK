#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E0A05564B7F916C1;
class SceneLightManagerConfigData_StageData;
class VolumeData;
namespace GeometryEdit { class Prism; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define SCENELIGHTVOLUME_AWAKE_OFFSET UNITYSDK_OFFSET(0xABBC680)
#define SCENELIGHTVOLUME_GETLIGHTMODE_OFFSET UNITYSDK_OFFSET(0xABBCCB0)
#define SCENELIGHTVOLUME_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xABBC670)
#define SCENELIGHTVOLUME_INVOLUME_OFFSET UNITYSDK_OFFSET(0xABBCBB0)
#define SCENELIGHTVOLUME_ISALLHIDEOBJECTS_OFFSET UNITYSDK_OFFSET(0xABBCAD0)
#define SCENELIGHTVOLUME_ISHIDEOBJECTS_OFFSET UNITYSDK_OFFSET(0xABBC9E0)
#define SCENELIGHTVOLUME_REGENINDEXER_OFFSET UNITYSDK_OFFSET(0xABBC780)
#define SCENELIGHTVOLUME_SETBLOCKS_OFFSET UNITYSDK_OFFSET(0xABBCD90)
#define SCENELIGHTVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0xABBD0A0)

inline static constexpr unsigned int SceneLightVolume_TypeDefinitionIndex = 38261;

class SceneLightVolume : public ::UnityEngine::MonoBehaviour
{
public:
	::GeometryEdit::Prism* Field_5_0; // 0x18
	::UnityEngine::GameObject* Field_5_1; // 0x20
	::System::Int32 Priority; // 0x28
	::System::Collections::Generic::List_1<::VolumeData*>* BlockVolumeList; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::VolumeData*>* Field_5_4; // 0x38
	::UnityEngine::Transform* mainBlock; // 0x40
	::System::String* mainBlockName; // 0x48
	::System::Boolean isParamVolume; // 0x50
	::SceneLightManagerConfigData_StageData* OverrideParam; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_GameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME_GET_GAMEOBJECT_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME_AWAKE_OFFSET))(this);
	}

	::System::Boolean IsHideObjects(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME_ISHIDEOBJECTS_OFFSET))(this, a1);
	}

	::System::Boolean IsAllHideObjects(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME_ISALLHIDEOBJECTS_OFFSET))(this, a1);
	}

	::System::Void RegenIndexer()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME_REGENINDEXER_OFFSET))(this);
	}

	::System::Boolean InVolume(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME_INVOLUME_OFFSET))(this, a1);
	}

	::RPG::Client::OpenWorld::StreamingLightEnum GetLightMode(::System::String* a1)
	{
		return ((::RPG::Client::OpenWorld::StreamingLightEnum(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME_GETLIGHTMODE_OFFSET))(this, a1);
	}

	::System::Void SetBlocks(::Il2CppArray<::Class_1_E0A05564B7F916C1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_E0A05564B7F916C1*>*))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME_SETBLOCKS_OFFSET))(this, a1);
	}
};
