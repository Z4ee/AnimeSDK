#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETLOCALPLAYERDITHERALPHA_METHOD_3_2559A1CB8765FAE0_OFFSET UNITYSDK_OFFSET(0x176D3C60)
#define RPG_GAMECORE_SETLOCALPLAYERDITHERALPHA_METHOD_3_86961E754085BCD6_OFFSET UNITYSDK_OFFSET(0x176D3BE0)
#define RPG_GAMECORE_SETLOCALPLAYERDITHERALPHA__CTOR_OFFSET UNITYSDK_OFFSET(0x176D3C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLocalPlayerDitherAlpha_TypeDefinitionIndex = 18814;

	class SetLocalPlayerDitherAlpha : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single DitherAlpha; // 0x18
		::System::Single Duration; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALPLAYERDITHERALPHA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_86961E754085BCD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLocalPlayerDitherAlpha*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLocalPlayerDitherAlpha*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALPLAYERDITHERALPHA_METHOD_3_86961E754085BCD6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2559A1CB8765FAE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLocalPlayerDitherAlpha* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLocalPlayerDitherAlpha*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALPLAYERDITHERALPHA_METHOD_3_2559A1CB8765FAE0_OFFSET))(a1, a2);
		}
	};
}
