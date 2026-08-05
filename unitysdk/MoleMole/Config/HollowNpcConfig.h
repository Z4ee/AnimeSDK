#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HollowNpcTextureConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_HOLLOWNPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B921B30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowNpcConfig_TypeDefinitionIndex = 56180;

	class HollowNpcConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowNpcTextureConfig*>* npcTextureSheets; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWNPCCONFIG__CTOR_OFFSET))(this);
		}
	};
}
