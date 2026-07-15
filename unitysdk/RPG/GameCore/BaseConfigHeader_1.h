#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseConfigHeader_1_ConfigHeaderEnumerator.h"
#include "unitysdk/RPG/GameCore/BaseConfigHeader_1_NativeRowInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
template <typename T1, typename T2> class Class_1_534AF681CC2BD5FD_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseConfigHeader_1_TypeDefinitionIndex = 10475;

	template <typename TKey>
	class BaseConfigHeader_1 : public ::System::Object
	{
	public:
		::Class_1_534AF681CC2BD5FD_1<TKey, ::RPG::GameCore::BaseConfigHeader_1_NativeRowInfo<TKey>>* _rowInfos; // 0x0
	};
}
