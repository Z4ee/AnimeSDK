#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_METHOD_4_79B4D91A77954336_OFFSET UNITYSDK_OFFSET(0x1CF1B860)
#define RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_METHOD_4_91538213E7754F1B_OFFSET UNITYSDK_OFFSET(0x1CF1B820)
#define RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_METHOD_4_BC15251ED076F4B4_OFFSET UNITYSDK_OFFSET(0x1CF1BA30)
#define RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_METHOD_4_EF18BD0B212B30DB_OFFSET UNITYSDK_OFFSET(0x1CF1BA00)
#define RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF1B850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGridFightCharacterIsPreset_TypeDefinitionIndex = 22271;

	class ByGridFightCharacterIsPreset : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* CharacterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_91538213E7754F1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightCharacterIsPreset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_METHOD_4_91538213E7754F1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_79B4D91A77954336(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightCharacterIsPreset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_METHOD_4_79B4D91A77954336_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EF18BD0B212B30DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCharacterIsPreset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_METHOD_4_EF18BD0B212B30DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BC15251ED076F4B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCharacterIsPreset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_METHOD_4_BC15251ED076F4B4_OFFSET))(a1, a2);
		}
	};
}
