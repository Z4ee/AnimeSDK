#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C31F776B3FE6F486_4;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C7A680)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C7A6C0)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___C__GETSORTEDDATALIST_B__7_0_OFFSET UNITYSDK_OFFSET(0x14C7A6D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDataStatWidgetController___c_TypeDefinitionIndex = 61598;

	class UIRABDataStatWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_C31F776B3FE6F486_4*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::Class_1_C31F776B3FE6F486_4*>**)Il2CppClass::FromTypeDefinitionIndex(UIRABDataStatWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46D00);
		}
		static ::MoleMole::UIRABDataStatWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIRABDataStatWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRABDataStatWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46D08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedDataList_b__7_0(::Class_1_C31F776B3FE6F486_4* a, ::Class_1_C31F776B3FE6F486_4* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_C31F776B3FE6F486_4*, ::Class_1_C31F776B3FE6F486_4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___C__GETSORTEDDATALIST_B__7_0_OFFSET))(this, a, b);
		}
	};
}
