#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_546F21036F3A80BB;
class Class_1_5A6771CD0CA2718D;

#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A053C70)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_1__RUN_B__3_OFFSET UNITYSDK_OFFSET(0x1A053CA0)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_1__RUN_B__4_OFFSET UNITYSDK_OFFSET(0x1A053CD0)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_1__RUN_B__5_OFFSET UNITYSDK_OFFSET(0x1A053C80)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int SubStateFadeOutEntityAction___c__DisplayClass3_1_TypeDefinitionIndex = 74237;

	class SubStateFadeOutEntityAction___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::Class_1_546F21036F3A80BB* pieceMultiPlayerHelper; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_1__RUN_B__5_OFFSET))(this);
		}

		::System::Void _Run_b__3(::Class_1_5A6771CD0CA2718D* p, ::UnityEngine::Vector4 scc, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_1__RUN_B__3_OFFSET))(this, p, scc, i);
		}

		::System::Void _Run_b__4(::Class_1_5A6771CD0CA2718D* p, ::UnityEngine::Color c, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_1__RUN_B__4_OFFSET))(this, p, c, i);
		}
	};
}
