#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeGameplay/ContextTrigger.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_3B42BC0680587011;
class Class_3_707412604A129938;
class Class_3_883E597458B91E77;
class Class_3_AA6DF3A878195D3F;
class Class_3_C93CC3D2C2AC4067;
class Class_3_D2084E0C2DD39509;
class Class_3_F33F9DC5F4112336;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_FLUSHSTARTMOVE_OFFSET UNITYSDK_OFFSET(0xA13A40)
#define STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_FLUSHTICKMOVE_OFFSET UNITYSDK_OFFSET(0xA13A50)
#define STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_TRIGGERSTARTMOVE_OFFSET UNITYSDK_OFFSET(0xA139A0)
#define STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E351E30)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int MonsterMovementContextState_TypeDefinitionIndex = 70669;

	struct alignas(4) MonsterMovementContextState
	{
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_PathBuffer()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(MonsterMovementContextState_TypeDefinitionIndex)->GetStaticField(0x50390);
		}
		::StateTreeGameplay::ContextTrigger StartTrigger; // 0x10
		::System::Boolean StopAtTarget; // 0x11
		::UnityEngine::Vector3 TargetPosition; // 0x14
		::System::Boolean IsMoving; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE__CCTOR_OFFSET))();
		}

		::System::Boolean TriggerStartMove(::UnityEngine::Vector3 position, ::System::Boolean stopAtTarget)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_TRIGGERSTARTMOVE_OFFSET))(this, position, stopAtTarget);
		}

		::System::Void FlushStartMove(::Class_3_707412604A129938* baseDataComponent, ::Class_3_AA6DF3A878195D3F* steerComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_707412604A129938*, ::Class_3_AA6DF3A878195D3F*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_FLUSHSTARTMOVE_OFFSET))(this, baseDataComponent, steerComponent);
		}

		::System::Void FlushTickMove(::Class_3_707412604A129938* baseDataComponent, ::Class_3_C93CC3D2C2AC4067* modelComponent, ::Class_3_883E597458B91E77* movementComponent, ::Class_3_AA6DF3A878195D3F* steerComponent, ::Class_3_F33F9DC5F4112336* animatorComponent, ::Class_3_D2084E0C2DD39509* navmeshComponent, ::Class_3_3B42BC0680587011* inputComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_707412604A129938*, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_883E597458B91E77*, ::Class_3_AA6DF3A878195D3F*, ::Class_3_F33F9DC5F4112336*, ::Class_3_D2084E0C2DD39509*, ::Class_3_3B42BC0680587011*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_FLUSHTICKMOVE_OFFSET))(this, baseDataComponent, modelComponent, movementComponent, steerComponent, animatorComponent, navmeshComponent, inputComponent);
		}
	};
}
