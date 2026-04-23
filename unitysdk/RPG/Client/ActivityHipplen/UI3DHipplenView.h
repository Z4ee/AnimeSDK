#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/UI3DHipplenViewType.h"
#include "unitysdk/System/Object.h"

class Class_1_7E0DCA9D208905FE;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_CREATE_OFFSET UNITYSDK_OFFSET(0x9B127B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B12E70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_LOADMODEL_OFFSET UNITYSDK_OFFSET(0x9B12850)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_RELEASEMODEL_OFFSET UNITYSDK_OFFSET(0x9B129A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_SETAICONFIG_OFFSET UNITYSDK_OFFSET(0x9B12EC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_SETAIVARIABLEFLOAT_OFFSET UNITYSDK_OFFSET(0x9B12F20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_TRIGGERAIEVENT_OFFSET UNITYSDK_OFFSET(0x9B12FA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9B127A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW__DISPOSEHIPPLENENTITY_OFFSET UNITYSDK_OFFSET(0x9B12D70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW__ONMODELLOADED_OFFSET UNITYSDK_OFFSET(0x9B129F0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int UI3DHipplenView_TypeDefinitionIndex = 69674;

	class UI3DHipplenView : public ::System::Object
	{
	public:
		::Class_1_7E0DCA9D208905FE* _HipplenInstance; // 0x10
		::UnityEngine::Transform* _Root; // 0x18
		::RPG::GameCore::GameEntity* _HipplenEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityHipplen::UI3DHipplenView* Create(::RPG::Client::ActivityHipplen::UI3DHipplenViewType viewType)
		{
			return ((::RPG::Client::ActivityHipplen::UI3DHipplenView*(*)(::RPG::Client::ActivityHipplen::UI3DHipplenViewType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_CREATE_OFFSET))(viewType);
		}

		::System::Void LoadModel(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_LOADMODEL_OFFSET))(this, root);
		}

		::System::Void ReleaseModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_RELEASEMODEL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_DISPOSE_OFFSET))(this);
		}

		::System::Void SetAIConfig(::System::String* aiConfigPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_SETAICONFIG_OFFSET))(this, aiConfigPath);
		}

		::System::Void SetAIVariableFloat(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_SETAIVARIABLEFLOAT_OFFSET))(this, name, value);
		}

		::System::Void TriggerAIEvent(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_UI3DHIPPLENVIEW_TRIGGERAIEVENT_OFFSET))(this, eventName);
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
