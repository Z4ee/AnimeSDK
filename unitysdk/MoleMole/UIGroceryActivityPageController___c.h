#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6D6D57236F24B8FC;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x186CECF0)
#define MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x186CED30)
#define MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__ONUIOPENSHOW_B__23_0_OFFSET UNITYSDK_OFFSET(0x186CED40)
#define MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__REFRESHUIWHENDATAUPDATE_B__38_0_OFFSET UNITYSDK_OFFSET(0x186CED90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryActivityPageController___c_TypeDefinitionIndex = 54185;

	class UIGroceryActivityPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_6D6D57236F24B8FC*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::Class_1_6D6D57236F24B8FC*>**)Il2CppClass::FromTypeDefinitionIndex(UIGroceryActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x4D9E0);
		}
		static ::System::Comparison_1<::Class_1_6D6D57236F24B8FC*>** StaticGet___9__38_0()
		{
			return (::System::Comparison_1<::Class_1_6D6D57236F24B8FC*>**)Il2CppClass::FromTypeDefinitionIndex(UIGroceryActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x4D9E8);
		}
		static ::MoleMole::UIGroceryActivityPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIGroceryActivityPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGroceryActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x4D9F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIOpenShow_b__23_0(::Class_1_6D6D57236F24B8FC* x, ::Class_1_6D6D57236F24B8FC* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_6D6D57236F24B8FC*, ::Class_1_6D6D57236F24B8FC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__ONUIOPENSHOW_B__23_0_OFFSET))(this, x, y);
		}

		::System::Int32 _RefreshUIWhenDataUpdate_b__38_0(::Class_1_6D6D57236F24B8FC* x, ::Class_1_6D6D57236F24B8FC* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_6D6D57236F24B8FC*, ::Class_1_6D6D57236F24B8FC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__REFRESHUIWHENDATAUPDATE_B__38_0_OFFSET))(this, x, y);
		}
	};
}
