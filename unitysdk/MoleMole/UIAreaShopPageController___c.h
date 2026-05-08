#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F091E965E210217_13;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152DD280)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x152DD2C0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__GETSORTEDGOODS_B__58_0_OFFSET UNITYSDK_OFFSET(0x152DD2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaShopPageController___c_TypeDefinitionIndex = 75405;

	class UIAreaShopPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAreaShopPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAreaShopPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAreaShopPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C970);
		}
		static ::System::Comparison_1<::Class_3_9F091E965E210217_13*>** StaticGet___9__58_0()
		{
			return (::System::Comparison_1<::Class_3_9F091E965E210217_13*>**)Il2CppClass::FromTypeDefinitionIndex(UIAreaShopPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C978);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedGoods_b__58_0(::Class_3_9F091E965E210217_13* goodsX, ::Class_3_9F091E965E210217_13* goodsY)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_3_9F091E965E210217_13*, ::Class_3_9F091E965E210217_13*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__GETSORTEDGOODS_B__58_0_OFFSET))(this, goodsX, goodsY);
		}
	};
}
