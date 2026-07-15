#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/Struct_2_097D65E85B32E0F5.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int BinSpacePartition_1_Cell_1_TypeDefinitionIndex = 33761;

	template <typename T, typename TT>
	class BinSpacePartition_1_Cell_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<TT>* _Members_k__BackingField; // 0x0
		::Struct_2_097D65E85B32E0F5 _BoundingBox; // 0x0
	};
}
