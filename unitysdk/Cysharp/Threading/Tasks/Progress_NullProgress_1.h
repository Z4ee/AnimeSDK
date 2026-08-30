#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class IProgress_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int Progress_NullProgress_1_TypeDefinitionIndex = 42631;

	template <typename T>
	class Progress_NullProgress_1 : public ::System::Object
	{
	public:
		static ::System::IProgress_1<T>** StaticGet_Instance()
		{
			return (::System::IProgress_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Progress_NullProgress_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
