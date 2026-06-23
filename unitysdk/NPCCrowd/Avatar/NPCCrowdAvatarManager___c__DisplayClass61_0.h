#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NapRenderer;
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0x102BDBC0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS61_0__INITCPUMATERIALCOLORS_B__0_OFFSET UNITYSDK_OFFSET(0x102BDBD0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager___c__DisplayClass61_0_TypeDefinitionIndex = 66892;

	class NPCCrowdAvatarManager___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo* partGoInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitCPUMaterialColors_b__0(::NapRenderer* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::NapRenderer*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS61_0__INITCPUMATERIALCOLORS_B__0_OFFSET))(this, x);
		}
	};
}
