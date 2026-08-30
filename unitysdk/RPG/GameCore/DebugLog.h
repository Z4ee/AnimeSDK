#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DebugLogLevel.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DEBUGLOG_METHOD_3_6E0FE4131587F369_OFFSET UNITYSDK_OFFSET(0x1D810B00)
#define RPG_GAMECORE_DEBUGLOG_METHOD_3_9A98A7A177AE8CA6_OFFSET UNITYSDK_OFFSET(0x1D810AC0)
#define RPG_GAMECORE_DEBUGLOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D810AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebugLog_TypeDefinitionIndex = 23489;

	class DebugLog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DebugLogLevel Level; // 0x18
		::System::String* Message; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9A98A7A177AE8CA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebugLog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebugLog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOG_METHOD_3_9A98A7A177AE8CA6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6E0FE4131587F369(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebugLog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebugLog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOG_METHOD_3_6E0FE4131587F369_OFFSET))(a1, a2);
		}
	};
}
