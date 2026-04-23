#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameComponentConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEENTITYPRESET_METHOD_2_E8FF085532984C61_OFFSET UNITYSDK_OFFSET(0x18A6B140)
#define RPG_GAMECORE_LITTLEGAMEENTITYPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x18A6B380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEntityPreset_TypeDefinitionIndex = 17964;

	class LittleGameEntityPreset : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>* Components; // 0x10
		::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>* FixedComponents; // 0x18
		::System::String* Name; // 0x20
		::RPG::GameCore::LittleGameEntityType Type; // 0x28
		::System::Boolean IsSupportBrush; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYPRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E8FF085532984C61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameEntityPreset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameEntityPreset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYPRESET_METHOD_2_E8FF085532984C61_OFFSET))(a1, a2);
		}
	};
}
