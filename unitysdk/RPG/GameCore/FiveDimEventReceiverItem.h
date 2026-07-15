#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMEVENTRECEIVERITEM_METHOD_2_9099147E09DAF980_OFFSET UNITYSDK_OFFSET(0x1BA94300)
#define RPG_GAMECORE_FIVEDIMEVENTRECEIVERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA94450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEventReceiverItem_TypeDefinitionIndex = 17904;

	class FiveDimEventReceiverItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameEvent*>* Events; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* Actions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVENTRECEIVERITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9099147E09DAF980(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEventReceiverItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEventReceiverItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVENTRECEIVERITEM_METHOD_2_9099147E09DAF980_OFFSET))(a1, a2);
		}
	};
}
