#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int EnumSerializer_1_TypeDefinitionIndex = 7547;

	template <typename T>
	class EnumSerializer_1 : public ::Sirenix::Serialization::Serializer_1<T>
	{
	public:
		static ::System::Int32* StaticGet_SizeOf_T()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnumSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
