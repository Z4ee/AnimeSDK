#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DebugLogLevel.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DEBUGLOGINPREDICATES_METHOD_4_5A54955D0B4E9870_OFFSET UNITYSDK_OFFSET(0x1714D600)
#define RPG_GAMECORE_DEBUGLOGINPREDICATES_METHOD_4_E0D47C77686CE018_OFFSET UNITYSDK_OFFSET(0x1714D6E0)
#define RPG_GAMECORE_DEBUGLOGINPREDICATES__CTOR_OFFSET UNITYSDK_OFFSET(0x1714D680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebugLogInPredicates_TypeDefinitionIndex = 22076;

	class DebugLogInPredicates : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean PredicateValue; // 0x20
		::RPG::GameCore::DebugLogLevel Level; // 0x24
		::System::String* Message; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOGINPREDICATES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5A54955D0B4E9870(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebugLogInPredicates*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebugLogInPredicates*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOGINPREDICATES_METHOD_4_5A54955D0B4E9870_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E0D47C77686CE018(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebugLogInPredicates* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebugLogInPredicates*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOGINPREDICATES_METHOD_4_E0D47C77686CE018_OFFSET))(a1, a2);
		}
	};
}
