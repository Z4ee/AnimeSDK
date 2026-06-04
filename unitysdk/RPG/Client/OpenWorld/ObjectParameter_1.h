#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"

class Class_1_A3FE9BDAD53961AD;
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Reflection { class FieldInfo; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int ObjectParameter_1_TypeDefinitionIndex = 69104;

	template <typename T>
	class ObjectParameter_1 : public ::RPG::Client::OpenWorld::VolumeParameter_1<T>
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::Class_1_A3FE9BDAD53961AD*>* _parameters_k__BackingField; // 0x0
	};
}
