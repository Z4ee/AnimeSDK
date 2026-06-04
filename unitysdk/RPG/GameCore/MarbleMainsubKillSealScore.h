#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEMAINSUBKILLSEALSCORE_METHOD_2_98590959E007FD03_OFFSET UNITYSDK_OFFSET(0x198D19F0)
#define RPG_GAMECORE_MARBLEMAINSUBKILLSEALSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x198D1B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMainsubKillSealScore_TypeDefinitionIndex = 17998;

	class MarbleMainsubKillSealScore : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SealID; // 0x10
		::System::Boolean IsMain; // 0x14
		::System::UInt32 Score; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMAINSUBKILLSEALSCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_98590959E007FD03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleMainsubKillSealScore*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleMainsubKillSealScore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMAINSUBKILLSEALSCORE_METHOD_2_98590959E007FD03_OFFSET))(a1, a2);
		}
	};
}
