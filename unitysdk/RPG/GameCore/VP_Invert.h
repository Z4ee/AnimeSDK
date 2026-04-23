#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VP_INVERT_METHOD_3_80255ECECD0A9FC7_OFFSET UNITYSDK_OFFSET(0x190F07C0)
#define RPG_GAMECORE_VP_INVERT_METHOD_3_E1A8E2A685C74E56_OFFSET UNITYSDK_OFFSET(0x190F0740)
#define RPG_GAMECORE_VP_INVERT__CTOR_OFFSET UNITYSDK_OFFSET(0x190F07B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Invert_TypeDefinitionIndex = 23044;

	class VP_Invert : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_INVERT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E1A8E2A685C74E56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Invert*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Invert*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_INVERT_METHOD_3_E1A8E2A685C74E56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_80255ECECD0A9FC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Invert* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Invert*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_INVERT_METHOD_3_80255ECECD0A9FC7_OFFSET))(a1, a2);
		}
	};
}
