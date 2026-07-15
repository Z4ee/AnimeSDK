#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MunicipalChatActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUNICIPALCHATACTIONTALK_METHOD_3_3FB1B2B8AB5E6787_OFFSET UNITYSDK_OFFSET(0x1B1D3D30)
#define RPG_GAMECORE_MUNICIPALCHATACTIONTALK_METHOD_3_F180BF31A3FF819E_OFFSET UNITYSDK_OFFSET(0x1B1D4010)
#define RPG_GAMECORE_MUNICIPALCHATACTIONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D3D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatActionTalk_TypeDefinitionIndex = 16247;

	class MunicipalChatActionTalk : public ::RPG::GameCore::MunicipalChatActionBase
	{
	public:
		::System::UInt32 TalkSentenceID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F180BF31A3FF819E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatActionTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatActionTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONTALK_METHOD_3_F180BF31A3FF819E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3FB1B2B8AB5E6787(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatActionTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatActionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONTALK_METHOD_3_3FB1B2B8AB5E6787_OFFSET))(a1, a2);
		}
	};
}
