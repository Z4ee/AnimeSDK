#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D9BAE726F869C3AC;
namespace MoleMole { class UIHardCoreBossBattletPrepPageController_Context; }

#define MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB1D20)
#define MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER___C__DISPLAYCLASS2_0__JUMPPAGEWHENHARDMODERANKSREADY_B__0_OFFSET UNITYSDK_OFFSET(0x17DB37D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattletPrepPageController___c__DisplayClass2_0_TypeDefinitionIndex = 71278;

	class UIHardCoreBossBattletPrepPageController___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::Class_1_D9BAE726F869C3AC* pageParams; // 0x10
		::MoleMole::UIHardCoreBossBattletPrepPageController_Context* context; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _JumpPageWhenHardModeRanksReady_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER___C__DISPLAYCLASS2_0__JUMPPAGEWHENHARDMODERANKSREADY_B__0_OFFSET))(this);
		}
	};
}
