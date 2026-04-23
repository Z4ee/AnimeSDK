#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFXDataNodeDescription.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFXDataNodeType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client::AstraFX { class AstraFXDataNodeBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_GET_ISPROVIDER_OFFSET UNITYSDK_OFFSET(0x9D444C0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_GET_ISRECEIVER_OFFSET UNITYSDK_OFFSET(0x9D444D0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9D444E0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_METHOD_7_6F5BAC0D28CE0D38_OFFSET UNITYSDK_OFFSET(0x9D443C0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_METHOD_7_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x9D441E0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_METHOD_7_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x9D44290)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE__CTOR_OFFSET UNITYSDK_OFFSET(0x9D44630)

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFXDataNode_TypeDefinitionIndex = 67819;

	class AstraFXDataNode : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::AstraFX::AstraFXDataNodeBehavior*>
	{
	public:
		::RPG::Client::AstraFX::AstraFXDataNodeType Type; // 0x30
		::UnityEngine::Component* Binder; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::AstraFX::AstraFXDataNodeDescription>* Description; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_7_70589F89E4D22649()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_METHOD_7_70589F89E4D22649_OFFSET))(this);
		}

		::System::Boolean Method_7_A6CE5DAA2387E1E2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_METHOD_7_A6CE5DAA2387E1E2_OFFSET))(this);
		}

		::System::Boolean Method_7_6F5BAC0D28CE0D38()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_METHOD_7_6F5BAC0D28CE0D38_OFFSET))(this);
		}

		::System::Boolean get_IsProvider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_GET_ISPROVIDER_OFFSET))(this);
		}

		::System::Boolean get_IsReceiver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_GET_ISRECEIVER_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_GET_ISVALID_OFFSET))(this);
		}
	};
}
