#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Globalization::Unicode { class Level2Map; }
namespace System { template <typename T> class Comparison_1; }

#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE___C__BUILDTAILORINGTABLES_B__17_0_OFFSET UNITYSDK_OFFSET(0x1E435140)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4350F0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E435130)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int MSCompatUnicodeTable___c_TypeDefinitionIndex = 39;

	class MSCompatUnicodeTable___c : public ::System::Object
	{
	public:
		static ::Mono::Globalization::Unicode::MSCompatUnicodeTable___c** StaticGet___9()
		{
			return (::Mono::Globalization::Unicode::MSCompatUnicodeTable___c**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable___c_TypeDefinitionIndex)->GetStaticField(0xF80);
		}
		static ::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable___c_TypeDefinitionIndex)->GetStaticField(0xF88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildTailoringTables_b__17_0(::Mono::Globalization::Unicode::Level2Map* a, ::Mono::Globalization::Unicode::Level2Map* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Mono::Globalization::Unicode::Level2Map*, ::Mono::Globalization::Unicode::Level2Map*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE___C__BUILDTAILORINGTABLES_B__17_0_OFFSET))(this, a, b);
		}
	};
}
