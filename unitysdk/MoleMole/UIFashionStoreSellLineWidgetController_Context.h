#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BD2BE7927F889C7B;
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CONTEXT_ADDPRODUCT_OFFSET UNITYSDK_OFFSET(0x1431C8A0)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CONTEXT_FILLWITHNULL_OFFSET UNITYSDK_OFFSET(0x1431C9D0)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CONTEXT_GETPRODUCTARRAY_OFFSET UNITYSDK_OFFSET(0x1431CAF0)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1431C820)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreSellLineWidgetController_Context_TypeDefinitionIndex = 52171;

	class UIFashionStoreSellLineWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Il2CppArray<::Class_1_BD2BE7927F889C7B*>* _productArray; // 0x28
		::System::Action_2<::System::Int32, ::System::Int32>* OnClickProduct; // 0x30
		::System::Int32 currIdx; // 0x38
		::System::Int32 row; // 0x3C

		::System::Void _ctor(::System::Int32 rowIndex, ::System::Action_2<::System::Int32, ::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, rowIndex, onClick);
		}

		::System::Void AddProduct(::Class_1_BD2BE7927F889C7B* newProduct)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BD2BE7927F889C7B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CONTEXT_ADDPRODUCT_OFFSET))(this, newProduct);
		}

		::System::Void FillWithNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CONTEXT_FILLWITHNULL_OFFSET))(this);
		}

		::Il2CppArray<::Class_1_BD2BE7927F889C7B*>* GetProductArray()
		{
			return ((::Il2CppArray<::Class_1_BD2BE7927F889C7B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CONTEXT_GETPRODUCTARRAY_OFFSET))(this);
		}
	};
}
