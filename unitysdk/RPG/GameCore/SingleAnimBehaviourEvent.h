#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SINGLEANIMBEHAVIOUREVENT_METHOD_2_AD66AD3B7A3EE045_OFFSET UNITYSDK_OFFSET(0x1BE4CF00)
#define RPG_GAMECORE_SINGLEANIMBEHAVIOUREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE4D020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleAnimBehaviourEvent_TypeDefinitionIndex = 15650;

	class SingleAnimBehaviourEvent : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EventUniqueKey; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* EventList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEANIMBEHAVIOUREVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AD66AD3B7A3EE045(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleAnimBehaviourEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleAnimBehaviourEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEANIMBEHAVIOUREVENT_METHOD_2_AD66AD3B7A3EE045_OFFSET))(a1, a2);
		}
	};
}
