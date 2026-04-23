#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_PEIPEICHALLENGECHECKPOINT_METHOD_2_884724326AC753ED_OFFSET UNITYSDK_OFFSET(0x18BDA440)
#define RPG_GAMECORE_PEIPEICHALLENGECHECKPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18BDA520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PeiPeiChallengeCheckPoint_TypeDefinitionIndex = 20164;

	class PeiPeiChallengeCheckPoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicString* District; // 0x10
		::RPG::GameCore::DynamicString* Anchor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEIPEICHALLENGECHECKPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_884724326AC753ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PeiPeiChallengeCheckPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PeiPeiChallengeCheckPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEIPEICHALLENGECHECKPOINT_METHOD_2_884724326AC753ED_OFFSET))(a1, a2);
		}
	};
}
