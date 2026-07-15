#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PAUSETOASTQUEUE_METHOD_3_1C2364164008D881_OFFSET UNITYSDK_OFFSET(0x1BB136C0)
#define RPG_GAMECORE_PAUSETOASTQUEUE_METHOD_3_C68E271BF73A9ECA_OFFSET UNITYSDK_OFFSET(0x1BB13700)
#define RPG_GAMECORE_PAUSETOASTQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB136F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseToastQueue_TypeDefinitionIndex = 19524;

	class PauseToastQueue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETOASTQUEUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1C2364164008D881(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseToastQueue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseToastQueue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETOASTQUEUE_METHOD_3_1C2364164008D881_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C68E271BF73A9ECA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseToastQueue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseToastQueue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETOASTQUEUE_METHOD_3_C68E271BF73A9ECA_OFFSET))(a1, a2);
		}
	};
}
