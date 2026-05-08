#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORCOMPONENT_CLASS_1_1E172B8621B206BF_METHOD_1_00C21A87946A3286_OFFSET UNITYSDK_OFFSET(0x16E398E0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORCOMPONENT_CLASS_1_1E172B8621B206BF__CTOR_OFFSET UNITYSDK_OFFSET(0x16E398D0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int NapEffectSimulatorComponent_Class_1_1E172B8621B206BF_TypeDefinitionIndex = 54972;

	class NapEffectSimulatorComponent_Class_1_1E172B8621B206BF : public ::System::Object
	{
	public:
		::System::Type* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORCOMPONENT_CLASS_1_1E172B8621B206BF__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_00C21A87946A3286(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORCOMPONENT_CLASS_1_1E172B8621B206BF_METHOD_1_00C21A87946A3286_OFFSET))(this, a1);
		}
	};
}
