#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_3.h"
#include "unitysdk/RPG/GameCore/DataPoolType.h"
#include "unitysdk/RPG/GameCore/HashTableKeyType.h"
#include "unitysdk/Struct_2_160567AD5325EC4A.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace System { class Object; }
namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPool_1_TypeDefinitionIndex = 10379;

	template <typename T>
	class ConfigDataPool_1 : public ::Class_1_43BD383C98B4C0C5_3
	{
	public:
		::System::Void* _Data; // 0x0
		::System::UInt32 _Size; // 0x0
		::System::UInt32 _DataStartOffset; // 0x0
		::System::String* _PoolId; // 0x0
		::System::DateTime _LastAccessTime; // 0x0
		::System::Int32 _Accessed; // 0x0
		::Collections::Pooled::PooledDictionary_2<::System::UInt32, ::System::String*>* _StringCache; // 0x0
		::Collections::Pooled::PooledDictionary_2<::System::UInt32, ::System::Object*>* _OriginalCache; // 0x0
		::Collections::Pooled::PooledDictionary_2<::System::UInt32, ::System::String*>* _PendingStringCache; // 0x0
		::Collections::Pooled::PooledDictionary_2<::System::UInt32, ::System::Object*>* _PendingOriginalCache; // 0x0
	};
}
