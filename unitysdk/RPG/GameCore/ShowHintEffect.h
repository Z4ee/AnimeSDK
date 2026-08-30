#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWHINTEFFECT_METHOD_3_3E78CC0100E78024_OFFSET UNITYSDK_OFFSET(0x1D52C070)
#define RPG_GAMECORE_SHOWHINTEFFECT_METHOD_3_8687D06F6FCFF5A5_OFFSET UNITYSDK_OFFSET(0x1D52C030)
#define RPG_GAMECORE_SHOWHINTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52C060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowHintEffect_TypeDefinitionIndex = 20326;

	class ShowHintEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 InstanceID; // 0x1C
		::System::Single TriggerHintRadius; // 0x20
		::System::String* HintEffectAttachPoint; // 0x28
		::System::String* HintEffectPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHINTEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8687D06F6FCFF5A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowHintEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowHintEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHINTEFFECT_METHOD_3_8687D06F6FCFF5A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3E78CC0100E78024(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowHintEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowHintEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHINTEFFECT_METHOD_3_3E78CC0100E78024_OFFSET))(a1, a2);
		}
	};
}
