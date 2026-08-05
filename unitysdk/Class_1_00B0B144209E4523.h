#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

class Class_2_226F2F5433672A12;
namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class AnimationModifyCurveConfig; }
namespace MoleMole::Photo { class PlayableBlendSpace1DConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

inline static constexpr unsigned int Class_1_00B0B144209E4523_TypeDefinitionIndex = 80703;

template <typename T>
class Class_1_00B0B144209E4523 : public ::System::Object
{
public:
	::MoleMole::Photo::PlayableBlendSpace1DConfig* blendSpace; // 0x0
	::MoleMole::Photo::AnimationModifyCurveConfig* curve; // 0x0
	::System::Single playRate; // 0x0
};
