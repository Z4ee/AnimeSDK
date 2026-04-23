#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Globalization::Unicode { class CodePointIndexer; }

#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_MAPIDX_OFFSET UNITYSDK_OFFSET(0x17793A20)
#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_PROPIDX_OFFSET UNITYSDK_OFFSET(0x17793940)
#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17793440)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int NormalizationTableUtil_TypeDefinitionIndex = 38;

	class NormalizationTableUtil : public ::System::Object
	{
	public:
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Composite()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x41C0);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Helper()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x41C8);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Map()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x41D0);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Prop()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x41D8);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Combining()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x41E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL__CCTOR_OFFSET))();
		}

		static ::System::Int32 PropIdx(::System::Int32 cp)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_PROPIDX_OFFSET))(cp);
		}

		static ::System::Int32 MapIdx(::System::Int32 cp)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_MAPIDX_OFFSET))(cp);
		}
	};
}
