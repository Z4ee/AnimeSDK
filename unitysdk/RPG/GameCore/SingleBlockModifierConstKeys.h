#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SINGLEBLOCKMODIFIERCONSTKEYS_METHOD_2_A8E8E632B17CF268_OFFSET UNITYSDK_OFFSET(0x1DABD820)
#define RPG_GAMECORE_SINGLEBLOCKMODIFIERCONSTKEYS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DABD9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleBlockModifierConstKeys_TypeDefinitionIndex = 17105;

	class SingleBlockModifierConstKeys : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::StringHash KeyHashMaxValue; // 0x10
		::RPG::GameCore::StringHash KeyHashCurrentValue; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEBLOCKMODIFIERCONSTKEYS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A8E8E632B17CF268(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleBlockModifierConstKeys*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleBlockModifierConstKeys*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEBLOCKMODIFIERCONSTKEYS_METHOD_2_A8E8E632B17CF268_OFFSET))(a1, a2);
		}
	};
}
