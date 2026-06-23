#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA793AB1D49D0132;
class Class_2_17EF7F195EE14706;
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHELPER_POSTCREATEASSET_OFFSET UNITYSDK_OFFSET(0x18256040)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController_CanvasRTHelper_TypeDefinitionIndex = 58381;

	class UIHollowChessboard3DModelController_CanvasRTHelper : public ::System::Object
	{
	public:
		static ::System::Void PostCreateAsset(::MoleMole::UIWindowController* uiCtrl, ::Class_1_FA793AB1D49D0132* openParams, ::MoleMole::UIWindowController* parentCtrl, ::UnityEngine::Transform* parent)
		{
			return ((::System::Void(*)(::MoleMole::UIWindowController*, ::Class_1_FA793AB1D49D0132*, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHELPER_POSTCREATEASSET_OFFSET))(uiCtrl, openParams, parentCtrl, parent);
		}
	};
}
