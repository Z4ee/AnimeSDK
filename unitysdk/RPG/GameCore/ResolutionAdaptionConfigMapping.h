#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESOLUTIONADAPTIONCONFIGMAPPING_METHOD_2_08EFB221D70FADBA_OFFSET UNITYSDK_OFFSET(0x18CACF70)
#define RPG_GAMECORE_RESOLUTIONADAPTIONCONFIGMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAD040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResolutionAdaptionConfigMapping_TypeDefinitionIndex = 16234;

	class ResolutionAdaptionConfigMapping : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Configs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOLUTIONADAPTIONCONFIGMAPPING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_08EFB221D70FADBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResolutionAdaptionConfigMapping*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResolutionAdaptionConfigMapping*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOLUTIONADAPTIONCONFIGMAPPING_METHOD_2_08EFB221D70FADBA_OFFSET))(a1, a2);
		}
	};
}
