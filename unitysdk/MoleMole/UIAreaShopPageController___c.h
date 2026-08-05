#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F091E965E210217_6;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1708AC90)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1708ACD0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__GETSORTEDGOODS_B__58_0_OFFSET UNITYSDK_OFFSET(0x1708ACE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaShopPageController___c_TypeDefinitionIndex = 65275;

	class UIAreaShopPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAreaShopPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAreaShopPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAreaShopPageController___c_TypeDefinitionIndex)->GetStaticField(0x3FB40);
		}
		static ::System::Comparison_1<::Class_3_9F091E965E210217_6*>** StaticGet___9__58_0()
		{
			return (::System::Comparison_1<::Class_3_9F091E965E210217_6*>**)Il2CppClass::FromTypeDefinitionIndex(UIAreaShopPageController___c_TypeDefinitionIndex)->GetStaticField(0x3FB48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedGoods_b__58_0(::Class_3_9F091E965E210217_6* goodsX, ::Class_3_9F091E965E210217_6* goodsY)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_3_9F091E965E210217_6*, ::Class_3_9F091E965E210217_6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__GETSORTEDGOODS_B__58_0_OFFSET))(this, goodsX, goodsY);
		}
	};
}
