#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7D0B754E2D8CECAF;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Client { class CakeRaceParticipantData; }
namespace System { class String; }

#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AACFA90)
#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETPARTICIPANT_OFFSET UNITYSDK_OFFSET(0x1AACFCF0)
#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETTEXTID_OFFSET UNITYSDK_OFFSET(0x1AACFC30)
#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETTEXTPARAMS_OFFSET UNITYSDK_OFFSET(0x1AACFC90)
#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETTEXTSTR_OFFSET UNITYSDK_OFFSET(0x1AACFB40)
#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AACFB30)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHUDRichTextMsgData_TypeDefinitionIndex = 60280;

	class CakeRaceHUDRichTextMsgData : public ::System::Object
	{
	public:
		::Class_1_7D0B754E2D8CECAF* _EventParam; // 0x10
		::Class_3_FA020C2C23A72B3F* _Services; // 0x18
		::RPG::Client::TextID _Text; // 0x20

		::System::Void _ctor(::RPG::Client::TextID a1, ::Class_1_7D0B754E2D8CECAF* a2, ::Class_3_FA020C2C23A72B3F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Class_1_7D0B754E2D8CECAF*, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::CakeRaceHUDRichTextMsgData* Create(::RPG::Client::TextID a1, ::Class_1_7D0B754E2D8CECAF* a2, ::Class_3_FA020C2C23A72B3F* a3)
		{
			return ((::RPG::Client::CakeRaceHUDRichTextMsgData*(*)(::RPG::Client::TextID, ::Class_1_7D0B754E2D8CECAF*, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::String* GetTextStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETTEXTSTR_OFFSET))(this);
		}

		::RPG::Client::TextID GetTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETTEXTID_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetTextParams()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETTEXTPARAMS_OFFSET))(this);
		}

		::RPG::Client::CakeRaceParticipantData* GetParticipant()
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETPARTICIPANT_OFFSET))(this);
		}
	};
}
