#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Globalization::Unicode { class CodePointIndexer; }

#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_MAPIDX_OFFSET UNITYSDK_OFFSET(0x155D1D90)
#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_PROPIDX_OFFSET UNITYSDK_OFFSET(0x155D1CB0)
#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x155D17B0)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int NormalizationTableUtil_TypeDefinitionIndex = 38;

	class NormalizationTableUtil : public ::System::Object
	{
	public:
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Combining()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x1D70);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Map()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x1D78);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Composite()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x1D80);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Helper()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x1D88);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Prop()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(NormalizationTableUtil_TypeDefinitionIndex)->GetStaticField(0x1D90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL__CCTOR_OFFSET))();
		}

		static ::System::Int32 PropIdx(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_PROPIDX_OFFSET))(a1);
		}

		static ::System::Int32 MapIdx(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_MAPIDX_OFFSET))(a1);
		}
	};
}
