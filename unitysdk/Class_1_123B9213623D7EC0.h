#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7C3EF1FF302C26DE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_123B9213623D7EC0_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BF2F650)
#define CLASS_1_123B9213623D7EC0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF2F7C0)

inline static constexpr unsigned int Class_1_123B9213623D7EC0_TypeDefinitionIndex = 39557;

class Class_1_123B9213623D7EC0 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::ValueTuple_2<::System::String*, ::System::Int32>, ::System::Action*>* Field_1_0; // 0x10
	::RPG::PoolDictionary_2<::System::ValueTuple_2<::System::String*, ::System::UInt32>, ::System::Action*>* Field_1_1; // 0x18
	::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolHashSet_1<::Struct_2_7C3EF1FF302C26DE>*>* Field_1_2; // 0x20
	::System::Action_3<::System::String*, ::System::UInt32, ::System::Int32>* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_123B9213623D7EC0__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_123B9213623D7EC0_CLEAR_OFFSET))(this);
	}
};
