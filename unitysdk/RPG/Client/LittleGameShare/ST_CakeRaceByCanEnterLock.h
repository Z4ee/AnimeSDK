#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_METHOD_5_24E6FA3335062B69_OFFSET UNITYSDK_OFFSET(0x185E9F50)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_METHOD_5_2A5F5222EDA60A4A_OFFSET UNITYSDK_OFFSET(0x185E62A0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x185E6250)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByCanEnterLock_TypeDefinitionIndex = 10169;

	class ST_CakeRaceByCanEnterLock : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_24E6FA3335062B69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_METHOD_5_24E6FA3335062B69_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2A5F5222EDA60A4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_METHOD_5_2A5F5222EDA60A4A_OFFSET))(a1, a2);
		}
	};
}
