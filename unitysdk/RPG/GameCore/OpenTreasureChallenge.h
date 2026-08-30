#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_OPENTREASURECHALLENGE_METHOD_3_435BDA283DDAF542_OFFSET UNITYSDK_OFFSET(0x1CE98950)
#define RPG_GAMECORE_OPENTREASURECHALLENGE_METHOD_3_44D77C5C1CEA9CDF_OFFSET UNITYSDK_OFFSET(0x1CE98990)
#define RPG_GAMECORE_OPENTREASURECHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE98980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenTreasureChallenge_TypeDefinitionIndex = 20233;

	class OpenTreasureChallenge : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RaidID; // 0x18
		::RPG::GameCore::DynamicString* DynamicRaidID; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnter; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTREASURECHALLENGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_435BDA283DDAF542(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenTreasureChallenge*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenTreasureChallenge*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTREASURECHALLENGE_METHOD_3_435BDA283DDAF542_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_44D77C5C1CEA9CDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenTreasureChallenge* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenTreasureChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTREASURECHALLENGE_METHOD_3_44D77C5C1CEA9CDF_OFFSET))(a1, a2);
		}
	};
}
