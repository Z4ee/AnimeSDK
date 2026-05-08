#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORCOMPONENT___C_METHOD_1_BBE4869A3F4F1502_OFFSET UNITYSDK_OFFSET(0x177F6300)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x177F62B0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x177F62F0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int NapEffectSimulatorComponent___c_TypeDefinitionIndex = 54973;

	class NapEffectSimulatorComponent___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::Sirenix::OdinInspector::ValueDropdownItem>** StaticGet___9__123_1()
		{
			return (::System::Func_2<::System::Type*, ::Sirenix::OdinInspector::ValueDropdownItem>**)Il2CppClass::FromTypeDefinitionIndex(NapEffectSimulatorComponent___c_TypeDefinitionIndex)->GetStaticField(0x44700);
		}
		static ::MoleMole::EffectSimulate::NapEffectSimulatorComponent___c** StaticGet___9()
		{
			return (::MoleMole::EffectSimulate::NapEffectSimulatorComponent___c**)Il2CppClass::FromTypeDefinitionIndex(NapEffectSimulatorComponent___c_TypeDefinitionIndex)->GetStaticField(0x44708);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORCOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORCOMPONENT___C__CTOR_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownItem Method_1_BBE4869A3F4F1502(::System::Type* a1)
		{
			return ((::Sirenix::OdinInspector::ValueDropdownItem(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORCOMPONENT___C_METHOD_1_BBE4869A3F4F1502_OFFSET))(this, a1);
		}
	};
}
