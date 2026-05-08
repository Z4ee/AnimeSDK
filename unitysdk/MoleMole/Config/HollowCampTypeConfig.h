#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/HollowEntityConfig_CampType.h"

namespace MoleMole::Config { class HollowCampTypeConfig_CampTypeItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_HOLLOWCAMPTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17D2D8D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCampTypeConfig_TypeDefinitionIndex = 64368;

	class HollowCampTypeConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::HollowEntityConfig_CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowEntityConfig_CampType, ::MoleMole::Config::HollowCampTypeConfig_CampTypeItem*>*>* configDic; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMPTYPECONFIG__CTOR_OFFSET))(this);
		}
	};
}
