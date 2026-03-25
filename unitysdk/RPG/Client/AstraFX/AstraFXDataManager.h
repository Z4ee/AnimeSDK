#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client::AstraFX { class AstraFXDataManagerBehavior; }
namespace RPG::Client::AstraFX { class AstraFXDataNode; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x90DF4B0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x90DF580)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x90DF8A0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x90DFA90)

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFXDataManager_TypeDefinitionIndex = 60396;

	class AstraFXDataManager : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::AstraFX::AstraFXDataManagerBehavior*>
	{
	public:
		static ::RPG::Client::AstraFX::AstraFXDataManager** StaticGet_Field_7_2()
		{
			return (::RPG::Client::AstraFX::AstraFXDataManager**)Il2CppClass::FromTypeDefinitionIndex(AstraFXDataManager_TypeDefinitionIndex)->GetStaticField(0x35AA0);
		}
		::System::Collections::Generic::HashSet_1<::RPG::Client::AstraFX::AstraFXDataNode*>* Providers; // 0x30
		::System::Collections::Generic::HashSet_1<::RPG::Client::AstraFX::AstraFXDataNode*>* Receivers; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AstraFX::AstraFXDataManager* get_Instance()
		{
			return ((::RPG::Client::AstraFX::AstraFXDataManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void Register(::RPG::Client::AstraFX::AstraFXDataNode* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AstraFX::AstraFXDataNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGER_REGISTER_OFFSET))(a1);
		}

		static ::System::Void Unregister(::RPG::Client::AstraFX::AstraFXDataNode* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AstraFX::AstraFXDataNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGER_UNREGISTER_OFFSET))(a1);
		}
	};
}
