#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SingleVCameraFreelook3rdConfigTemplateEnum.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class VCameraFreelook3rdConfig; }

#define RPG_CLIENT_SINGLEVCAMERAFREELOOK3RDCONFIGTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0xC8E0C00)

namespace RPG::Client
{
	inline static constexpr unsigned int SingleVCameraFreelook3rdConfigTemplate_TypeDefinitionIndex = 65210;

	class SingleVCameraFreelook3rdConfigTemplate : public ::System::Object
	{
	public:
		::RPG::GameCore::SingleVCameraFreelook3rdConfigTemplateEnum Enum; // 0x10
		::RPG::GameCore::VCameraFreelook3rdConfig* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEVCAMERAFREELOOK3RDCONFIGTEMPLATE__CTOR_OFFSET))(this);
		}
	};
}
