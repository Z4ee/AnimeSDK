#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EmoBlendShapesConfig_BlendShapeParam; }
namespace System { class String; }

#define RPG_CLIENT_EMOBLENDSHAPESCONFIG_BLENDSHAPESCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D85DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int EmoBlendShapesConfig_BlendShapesConfig_TypeDefinitionIndex = 57374;

	class EmoBlendShapesConfig_BlendShapesConfig : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::Il2CppArray<::RPG::Client::EmoBlendShapesConfig_BlendShapeParam*>* paramList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOBLENDSHAPESCONFIG_BLENDSHAPESCONFIG__CTOR_OFFSET))(this);
		}
	};
}
