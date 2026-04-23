#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelExcelValueGetter; }

#define RPG_GAMECORE_CHIMERADUELBUBBLEEVENTLISTENER_METHOD_2_066906ED8B0F8CBA_OFFSET UNITYSDK_OFFSET(0x187F5680)
#define RPG_GAMECORE_CHIMERADUELBUBBLEEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x187F57B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBubbleEventListener_TypeDefinitionIndex = 15189;

	class ChimeraDuelBubbleEventListener : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelBubbleEventType EventType; // 0x10
		::Il2CppArray<::RPG::GameCore::ChimeraDuelExcelValueGetter*>* ValueGetters; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUBBLEEVENTLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_066906ED8B0F8CBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelBubbleEventListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelBubbleEventListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUBBLEEVENTLISTENER_METHOD_2_066906ED8B0F8CBA_OFFSET))(a1, a2);
		}
	};
}
