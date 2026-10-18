#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetMarble/Level/PetMarbleLevelModeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1357;
namespace RPG::Client::PetMarble::Level { class IPetMarbleLevelMode; }
namespace RPG::Client::PetMarble::Level { class PetMarbleLevelMode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODEREPOSITORY_GETALLMUTABLE_OFFSET UNITYSDK_OFFSET(0xDAC7680)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODEREPOSITORY_GETALL_OFFSET UNITYSDK_OFFSET(0xDAC7540)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODEREPOSITORY_GETMUTABLE_OFFSET UNITYSDK_OFFSET(0xDAC7620)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODEREPOSITORY_GET_OFFSET UNITYSDK_OFFSET(0xDAC74E0)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODEREPOSITORY__CTOR_OFFSET UNITYSDK_OFFSET(0xDAC73A0)

namespace RPG::Client::PetMarble::Level
{
	inline static constexpr unsigned int PetMarbleLevelModeRepository_TypeDefinitionIndex = 74744;

	class PetMarbleLevelModeRepository : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::PetMarble::Level::PetMarbleLevelModeType, ::RPG::Client::PetMarble::Level::PetMarbleLevelMode*>* _Levels; // 0x10

		::System::Void _ctor(::Class_0_16E4307DCC419505_1357* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODEREPOSITORY__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::PetMarble::Level::IPetMarbleLevelMode* Get(::RPG::Client::PetMarble::Level::PetMarbleLevelModeType a1)
		{
			return ((::RPG::Client::PetMarble::Level::IPetMarbleLevelMode*(*)(::PVOID, ::RPG::Client::PetMarble::Level::PetMarbleLevelModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODEREPOSITORY_GET_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::PetMarble::Level::IPetMarbleLevelMode*>* GetAll()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::PetMarble::Level::IPetMarbleLevelMode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODEREPOSITORY_GETALL_OFFSET))(this);
		}

		::RPG::Client::PetMarble::Level::PetMarbleLevelMode* GetMutable(::RPG::Client::PetMarble::Level::PetMarbleLevelModeType a1)
		{
			return ((::RPG::Client::PetMarble::Level::PetMarbleLevelMode*(*)(::PVOID, ::RPG::Client::PetMarble::Level::PetMarbleLevelModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODEREPOSITORY_GETMUTABLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::PetMarble::Level::PetMarbleLevelMode*>* GetAllMutable()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::PetMarble::Level::PetMarbleLevelMode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODEREPOSITORY_GETALLMUTABLE_OFFSET))(this);
		}
	};
}
