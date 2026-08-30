#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/WaveMonsterTiming.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINMONSTERONWAVE_METHOD_4_113350CF45DAE883_OFFSET UNITYSDK_OFFSET(0x1BBCD270)
#define RPG_GAMECORE_BYCONTAINMONSTERONWAVE_METHOD_4_2892F5F6582C3038_OFFSET UNITYSDK_OFFSET(0x1BBCD490)
#define RPG_GAMECORE_BYCONTAINMONSTERONWAVE_METHOD_4_4040AB59F4C34E3F_OFFSET UNITYSDK_OFFSET(0x1BBCD460)
#define RPG_GAMECORE_BYCONTAINMONSTERONWAVE_METHOD_4_416CE58F8C89EF1A_OFFSET UNITYSDK_OFFSET(0x1BBCD230)
#define RPG_GAMECORE_BYCONTAINMONSTERONWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCD260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainMonsterOnWave_TypeDefinitionIndex = 22319;

	class ByContainMonsterOnWave : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::WaveMonsterTiming CreateTiming; // 0x20
		::System::Boolean AfterWave; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINMONSTERONWAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_416CE58F8C89EF1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainMonsterOnWave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainMonsterOnWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINMONSTERONWAVE_METHOD_4_416CE58F8C89EF1A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_113350CF45DAE883(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainMonsterOnWave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainMonsterOnWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINMONSTERONWAVE_METHOD_4_113350CF45DAE883_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4040AB59F4C34E3F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainMonsterOnWave*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainMonsterOnWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINMONSTERONWAVE_METHOD_4_4040AB59F4C34E3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2892F5F6582C3038(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainMonsterOnWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainMonsterOnWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINMONSTERONWAVE_METHOD_4_2892F5F6582C3038_OFFSET))(a1, a2);
		}
	};
}
