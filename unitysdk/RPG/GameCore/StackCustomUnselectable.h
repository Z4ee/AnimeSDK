#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_STACKCUSTOMUNSELECTABLE_METHOD_3_42C6E6F7FD7DF644_OFFSET UNITYSDK_OFFSET(0x17761550)
#define RPG_GAMECORE_STACKCUSTOMUNSELECTABLE_METHOD_3_4D835971E4BBCC53_OFFSET UNITYSDK_OFFSET(0x177614C0)
#define RPG_GAMECORE_STACKCUSTOMUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17761520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackCustomUnselectable_TypeDefinitionIndex = 21966;

	class StackCustomUnselectable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamTypeMask TeamTypes; // 0x18
		::RPG::GameCore::EntityTypeMask EntityTypes; // 0x20
		::RPG::GameCore::PredicateConfig* Condition; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKCUSTOMUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4D835971E4BBCC53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackCustomUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackCustomUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKCUSTOMUNSELECTABLE_METHOD_3_4D835971E4BBCC53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_42C6E6F7FD7DF644(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKCUSTOMUNSELECTABLE_METHOD_3_42C6E6F7FD7DF644_OFFSET))(a1, a2);
		}
	};
}
