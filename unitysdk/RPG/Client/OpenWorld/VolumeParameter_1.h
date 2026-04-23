#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A3FE9BDAD53961AD.h"

namespace RPG::Client::OpenWorld { template <typename T> class VolumeParameter_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int VolumeParameter_1_TypeDefinitionIndex = 68104;

	template <typename T>
	class VolumeParameter_1 : public ::Class_1_A3FE9BDAD53961AD
	{
	public:
		T m_Value; // 0x0
		static ::System::Collections::Generic::IEqualityComparer_1<T>** StaticGet_comparer()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(VolumeParameter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
