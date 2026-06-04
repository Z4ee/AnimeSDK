#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AutoLayoutPerformType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERAUTOLAYOUTTRANSFERPERFORM_METHOD_3_8DC045631A921799_OFFSET UNITYSDK_OFFSET(0x19E08740)
#define RPG_GAMECORE_TRIGGERAUTOLAYOUTTRANSFERPERFORM_METHOD_3_C66B14ABFC3E31E5_OFFSET UNITYSDK_OFFSET(0x19E086C0)
#define RPG_GAMECORE_TRIGGERAUTOLAYOUTTRANSFERPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x19E08710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAutoLayoutTransferPerform_TypeDefinitionIndex = 21872;

	class TriggerAutoLayoutTransferPerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18
		::RPG::GameCore::AutoLayoutPerformType Type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAUTOLAYOUTTRANSFERPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C66B14ABFC3E31E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAutoLayoutTransferPerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAutoLayoutTransferPerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAUTOLAYOUTTRANSFERPERFORM_METHOD_3_C66B14ABFC3E31E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8DC045631A921799(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAutoLayoutTransferPerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAutoLayoutTransferPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAUTOLAYOUTTRANSFERPERFORM_METHOD_3_8DC045631A921799_OFFSET))(a1, a2);
		}
	};
}
