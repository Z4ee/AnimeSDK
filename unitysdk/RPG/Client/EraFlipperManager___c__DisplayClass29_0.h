#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ECBCF86CDE61CBCA;
namespace RPG::Client { class EraFlipperManager; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class RuntimeGroupManager_HoYoGroupUnit; }
namespace RPG::GameCore { class EraRegion; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9626760)
#define RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS29_0___ENTERERAREGION_B__0_OFFSET UNITYSDK_OFFSET(0x96289D0)
#define RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS29_0___ENTERERAREGION_B__1_OFFSET UNITYSDK_OFFSET(0x9628A40)
#define RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS29_0___ENTERERAREGION_B__3_OFFSET UNITYSDK_OFFSET(0x9628BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int EraFlipperManager___c__DisplayClass29_0_TypeDefinitionIndex = 48999;

	class EraFlipperManager___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::RPG::Client::EraFlipperManager* __4__this; // 0x10
		::System::Func_2<::RPG::Client::MapPropDef*, ::System::Boolean>* __9__3; // 0x18
		::Class_1_ECBCF86CDE61CBCA* stageRegion; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __EnterEraRegion_b__0(::RPG::GameCore::EraRegion* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EraRegion*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS29_0___ENTERERAREGION_B__0_OFFSET))(this, x);
		}

		::System::Boolean __EnterEraRegion_b__1(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* unit)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS29_0___ENTERERAREGION_B__1_OFFSET))(this, unit);
		}

		::System::Boolean __EnterEraRegion_b__3(::RPG::Client::MapPropDef* prop)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS29_0___ENTERERAREGION_B__3_OFFSET))(this, prop);
		}
	};
}
