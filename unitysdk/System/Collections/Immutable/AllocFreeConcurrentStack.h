#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int AllocFreeConcurrentStack_TypeDefinitionIndex = 6966;

	class AllocFreeConcurrentStack : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_t_stacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AllocFreeConcurrentStack_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
