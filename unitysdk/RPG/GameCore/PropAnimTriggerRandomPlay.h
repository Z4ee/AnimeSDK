#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimWeighted; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPANIMTRIGGERRANDOMPLAY_METHOD_3_996AC7CCE23F15E8_OFFSET UNITYSDK_OFFSET(0x17515850)
#define RPG_GAMECORE_PROPANIMTRIGGERRANDOMPLAY_METHOD_3_EB3462AAE55C026D_OFFSET UNITYSDK_OFFSET(0x17515700)
#define RPG_GAMECORE_PROPANIMTRIGGERRANDOMPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x175157C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropAnimTriggerRandomPlay_TypeDefinitionIndex = 20438;

	class PropAnimTriggerRandomPlay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AnimWeighted*>* AnimList; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPANIMTRIGGERRANDOMPLAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EB3462AAE55C026D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropAnimTriggerRandomPlay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropAnimTriggerRandomPlay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPANIMTRIGGERRANDOMPLAY_METHOD_3_EB3462AAE55C026D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_996AC7CCE23F15E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropAnimTriggerRandomPlay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropAnimTriggerRandomPlay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPANIMTRIGGERRANDOMPLAY_METHOD_3_996AC7CCE23F15E8_OFFSET))(a1, a2);
		}
	};
}
