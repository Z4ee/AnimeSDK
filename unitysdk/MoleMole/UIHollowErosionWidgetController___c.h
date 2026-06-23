#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_542A772D07AFD4EA;
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169EC9D0)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169ECA10)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___C__REFRESHCONFIGDATA_B__20_0_OFFSET UNITYSDK_OFFSET(0x169ECA20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowErosionWidgetController___c_TypeDefinitionIndex = 65327;

	class UIHollowErosionWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Class_2_542A772D07AFD4EA*>** StaticGet___9__20_0()
		{
			return (::System::Predicate_1<::Class_2_542A772D07AFD4EA*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowErosionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CAA0);
		}
		static ::MoleMole::UIHollowErosionWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowErosionWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowErosionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CAA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshConfigData_b__20_0(::Class_2_542A772D07AFD4EA* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_542A772D07AFD4EA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___C__REFRESHCONFIGDATA_B__20_0_OFFSET))(this, x);
		}
	};
}
