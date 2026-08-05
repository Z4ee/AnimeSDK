#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoEntityModelModifier; }
namespace MoleMole { class MonoSpawnMonsterConfig; }

#define MOLEMOLE_MONOSTAGEENV_CLASS_1_E314997DBD1559E0__CTOR_OFFSET UNITYSDK_OFFSET(0x16876E90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStageEnv_Class_1_E314997DBD1559E0_TypeDefinitionIndex = 45660;

	class MonoStageEnv_Class_1_E314997DBD1559E0 : public ::System::Object
	{
	public:
		::MoleMole::MonoEntityModelModifier* Field_1_7; // 0x10
		::MoleMole::MonoSpawnMonsterConfig* Field_1_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_CLASS_1_E314997DBD1559E0__CTOR_OFFSET))(this);
		}
	};
}
