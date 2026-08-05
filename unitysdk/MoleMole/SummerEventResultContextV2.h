#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6F5EF14512C56DB5.h"
#include "unitysdk/MoleMole/UIHollowHollowLayerResultDialogContext.h"
#include "unitysdk/MoleMole/UIHollowResultInfoRowNewWidgetController_RowData.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_48A3D3A34C52331D_7;
namespace MoleMole { class UILevelResultPageContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_ADD_OFFSET UNITYSDK_OFFSET(0x136F0180)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_EXITGAME_OFFSET UNITYSDK_OFFSET(0x136F0070)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_GET_RANK_OFFSET UNITYSDK_OFFSET(0x136F0170)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_GET_ROWDATALIST_OFFSET UNITYSDK_OFFSET(0x136F0230)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_HANDLERESPONSE_OFFSET UNITYSDK_OFFSET(0x136EFE60)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_RESTART_OFFSET UNITYSDK_OFFSET(0x136EFD10)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_ROWDATA_OFFSET UNITYSDK_OFFSET(0x136F0410)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2__CTOR_OFFSET UNITYSDK_OFFSET(0x136EFC00)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventResultContextV2_TypeDefinitionIndex = 43522;

	class SummerEventResultContextV2 : public ::MoleMole::UIHollowHollowLayerResultDialogContext
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>* _items; // 0x40
		::Enum_3_6F5EF14512C56DB5 _Rank_k__BackingField; // 0x48

		::System::Void _ctor(::MoleMole::UILevelResultPageContext* context, ::Enum_3_6F5EF14512C56DB5 rank)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UILevelResultPageContext*, ::Enum_3_6F5EF14512C56DB5))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2__CTOR_OFFSET))(this, context, rank);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_RESTART_OFFSET))(this);
		}

		static ::System::Void HandleResponse(::Class_3_48A3D3A34C52331D_7* msg)
		{
			return ((::System::Void(*)(::Class_3_48A3D3A34C52331D_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_HANDLERESPONSE_OFFSET))(msg);
		}

		static ::System::Void ExitGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_EXITGAME_OFFSET))();
		}

		::Enum_3_6F5EF14512C56DB5 get_Rank()
		{
			return ((::Enum_3_6F5EF14512C56DB5(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_GET_RANK_OFFSET))(this);
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
