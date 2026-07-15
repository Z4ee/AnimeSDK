#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EmoBlendShapeParamBase.h"

#define RPG_CLIENT_EMOBLENDSHAPESCONFIG_BLENDSHAPEMOUTHPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18D85D60)

namespace RPG::Client
{
	inline static constexpr unsigned int EmoBlendShapesConfig_BlendShapeMouthParam_TypeDefinitionIndex = 57373;

	class EmoBlendShapesConfig_BlendShapeMouthParam : public ::RPG::Client::EmoBlendShapeParamBase
	{
	public:
		::System::Single value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOBLENDSHAPESCONFIG_BLENDSHAPEMOUTHPARAM__CTOR_OFFSET))(this);
		}
	};
}
