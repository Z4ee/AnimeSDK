#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline___c__DisplayClass7_0; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE___C__DISPLAYCLASS7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF70C0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE___C__DISPLAYCLASS7_1___COLLECTPROPERTYNAMES_B__0_OFFSET UNITYSDK_OFFSET(0x1FBF70D0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPipeline___c__DisplayClass7_1_TypeDefinitionIndex = 94678;

	class MB3_TextureCombinerPipeline___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0* CS___8__locals1; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE___C__DISPLAYCLASS7_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectPropertyNames_b__0(::DigitalOpus::MB::Core::ShaderTextureProperty* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE___C__DISPLAYCLASS7_1___COLLECTPROPERTYNAMES_B__0_OFFSET))(this, x);
		}
	};
}
