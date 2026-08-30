#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS_METHOD_3_1933644EF606C5C8_OFFSET UNITYSDK_OFFSET(0x1EE8A970)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS_METHOD_3_E24CB9A3DA3794E7_OFFSET UNITYSDK_OFFSET(0x1EE8A890)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE8A910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdvRoomCandyCrashGroupProcess_TypeDefinitionIndex = 22036;

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

		static ::System::Void Method_3_E24CB9A3DA3794E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS_METHOD_3_E24CB9A3DA3794E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1933644EF606C5C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS_METHOD_3_1933644EF606C5C8_OFFSET))(a1, a2);
		}
	};
}
