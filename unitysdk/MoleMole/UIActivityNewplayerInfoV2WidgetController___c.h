#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1D6B384C0B7DC7C3;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYNEWPLAYERINFOV2WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E9BB10)
#define MOLEMOLE_UIACTIVITYNEWPLAYERINFOV2WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E9BB50)
#define MOLEMOLE_UIACTIVITYNEWPLAYERINFOV2WIDGETCONTROLLER___C__REFRESHDATAVIEW_B__14_1_OFFSET UNITYSDK_OFFSET(0x15E9BB60)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityNewplayerInfoV2WidgetController___c_TypeDefinitionIndex = 65472;

	class UIActivityNewplayerInfoV2WidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityNewplayerInfoV2WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityNewplayerInfoV2WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityNewplayerInfoV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x41EB0);
		}
		static ::System::Func_2<::Class_1_1D6B384C0B7DC7C3*, ::System::UInt32>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::Class_1_1D6B384C0B7DC7C3*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityNewplayerInfoV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x41EB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNEWPLAYERINFOV2WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNEWPLAYERINFOV2WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _RefreshDataView_b__14_1(::Class_1_1D6B384C0B7DC7C3* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_1D6B384C0B7DC7C3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNEWPLAYERINFOV2WIDGETCONTROLLER___C__REFRESHDATAVIEW_B__14_1_OFFSET))(this, x);
		}
	};
}
