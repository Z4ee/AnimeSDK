#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::EffectSimulate { class NapEffectSimulatorComponent; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER___C_METHOD_1_5F96E8EA595E67F6_OFFSET UNITYSDK_OFFSET(0x1495EE70)
#define MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1495EE20)
#define MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1495EE60)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPPDataContainer___c_TypeDefinitionIndex = 42775;

	class ESPPDataContainer___c : public ::System::Object
	{
	public:
		static ::MoleMole::EffectSimulate::ESPPDataContainer___c** StaticGet___9()
		{
			return (::MoleMole::EffectSimulate::ESPPDataContainer___c**)Il2CppClass::FromTypeDefinitionIndex(ESPPDataContainer___c_TypeDefinitionIndex)->GetStaticField(0x2E7B0);
		}
		static ::System::Func_2<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ESPPDataContainer___c_TypeDefinitionIndex)->GetStaticField(0x2E7B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_5F96E8EA595E67F6(::MoleMole::EffectSimulate::NapEffectSimulatorComponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorComponent*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER___C_METHOD_1_5F96E8EA595E67F6_OFFSET))(this, a1);
		}
	};
}
