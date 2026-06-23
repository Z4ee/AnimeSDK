#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HollowNpcSkinConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_HOLLOWNPCCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF5D00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowNpcConfigData_TypeDefinitionIndex = 62498;

	class HollowNpcConfigData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::HollowNpcSkinConfig*>* npcDatas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWNPCCONFIGDATA__CTOR_OFFSET))(this);
		}
	};
}
