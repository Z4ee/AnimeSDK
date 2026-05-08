#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowResultInfoRowNewWidgetController_RowData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EB77E0)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13EB7820)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2___C__GET_ROWDATALIST_B__10_0_OFFSET UNITYSDK_OFFSET(0x13EB7830)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventResultContextV2___c_TypeDefinitionIndex = 40602;

	class SummerEventResultContextV2___c : public ::System::Object
	{
	public:
		static ::MoleMole::SummerEventResultContextV2___c** StaticGet___9()
		{
			return (::MoleMole::SummerEventResultContextV2___c**)Il2CppClass::FromTypeDefinitionIndex(SummerEventResultContextV2___c_TypeDefinitionIndex)->GetStaticField(0x2E910);
		}
		static ::System::Func_2<::System::ValueTuple_2<::System::String*, ::System::String*>, ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::String*, ::System::String*>, ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>**)Il2CppClass::FromTypeDefinitionIndex(SummerEventResultContextV2___c_TypeDefinitionIndex)->GetStaticField(0x2E918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2___C__CTOR_OFFSET))(this);
		}

		::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData _get_RowDataList_b__10_0(::System::ValueTuple_2<::System::String*, ::System::String*> item)
		{
			return ((::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData(*)(::PVOID, ::System::ValueTuple_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2___C__GET_ROWDATALIST_B__10_0_OFFSET))(this, item);
		}
	};
}
