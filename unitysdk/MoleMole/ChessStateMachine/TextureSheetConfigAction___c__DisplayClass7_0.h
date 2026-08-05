#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_5A6771CD0CA2718D;
namespace MoleMole::ChessStateMachine { class TextureSheetConfigAction; }

#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF12C070)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__RUN_B__1_OFFSET UNITYSDK_OFFSET(0xF12C080)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__RUN_B__2_OFFSET UNITYSDK_OFFSET(0xF12C420)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__RUN_B__3_OFFSET UNITYSDK_OFFSET(0xF12C4A0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__RUN_B__4_OFFSET UNITYSDK_OFFSET(0xF12C520)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TextureSheetConfigAction___c__DisplayClass7_0_TypeDefinitionIndex = 89797;

	class TextureSheetConfigAction___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::ChessStateMachine::TextureSheetConfigAction* __4__this; // 0x10
		::System::Int32 screenIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__1(::Class_1_5A6771CD0CA2718D* p, ::MoleMole::HollowPieceBlendMode m)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__RUN_B__1_OFFSET))(this, p, m);
		}

		::System::Void _Run_b__2(::Class_1_5A6771CD0CA2718D* p, ::UnityEngine::Vector4 scc, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__RUN_B__2_OFFSET))(this, p, scc, i);
		}

		::System::Void _Run_b__3(::Class_1_5A6771CD0CA2718D* p, ::UnityEngine::Color c, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__RUN_B__3_OFFSET))(this, p, c, i);
		}

		::System::Void _Run_b__4(::Class_1_5A6771CD0CA2718D* player)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__RUN_B__4_OFFSET))(this, player);
		}
	};
}
