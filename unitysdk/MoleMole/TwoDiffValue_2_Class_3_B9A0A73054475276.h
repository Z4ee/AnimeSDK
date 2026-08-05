#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { template <typename T1, typename T2> class TwoDiffValue_2; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

namespace MoleMole
{
	inline static constexpr unsigned int TwoDiffValue_2_Class_3_B9A0A73054475276_TypeDefinitionIndex = 84654;

	template <typename T1, typename T2>
	class TwoDiffValue_2_Class_3_B9A0A73054475276 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::TwoDiffValue_2<T1, T2>*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<T1>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<T1>**)Il2CppClass::FromTypeDefinitionIndex(TwoDiffValue_2_Class_3_B9A0A73054475276_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<T2>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<T2>**)Il2CppClass::FromTypeDefinitionIndex(TwoDiffValue_2_Class_3_B9A0A73054475276_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
