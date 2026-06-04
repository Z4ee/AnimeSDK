#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/UI3DHipplenViewType.h"
#include "unitysdk/System/Object.h"

class Class_1_349FFE7FFEC1E3D1;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_CREATE_OFFSET UNITYSDK_OFFSET(0xB0F6C50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0F72F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_LOADMODEL_OFFSET UNITYSDK_OFFSET(0xB0F6CF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_RELEASEMODEL_OFFSET UNITYSDK_OFFSET(0xB0F6E40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_SETAICONFIG_OFFSET UNITYSDK_OFFSET(0xB0F7340)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_SETAIVARIABLEFLOAT_OFFSET UNITYSDK_OFFSET(0xB0F73A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_TRIGGERAIEVENT_OFFSET UNITYSDK_OFFSET(0xB0F7420)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xB0F6C40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW__DISPOSEHIPPLENENTITY_OFFSET UNITYSDK_OFFSET(0xB0F71F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW__ONMODELLOADED_OFFSET UNITYSDK_OFFSET(0xB0F6E90)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int UI3DHipplenView_TypeDefinitionIndex = 70486;

	class UI3DHipplenView : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _Root; // 0x10
		::RPG::GameCore::GameEntity* _HipplenEntity; // 0x18
		::Class_1_349FFE7FFEC1E3D1* _HipplenInstance; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityHipplen::UI3DHipplenView* Create(::RPG::Client::ActivityHipplen::UI3DHipplenViewType a1)
		{
			return ((::RPG::Client::ActivityHipplen::UI3DHipplenView*(*)(::RPG::Client::ActivityHipplen::UI3DHipplenViewType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_CREATE_OFFSET))(a1);
		}

		::System::Void LoadModel(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_LOADMODEL_OFFSET))(this, a1);
		}

		::System::Void ReleaseModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_RELEASEMODEL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_DISPOSE_OFFSET))(this);
		}

		::System::Void SetAIConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_SETAICONFIG_OFFSET))(this, a1);
		}

		::System::Void SetAIVariableFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_SETAIVARIABLEFLOAT_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerAIEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_TRIGGERAIEVENT_OFFSET))(this, a1);
		}

		::System::Void _DisposeHipplenEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW__DISPOSEHIPPLENENTITY_OFFSET))(this);
		}

		::System::Void _OnModelLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW__ONMODELLOADED_OFFSET))(this);
		}
	};
}
