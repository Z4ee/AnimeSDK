#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_METHOD_5_12DB56A7DF2CD2CF_OFFSET UNITYSDK_OFFSET(0x1D30EE50)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_METHOD_5_2A5F5222EDA60A4A_OFFSET UNITYSDK_OFFSET(0x1D30A620)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_METHOD_5_562D7EA2DB9CA2D8_OFFSET UNITYSDK_OFFSET(0x1D30EE00)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_METHOD_5_75393B8208F3D8C3_OFFSET UNITYSDK_OFFSET(0x1D30BF10)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30A610)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByCanEnterLock_TypeDefinitionIndex = 10324;

	class ST_CakeRaceByCanEnterLock : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_562D7EA2DB9CA2D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_METHOD_5_562D7EA2DB9CA2D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2A5F5222EDA60A4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_METHOD_5_2A5F5222EDA60A4A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_75393B8208F3D8C3(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_METHOD_5_75393B8208F3D8C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_12DB56A7DF2CD2CF(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_METHOD_5_12DB56A7DF2CD2CF_OFFSET))(a1, a2);
		}
	};
}
