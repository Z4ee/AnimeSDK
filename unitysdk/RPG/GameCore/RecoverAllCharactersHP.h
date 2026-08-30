#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RECOVERALLCHARACTERSHP_METHOD_3_65B0825A9D528481_OFFSET UNITYSDK_OFFSET(0x1DB7D330)
#define RPG_GAMECORE_RECOVERALLCHARACTERSHP_METHOD_3_747546A4146DA704_OFFSET UNITYSDK_OFFSET(0x1DB7D400)
#define RPG_GAMECORE_RECOVERALLCHARACTERSHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7D3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecoverAllCharactersHP_TypeDefinitionIndex = 21460;

	class RecoverAllCharactersHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOVERALLCHARACTERSHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_65B0825A9D528481(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecoverAllCharactersHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecoverAllCharactersHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOVERALLCHARACTERSHP_METHOD_3_65B0825A9D528481_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_747546A4146DA704(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecoverAllCharactersHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecoverAllCharactersHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOVERALLCHARACTERSHP_METHOD_3_747546A4146DA704_OFFSET))(a1, a2);
		}
	};
}
