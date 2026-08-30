#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class StreamingVolumeBlockParam; }
namespace System { class String; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STREAMINGVOLUMEOBB_UPDATEBITSTATE_OFFSET UNITYSDK_OFFSET(0x197F36F0)
#define STREAMINGVOLUMEOBB__CTOR_OFFSET UNITYSDK_OFFSET(0x197F3980)

inline static constexpr unsigned int StreamingVolumeOBB_TypeDefinitionIndex = 47748;

class StreamingVolumeOBB : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector3 Size; // 0x18
	::System::Int32 Priority; // 0x24
	::System::Collections::Generic::List_1<::RPG::GameCore::StreamingVolumeBlockParam*>* EffectBlocks; // 0x28
	::System::Collections::BitArray* ForceHLODBlocks; // 0x30
	::System::Collections::BitArray* ForceHideBlocks; // 0x38
	::UnityEngine::Bounds DCOCDBCPKOF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STREAMINGVOLUMEOBB__CTOR_OFFSET))(this);
	}

	::System::Void UpdateBitState(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + STREAMINGVOLUMEOBB_UPDATEBITSTATE_OFFSET))(this, a1);
	}
};
