#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_INITCOLONYORIGAMIENTITY_METHOD_3_1760E1C962D0A8BB_OFFSET UNITYSDK_OFFSET(0x1D1ABE00)
#define RPG_GAMECORE_INITCOLONYORIGAMIENTITY_METHOD_3_D5E18B41FF6177C8_OFFSET UNITYSDK_OFFSET(0x1D1ABE40)
#define RPG_GAMECORE_INITCOLONYORIGAMIENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1ABE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitColonyOrigamiEntity_TypeDefinitionIndex = 20927;

	class InitColonyOrigamiEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITCOLONYORIGAMIENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1760E1C962D0A8BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitColonyOrigamiEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitColonyOrigamiEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITCOLONYORIGAMIENTITY_METHOD_3_1760E1C962D0A8BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D5E18B41FF6177C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitColonyOrigamiEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitColonyOrigamiEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITCOLONYORIGAMIENTITY_METHOD_3_D5E18B41FF6177C8_OFFSET))(a1, a2);
		}
	};
}
