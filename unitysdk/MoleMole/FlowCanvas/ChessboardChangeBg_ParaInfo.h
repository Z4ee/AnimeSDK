#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Optional_1.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEBG_PARAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1382CD60)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardChangeBg_ParaInfo_TypeDefinitionIndex = 81687;

	class ChessboardChangeBg_ParaInfo : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Optional_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::AnimationCurve*>> FadeInfo; // 0x10
		::System::String* videoName; // 0x28
		::MoleMole::FlowCanvas::Optional_1<::MoleMole::Vector2Int> BoundIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEBG_PARAINFO__CTOR_OFFSET))(this);
		}
	};
}
