#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIHOLLOWARPEGGIOBOTTOMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1468A340)
#define MOLEMOLE_UIHOLLOWARPEGGIOBOTTOMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1468A380)
#define MOLEMOLE_UIHOLLOWARPEGGIOBOTTOMWIDGETCONTROLLER___C__OPENDAMNATIONELIMINATE_B__9_0_OFFSET UNITYSDK_OFFSET(0x1468A390)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowArpeggioBottomWidgetController___c_TypeDefinitionIndex = 68998;

	class UIHollowArpeggioBottomWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHollowArpeggioBottomWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowArpeggioBottomWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowArpeggioBottomWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A320);
		}
		static ::System::Func_1<::System::String*>** StaticGet___9__9_0()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowArpeggioBottomWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWARPEGGIOBOTTOMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWARPEGGIOBOTTOMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _OpenDamnationEliminate_b__9_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWARPEGGIOBOTTOMWIDGETCONTROLLER___C__OPENDAMNATIONELIMINATE_B__9_0_OFFSET))(this);
		}
	};
}
