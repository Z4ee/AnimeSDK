#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_130;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17170D60)
#define MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17170DA0)
#define MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x17170DB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastRewardPageController___c_TypeDefinitionIndex = 57839;

	class UIOverlordFeastRewardPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_208CC9941471731A_130*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_130*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastRewardPageController___c_TypeDefinitionIndex)->GetStaticField(0x46CF0);
		}
		static ::MoleMole::UIOverlordFeastRewardPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIOverlordFeastRewardPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastRewardPageController___c_TypeDefinitionIndex)->GetStaticField(0x46CF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__7_0(::Class_2_208CC9941471731A_130* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_130*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET))(this, t);
		}
	};
}
