#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_FNPCAvatarCapsuleCollider.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCAVATARUTILS___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x113887C0)
#define NPCAVATARUTILS___C__DISPLAYCLASS31_0__ENABLEAVATARCOLLIDER_B__0_OFFSET UNITYSDK_OFFSET(0x113887D0)

inline static constexpr unsigned int NPCAvatarUtils___c__DisplayClass31_0_TypeDefinitionIndex = 59892;

class NPCAvatarUtils___c__DisplayClass31_0 : public ::System::Object
{
public:
	::System::String* colliderKey; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _EnableAvatarCollider_b__0(::NPCAvatarMeshAssetsSO_FNPCAvatarCapsuleCollider c)
	{
		return ((::System::Boolean(*)(::PVOID, ::NPCAvatarMeshAssetsSO_FNPCAvatarCapsuleCollider))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS31_0__ENABLEAVATARCOLLIDER_B__0_OFFSET))(this, c);
	}
};
