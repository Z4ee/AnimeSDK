#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Globalization::Unicode { class Contraction; }

#define MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1BB4BE70)
#define MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB4BF40)
#define MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB4BF30)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int ContractionComparer_TypeDefinitionIndex = 33;

	class ContractionComparer : public ::System::Object
	{
	public:
		static ::Mono::Globalization::Unicode::ContractionComparer** StaticGet_Instance()
		{
			return (::Mono::Globalization::Unicode::ContractionComparer**)Il2CppClass::FromTypeDefinitionIndex(ContractionComparer_TypeDefinitionIndex)->GetStaticField(0x2B30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::Mono::Globalization::Unicode::Contraction* a1, ::Mono::Globalization::Unicode::Contraction* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Mono::Globalization::Unicode::Contraction*, ::Mono::Globalization::Unicode::Contraction*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
