#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_130;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1749FC50)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1749FC90)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__REFRESHPROGRESSPOINTS_B__10_1_OFFSET UNITYSDK_OFFSET(0x1749FCA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovCollectPageController___c_TypeDefinitionIndex = 75281;

	class UIZenkovCollectPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIZenkovCollectPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIZenkovCollectPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x453A0);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_130*, ::System::Int32>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_130*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x453A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshProgressPoints_b__10_1(::Class_2_208CC9941471731A_130* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_130*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__REFRESHPROGRESSPOINTS_B__10_1_OFFSET))(this, x);
		}
	};
}
