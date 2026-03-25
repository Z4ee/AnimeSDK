#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelInfoCollectionService; }

#define RPG_CLIENT_CHIMERADUELSTATIC_DISPOSEINFOSERVICE_OFFSET UNITYSDK_OFFSET(0x93B2C80)
#define RPG_CLIENT_CHIMERADUELSTATIC_GET_INFOSERVICE_OFFSET UNITYSDK_OFFSET(0x93B4AC0)
#define RPG_CLIENT_CHIMERADUELSTATIC_INITINFOSERVICE_OFFSET UNITYSDK_OFFSET(0x93B22F0)
#define RPG_CLIENT_CHIMERADUELSTATIC_SET_INFOSERVICE_OFFSET UNITYSDK_OFFSET(0x93B4AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelStatic_TypeDefinitionIndex = 51378;

	class ChimeraDuelStatic : public ::System::Object
	{
	public:
		static ::RPG::Client::ChimeraDuelInfoCollectionService** StaticGet__InfoService_k__BackingField()
		{
			return (::RPG::Client::ChimeraDuelInfoCollectionService**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelStatic_TypeDefinitionIndex)->GetStaticField(0xC360);
		}

		static ::RPG::Client::ChimeraDuelInfoCollectionService* get_InfoService()
		{
			return ((::RPG::Client::ChimeraDuelInfoCollectionService*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSTATIC_GET_INFOSERVICE_OFFSET))();
		}

		static ::System::Void set_InfoService(::RPG::Client::ChimeraDuelInfoCollectionService* value)
		{
			return ((::System::Void(*)(::RPG::Client::ChimeraDuelInfoCollectionService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSTATIC_SET_INFOSERVICE_OFFSET))(value);
		}

		static ::System::Void InitInfoService()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSTATIC_INITINFOSERVICE_OFFSET))();
		}

		static ::System::Void DisposeInfoService()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSTATIC_DISPOSEINFOSERVICE_OFFSET))();
		}
	};
}
