#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITHIPPLENGAMEEXIT_METHOD_3_0AD3FAF81BC699B8_OFFSET UNITYSDK_OFFSET(0x178FC3F0)
#define RPG_GAMECORE_WAITHIPPLENGAMEEXIT_METHOD_3_C07D9255E29A9BE4_OFFSET UNITYSDK_OFFSET(0x178FC500)
#define RPG_GAMECORE_WAITHIPPLENGAMEEXIT__CTOR_OFFSET UNITYSDK_OFFSET(0x178FC4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitHipplenGameExit_TypeDefinitionIndex = 19612;

	class WaitHipplenGameExit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHIPPLENGAMEEXIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0AD3FAF81BC699B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitHipplenGameExit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitHipplenGameExit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHIPPLENGAMEEXIT_METHOD_3_0AD3FAF81BC699B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C07D9255E29A9BE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitHipplenGameExit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitHipplenGameExit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHIPPLENGAMEEXIT_METHOD_3_C07D9255E29A9BE4_OFFSET))(a1, a2);
		}
	};
}
