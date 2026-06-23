#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F091E965E210217_31;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E50F00)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E50F40)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__GETSORTEDGOODS_B__58_0_OFFSET UNITYSDK_OFFSET(0x15E50F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaShopPageController___c_TypeDefinitionIndex = 72936;

	class UIAreaShopPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_3_9F091E965E210217_31*>** StaticGet___9__58_0()
		{
			return (::System::Comparison_1<::Class_3_9F091E965E210217_31*>**)Il2CppClass::FromTypeDefinitionIndex(UIAreaShopPageController___c_TypeDefinitionIndex)->GetStaticField(0x3EF80);
		}
		static ::MoleMole::UIAreaShopPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAreaShopPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAreaShopPageController___c_TypeDefinitionIndex)->GetStaticField(0x3EF88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedGoods_b__58_0(::Class_3_9F091E965E210217_31* goodsX, ::Class_3_9F091E965E210217_31* goodsY)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_3_9F091E965E210217_31*, ::Class_3_9F091E965E210217_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__GETSORTEDGOODS_B__58_0_OFFSET))(this, goodsX, goodsY);
		}
	};
}
