#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PropSelectionMaterialConfig; }

#define RPG_CLIENT_PROPSELECTIONSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xAF23360)

namespace RPG::Client
{
	inline static constexpr unsigned int PropSelectionStateConfig_TypeDefinitionIndex = 55560;

	class PropSelectionStateConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::PropSelectionMaterialConfig*>* MaterialConfigs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONSTATECONFIG__CTOR_OFFSET))(this);
		}
	};
}
