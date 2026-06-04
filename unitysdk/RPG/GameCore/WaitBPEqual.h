#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITBPEQUAL_METHOD_3_CB4E5B3C0B86BF35_OFFSET UNITYSDK_OFFSET(0x19E51A90)
#define RPG_GAMECORE_WAITBPEQUAL_METHOD_3_D6011CA141F08D94_OFFSET UNITYSDK_OFFSET(0x19E51A10)
#define RPG_GAMECORE_WAITBPEQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E51A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitBPEqual_TypeDefinitionIndex = 23031;

	class WaitBPEqual : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBPEQUAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D6011CA141F08D94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitBPEqual*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitBPEqual*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBPEQUAL_METHOD_3_D6011CA141F08D94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB4E5B3C0B86BF35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitBPEqual* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitBPEqual*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBPEQUAL_METHOD_3_CB4E5B3C0B86BF35_OFFSET))(a1, a2);
		}
	};
}
