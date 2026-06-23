#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class FirstPersonScale; }
namespace MoleMole::Config { class ThirdPersonScale; }

#define MOLEMOLE_CONFIG_UICONFIGPHOTOCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xE982E60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UIConfigPhotoCamera_TypeDefinitionIndex = 85809;

	class UIConfigPhotoCamera : public ::System::Object
	{
	public:
		::MoleMole::Config::ThirdPersonScale* ThirdPersonScale; // 0x10
		::MoleMole::Config::FirstPersonScale* FirstPersonScale; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UICONFIGPHOTOCAMERA__CTOR_OFFSET))(this);
		}
	};
}
