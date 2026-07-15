#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRIGGEREFFECTONANCHOR_METHOD_3_054809949042609C_OFFSET UNITYSDK_OFFSET(0x1B055100)
#define RPG_GAMECORE_TRIGGEREFFECTONANCHOR_METHOD_3_E82C17AB612A99DD_OFFSET UNITYSDK_OFFSET(0x1B0550C0)
#define RPG_GAMECORE_TRIGGEREFFECTONANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0550F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffectOnAnchor_TypeDefinitionIndex = 20893;

	class TriggerEffectOnAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20
		::System::String* EffectPath; // 0x28
		::System::String* UniqueEffectName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTONANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E82C17AB612A99DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectOnAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectOnAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTONANCHOR_METHOD_3_E82C17AB612A99DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_054809949042609C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectOnAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectOnAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTONANCHOR_METHOD_3_054809949042609C_OFFSET))(a1, a2);
		}
	};
}
