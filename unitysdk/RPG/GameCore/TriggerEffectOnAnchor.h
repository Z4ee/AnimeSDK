#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRIGGEREFFECTONANCHOR_METHOD_3_054809949042609C_OFFSET UNITYSDK_OFFSET(0x178C63B0)
#define RPG_GAMECORE_TRIGGEREFFECTONANCHOR_METHOD_3_406A079DD4DC0AE1_OFFSET UNITYSDK_OFFSET(0x178C6330)
#define RPG_GAMECORE_TRIGGEREFFECTONANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x178C6380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffectOnAnchor_TypeDefinitionIndex = 19861;

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

		static ::System::Void Method_3_406A079DD4DC0AE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectOnAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectOnAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTONANCHOR_METHOD_3_406A079DD4DC0AE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_054809949042609C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectOnAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectOnAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTONANCHOR_METHOD_3_054809949042609C_OFFSET))(a1, a2);
		}
	};
}
