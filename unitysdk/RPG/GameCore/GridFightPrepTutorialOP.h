#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightPrepTutorialOPType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightPrepTutorialNodeVisibleParam; }
namespace RPG::GameCore { class GridFightPrepTutorialPopupPanelVisibleParam; }
namespace RPG::GameCore { class GridFightPrepTutorialRemoveEquipTrackParam; }
namespace RPG::GameCore { class GridFightPrepTutorialSetGoldNumParam; }
namespace RPG::GameCore { class GridFightPrepTutorialSubToastHintParam; }
namespace RPG::GameCore { class GridFightPrepTutorialToastHintParam; }
namespace RPG::GameCore { class GridFightPrepTutorialTopHintParam; }

#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALOP_METHOD_3_3467D788080562B9_OFFSET UNITYSDK_OFFSET(0x1727B730)
#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALOP_METHOD_3_B5D1B10894A84B0D_OFFSET UNITYSDK_OFFSET(0x1727B7B0)
#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1727B780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepTutorialOP_TypeDefinitionIndex = 18243;

	class GridFightPrepTutorialOP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GridFightPrepTutorialOPType OPType; // 0x18
		::RPG::GameCore::GridFightPrepTutorialToastHintParam* ToastHintParam; // 0x20
		::RPG::GameCore::GridFightPrepTutorialSubToastHintParam* SubToastHintParam; // 0x28
		::RPG::GameCore::GridFightPrepTutorialTopHintParam* TopHintParam; // 0x30
		::RPG::GameCore::GridFightPrepTutorialNodeVisibleParam* NodeVisibleParam; // 0x38
		::RPG::GameCore::GridFightPrepTutorialPopupPanelVisibleParam* PopupPanelVisibleParam; // 0x40
		::RPG::GameCore::GridFightPrepTutorialSetGoldNumParam* SetGoldNumParam; // 0x48
		::RPG::GameCore::GridFightPrepTutorialRemoveEquipTrackParam* RemoveEquipTrackParam; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALOP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3467D788080562B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPrepTutorialOP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPrepTutorialOP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALOP_METHOD_3_3467D788080562B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B5D1B10894A84B0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPrepTutorialOP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPrepTutorialOP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALOP_METHOD_3_B5D1B10894A84B0D_OFFSET))(a1, a2);
		}
	};
}
