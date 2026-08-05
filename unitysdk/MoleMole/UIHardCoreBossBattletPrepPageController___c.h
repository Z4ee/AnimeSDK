#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17312C10)
#define MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17312C50)
#define MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER___C__JUMPPAGEWHENHARDMODERANKSREADY_B__2_1_OFFSET UNITYSDK_OFFSET(0x17312C60)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattletPrepPageController___c_TypeDefinitionIndex = 71280;

	class UIHardCoreBossBattletPrepPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__2_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHardCoreBossBattletPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AD10);
		}
		static ::MoleMole::UIHardCoreBossBattletPrepPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIHardCoreBossBattletPrepPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHardCoreBossBattletPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AD18);
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
