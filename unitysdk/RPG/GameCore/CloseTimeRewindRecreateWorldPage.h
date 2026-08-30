#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_METHOD_3_11DDE2E595BA6100_OFFSET UNITYSDK_OFFSET(0x1CFEC3F0)
#define RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_METHOD_3_B948EBBC064037BD_OFFSET UNITYSDK_OFFSET(0x1CFEC4C0)
#define RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFEC4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CloseTimeRewindRecreateWorldPage_TypeDefinitionIndex = 20427;

	class CloseTimeRewindRecreateWorldPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_11DDE2E595BA6100(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloseTimeRewindRecreateWorldPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloseTimeRewindRecreateWorldPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_METHOD_3_11DDE2E595BA6100_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B948EBBC064037BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloseTimeRewindRecreateWorldPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloseTimeRewindRecreateWorldPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_METHOD_3_B948EBBC064037BD_OFFSET))(a1, a2);
		}
	};
}
