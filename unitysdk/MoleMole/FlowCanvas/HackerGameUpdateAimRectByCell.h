#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_6.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/ProtoScript/AimRectColor.h"

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEAIMRECTBYCELL_INVOKE_OFFSET UNITYSDK_OFFSET(0x149D5690)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEAIMRECTBYCELL_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x149D57A0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEAIMRECTBYCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x149D5820)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEAIMRECTBYCELL___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x149D58B0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameUpdateAimRectByCell_TypeDefinitionIndex = 59771;

	class HackerGameUpdateAimRectByCell : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_6<::MoleMole::HollowChessboard::HollowCell, ::System::Boolean, ::ProtoScript::AimRectColor, ::System::Boolean, ::System::Boolean, ::System::Boolean>
	{
	public:
		::MoleMole::HollowChessboard::HollowCell _cell; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEAIMRECTBYCELL__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::HollowChessboard::HollowCell cell, ::System::Boolean value, ::ProtoScript::AimRectColor color, ::System::Boolean isHideWithEntity, ::System::Boolean isGuidePoint, ::System::Boolean isOverridePlayer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean, ::ProtoScript::AimRectColor, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEAIMRECTBYCELL_INVOKE_OFFSET))(this, cell, value, color, isHideWithEntity, isGuidePoint, isOverridePlayer);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEAIMRECTBYCELL_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEAIMRECTBYCELL___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
