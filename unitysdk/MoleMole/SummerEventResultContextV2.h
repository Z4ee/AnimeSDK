#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_76A758F872DFBC83.h"
#include "unitysdk/MoleMole/UIHollowHollowLayerResultDialogContext.h"
#include "unitysdk/MoleMole/UIHollowResultInfoRowNewWidgetController_RowData.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_48A3D3A34C52331D_39;
namespace MoleMole { class UILevelResultPageContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_ADD_OFFSET UNITYSDK_OFFSET(0x1236ECF0)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_EXITGAME_OFFSET UNITYSDK_OFFSET(0x1236EBE0)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1236ECE0)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_GET_ROWDATALIST_OFFSET UNITYSDK_OFFSET(0x1236EDA0)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_HANDLERESPONSE_OFFSET UNITYSDK_OFFSET(0x1236E9D0)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_RESTART_OFFSET UNITYSDK_OFFSET(0x1236E880)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_ROWDATA_OFFSET UNITYSDK_OFFSET(0x1236EF80)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1236E7C0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventResultContextV2_TypeDefinitionIndex = 40601;

	class SummerEventResultContextV2 : public ::MoleMole::UIHollowHollowLayerResultDialogContext
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>* _items; // 0x40
		::Enum_3_76A758F872DFBC83 _Rank_k__BackingField; // 0x48

		::System::Void _ctor(::MoleMole::UILevelResultPageContext* context, ::Enum_3_76A758F872DFBC83 rank)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UILevelResultPageContext*, ::Enum_3_76A758F872DFBC83))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2__CTOR_OFFSET))(this, context, rank);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_RESTART_OFFSET))(this);
		}

		static ::System::Void HandleResponse(::Class_3_48A3D3A34C52331D_39* msg)
		{
			return ((::System::Void(*)(::Class_3_48A3D3A34C52331D_39*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_HANDLERESPONSE_OFFSET))(msg);
		}

		static ::System::Void ExitGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_EXITGAME_OFFSET))();
		}

		::Enum_3_76A758F872DFBC83 get_Rank()
		{
			return ((::Enum_3_76A758F872DFBC83(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_GET_RANK_OFFSET))(this);
		}

		::System::Void Add(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_ADD_OFFSET))(this, key, value);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>* get_RowDataList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_GET_ROWDATALIST_OFFSET))(this);
		}

		static ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData RowData(::System::String* key, ::System::String* value)
		{
			return ((::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_ROWDATA_OFFSET))(key, value);
		}
	};
}
