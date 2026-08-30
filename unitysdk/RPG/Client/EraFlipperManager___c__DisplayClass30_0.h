#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D8BCA6FA1DEB13B9;
namespace RPG::GameCore { class EraRegion; }

#define RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCECA250)
#define RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS30_0___ONCURRENTREGIONENTER_B__0_OFFSET UNITYSDK_OFFSET(0xCECC1F0)

namespace RPG::Client
{
	inline static constexpr unsigned int EraFlipperManager___c__DisplayClass30_0_TypeDefinitionIndex = 60609;

	class EraFlipperManager___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::Class_1_D8BCA6FA1DEB13B9* region; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCurrentRegionEnter_b__0(::RPG::GameCore::EraRegion* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EraRegion*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS30_0___ONCURRENTREGIONENTER_B__0_OFFSET))(this, a1);
		}
	};
}
