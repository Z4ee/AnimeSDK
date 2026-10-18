#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DebugLogLevel.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DEBUGLOG_METHOD_3_1773EB33DCC7F329_OFFSET UNITYSDK_OFFSET(0x1D5C87B0)
#define RPG_GAMECORE_DEBUGLOG_METHOD_3_3433857886BAFC04_OFFSET UNITYSDK_OFFSET(0x1D5C8770)
#define RPG_GAMECORE_DEBUGLOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C87A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebugLog_TypeDefinitionIndex = 23763;

	class DebugLog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DebugLogLevel Level; // 0x18
		::System::String* Message; // 0x20
		::System::Boolean DumpStack; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3433857886BAFC04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebugLog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebugLog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOG_METHOD_3_3433857886BAFC04_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1773EB33DCC7F329(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebugLog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebugLog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOG_METHOD_3_1773EB33DCC7F329_OFFSET))(a1, a2);
		}
	};
}
