#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class QteCatchGhostRewindInstance; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_QTECATCHGHOSTMODULE_AUTOFINISH_OFFSET UNITYSDK_OFFSET(0xA23E8F0)
#define RPG_CLIENT_QTECATCHGHOSTMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA23E940)
#define RPG_CLIENT_QTECATCHGHOSTMODULE_REGISTERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA23E7D0)
#define RPG_CLIENT_QTECATCHGHOSTMODULE_UNREGISTERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA23E890)
#define RPG_CLIENT_QTECATCHGHOSTMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA23E6B0)
#define RPG_CLIENT_QTECATCHGHOSTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA23E9A0)
#define RPG_CLIENT_QTECATCHGHOSTMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0xA23E720)
#define RPG_CLIENT_QTECATCHGHOSTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA23EA30)

namespace RPG::Client
{
	inline static constexpr unsigned int QteCatchGhostModule_TypeDefinitionIndex = 48811;

	class QteCatchGhostModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::QteCatchGhostRewindInstance*>* _InstanceMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTMODULE__ONADVENTUREPHASEEND_OFFSET))(this, param);
		}

		::System::Void RegisterInstance(::System::UInt32 groupId, ::RPG::Client::QteCatchGhostRewindInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::QteCatchGhostRewindInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTMODULE_REGISTERINSTANCE_OFFSET))(this, groupId, instance);
		}

		::System::Void UnRegisterInstance(::System::UInt32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTMODULE_UNREGISTERINSTANCE_OFFSET))(this, groupId);
		}

		::System::Void AutoFinish(::System::UInt32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTMODULE_AUTOFINISH_OFFSET))(this, groupId);
		}

		static ::RPG::Client::QteCatchGhostModule* get_Instance()
		{
			return ((::RPG::Client::QteCatchGhostModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
