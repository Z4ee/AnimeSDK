#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_RESISTANCEITEM_METHOD_2_78EF0B7C1F4CBEB7_OFFSET UNITYSDK_OFFSET(0x1DB951C0)
#define RPG_GAMECORE_RESISTANCEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB95320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResistanceItem_TypeDefinitionIndex = 22814;

	class ResistanceItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AttackDamageType DamageType; // 0x10
		::RPG::GameCore::DynamicFloat* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESISTANCEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_78EF0B7C1F4CBEB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResistanceItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResistanceItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESISTANCEITEM_METHOD_2_78EF0B7C1F4CBEB7_OFFSET))(a1, a2);
		}
	};
}
