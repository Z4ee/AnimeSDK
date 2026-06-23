#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F091E965E210217_31;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16ED7770)
#define MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED77B0)
#define MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__GETSORTEDGOODS_B__33_0_OFFSET UNITYSDK_OFFSET(0x16ED77C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDreamShopPageController___c_TypeDefinitionIndex = 66820;

	class UIBangbooDreamShopPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_3_9F091E965E210217_31*>** StaticGet___9__33_0()
		{
			return (::System::Comparison_1<::Class_3_9F091E965E210217_31*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooDreamShopPageController___c_TypeDefinitionIndex)->GetStaticField(0x43190);
		}
		static ::MoleMole::UIBangbooDreamShopPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangbooDreamShopPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooDreamShopPageController___c_TypeDefinitionIndex)->GetStaticField(0x43198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedGoods_b__33_0(::Class_3_9F091E965E210217_31* goodsX, ::Class_3_9F091E965E210217_31* goodsY)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_3_9F091E965E210217_31*, ::Class_3_9F091E965E210217_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__GETSORTEDGOODS_B__33_0_OFFSET))(this, goodsX, goodsY);
		}
	};
}
