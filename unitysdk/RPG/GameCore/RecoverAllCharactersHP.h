#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RECOVERALLCHARACTERSHP_METHOD_3_3BE971E0427AE358_OFFSET UNITYSDK_OFFSET(0x17587D50)
#define RPG_GAMECORE_RECOVERALLCHARACTERSHP_METHOD_3_747546A4146DA704_OFFSET UNITYSDK_OFFSET(0x17587E60)
#define RPG_GAMECORE_RECOVERALLCHARACTERSHP__CTOR_OFFSET UNITYSDK_OFFSET(0x17587E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecoverAllCharactersHP_TypeDefinitionIndex = 19873;

	class RecoverAllCharactersHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOVERALLCHARACTERSHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3BE971E0427AE358(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecoverAllCharactersHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecoverAllCharactersHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOVERALLCHARACTERSHP_METHOD_3_3BE971E0427AE358_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_747546A4146DA704(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecoverAllCharactersHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecoverAllCharactersHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOVERALLCHARACTERSHP_METHOD_3_747546A4146DA704_OFFSET))(a1, a2);
		}
	};
}
