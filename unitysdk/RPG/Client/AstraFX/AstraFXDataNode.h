#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFXDataNodeDescription.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFXDataNodeType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client::AstraFX { class AstraFXDataNodeBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_GET_ISPROVIDER_OFFSET UNITYSDK_OFFSET(0xB3345C0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_GET_ISRECEIVER_OFFSET UNITYSDK_OFFSET(0xB3345D0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xB3345E0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_METHOD_7_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0xB334350)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_METHOD_7_68A37D9B80DCB4F0_OFFSET UNITYSDK_OFFSET(0xB334410)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_METHOD_7_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xB334550)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE__CTOR_OFFSET UNITYSDK_OFFSET(0xB3347B0)

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFXDataNode_TypeDefinitionIndex = 68777;

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

		::System::Boolean Method_7_0DF420E95D6252BE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_METHOD_7_0DF420E95D6252BE_OFFSET))(this);
		}

		::System::Boolean Method_7_68A37D9B80DCB4F0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_METHOD_7_68A37D9B80DCB4F0_OFFSET))(this);
		}

		::System::Boolean Method_7_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_METHOD_7_A3FAE12D7B6ACD62_OFFSET))(this);
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
