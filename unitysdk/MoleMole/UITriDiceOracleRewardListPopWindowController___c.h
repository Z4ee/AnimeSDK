#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_832;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UITRIDICEORACLEREWARDLISTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x122C5D70)
#define MOLEMOLE_UITRIDICEORACLEREWARDLISTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x122C5DB0)
#define MOLEMOLE_UITRIDICEORACLEREWARDLISTPOPWINDOWCONTROLLER___C__REFRESHSELECTEDVIEW_B__13_1_OFFSET UNITYSDK_OFFSET(0x122C5DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleRewardListPopWindowController___c_TypeDefinitionIndex = 58395;

	class UITriDiceOracleRewardListPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UITriDiceOracleRewardListPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UITriDiceOracleRewardListPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracleRewardListPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x41850);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_832*, ::System::Int32>** StaticGet___9__13_1()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_832*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracleRewardListPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x41858);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEREWARDLISTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEREWARDLISTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshSelectedView_b__13_1(::Class_2_208CC9941471731A_832* reward)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_832*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEREWARDLISTPOPWINDOWCONTROLLER___C__REFRESHSELECTEDVIEW_B__13_1_OFFSET))(this, reward);
		}
	};
}
