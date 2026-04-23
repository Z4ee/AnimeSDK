#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_METHOD_3_3F70C7915DED8AC9_OFFSET UNITYSDK_OFFSET(0x18823800)
#define RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_METHOD_3_B948EBBC064037BD_OFFSET UNITYSDK_OFFSET(0x18823910)
#define RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x188238E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CloseTimeRewindRecreateWorldPage_TypeDefinitionIndex = 19639;

	class CloseTimeRewindRecreateWorldPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3F70C7915DED8AC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloseTimeRewindRecreateWorldPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloseTimeRewindRecreateWorldPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_METHOD_3_3F70C7915DED8AC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B948EBBC064037BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloseTimeRewindRecreateWorldPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloseTimeRewindRecreateWorldPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_METHOD_3_B948EBBC064037BD_OFFSET))(a1, a2);
		}
	};
}
