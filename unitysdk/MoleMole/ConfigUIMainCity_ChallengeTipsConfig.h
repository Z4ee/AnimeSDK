#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUIMAINCITY_CHALLENGETIPSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x157D8A40)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainCity_ChallengeTipsConfig_TypeDefinitionIndex = 75642;

	class ConfigUIMainCity_ChallengeTipsConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>* ChallengeIcons; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_CHALLENGETIPSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
