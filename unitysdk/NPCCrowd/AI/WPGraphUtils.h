#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/EWPPathDirection.h"
#include "unitysdk/NPCCrowd/AI/FNodeRuntime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI { class Node; }

#define NPCCROWD_AI_WPGRAPHUTILS_CHECKISFORWARD_OFFSET UNITYSDK_OFFSET(0xD0BD2B0)
#define NPCCROWD_AI_WPGRAPHUTILS_GETARANDOMNODEWAY_OFFSET UNITYSDK_OFFSET(0xD0BD430)
#define NPCCROWD_AI_WPGRAPHUTILS_GETNODEPOSITIONWITHOFFSET_1_OFFSET UNITYSDK_OFFSET(0xD0BDC90)
#define NPCCROWD_AI_WPGRAPHUTILS_GETNODEPOSITIONWITHOFFSET_2_OFFSET UNITYSDK_OFFSET(0xD0BDE50)
#define NPCCROWD_AI_WPGRAPHUTILS_GETNODEPOSITIONWITHOFFSET_3_OFFSET UNITYSDK_OFFSET(0xD0BDAB0)
#define NPCCROWD_AI_WPGRAPHUTILS_GETNODEPOSITIONWITHOFFSET_OFFSET UNITYSDK_OFFSET(0xD0BD8F0)
#define NPCCROWD_AI_WPGRAPHUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0BE000)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPGraphUtils_TypeDefinitionIndex = 38126;

	class WPGraphUtils : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_MAX_FIND_STEP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WPGraphUtils_TypeDefinitionIndex)->GetStaticField(0xAD50);
		}
		// static const ::System::UInt16 INVAILD_NODEID = 0x0; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean CheckIsForward(::NPCCrowd::AI::EWPPathDirection directionType, ::System::SByte lineIdx)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::EWPPathDirection, ::System::SByte))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHUTILS_CHECKISFORWARD_OFFSET))(directionType, lineIdx);
		}

		static ::System::SByte GetARandomNodeWay(::System::Int32 randIdx, ::System::Byte numberOfWays, ::NPCCrowd::AI::EWPPathDirection pathType, ::System::Boolean bIsForward)
		{
			return ((::System::SByte(*)(::System::Int32, ::System::Byte, ::NPCCrowd::AI::EWPPathDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHUTILS_GETARANDOMNODEWAY_OFFSET))(randIdx, numberOfWays, pathType, bIsForward);
		}

		static ::UnityEngine::Vector3 GetNodePositionWithOffset(::NPCCrowd::AI::Node* node, ::UnityEngine::Vector3 dir, ::System::Single lineSpace, ::UnityEngine::Vector3 gravity, ::System::SByte lineIdx)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::AI::Node*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::SByte))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHUTILS_GETNODEPOSITIONWITHOFFSET_OFFSET))(node, dir, lineSpace, gravity, lineIdx);
		}

		static ::UnityEngine::Vector3 GetNodePositionWithOffset_1(::NPCCrowd::AI::FNodeRuntime& node, ::UnityEngine::Vector3 dir, ::System::Single lineSpace, ::UnityEngine::Vector3 gravity, ::System::SByte lineIdx)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::AI::FNodeRuntime&, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::SByte))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHUTILS_GETNODEPOSITIONWITHOFFSET_1_OFFSET))(node, dir, lineSpace, gravity, lineIdx);
		}

		static ::UnityEngine::Vector3 GetNodePositionWithOffset_2(::NPCCrowd::AI::FNodeRuntime& node, ::UnityEngine::Vector3 dir, ::System::Single lineSpace, ::UnityEngine::Vector3 gravity, ::System::SByte lineIdx, ::UnityEngine::Vector3& offsetPos)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::AI::FNodeRuntime&, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::SByte, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHUTILS_GETNODEPOSITIONWITHOFFSET_2_OFFSET))(node, dir, lineSpace, gravity, lineIdx, offsetPos);
		}

		static ::UnityEngine::Vector3 GetNodePositionWithOffset_3(::NPCCrowd::AI::Node* node, ::UnityEngine::Vector3 dir, ::System::Single lineSpace, ::UnityEngine::Vector3 gravity, ::System::SByte lineIdx, ::UnityEngine::Vector3& offsetPos)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::AI::Node*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::SByte, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHUTILS_GETNODEPOSITIONWITHOFFSET_3_OFFSET))(node, dir, lineSpace, gravity, lineIdx, offsetPos);
		}
	};
}
