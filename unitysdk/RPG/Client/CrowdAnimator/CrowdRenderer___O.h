#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdRenderer___O_TypeDefinitionIndex = 73618;

	class CrowdRenderer___O : public ::System::Object
	{
	public:
		static ::RPG::Client::NotifyHandler** StaticGet__0___OnCameraSwitch()
		{
			return (::RPG::Client::NotifyHandler**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer___O_TypeDefinitionIndex)->GetStaticField(0x5A4A0);
		}
	};
}
