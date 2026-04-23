#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HEARTDIALEMOBLACKLIST_METHOD_3_10DD8A4DD499BB5A_OFFSET UNITYSDK_OFFSET(0x189EC8C0)
#define RPG_GAMECORE_HEARTDIALEMOBLACKLIST_METHOD_3_21ADAD514C2F805D_OFFSET UNITYSDK_OFFSET(0x189EC840)
#define RPG_GAMECORE_HEARTDIALEMOBLACKLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x189EC890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialEmoBlackList_TypeDefinitionIndex = 20197;

	class HeartDialEmoBlackList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsReset; // 0x20
		::Il2CppArray<::RPG::GameCore::HeartDialEmoType>* EmoTypeBlackList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOBLACKLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_21ADAD514C2F805D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeartDialEmoBlackList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeartDialEmoBlackList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOBLACKLIST_METHOD_3_21ADAD514C2F805D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_10DD8A4DD499BB5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeartDialEmoBlackList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeartDialEmoBlackList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOBLACKLIST_METHOD_3_10DD8A4DD499BB5A_OFFSET))(a1, a2);
		}
	};
}
