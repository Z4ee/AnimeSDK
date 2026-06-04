#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_616F89B5F43D1E61;
namespace RPG::GameCore { class EraRegion; }

#define RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB936180)
#define RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS33_0__ONREGIONVISUALSTATECHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xB937480)

namespace RPG::Client
{
	inline static constexpr unsigned int EraFlipperManager___c__DisplayClass33_0_TypeDefinitionIndex = 56550;

	class EraFlipperManager___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::Class_1_616F89B5F43D1E61* arg1; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnRegionVisualStateChange_b__0(::RPG::GameCore::EraRegion* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EraRegion*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS33_0__ONREGIONVISUALSTATECHANGE_B__0_OFFSET))(this, a1);
		}
	};
}
