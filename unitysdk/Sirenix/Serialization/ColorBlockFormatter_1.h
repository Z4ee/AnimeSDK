#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Reflection { class PropertyInfo; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ColorBlockFormatter_1_TypeDefinitionIndex = 7580;

	template <typename T>
	class ColorBlockFormatter_1 : public ::Sirenix::Serialization::MinimalBaseFormatter_1<T>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_FloatSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ColorBlockFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_ColorSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ColorBlockFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Reflection::PropertyInfo** StaticGet_normalColor()
		{
			return (::System::Reflection::PropertyInfo**)Il2CppClass::FromTypeDefinitionIndex(ColorBlockFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Reflection::PropertyInfo** StaticGet_highlightedColor()
		{
			return (::System::Reflection::PropertyInfo**)Il2CppClass::FromTypeDefinitionIndex(ColorBlockFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Reflection::PropertyInfo** StaticGet_pressedColor()
		{
			return (::System::Reflection::PropertyInfo**)Il2CppClass::FromTypeDefinitionIndex(ColorBlockFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Reflection::PropertyInfo** StaticGet_disabledColor()
		{
			return (::System::Reflection::PropertyInfo**)Il2CppClass::FromTypeDefinitionIndex(ColorBlockFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Reflection::PropertyInfo** StaticGet_colorMultiplier()
		{
			return (::System::Reflection::PropertyInfo**)Il2CppClass::FromTypeDefinitionIndex(ColorBlockFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Reflection::PropertyInfo** StaticGet_fadeDuration()
		{
			return (::System::Reflection::PropertyInfo**)Il2CppClass::FromTypeDefinitionIndex(ColorBlockFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
