#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SpecialBPDisplayStyle.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SPECIALBPFEATURE_METHOD_2_93069D4652E90C28_OFFSET UNITYSDK_OFFSET(0x1B0A01D0)
#define RPG_GAMECORE_SPECIALBPFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0A0350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialBpFeature_TypeDefinitionIndex = 22390;

	class SpecialBpFeature : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ModifierName; // 0x10
		::System::String* SpecialBpPriority; // 0x18
		::RPG::GameCore::SpecialBPDisplayStyle DisplayStyle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALBPFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_93069D4652E90C28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpecialBpFeature*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialBpFeature*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALBPFEATURE_METHOD_2_93069D4652E90C28_OFFSET))(a1, a2);
		}
	};
}
