#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class QteCatchGhostRewindInstance; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_QTECATCHGHOSTMODULE_AUTOFINISH_OFFSET UNITYSDK_OFFSET(0x1677CDB0)
#define RPG_CLIENT_QTECATCHGHOSTMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1677CE00)
#define RPG_CLIENT_QTECATCHGHOSTMODULE_REGISTERINSTANCE_OFFSET UNITYSDK_OFFSET(0x1677CC60)
#define RPG_CLIENT_QTECATCHGHOSTMODULE_UNREGISTERINSTANCE_OFFSET UNITYSDK_OFFSET(0x1677CD20)
#define RPG_CLIENT_QTECATCHGHOSTMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1677CB20)
#define RPG_CLIENT_QTECATCHGHOSTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1677CE60)
#define RPG_CLIENT_QTECATCHGHOSTMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0x1677CBC0)

namespace RPG::Client
{
	inline static constexpr unsigned int QteCatchGhostModule_TypeDefinitionIndex = 57565;

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

		::System::Void _OnAdventurePhaseEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTMODULE__ONADVENTUREPHASEEND_OFFSET))(this, a1);
		}

		::System::Void RegisterInstance(::System::UInt32 a1, ::RPG::Client::QteCatchGhostRewindInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::QteCatchGhostRewindInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTMODULE_REGISTERINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterInstance(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTMODULE_UNREGISTERINSTANCE_OFFSET))(this, a1);
		}

		::System::Void AutoFinish(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTMODULE_AUTOFINISH_OFFSET))(this, a1);
		}

		static ::RPG::Client::QteCatchGhostModule* get_Instance()
		{
			return ((::RPG::Client::QteCatchGhostModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTMODULE_GET_INSTANCE_OFFSET))();
		}
	};
}
