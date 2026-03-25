#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DataPoolType.h"
#include "unitysdk/RPG/GameCore/HashTableKeyType.h"
#include "unitysdk/Struct_2_160567AD5325EC4A.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPool_1_TypeDefinitionIndex = 22506;

	template <typename T>
	class ConfigDataPool_1 : public ::System::Object
	{
	public:
		::System::Void* _Data; // 0x0
		::System::UInt32 _Size; // 0x0
		::System::UInt32 _DataStartOffset; // 0x0
		::System::String* _PoolId; // 0x0
		::System::DateTime _LastAccessTime; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _StringCache; // 0x0
	};
}
