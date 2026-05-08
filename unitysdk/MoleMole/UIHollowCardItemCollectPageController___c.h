#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_900;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15827020)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15827060)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__GOTOMAINCITY_B__33_0_OFFSET UNITYSDK_OFFSET(0x15827240)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__ONCLOSEREFRESHHALLDATA_B__22_0_OFFSET UNITYSDK_OFFSET(0x15827070)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__SORTCFGS_B__29_0_OFFSET UNITYSDK_OFFSET(0x15827130)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemCollectPageController___c_TypeDefinitionIndex = 62943;

	class UIHollowCardItemCollectPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__33_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x35140);
		}
		static ::MoleMole::UIHollowCardItemCollectPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowCardItemCollectPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x35148);
		}
		static ::System::Action** StaticGet___9__22_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x35150);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_900*>** StaticGet___9__29_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_900*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x35158);
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

		::System::Int32 _SortCfgs_b__29_0(::Class_2_208CC9941471731A_900* x, ::Class_2_208CC9941471731A_900* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_900*, ::Class_2_208CC9941471731A_900*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__SORTCFGS_B__29_0_OFFSET))(this, x, y);
		}

		::System::Void _GoToMainCity_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__GOTOMAINCITY_B__33_0_OFFSET))(this);
		}
	};
}
