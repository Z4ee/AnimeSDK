#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIBATTLEINFOWIDGETCONTROLLERBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x175B6CA0)
#define MOLEMOLE_UIBATTLEINFOWIDGETCONTROLLERBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x175B6CE0)
#define MOLEMOLE_UIBATTLEINFOWIDGETCONTROLLERBASE___C__INTERNALREFRESHVIEW_B__24_0_OFFSET UNITYSDK_OFFSET(0x175B6CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBattleInfoWidgetControllerBase___c_TypeDefinitionIndex = 82342;

	class UIBattleInfoWidgetControllerBase___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_1685EC66FBD28897*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::Class_1_1685EC66FBD28897*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBattleInfoWidgetControllerBase___c_TypeDefinitionIndex)->GetStaticField(0x4C000);
		}
		static ::MoleMole::UIBattleInfoWidgetControllerBase___c** StaticGet___9()
		{
			return (::MoleMole::UIBattleInfoWidgetControllerBase___c**)Il2CppClass::FromTypeDefinitionIndex(UIBattleInfoWidgetControllerBase___c_TypeDefinitionIndex)->GetStaticField(0x4C008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEINFOWIDGETCONTROLLERBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEINFOWIDGETCONTROLLERBASE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InternalRefreshView_b__24_0(::Class_1_1685EC66FBD28897* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEINFOWIDGETCONTROLLERBASE___C__INTERNALREFRESHVIEW_B__24_0_OFFSET))(this, t);
		}
	};
}
