#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYSIMPLETALKDATA_METHOD_2_FC38769BF3248632_OFFSET UNITYSDK_OFFSET(0x1D5394B0)
#define RPG_GAMECORE_TRAINPARTYSIMPLETALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5395D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartySimpleTalkData_TypeDefinitionIndex = 22112;

	class TrainPartySimpleTalkData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TalkTextID; // 0x10
		::System::UInt32 BgID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSIMPLETALKDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FC38769BF3248632(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartySimpleTalkData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartySimpleTalkData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSIMPLETALKDATA_METHOD_2_FC38769BF3248632_OFFSET))(a1, a2);
		}
	};
}
