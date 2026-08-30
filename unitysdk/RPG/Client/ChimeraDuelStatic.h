#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelInfoCollectionService; }

#define RPG_CLIENT_CHIMERADUELSTATIC_DISPOSEINFOSERVICE_OFFSET UNITYSDK_OFFSET(0x1B5ECBD0)
#define RPG_CLIENT_CHIMERADUELSTATIC_GET_INFOSERVICE_OFFSET UNITYSDK_OFFSET(0x1B5EECE0)
#define RPG_CLIENT_CHIMERADUELSTATIC_INITINFOSERVICE_OFFSET UNITYSDK_OFFSET(0x1B5EC290)
#define RPG_CLIENT_CHIMERADUELSTATIC_SET_INFOSERVICE_OFFSET UNITYSDK_OFFSET(0x1B5EECF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelStatic_TypeDefinitionIndex = 63370;

	class ChimeraDuelStatic : public ::System::Object
	{
	public:
		static ::RPG::Client::ChimeraDuelInfoCollectionService** StaticGet__InfoService_k__BackingField()
		{
			return (::RPG::Client::ChimeraDuelInfoCollectionService**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelStatic_TypeDefinitionIndex)->GetStaticField(0x77B0);
		}

		static ::RPG::Client::ChimeraDuelInfoCollectionService* get_InfoService()
		{
			return ((::RPG::Client::ChimeraDuelInfoCollectionService*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSTATIC_GET_INFOSERVICE_OFFSET))();
		}

		static ::System::Void set_InfoService(::RPG::Client::ChimeraDuelInfoCollectionService* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ChimeraDuelInfoCollectionService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSTATIC_SET_INFOSERVICE_OFFSET))(a1);
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
