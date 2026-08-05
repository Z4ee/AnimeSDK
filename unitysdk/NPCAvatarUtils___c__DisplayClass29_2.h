#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
class NPCAvatarUtils___c__DisplayClass29_0;

#define NPCAVATARUTILS___C__DISPLAYCLASS29_2__CTOR_OFFSET UNITYSDK_OFFSET(0x11270560)
#define NPCAVATARUTILS___C__DISPLAYCLASS29_2__ISLODRESVALID_B__1_OFFSET UNITYSDK_OFFSET(0x11270570)

inline static constexpr unsigned int NPCAvatarUtils___c__DisplayClass29_2_TypeDefinitionIndex = 53560;

class NPCAvatarUtils___c__DisplayClass29_2 : public ::System::Object
{
public:
	::NPCAvatarUtils___c__DisplayClass29_0* CS___8__locals2; // 0x10
	::System::Int32 i; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS29_2__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsLODResValid_b__1(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* data)
	{
		return ((::System::Boolean(*)(::PVOID, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS29_2__ISLODRESVALID_B__1_OFFSET))(this, data);
	}
};
