#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowHollowLayerResultDialogContext.h"

class Class_3_1A50D9EA321B375F;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MOLEMOLE_UIHOLLOWABYSSS2LAYERRESULTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1525CB40)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowAbyssS2LayerResultDialogContext_TypeDefinitionIndex = 61647;

	class UIHollowAbyssS2LayerResultDialogContext : public ::MoleMole::UIHollowHollowLayerResultDialogContext
	{
	public:
		::System::Collections::Generic::IList_1<::Class_3_1A50D9EA321B375F*>* RankingTasks; // 0x40
		::System::Int32 Ranking; // 0x48

		::System::Void _ctor(::System::Action* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWABYSSS2LAYERRESULTDIALOGCONTEXT__CTOR_OFFSET))(this, onClose);
		}
	};
}
