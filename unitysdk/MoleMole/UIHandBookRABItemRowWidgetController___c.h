#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181262C0)
#define MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18126300)
#define MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__REFRESHBOSSCHALLENGEREWARD_B__39_0_OFFSET UNITYSDK_OFFSET(0x181263E0)
#define MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__REFRESHBUTTON_B__34_1_OFFSET UNITYSDK_OFFSET(0x18126310)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRABItemRowWidgetController___c_TypeDefinitionIndex = 42665;

	class UIHandBookRABItemRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__34_1()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRABItemRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30D60);
		}
		static ::System::Comparison_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet___9__39_0()
		{
			return (::System::Comparison_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRABItemRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30D68);
		}
		static ::MoleMole::UIHandBookRABItemRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookRABItemRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRABItemRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshButton_b__34_1(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__REFRESHBUTTON_B__34_1_OFFSET))(this, success);
		}

		::System::Int32 _RefreshBossChallengeReward_b__39_0(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 a, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__REFRESHBOSSCHALLENGEREWARD_B__39_0_OFFSET))(this, a, b);
		}
	};
}
