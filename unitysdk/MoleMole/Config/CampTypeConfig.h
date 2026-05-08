#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/CampType.h"

namespace MoleMole::Config { class CampTypeConfig_CampTypeItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CAMPTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xED0E750)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CampTypeConfig_TypeDefinitionIndex = 65243;

	class CampTypeConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CampType, ::MoleMole::Config::CampTypeConfig_CampTypeItem*>*>* configDic; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMPTYPECONFIG__CTOR_OFFSET))(this);
		}
	};
}
