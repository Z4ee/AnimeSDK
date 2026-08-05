#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HollowNpcConfig; }
namespace MoleMole::Config { class ShowNpcMultiBodyParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_HOLLOWNPCSKINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16269DC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowNpcSkinConfig_TypeDefinitionIndex = 67428;

	class HollowNpcSkinConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ShowNpcMultiBodyParam*>* bodyParam; // 0x10
		::System::String* npcStateMachine; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowNpcConfig*>* npcSkins; // 0x20
		::System::Int32 stateMachineID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWNPCSKINCONFIG__CTOR_OFFSET))(this);
		}
	};
}
