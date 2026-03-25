#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SYNCWAIT_METHOD_3_0E6A27BDB61D3998_OFFSET UNITYSDK_OFFSET(0x177A3F50)
#define RPG_GAMECORE_SYNCWAIT_METHOD_3_975D5E4811DC7471_OFFSET UNITYSDK_OFFSET(0x177A3ED0)
#define RPG_GAMECORE_SYNCWAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x177A3F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncWait_TypeDefinitionIndex = 18733;

	class SyncWait : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SyncKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCWAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_975D5E4811DC7471(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncWait*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncWait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCWAIT_METHOD_3_975D5E4811DC7471_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E6A27BDB61D3998(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncWait* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCWAIT_METHOD_3_0E6A27BDB61D3998_OFFSET))(a1, a2);
		}
	};
}
