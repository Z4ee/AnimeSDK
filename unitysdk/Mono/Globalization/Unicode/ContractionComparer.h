#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Globalization::Unicode { class Contraction; }

#define MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1CE612F0)
#define MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE61410)
#define MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE61400)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int ContractionComparer_TypeDefinitionIndex = 36;

	class ContractionComparer : public ::System::Object
	{
	public:
		static ::Mono::Globalization::Unicode::ContractionComparer** StaticGet_Instance()
		{
			return (::Mono::Globalization::Unicode::ContractionComparer**)Il2CppClass::FromTypeDefinitionIndex(ContractionComparer_TypeDefinitionIndex)->GetStaticField(0xE60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::Mono::Globalization::Unicode::Contraction* c1, ::Mono::Globalization::Unicode::Contraction* c2)
		{
			return ((::System::Int32(*)(::PVOID, ::Mono::Globalization::Unicode::Contraction*, ::Mono::Globalization::Unicode::Contraction*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER_COMPARE_OFFSET))(this, c1, c2);
		}
	};
}
