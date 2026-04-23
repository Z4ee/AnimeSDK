#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SilverWolfBaseMissionData.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class SilverWolfImgPath; }

#define RPG_CLIENT_SILVERWOLFRAIDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB1721D0)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfRaidData_TypeDefinitionIndex = 62649;

	class SilverWolfRaidData : public ::RPG::Client::SilverWolfBaseMissionData
	{
	public:
		::RPG::Client::SilverWolfImgPath* ImgPath; // 0x30
		::Il2CppArray<::RPG::Client::TextID>* RaidTitle; // 0x38
		::Il2CppArray<::RPG::Client::TextID>* RaidDesc; // 0x40

		::System::Void _ctor(::System::UInt32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFRAIDDATA__CTOR_OFFSET))(this, groupId);
		}
	};
}
