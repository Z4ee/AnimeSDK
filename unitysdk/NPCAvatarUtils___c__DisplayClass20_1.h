#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
class NPCAvatarUtils___c__DisplayClass20_0;

#define NPCAVATARUTILS___C__DISPLAYCLASS20_1__CTOR_OFFSET UNITYSDK_OFFSET(0x112703F0)
#define NPCAVATARUTILS___C__DISPLAYCLASS20_1__LOADMESHGPULODASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x11270400)

inline static constexpr unsigned int NPCAvatarUtils___c__DisplayClass20_1_TypeDefinitionIndex = 53559;

class NPCAvatarUtils___c__DisplayClass20_1 : public ::System::Object
{
public:
	::NPCAvatarUtils___c__DisplayClass20_0* CS___8__locals1; // 0x10
	::System::Int32 i; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS20_1__CTOR_OFFSET))(this);
	}

	::System::Boolean _LoadMeshGPULODAsync_b__0(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* data)
	{
		return ((::System::Boolean(*)(::PVOID, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS20_1__LOADMESHGPULODASYNC_B__0_OFFSET))(this, data);
	}
};
