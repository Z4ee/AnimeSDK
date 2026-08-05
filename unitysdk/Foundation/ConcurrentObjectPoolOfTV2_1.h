#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Concurrent { template <typename T> class ConcurrentBag_1; }

namespace Foundation
{
	inline static constexpr unsigned int ConcurrentObjectPoolOfTV2_1_TypeDefinitionIndex = 8353;

	template <typename T>
	class ConcurrentObjectPoolOfTV2_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentBag_1<T>** StaticGet__objects()
		{
			return (::System::Collections::Concurrent::ConcurrentBag_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ConcurrentObjectPoolOfTV2_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
