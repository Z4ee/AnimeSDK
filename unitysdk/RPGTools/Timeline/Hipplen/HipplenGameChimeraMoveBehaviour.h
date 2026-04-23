#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class CharacterStoryMoveData; }
namespace RPGTools::Timeline { class CharacterStoryMoveData_PathPoint; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR_METHOD_2_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0xB8E2700)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8E24C0)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xB8E2900)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8E2A00)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8E2A10)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xB8E2A20)

namespace RPGTools::Timeline::Hipplen
{
	inline static constexpr unsigned int HipplenGameChimeraMoveBehaviour_TypeDefinitionIndex = 45360;

	class HipplenGameChimeraMoveBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterStoryMoveData* Config; // 0x10
		::System::Collections::Generic::List_1<::RPGTools::Timeline::CharacterStoryMoveData_PathPoint*>* _SourcePathPoints; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void Method_2_03BFDB1C3240A55A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR_METHOD_2_03BFDB1C3240A55A_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
		}
	};
}
