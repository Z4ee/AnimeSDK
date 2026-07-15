#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Match3 { class Match3TagApplyCondition; }
namespace RPG::GameCore::Match3 { class Match3TagApplyPostAction; }

#define RPG_GAMECORE_MATCH3_MATCH3GRIDTAGAPPLYCONFIG_METHOD_2_7B4117E680CB2DA1_OFFSET UNITYSDK_OFFSET(0x1BD290E0)
#define RPG_GAMECORE_MATCH3_MATCH3GRIDTAGAPPLYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD29290)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3GridTagApplyConfig_TypeDefinitionIndex = 24070;

	class Match3GridTagApplyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::Match3::GridTag SourceTag; // 0x10
		::RPG::GameCore::Match3::Match3TagApplyCondition* ApplyCondition; // 0x18
		::RPG::GameCore::Match3::Match3TagApplyPostAction* ApplyPostAction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3GRIDTAGAPPLYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7B4117E680CB2DA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3GridTagApplyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3GridTagApplyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3GRIDTAGAPPLYCONFIG_METHOD_2_7B4117E680CB2DA1_OFFSET))(a1, a2);
		}
	};
}
