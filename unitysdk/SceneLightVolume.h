#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_65F0290E6742FF82;
class Class_3_6C792A3AC4426A91;
class SceneLightManagerConfigData_StageData;
class VolumeData;
namespace GeometryEdit { class Prism; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define SCENELIGHTVOLUME_AWAKE_OFFSET UNITYSDK_OFFSET(0xE9094B0)
#define SCENELIGHTVOLUME_GETLIGHTMODE_OFFSET UNITYSDK_OFFSET(0xE90A040)
#define SCENELIGHTVOLUME_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xE9094A0)
#define SCENELIGHTVOLUME_INVOLUME_OFFSET UNITYSDK_OFFSET(0xE909F40)
#define SCENELIGHTVOLUME_ISALLHIDEOBJECTS_OFFSET UNITYSDK_OFFSET(0xE909940)
#define SCENELIGHTVOLUME_ISHIDEOBJECTS_OFFSET UNITYSDK_OFFSET(0xE909860)
#define SCENELIGHTVOLUME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE909800)
#define SCENELIGHTVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE909C80)
#define SCENELIGHTVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE909BD0)
#define SCENELIGHTVOLUME_ONMAPROTATED_OFFSET UNITYSDK_OFFSET(0xE909D30)
#define SCENELIGHTVOLUME_ONRESET_OFFSET UNITYSDK_OFFSET(0xE909A10)
#define SCENELIGHTVOLUME_REGENINDEXER_OFFSET UNITYSDK_OFFSET(0xE9095B0)
#define SCENELIGHTVOLUME_SETBLOCKS_OFFSET UNITYSDK_OFFSET(0xE90A110)
#define SCENELIGHTVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0xE90A5C0)

inline static constexpr unsigned int SceneLightVolume_TypeDefinitionIndex = 47857;

class SceneLightVolume : public ::UnityEngine::MonoBehaviour
{
public:
	::GeometryEdit::Prism* HBNMNEMEGNL; // 0x18
	::UnityEngine::GameObject* NGOPGBACPFM; // 0x20
	::System::Int32 Priority; // 0x28
	::System::Boolean _SetPrismForMainCameraOnReset; // 0x2C
	::System::Collections::Generic::List_1<::VolumeData*>* BlockVolumeList; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::VolumeData*>* PCOOEGDCMNJ; // 0x38
	::UnityEngine::Transform* mainBlock; // 0x40
	::System::String* mainBlockName; // 0x48
	::System::Boolean isParamVolume; // 0x50
	::SceneLightManagerConfigData_StageData* OverrideParam; // 0x58
	::Class_3_6C792A3AC4426A91* KILJDBOGKNI; // 0x60
	::UnityEngine::Matrix4x4 OPDNLJOHHCB; // 0x68

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

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME_ONDESTROY_OFFSET))(this);
	}

	::System::Boolean IsHideObjects(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME_ISHIDEOBJECTS_OFFSET))(this, a1);
	}

	::System::Boolean IsAllHideObjects(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME_ISALLHIDEOBJECTS_OFFSET))(this, a1);
	}

	::System::Void OnReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME_ONRESET_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnMapRotated(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME_ONMAPROTATED_OFFSET))(this, a1);
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

	::System::Void SetBlocks(::Il2CppArray<::Class_1_65F0290E6742FF82*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_65F0290E6742FF82*>*))((::PBYTE)hIl2Cpp + SCENELIGHTVOLUME_SETBLOCKS_OFFSET))(this, a1);
	}
};
