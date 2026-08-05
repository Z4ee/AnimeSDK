#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF70B0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPipeline___c__DisplayClass7_0_TypeDefinitionIndex = 94677;

	class MB3_TextureCombinerPipeline___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* texPropertyNames; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}
	};
}
