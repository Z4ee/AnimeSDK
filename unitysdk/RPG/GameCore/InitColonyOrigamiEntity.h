#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_INITCOLONYORIGAMIENTITY_METHOD_3_D5E18B41FF6177C8_OFFSET UNITYSDK_OFFSET(0x172BB810)
#define RPG_GAMECORE_INITCOLONYORIGAMIENTITY_METHOD_3_DBCEC77AE4A298D8_OFFSET UNITYSDK_OFFSET(0x172BB790)
#define RPG_GAMECORE_INITCOLONYORIGAMIENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x172BB7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitColonyOrigamiEntity_TypeDefinitionIndex = 19471;

	class InitColonyOrigamiEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITCOLONYORIGAMIENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DBCEC77AE4A298D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitColonyOrigamiEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitColonyOrigamiEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITCOLONYORIGAMIENTITY_METHOD_3_DBCEC77AE4A298D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D5E18B41FF6177C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitColonyOrigamiEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitColonyOrigamiEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITCOLONYORIGAMIENTITY_METHOD_3_D5E18B41FF6177C8_OFFSET))(a1, a2);
		}
	};
}
