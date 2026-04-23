#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERATALKCONTENT_METHOD_2_DDF2E390B9F0C76C_OFFSET UNITYSDK_OFFSET(0x1880A5C0)
#define RPG_GAMECORE_CHIMERATALKCONTENT_METHOD_2_EBCF9465C5DDE5CA_OFFSET UNITYSDK_OFFSET(0x18809330)
#define RPG_GAMECORE_CHIMERATALKCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1880A5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTalkContent_TypeDefinitionIndex = 15014;

	class ChimeraTalkContent : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ChimeraEmojiID; // 0x10
		::System::UInt32 ChimeraTalkContentID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONTENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EBCF9465C5DDE5CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTalkContent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTalkContent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONTENT_METHOD_2_EBCF9465C5DDE5CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_DDF2E390B9F0C76C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTalkContent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTalkContent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONTENT_METHOD_2_DDF2E390B9F0C76C_OFFSET))(a1, a2);
		}
	};
}
