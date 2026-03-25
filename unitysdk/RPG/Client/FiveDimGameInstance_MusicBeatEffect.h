#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_221;
class Class_3_1A92845FAFA5EC77;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_DISABLEVISUALRENDERER_OFFSET UNITYSDK_OFFSET(0x96E4F90)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96E4B60)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_ENABLEVISUALRENDERER_OFFSET UNITYSDK_OFFSET(0x96E4F50)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_ONCHANGEMUSICINDEX_OFFSET UNITYSDK_OFFSET(0x96E5050)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_PAUSEVISUALEFFECT_OFFSET UNITYSDK_OFFSET(0x96E4FD0)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_PLAYVISUALEFFECT_OFFSET UNITYSDK_OFFSET(0x96E5010)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_TICKMUSICCUE_OFFSET UNITYSDK_OFFSET(0x96E4F00)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_TICKPERBAR_OFFSET UNITYSDK_OFFSET(0x96E4E40)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_TICKPERBEAT_OFFSET UNITYSDK_OFFSET(0x96E4C40)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_TICKPERGRID_OFFSET UNITYSDK_OFFSET(0x96E4EA0)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_TICK_OFFSET UNITYSDK_OFFSET(0x96E4BE0)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x96E4B00)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimGameInstance_MusicBeatEffect_TypeDefinitionIndex = 48901;

	class FiveDimGameInstance_MusicBeatEffect : public ::System::Object
	{
	public:
		::Class_3_1A92845FAFA5EC77* _Services; // 0x10
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_221*>* MusicBeatHandles; // 0x18

		::System::Void _ctor(::Class_3_1A92845FAFA5EC77* services)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT__CTOR_OFFSET))(this, services);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single inDeltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_TICK_OFFSET))(this, inDeltaTime);
		}

		::System::Void TickPerBeat(::System::Single beatTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_TICKPERBEAT_OFFSET))(this, beatTime);
		}

		::System::Void TickPerBar(::System::Single barTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_TICKPERBAR_OFFSET))(this, barTime);
		}

		::System::Void TickPerGrid(::System::Single gridTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_TICKPERGRID_OFFSET))(this, gridTime);
		}

		::System::Void TickMusicCue(::System::String* cueName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_TICKMUSICCUE_OFFSET))(this, cueName);
		}

		::System::Void EnableVisualRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_ENABLEVISUALRENDERER_OFFSET))(this);
		}

		::System::Void DisableVisualRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_DISABLEVISUALRENDERER_OFFSET))(this);
		}

		::System::Void PauseVisualEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_PAUSEVISUALEFFECT_OFFSET))(this);
		}

		::System::Void PlayVisualEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_PLAYVISUALEFFECT_OFFSET))(this);
		}

		::System::Void OnChangeMusicIndex(::System::Int32 inID, ::System::Boolean isImmediate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE_MUSICBEATEFFECT_ONCHANGEMUSICINDEX_OFFSET))(this, inID, isImmediate);
		}
	};
}
