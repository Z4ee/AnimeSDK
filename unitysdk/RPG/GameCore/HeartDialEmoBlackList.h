#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HEARTDIALEMOBLACKLIST_METHOD_3_A3C49DDF4524DE54_OFFSET UNITYSDK_OFFSET(0x1981F970)
#define RPG_GAMECORE_HEARTDIALEMOBLACKLIST_METHOD_3_D891CBFD0D9BC5F1_OFFSET UNITYSDK_OFFSET(0x1981F9F0)
#define RPG_GAMECORE_HEARTDIALEMOBLACKLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1981F9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialEmoBlackList_TypeDefinitionIndex = 20054;

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

		static ::System::Void Method_3_A3C49DDF4524DE54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeartDialEmoBlackList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeartDialEmoBlackList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOBLACKLIST_METHOD_3_A3C49DDF4524DE54_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D891CBFD0D9BC5F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeartDialEmoBlackList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeartDialEmoBlackList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOBLACKLIST_METHOD_3_D891CBFD0D9BC5F1_OFFSET))(a1, a2);
		}
	};
}
