#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F091E965E210217_13;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1563D740)
#define MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1563D780)
#define MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__GETSORTEDGOODS_B__33_0_OFFSET UNITYSDK_OFFSET(0x1563D790)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDreamShopPageController___c_TypeDefinitionIndex = 60015;

	class UIBangbooDreamShopPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangbooDreamShopPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangbooDreamShopPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooDreamShopPageController___c_TypeDefinitionIndex)->GetStaticField(0x40710);
		}
		static ::System::Comparison_1<::Class_3_9F091E965E210217_13*>** StaticGet___9__33_0()
		{
			return (::System::Comparison_1<::Class_3_9F091E965E210217_13*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooDreamShopPageController___c_TypeDefinitionIndex)->GetStaticField(0x40718);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedGoods_b__33_0(::Class_3_9F091E965E210217_13* goodsX, ::Class_3_9F091E965E210217_13* goodsY)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_3_9F091E965E210217_13*, ::Class_3_9F091E965E210217_13*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__GETSORTEDGOODS_B__33_0_OFFSET))(this, goodsX, goodsY);
		}
	};
}
