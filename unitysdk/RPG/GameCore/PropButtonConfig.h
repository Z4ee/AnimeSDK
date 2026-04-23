#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ButtonShowPriority.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_PROPBUTTONCONFIG_METHOD_2_830FA125FCF6A841_OFFSET UNITYSDK_OFFSET(0x18C65840)
#define RPG_GAMECORE_PROPBUTTONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18C65A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropButtonConfig_TypeDefinitionIndex = 16659;

	class PropButtonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ID; // 0x10
		::RPG::GameCore::DynamicString* ButtonIcon; // 0x18
		::RPG::GameCore::JsonEnum* IconType; // 0x20
		::RPG::GameCore::DynamicString* ButtonText; // 0x28
		::RPG::GameCore::ButtonShowPriority ShowPriority; // 0x30
		::RPG::GameCore::LittleGameEvent* InteractEvent; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPBUTTONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_830FA125FCF6A841(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropButtonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropButtonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPBUTTONCONFIG_METHOD_2_830FA125FCF6A841_OFFSET))(a1, a2);
		}
	};
}
