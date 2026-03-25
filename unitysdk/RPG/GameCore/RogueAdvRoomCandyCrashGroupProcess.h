#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS_METHOD_3_1B8F0B96E1702BA2_OFFSET UNITYSDK_OFFSET(0x175DB880)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS_METHOD_3_6261F5445D998CF4_OFFSET UNITYSDK_OFFSET(0x175DB760)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x175DB800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdvRoomCandyCrashGroupProcess_TypeDefinitionIndex = 20479;

	class RogueAdvRoomCandyCrashGroupProcess : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* GroupKey; // 0x18
		::RPG::GameCore::DynamicFloat* DestroyDelay; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDestroyStart; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6261F5445D998CF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS_METHOD_3_6261F5445D998CF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B8F0B96E1702BA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS_METHOD_3_1B8F0B96E1702BA2_OFFSET))(a1, a2);
		}
	};
}
