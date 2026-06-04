#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightBonusResultData.h"

#define RPG_CLIENT_GRIDFIGHTORBRESULTDATA_GET_ORBUID_OFFSET UNITYSDK_OFFSET(0xBBBF380)
#define RPG_CLIENT_GRIDFIGHTORBRESULTDATA_SETORBUID_OFFSET UNITYSDK_OFFSET(0xBBBF330)
#define RPG_CLIENT_GRIDFIGHTORBRESULTDATA_SET_ORBUID_OFFSET UNITYSDK_OFFSET(0xBBBF390)
#define RPG_CLIENT_GRIDFIGHTORBRESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBBBF3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbResultData_TypeDefinitionIndex = 60227;

	class GridFightOrbResultData : public ::RPG::Client::GridFightBonusResultData
	{
	public:
		::System::UInt32 _OrbUID_k__BackingField; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBRESULTDATA__CTOR_OFFSET))(this);
		}

		::System::Void SetOrbUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBRESULTDATA_SETORBUID_OFFSET))(this, a1);
		}

		::System::UInt32 get_OrbUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBRESULTDATA_GET_ORBUID_OFFSET))(this);
		}

		::System::Void set_OrbUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBRESULTDATA_SET_ORBUID_OFFSET))(this, a1);
		}
	};
}
