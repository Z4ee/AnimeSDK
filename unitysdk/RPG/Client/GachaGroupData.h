#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGachaGroupData.h"
#include "unitysdk/RPG/GameCore/GachaType.h"

namespace RPG::Client { class BaseGachaPoolData; }

#define RPG_CLIENT_GACHAGROUPDATA_GET_DEFAULTGACHAPOOLDATA_OFFSET UNITYSDK_OFFSET(0xA410780)
#define RPG_CLIENT_GACHAGROUPDATA_GET_GACHATYPE_OFFSET UNITYSDK_OFFSET(0xA4107E0)
#define RPG_CLIENT_GACHAGROUPDATA_GET_ISMULTIGROUPPOOL_OFFSET UNITYSDK_OFFSET(0xA410720)
#define RPG_CLIENT_GACHAGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA4106A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaGroupData_TypeDefinitionIndex = 59174;

	class GachaGroupData : public ::RPG::Client::BaseGachaGroupData
	{
	public:
		::System::Void _ctor(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAGROUPDATA__CTOR_OFFSET))(this, groupID);
		}

		::System::Boolean get_IsMultiGroupPool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAGROUPDATA_GET_ISMULTIGROUPPOOL_OFFSET))(this);
		}

		::RPG::Client::BaseGachaPoolData* get_DefaultGachaPoolData()
		{
			return ((::RPG::Client::BaseGachaPoolData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAGROUPDATA_GET_DEFAULTGACHAPOOLDATA_OFFSET))(this);
		}

		::RPG::GameCore::GachaType get_GachaType()
		{
			return ((::RPG::GameCore::GachaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAGROUPDATA_GET_GACHATYPE_OFFSET))(this);
		}
	};
}
