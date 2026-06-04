#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_B58C65FFAAC2F95C;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SCENETV_AWAKE_OFFSET UNITYSDK_OFFSET(0xC8A4C60)
#define RPG_CLIENT_SCENETV_CLEARONARTNODELOADEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC8A4C10)
#define RPG_CLIENT_SCENETV_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8A4EA0)
#define RPG_CLIENT_SCENETV_ONARTNODELOADED_OFFSET UNITYSDK_OFFSET(0xC8A5050)
#define RPG_CLIENT_SCENETV_ONARTNODEUNLOADED_OFFSET UNITYSDK_OFFSET(0xC8A50C0)
#define RPG_CLIENT_SCENETV_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC8A4F20)
#define RPG_CLIENT_SCENETV_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC8A4D80)
#define RPG_CLIENT_SCENETV_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC8A4D10)
#define RPG_CLIENT_SCENETV_SETCUSTOMIZEDPROGRAMGROUP_OFFSET UNITYSDK_OFFSET(0xC8A4B60)
#define RPG_CLIENT_SCENETV_SETONARTNODELOADEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC8A4BC0)
#define RPG_CLIENT_SCENETV_SETONWERENTITY_OFFSET UNITYSDK_OFFSET(0xC8A4A20)
#define RPG_CLIENT_SCENETV_SETPROGRAMGROUPID_OFFSET UNITYSDK_OFFSET(0xC8A4B00)
#define RPG_CLIENT_SCENETV_START_OFFSET UNITYSDK_OFFSET(0xC8A4E00)
#define RPG_CLIENT_SCENETV_UPDATE_OFFSET UNITYSDK_OFFSET(0xC8A5000)
#define RPG_CLIENT_SCENETV__CTOR_OFFSET UNITYSDK_OFFSET(0xC8A5140)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneTV_TypeDefinitionIndex = 64361;

	class SceneTV : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_2_B58C65FFAAC2F95C* Field_5_0; // 0x18
		::System::Action* Field_5_1; // 0x20
		::System::String* KeyPerProp; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV__CTOR_OFFSET))(this);
		}

		::System::Void SetOnwerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_SETONWERENTITY_OFFSET))(this, a1);
		}

		::System::Void SetProgramGroupID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_SETPROGRAMGROUPID_OFFSET))(this, a1);
		}

		::System::Void SetCustomizedProgramGroup(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_SETCUSTOMIZEDPROGRAMGROUP_OFFSET))(this, a1);
		}

		::System::Void SetOnArtNodeLoadedCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_SETONARTNODELOADEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void ClearOnArtNodeLoadedCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_CLEARONARTNODELOADEDCALLBACK_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_START_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_DISPOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_UPDATE_OFFSET))(this);
		}

		::System::Void OnArtNodeLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_ONARTNODELOADED_OFFSET))(this);
		}

		::System::Void OnArtNodeUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_ONARTNODEUNLOADED_OFFSET))(this);
		}
	};
}
