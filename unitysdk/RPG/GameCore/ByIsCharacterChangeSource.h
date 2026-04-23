#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_METHOD_4_96A21EF68DE02CD9_OFFSET UNITYSDK_OFFSET(0x1874F190)
#define RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_METHOD_4_D8F011662CED1885_OFFSET UNITYSDK_OFFSET(0x1874F270)
#define RPG_GAMECORE_BYISCHARACTERCHANGESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1874F210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCharacterChangeSource_TypeDefinitionIndex = 22590;

	class ByIsCharacterChangeSource : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_96A21EF68DE02CD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCharacterChangeSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCharacterChangeSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_METHOD_4_96A21EF68DE02CD9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D8F011662CED1885(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCharacterChangeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_METHOD_4_D8F011662CED1885_OFFSET))(a1, a2);
		}
	};
}
