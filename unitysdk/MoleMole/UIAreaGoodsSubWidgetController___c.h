#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_31FAD6E85054E2C7;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197DFA60)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197DFAA0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__REFRESHCARDNUM_B__8_0_OFFSET UNITYSDK_OFFSET(0x197DFAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaGoodsSubWidgetController___c_TypeDefinitionIndex = 80882;

	class UIAreaGoodsSubWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAreaGoodsSubWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAreaGoodsSubWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAreaGoodsSubWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32AC0);
		}
		static ::System::Converter_2<::Class_2_31FAD6E85054E2C7*, ::System::Int32>** StaticGet___9__8_0()
		{
			return (::System::Converter_2<::Class_2_31FAD6E85054E2C7*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAreaGoodsSubWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32AC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshCardNum_b__8_0(::Class_2_31FAD6E85054E2C7* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_31FAD6E85054E2C7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__REFRESHCARDNUM_B__8_0_OFFSET))(this, x);
		}
	};
}
