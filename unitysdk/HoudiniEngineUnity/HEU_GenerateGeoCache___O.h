#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Converter_2; }

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GenerateGeoCache___O_TypeDefinitionIndex = 37673;

	class HEU_GenerateGeoCache___O : public ::System::Object
	{
	public:
		static ::System::Converter_2<::System::Int64, ::System::Single>** StaticGet__3___ToSingle()
		{
			return (::System::Converter_2<::System::Int64, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(HEU_GenerateGeoCache___O_TypeDefinitionIndex)->GetStaticField(0xA860);
		}
		static ::System::Converter_2<::System::Double, ::System::Single>** StaticGet__4___ToSingle()
		{
			return (::System::Converter_2<::System::Double, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(HEU_GenerateGeoCache___O_TypeDefinitionIndex)->GetStaticField(0xA868);
		}
		static ::System::Converter_2<::System::Int16, ::System::Single>** StaticGet__2___ToSingle()
		{
			return (::System::Converter_2<::System::Int16, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(HEU_GenerateGeoCache___O_TypeDefinitionIndex)->GetStaticField(0xA870);
		}
		static ::System::Converter_2<::System::SByte, ::System::Single>** StaticGet__1___ToSingle()
		{
			return (::System::Converter_2<::System::SByte, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(HEU_GenerateGeoCache___O_TypeDefinitionIndex)->GetStaticField(0xA878);
		}
		static ::System::Converter_2<::System::Int32, ::System::Single>** StaticGet__0___ToSingle()
		{
			return (::System::Converter_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(HEU_GenerateGeoCache___O_TypeDefinitionIndex)->GetStaticField(0xA880);
		}
	};
}
