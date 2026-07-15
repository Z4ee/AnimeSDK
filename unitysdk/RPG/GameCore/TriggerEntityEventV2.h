#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRIGGERENTITYEVENTV2_METHOD_3_D21CCE74EA436F66_OFFSET UNITYSDK_OFFSET(0x1B055C10)
#define RPG_GAMECORE_TRIGGERENTITYEVENTV2_METHOD_3_F83DE28664D4F2BD_OFFSET UNITYSDK_OFFSET(0x1B055C50)
#define RPG_GAMECORE_TRIGGERENTITYEVENTV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B055C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEntityEventV2_TypeDefinitionIndex = 19938;

	class TriggerEntityEventV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* EventName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYEVENTV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D21CCE74EA436F66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEntityEventV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEntityEventV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYEVENTV2_METHOD_3_D21CCE74EA436F66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F83DE28664D4F2BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEntityEventV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEntityEventV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYEVENTV2_METHOD_3_F83DE28664D4F2BD_OFFSET))(a1, a2);
		}
	};
}
