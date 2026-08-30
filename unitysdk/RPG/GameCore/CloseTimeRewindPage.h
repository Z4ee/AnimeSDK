#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOSETIMEREWINDPAGE_METHOD_3_52C777B0EB104A7B_OFFSET UNITYSDK_OFFSET(0x1D9A2E70)
#define RPG_GAMECORE_CLOSETIMEREWINDPAGE_METHOD_3_74EFA1F7C062107E_OFFSET UNITYSDK_OFFSET(0x1D9A2F40)
#define RPG_GAMECORE_CLOSETIMEREWINDPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A2F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CloseTimeRewindPage_TypeDefinitionIndex = 20412;

	class CloseTimeRewindPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_52C777B0EB104A7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloseTimeRewindPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloseTimeRewindPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDPAGE_METHOD_3_52C777B0EB104A7B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_74EFA1F7C062107E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloseTimeRewindPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloseTimeRewindPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDPAGE_METHOD_3_74EFA1F7C062107E_OFFSET))(a1, a2);
		}
	};
}
