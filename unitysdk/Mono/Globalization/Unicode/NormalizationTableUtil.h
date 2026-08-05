#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Globalization::Unicode { class CodePointIndexer; }

#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_MAPIDX_OFFSET UNITYSDK_OFFSET(0x1D66ACA0)
#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_PROPIDX_OFFSET UNITYSDK_OFFSET(0x1D66ABC0)
#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D66A510)
#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D66AD80)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int NormalizationTableUtil_TypeDefinitionIndex = 41;

	class NormalizationTableUtil : public ::System::Object
	{
	public:
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Helper()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x740);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Combining()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x748);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Map()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x750);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Prop()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x758);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Composite()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL__CTOR_OFFSET))(this);
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
