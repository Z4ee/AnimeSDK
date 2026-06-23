#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCCrowdAvatarUtils_CrowdAvatarShaderInfo;
namespace System { class String; }

#define NPCCROWDAVATARUTILS___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD956900)
#define NPCCROWDAVATARUTILS___C__DISPLAYCLASS4_0__GETCROWDSHADER_B__0_OFFSET UNITYSDK_OFFSET(0xD956910)

inline static constexpr unsigned int NPCCrowdAvatarUtils___c__DisplayClass4_0_TypeDefinitionIndex = 67789;

class NPCCrowdAvatarUtils___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::String* originShaderName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWDAVATARUTILS___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetCrowdShader_b__0(::NPCCrowdAvatarUtils_CrowdAvatarShaderInfo* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::NPCCrowdAvatarUtils_CrowdAvatarShaderInfo*))((::PBYTE)hIl2Cpp + NPCCROWDAVATARUTILS___C__DISPLAYCLASS4_0__GETCROWDSHADER_B__0_OFFSET))(this, item);
	}
};
