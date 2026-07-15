#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseConfigHeader_1_NativeRowInfo.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { template <typename T> class BaseConfigHeader_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseConfigHeader_1_ConfigHeaderEnumerator_TypeDefinitionIndex = 10477;

	template <typename TKey>
	struct BaseConfigHeader_1_ConfigHeaderEnumerator
	{
		::RPG::GameCore::BaseConfigHeader_1<TKey>* _header; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, ::RPG::GameCore::BaseConfigHeader_1_NativeRowInfo<TKey>>>* _rawEnumerator; // 0x0
	};
}
