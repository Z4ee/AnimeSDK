#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveMovementManager_StateSaver___O_TypeDefinitionIndex = 65500;

	class MonoCurveMovementManager_StateSaver___O : public ::System::Object
	{
	public:
		static ::RPG::Client::NotifyHandler** StaticGet__0___OnSwitchMap()
		{
			return (::RPG::Client::NotifyHandler**)Il2CppClass::FromTypeDefinitionIndex(MonoCurveMovementManager_StateSaver___O_TypeDefinitionIndex)->GetStaticField(0x4F8F0);
		}
	};
}
