#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F57D00757009D1EB;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AA5200)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CLICKBACKTOMAINCITY_B__38_0_OFFSET UNITYSDK_OFFSET(0x16AA5250)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA5240)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__SETCURGOODSLIST_B__58_0_OFFSET UNITYSDK_OFFSET(0x16AA5310)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallCasperPageController___c_TypeDefinitionIndex = 50600;

	class UIShoppingMallCasperPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIShoppingMallCasperPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIShoppingMallCasperPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallCasperPageController___c_TypeDefinitionIndex)->GetStaticField(0x4C690);
		}
		static ::System::Action** StaticGet___9__38_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallCasperPageController___c_TypeDefinitionIndex)->GetStaticField(0x4C698);
		}
		static ::System::Func_2<::Class_1_F57D00757009D1EB*, ::System::Boolean>** StaticGet___9__58_0()
		{
			return (::System::Func_2<::Class_1_F57D00757009D1EB*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallCasperPageController___c_TypeDefinitionIndex)->GetStaticField(0x4C6A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ClickBackToMainCity_b__38_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CLICKBACKTOMAINCITY_B__38_0_OFFSET))(this);
		}

		::System::Boolean _SetCurGoodsList_b__58_0(::Class_1_F57D00757009D1EB* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F57D00757009D1EB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__SETCURGOODSLIST_B__58_0_OFFSET))(this, x);
		}
	};
}
