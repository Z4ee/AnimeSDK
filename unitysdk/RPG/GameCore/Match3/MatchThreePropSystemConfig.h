#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Match3 { class MatchThreePropConfig; }

#define RPG_GAMECORE_MATCH3_MATCHTHREEPROPSYSTEMCONFIG_METHOD_2_75B2B03A8E9AF901_OFFSET UNITYSDK_OFFSET(0x198E8D50)
#define RPG_GAMECORE_MATCH3_MATCHTHREEPROPSYSTEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198EA8E0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int MatchThreePropSystemConfig_TypeDefinitionIndex = 23584;

	class MatchThreePropSystemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::MatchThreePropConfig*>* Props; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREEPROPSYSTEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_75B2B03A8E9AF901(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::MatchThreePropSystemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::MatchThreePropSystemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREEPROPSYSTEMCONFIG_METHOD_2_75B2B03A8E9AF901_OFFSET))(a1, a2);
		}
	};
}
