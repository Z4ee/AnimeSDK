#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingStatusRow; }
namespace System { class String; }

#define RPG_CLIENT_SWORDTRAININGGAMESETTLESTATUSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE132360)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLESTATUSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE133880)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingGameSettleStatusData_TypeDefinitionIndex = 62046;

	class SwordTrainingGameSettleStatusData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* IconOutlinePath; // 0x18
		::RPG::Client::TextID StatusName; // 0x20
		::System::UInt32 StatusMax; // 0x30
		::System::UInt32 StatusID; // 0x34
		::System::UInt32 StatusNum; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLESTATUSDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingGameSettleStatusData* Create(::RPG::GameCore::SwordTrainingStatusRow* a1)
		{
			return ((::RPG::Client::SwordTrainingGameSettleStatusData*(*)(::RPG::GameCore::SwordTrainingStatusRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLESTATUSDATA_CREATE_OFFSET))(a1);
		}
	};
}
