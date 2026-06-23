#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1779C9D0)
#define MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1779CA10)
#define MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER___C__JUMPPAGEWHENHARDMODERANKSREADY_B__2_1_OFFSET UNITYSDK_OFFSET(0x1779CA20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattletPrepPageController___c_TypeDefinitionIndex = 83616;

	class UIHardCoreBossBattletPrepPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__2_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHardCoreBossBattletPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x46C00);
		}
		static ::MoleMole::UIHardCoreBossBattletPrepPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIHardCoreBossBattletPrepPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHardCoreBossBattletPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x46C08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _JumpPageWhenHardModeRanksReady_b__2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER___C__JUMPPAGEWHENHARDMODERANKSREADY_B__2_1_OFFSET))(this);
		}
	};
}
