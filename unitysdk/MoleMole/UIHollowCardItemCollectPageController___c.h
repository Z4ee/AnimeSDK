#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_988;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ED8DF0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED8E30)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__GOTOMAINCITY_B__33_0_OFFSET UNITYSDK_OFFSET(0x18ED9010)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__ONCLOSEREFRESHHALLDATA_B__22_0_OFFSET UNITYSDK_OFFSET(0x18ED8E40)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__SORTCFGS_B__29_0_OFFSET UNITYSDK_OFFSET(0x18ED8F00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemCollectPageController___c_TypeDefinitionIndex = 53997;

	class UIHollowCardItemCollectPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__33_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A4B0);
		}
		static ::System::Action** StaticGet___9__22_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A4B8);
		}
		static ::MoleMole::UIHollowCardItemCollectPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowCardItemCollectPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A4C0);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_988*>** StaticGet___9__29_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_988*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A4C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnCloseRefreshHallData_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__ONCLOSEREFRESHHALLDATA_B__22_0_OFFSET))(this);
		}

		::System::Int32 _SortCfgs_b__29_0(::Class_2_208CC9941471731A_988* x, ::Class_2_208CC9941471731A_988* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_988*, ::Class_2_208CC9941471731A_988*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__SORTCFGS_B__29_0_OFFSET))(this, x, y);
		}

		::System::Void _GoToMainCity_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__GOTOMAINCITY_B__33_0_OFFSET))(this);
		}
	};
}
