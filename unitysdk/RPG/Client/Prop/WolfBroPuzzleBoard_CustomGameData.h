#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WolfBroPuzzleBoard_CustomGameData_TypeDefinitionIndex = 74736;

	struct alignas(8) WolfBroPuzzleBoard_CustomGameData
	{
		::System::Boolean IsBulletActivated; // 0x10
		::System::UInt32 BulletCnt; // 0x14
		::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* MapBullets; // 0x18
		::System::String* SerialNumber; // 0x20
	};
}
