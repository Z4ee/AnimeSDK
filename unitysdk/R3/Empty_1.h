#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observable_1.h"

namespace R3 { template <typename T> class Empty_1; }
namespace R3 { template <typename T> class Observer_1; }
namespace System { class IDisposable; }

namespace R3
{
	inline static constexpr unsigned int Empty_1_TypeDefinitionIndex = 35910;

	template <typename T>
	class Empty_1 : public ::R3::Observable_1<T>
	{
	public:
		static ::R3::Empty_1<T>** StaticGet_Instance()
		{
			return (::R3::Empty_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Empty_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
