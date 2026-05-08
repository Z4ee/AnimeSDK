#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { template <typename T> class TwoValue_1; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

namespace MoleMole
{
	inline static constexpr unsigned int TwoValue_1_TwoValue_1_UnityGeneratedFormatter_TypeDefinitionIndex = 66265;

	template <typename T>
	class TwoValue_1_TwoValue_1_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::TwoValue_1<T>*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<T>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(TwoValue_1_TwoValue_1_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
