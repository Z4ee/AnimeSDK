#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14843280)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x148432C0)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___C__FILLREWARDMAP_B__1_0_OFFSET UNITYSDK_OFFSET(0x148432D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelBattleInfoWidgetController___c_TypeDefinitionIndex = 58830;

	class UIMarcelBattleInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_1685EC66FBD28897*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::Class_1_1685EC66FBD28897*>**)Il2CppClass::FromTypeDefinitionIndex(UIMarcelBattleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x420B0);
		}
		static ::MoleMole::UIMarcelBattleInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMarcelBattleInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMarcelBattleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x420B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _FillRewardMap_b__1_0(::Class_1_1685EC66FBD28897* a, ::Class_1_1685EC66FBD28897* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1685EC66FBD28897*, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___C__FILLREWARDMAP_B__1_0_OFFSET))(this, a, b);
		}
	};
}
