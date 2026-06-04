#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesEventDataBase.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"

namespace System { class Random; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESBONUSEVENTDATA_GETMASCOTICONPATH_OFFSET UNITYSDK_OFFSET(0xC4047C0)
#define RPG_CLIENT_PLANETFESBONUSEVENTDATA_GETMASCOTPREFABPATH_OFFSET UNITYSDK_OFFSET(0xC404840)
#define RPG_CLIENT_PLANETFESBONUSEVENTDATA_GETPOSINDEX_OFFSET UNITYSDK_OFFSET(0xC4048C0)
#define RPG_CLIENT_PLANETFESBONUSEVENTDATA_SETPOSCOUNT_OFFSET UNITYSDK_OFFSET(0xC404900)
#define RPG_CLIENT_PLANETFESBONUSEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC404740)
#define RPG_CLIENT_PLANETFESBONUSEVENTDATA__RANDOMNEXTPOSINDEX_OFFSET UNITYSDK_OFFSET(0xC4049C0)
#define RPG_CLIENT_PLANETFESBONUSEVENTDATA__RESETPOSINDEX_OFFSET UNITYSDK_OFFSET(0xC404A40)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesBonusEventData_TypeDefinitionIndex = 62232;

	class PlanetFesBonusEventData : public ::RPG::Client::PlanetFesEventDataBase
	{
	public:
		::System::Random* _Random; // 0x68
		::System::Int32 _PosCount; // 0x70
		::System::Int32 _PosIndex; // 0x74
		::System::UInt32 _MascotID; // 0x78

		::System::Void _ctor(::RPG::GameCore::PlanetFesEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBONUSEVENTDATA__CTOR_OFFSET))(this, a1);
		}

		::System::String* GetMascotIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBONUSEVENTDATA_GETMASCOTICONPATH_OFFSET))(this);
		}

		::System::String* GetMascotPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBONUSEVENTDATA_GETMASCOTPREFABPATH_OFFSET))(this);
		}

		::System::Int32 GetPosIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBONUSEVENTDATA_GETPOSINDEX_OFFSET))(this);
		}

		::System::Void SetPosCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBONUSEVENTDATA_SETPOSCOUNT_OFFSET))(this, a1);
		}

		::System::Void _ResetPosIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBONUSEVENTDATA__RESETPOSINDEX_OFFSET))(this);
		}

		::System::Void _RandomNextPosIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBONUSEVENTDATA__RANDOMNEXTPOSINDEX_OFFSET))(this);
		}
	};
}
