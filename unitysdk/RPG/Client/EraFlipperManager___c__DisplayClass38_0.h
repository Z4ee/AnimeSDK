#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ProxyEffectProp; }
namespace RPG::GameCore { class PropComponent; }

#define RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1993B430)
#define RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS38_0___INITGROUP_B__0_OFFSET UNITYSDK_OFFSET(0x1993C1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int EraFlipperManager___c__DisplayClass38_0_TypeDefinitionIndex = 60611;

	class EraFlipperManager___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::PropComponent* propCpt; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __InitGroup_b__0(::RPG::Client::ProxyEffectProp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ProxyEffectProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS38_0___INITGROUP_B__0_OFFSET))(this, a1);
		}
	};
}
