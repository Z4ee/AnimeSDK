#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7D0B754E2D8CECAF;
class Class_3_626F93E2306641CC;
namespace RPG::Client { class CakeRaceParticipantData; }
namespace System { class String; }

#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F04D40)
#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETPARTICIPANT_OFFSET UNITYSDK_OFFSET(0x9F04FA0)
#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETTEXTID_OFFSET UNITYSDK_OFFSET(0x9F04EE0)
#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETTEXTPARAMS_OFFSET UNITYSDK_OFFSET(0x9F04F40)
#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETTEXTSTR_OFFSET UNITYSDK_OFFSET(0x9F04DF0)
#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F04DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHUDRichTextMsgData_TypeDefinitionIndex = 58093;

	class CakeRaceHUDRichTextMsgData : public ::System::Object
	{
	public:
		::Class_3_626F93E2306641CC* _Services; // 0x10
		::Class_1_7D0B754E2D8CECAF* _EventParam; // 0x18
		::RPG::Client::TextID _Text; // 0x20

		::System::Void _ctor(::RPG::Client::TextID text, ::Class_1_7D0B754E2D8CECAF* eventParam, ::Class_3_626F93E2306641CC* services)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Class_1_7D0B754E2D8CECAF*, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA__CTOR_OFFSET))(this, text, eventParam, services);
		}

		static ::RPG::Client::CakeRaceHUDRichTextMsgData* Create(::RPG::Client::TextID text, ::Class_1_7D0B754E2D8CECAF* eventParam, ::Class_3_626F93E2306641CC* services)
		{
			return ((::RPG::Client::CakeRaceHUDRichTextMsgData*(*)(::RPG::Client::TextID, ::Class_1_7D0B754E2D8CECAF*, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_CREATE_OFFSET))(text, eventParam, services);
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
