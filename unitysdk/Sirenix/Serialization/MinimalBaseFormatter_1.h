#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class Type; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int MinimalBaseFormatter_1_TypeDefinitionIndex = 7475;

	template <typename T>
	class MinimalBaseFormatter_1 : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_IsValueType()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MinimalBaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
