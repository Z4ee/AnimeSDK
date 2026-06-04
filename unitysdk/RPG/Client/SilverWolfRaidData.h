#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SilverWolfBaseMissionData.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class SilverWolfImgPath; }

#define RPG_CLIENT_SILVERWOLFRAIDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8C6F20)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfRaidData_TypeDefinitionIndex = 63582;

	class SilverWolfRaidData : public ::RPG::Client::SilverWolfBaseMissionData
	{
	public:
		::Il2CppArray<::RPG::Client::TextID>* RaidDesc; // 0x30
		::RPG::Client::SilverWolfImgPath* ImgPath; // 0x38
		::Il2CppArray<::RPG::Client::TextID>* RaidTitle; // 0x40

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFRAIDDATA__CTOR_OFFSET))(this, a1);
		}
	};
}
