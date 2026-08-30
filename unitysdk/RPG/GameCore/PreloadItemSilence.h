#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PRELOADITEMSILENCE_METHOD_2_598C07C9A42FA419_OFFSET UNITYSDK_OFFSET(0x1D35AB80)
#define RPG_GAMECORE_PRELOADITEMSILENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D35AD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadItemSilence_TypeDefinitionIndex = 16188;

	class PreloadItemSilence : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Path; // 0x10
		::System::UInt32 Count; // 0x18
		::System::Boolean IsSilenceMode; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEMSILENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_598C07C9A42FA419(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadItemSilence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadItemSilence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEMSILENCE_METHOD_2_598C07C9A42FA419_OFFSET))(a1, a2);
		}
	};
}
