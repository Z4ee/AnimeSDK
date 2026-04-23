#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SilverWolfBaseMissionData.h"

namespace RPG::Client { class SilverWolfImgPath; }

#define RPG_CLIENT_SILVERWOLFEXPLOREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB171D90)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfExploreData_TypeDefinitionIndex = 62647;

	class SilverWolfExploreData : public ::RPG::Client::SilverWolfBaseMissionData
	{
	public:
		::RPG::Client::SilverWolfImgPath* ImgPath; // 0x30

		::System::Void _ctor(::System::UInt32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFEXPLOREDATA__CTOR_OFFSET))(this, groupId);
		}
	};
}
