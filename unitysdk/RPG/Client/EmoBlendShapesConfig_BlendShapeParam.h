#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_EMOBLENDSHAPESCONFIG_BLENDSHAPEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A173A20)

namespace RPG::Client
{
	inline static constexpr unsigned int EmoBlendShapesConfig_BlendShapeParam_TypeDefinitionIndex = 60172;

	class EmoBlendShapesConfig_BlendShapeParam : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Single value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOBLENDSHAPESCONFIG_BLENDSHAPEPARAM__CTOR_OFFSET))(this);
		}
	};
}
