#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEOVERRIDECHARACTEROUTFIT_METHOD_2_805B72EDF531EFEC_OFFSET UNITYSDK_OFFSET(0x1D422D80)
#define RPG_GAMECORE_PERFORMANCEOVERRIDECHARACTEROUTFIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D422ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceOverrideCharacterOutfit_TypeDefinitionIndex = 21609;

	class PerformanceOverrideCharacterOutfit : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::Il2CppArray<::System::UInt32>* OverrideOutfitIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEOVERRIDECHARACTEROUTFIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_805B72EDF531EFEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceOverrideCharacterOutfit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceOverrideCharacterOutfit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEOVERRIDECHARACTEROUTFIT_METHOD_2_805B72EDF531EFEC_OFFSET))(a1, a2);
		}
	};
}
