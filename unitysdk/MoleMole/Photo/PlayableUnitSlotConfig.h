#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/MoleMole/Photo/PlayableUnitConfig_1.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class Class_1_AB394946F84AC2D3;
namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class AnimationSelectBySlotStateConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_PLAYABLEUNITSLOTCONFIG_CREATEPLAYABLEUNIT_OFFSET UNITYSDK_OFFSET(0x164256A0)
#define MOLEMOLE_PHOTO_PLAYABLEUNITSLOTCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x16425E00)
#define MOLEMOLE_PHOTO_PLAYABLEUNITSLOTCONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x16425E20)
#define MOLEMOLE_PHOTO_PLAYABLEUNITSLOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16426180)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableUnitSlotConfig_TypeDefinitionIndex = 52908;

	class PlayableUnitSlotConfig : public ::MoleMole::Photo::PlayableUnitConfig_1<::Class_1_AB394946F84AC2D3*>
	{
	public:
		::MoleMole::Photo::AnimationSelectBySlotStateConfig* slotConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUNITSLOTCONFIG__CTOR_OFFSET))(this);
		}

		::Class_1_AB394946F84AC2D3* CreatePlayableUnit(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::Struct_2_ACD0EF80A5330786 context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::Class_1_AB394946F84AC2D3*(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUNITSLOTCONFIG_CREATEPLAYABLEUNIT_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUNITSLOTCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUNITSLOTCONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}
	};
}
