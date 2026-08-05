#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A2FCB0C4C9740099;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIABYSSARPEGGIOTALENTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D86DD0)
#define MOLEMOLE_UIABYSSARPEGGIOTALENTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D86E10)
#define MOLEMOLE_UIABYSSARPEGGIOTALENTPAGECONTROLLER___C__ONUIOPEN_B__20_0_OFFSET UNITYSDK_OFFSET(0x11D86E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssArpeggioTalentPageController___c_TypeDefinitionIndex = 86997;

	class UIAbyssArpeggioTalentPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAbyssArpeggioTalentPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssArpeggioTalentPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioTalentPageController___c_TypeDefinitionIndex)->GetStaticField(0x4FE50);
		}
		static ::System::Comparison_1<::Class_1_A2FCB0C4C9740099*>** StaticGet___9__20_0()
		{
			return (::System::Comparison_1<::Class_1_A2FCB0C4C9740099*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioTalentPageController___c_TypeDefinitionIndex)->GetStaticField(0x4FE58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOTALENTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOTALENTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIOpen_b__20_0(::Class_1_A2FCB0C4C9740099* x, ::Class_1_A2FCB0C4C9740099* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_A2FCB0C4C9740099*, ::Class_1_A2FCB0C4C9740099*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOTALENTPAGECONTROLLER___C__ONUIOPEN_B__20_0_OFFSET))(this, x, y);
		}
	};
}
