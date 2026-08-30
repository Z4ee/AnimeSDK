#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceReplayRecord_MessageType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_217;
namespace Google::Protobuf { class IMessage; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEREPLAYRECORD_GET_MESSAGEDATABASE64_OFFSET UNITYSDK_OFFSET(0xD4ADC40)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEREPLAYRECORD_GET_MESSAGEDATA_OFFSET UNITYSDK_OFFSET(0xD4ADC60)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEREPLAYRECORD_METHOD_1_87E1F65BD177CEC9_OFFSET UNITYSDK_OFFSET(0xD4ADDB0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEREPLAYRECORD_SET_MESSAGEDATABASE64_OFFSET UNITYSDK_OFFSET(0xD4ADC50)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEREPLAYRECORD_SET_MESSAGEDATA_OFFSET UNITYSDK_OFFSET(0xD4ADCC0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEREPLAYRECORD__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD4ADDA0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEREPLAYRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0xD4ADD30)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceReplayRecord_TypeDefinitionIndex = 77621;

	class CakeRaceReplayRecord : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::CakeRace::CakeRaceReplayRecord_MessageType Type; // 0x10
		::System::String* _MessageDataBase64_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::LittleGame::CakeRace::CakeRaceReplayRecord_MessageType a1, ::Google::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceReplayRecord_MessageType, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEREPLAYRECORD__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEREPLAYRECORD__CTOR_1_OFFSET))(this);
		}

		::System::String* get_MessageDataBase64()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEREPLAYRECORD_GET_MESSAGEDATABASE64_OFFSET))(this);
		}

		::System::Void set_MessageDataBase64(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEREPLAYRECORD_SET_MESSAGEDATABASE64_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_MessageData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEREPLAYRECORD_GET_MESSAGEDATA_OFFSET))(this);
		}

		::System::Void set_MessageData(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEREPLAYRECORD_SET_MESSAGEDATA_OFFSET))(this, a1);
		}

		::Class_1_43BD383C98B4C0C5_217* Method_1_87E1F65BD177CEC9()
		{
			return ((::Class_1_43BD383C98B4C0C5_217*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEREPLAYRECORD_METHOD_1_87E1F65BD177CEC9_OFFSET))(this);
		}
	};
}
