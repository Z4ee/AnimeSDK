#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_733;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18721400)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS36_0__ONCAMPCHANGE_B__1_OFFSET UNITYSDK_OFFSET(0x18721410)

namespace MoleMole
{
	inline static constexpr unsigned int UIABBattlePhaseWidgetController___c__DisplayClass36_0_TypeDefinitionIndex = 46034;

	class UIABBattlePhaseWidgetController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::Class_2_208CC9941471731A_733*>* curList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnCampChange_b__1(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> kv)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS36_0__ONCAMPCHANGE_B__1_OFFSET))(this, kv);
		}
	};
}
