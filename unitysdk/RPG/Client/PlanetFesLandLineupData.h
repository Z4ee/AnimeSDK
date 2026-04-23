#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/System/Object.h"

class Class_1_3745C69C00F04B7D_1;
namespace RPG::Client { class PlanetFesLineupAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESLANDLINEUPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xACC25D0)
#define RPG_CLIENT_PLANETFESLANDLINEUPDATA_GET_LANDTYPE_OFFSET UNITYSDK_OFFSET(0xACC25B0)
#define RPG_CLIENT_PLANETFESLANDLINEUPDATA_SET_LANDTYPE_OFFSET UNITYSDK_OFFSET(0xACC25C0)
#define RPG_CLIENT_PLANETFESLANDLINEUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xACC27C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesLandLineupData_TypeDefinitionIndex = 61286;

	class PlanetFesLandLineupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesLineupAvatar*>* Avatars; // 0x10
		::RPG::GameCore::PlanetFesLandType _LandType_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDLINEUPDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesLandType get_LandType()
		{
			return ((::RPG::GameCore::PlanetFesLandType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDLINEUPDATA_GET_LANDTYPE_OFFSET))(this);
		}

		::System::Void set_LandType(::RPG::GameCore::PlanetFesLandType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesLandType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDLINEUPDATA_SET_LANDTYPE_OFFSET))(this, value);
		}

		static ::RPG::Client::PlanetFesLandLineupData* Create(::RPG::GameCore::PlanetFesLandType type, ::Il2CppArray<::Class_1_3745C69C00F04B7D_1*>* avatars)
		{
			return ((::RPG::Client::PlanetFesLandLineupData*(*)(::RPG::GameCore::PlanetFesLandType, ::Il2CppArray<::Class_1_3745C69C00F04B7D_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDLINEUPDATA_CREATE_OFFSET))(type, avatars);
		}
	};
}
