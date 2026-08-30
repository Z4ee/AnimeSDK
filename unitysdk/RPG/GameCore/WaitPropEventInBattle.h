#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITPROPEVENTINBATTLE_METHOD_4_1C72DDD187DFDED7_OFFSET UNITYSDK_OFFSET(0x1D6A9C10)
#define RPG_GAMECORE_WAITPROPEVENTINBATTLE_METHOD_4_7C7D71FC0C19755E_OFFSET UNITYSDK_OFFSET(0x1D6A9BC0)
#define RPG_GAMECORE_WAITPROPEVENTINBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A9C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropEventInBattle_TypeDefinitionIndex = 22045;

	class WaitPropEventInBattle : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::JsonEnum* Event; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CallBack; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPEVENTINBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7C7D71FC0C19755E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropEventInBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropEventInBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPEVENTINBATTLE_METHOD_4_7C7D71FC0C19755E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1C72DDD187DFDED7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropEventInBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropEventInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPEVENTINBATTLE_METHOD_4_1C72DDD187DFDED7_OFFSET))(a1, a2);
		}
	};
}
