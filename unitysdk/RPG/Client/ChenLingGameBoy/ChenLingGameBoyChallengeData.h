#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingGameBoyChallengeRow; }
namespace RPG::GameCore { class DynamicValue; }

#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x93569A0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9356B80)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9356AF0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA_GET_PARAM1_OFFSET UNITYSDK_OFFSET(0x9356B20)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA_GET_PARAM2_OFFSET UNITYSDK_OFFSET(0x9356B40)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA_GET_PARAM3_OFFSET UNITYSDK_OFFSET(0x9356B60)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9356B00)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x9356B10)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9356A70)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA__INIT_OFFSET UNITYSDK_OFFSET(0x9356A80)

namespace RPG::Client::ChenLingGameBoy
{
	inline static constexpr unsigned int ChenLingGameBoyChallengeData_TypeDefinitionIndex = 61508;

	class ChenLingGameBoyChallengeData : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingGameBoyChallengeRow* _Row_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA__CTOR_OFFSET))(this, id);
		}

		static ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA_CREATE_OFFSET))(id);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA__INIT_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingGameBoyChallengeRow* get_Row()
		{
			return ((::RPG::GameCore::ChenLingGameBoyChallengeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ChenLingGameBoyChallengeRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingGameBoyChallengeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::GameCore::DynamicValue* get_Param1()
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA_GET_PARAM1_OFFSET))(this);
		}

		::RPG::GameCore::DynamicValue* get_Param2()
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA_GET_PARAM2_OFFSET))(this);
		}

		::RPG::GameCore::DynamicValue* get_Param3()
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA_GET_PARAM3_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEDATA_GET_DESC_OFFSET))(this);
		}
	};
}
