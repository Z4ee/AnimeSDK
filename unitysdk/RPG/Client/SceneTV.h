#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_B58C65FFAAC2F95C;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_SCENETV_AWAKE_OFFSET UNITYSDK_OFFSET(0xA418580)
#define RPG_CLIENT_SCENETV_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4187B0)
#define RPG_CLIENT_SCENETV_ONARTNODELOADED_OFFSET UNITYSDK_OFFSET(0xA4188C0)
#define RPG_CLIENT_SCENETV_ONARTNODEUNLOADED_OFFSET UNITYSDK_OFFSET(0xA418910)
#define RPG_CLIENT_SCENETV_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA418800)
#define RPG_CLIENT_SCENETV_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA418690)
#define RPG_CLIENT_SCENETV_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA4185D0)
#define RPG_CLIENT_SCENETV_SETONWERENTITY_OFFSET UNITYSDK_OFFSET(0xA4184A0)
#define RPG_CLIENT_SCENETV_SETPROGRAMGROUPID_OFFSET UNITYSDK_OFFSET(0xA418520)
#define RPG_CLIENT_SCENETV_START_OFFSET UNITYSDK_OFFSET(0xA418710)
#define RPG_CLIENT_SCENETV_UPDATE_OFFSET UNITYSDK_OFFSET(0xA418870)
#define RPG_CLIENT_SCENETV__CTOR_OFFSET UNITYSDK_OFFSET(0xA4189A0)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneTV_TypeDefinitionIndex = 56201;

	class SceneTV : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_2_B58C65FFAAC2F95C* Field_5_0; // 0x18
		::System::String* KeyPerProp; // 0x20

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
