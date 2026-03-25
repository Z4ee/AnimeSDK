#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/System/ValueType.h"

class Class_1_40118813D113D3D1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

inline static constexpr unsigned int Class_1_F729CFDFA293E297___c__DisplayClass3_0_TypeDefinitionIndex = 50897;

struct alignas(8) Class_1_F729CFDFA293E297___c__DisplayClass3_0
{
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* skinIDs; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_40118813D113D3D1*>* multiPathConfig; // 0x18
	::System::UInt32 specificAvatarID; // 0x20
};
