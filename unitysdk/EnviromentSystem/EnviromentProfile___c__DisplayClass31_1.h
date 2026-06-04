#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile___c__DisplayClass31_0; }

#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE___C__DISPLAYCLASS31_1__CTOR_OFFSET UNITYSDK_OFFSET(0x135C9D60)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE___C__DISPLAYCLASS31_1__REGISTERTRANSITIONTARGETFROM_B__0_OFFSET UNITYSDK_OFFSET(0x135CEC50)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviromentProfile___c__DisplayClass31_1_TypeDefinitionIndex = 46768;

	class EnviromentProfile___c__DisplayClass31_1 : public ::System::Object
	{
	public:
		::EnviromentSystem::EnviroProperty* loadResource; // 0x10
		::EnviromentSystem::EnviromentProfile___c__DisplayClass31_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE___C__DISPLAYCLASS31_1__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterTransitionTargetFrom_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE___C__DISPLAYCLASS31_1__REGISTERTRANSITIONTARGETFROM_B__0_OFFSET))(this, a1);
		}
	};
}
