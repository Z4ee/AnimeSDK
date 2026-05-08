#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F57D00757009D1EB;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E25130)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CLICKBACKTOMAINCITY_B__39_0_OFFSET UNITYSDK_OFFSET(0x13E25180)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E25170)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__SETCURGOODSLIST_B__55_0_OFFSET UNITYSDK_OFFSET(0x13E25240)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallCasperPageController___c_TypeDefinitionIndex = 80591;

	class UIShoppingMallCasperPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIShoppingMallCasperPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIShoppingMallCasperPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallCasperPageController___c_TypeDefinitionIndex)->GetStaticField(0x46C70);
		}
		static ::System::Func_2<::Class_1_F57D00757009D1EB*, ::System::Boolean>** StaticGet___9__55_0()
		{
			return (::System::Func_2<::Class_1_F57D00757009D1EB*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallCasperPageController___c_TypeDefinitionIndex)->GetStaticField(0x46C78);
		}
		static ::System::Action** StaticGet___9__39_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallCasperPageController___c_TypeDefinitionIndex)->GetStaticField(0x46C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ClickBackToMainCity_b__39_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CLICKBACKTOMAINCITY_B__39_0_OFFSET))(this);
		}

		::System::Boolean _SetCurGoodsList_b__55_0(::Class_1_F57D00757009D1EB* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F57D00757009D1EB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__SETCURGOODSLIST_B__55_0_OFFSET))(this, x);
		}
	};
}
