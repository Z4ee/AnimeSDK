#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MunicipalChatCharacterType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATNPCINFO_METHOD_2_8CAB1F244D7EF77C_OFFSET UNITYSDK_OFFSET(0x199B8370)
#define RPG_GAMECORE_MUNICIPALCHATNPCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x199B8480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatNPCInfo_TypeDefinitionIndex = 16071;

	class MunicipalChatNPCInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::RPG::GameCore::MunicipalChatCharacterType CharacterType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATNPCINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8CAB1F244D7EF77C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatNPCInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatNPCInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATNPCINFO_METHOD_2_8CAB1F244D7EF77C_OFFSET))(a1, a2);
		}
	};
}
