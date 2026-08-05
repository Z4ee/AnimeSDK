#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;

#define NPCAVATARMESHASSETSSO___C__DISPLAYCLASS45_0__ADDMESHASSETS_B__0_OFFSET UNITYSDK_OFFSET(0x10B38690)
#define NPCAVATARMESHASSETSSO___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10B38680)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO___c__DisplayClass45_0_TypeDefinitionIndex = 55897;

class NPCAvatarMeshAssetsSO___c__DisplayClass45_0 : public ::System::Object
{
public:
	::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* meshAsset; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AddMeshAssets_b__0(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* m)
	{
		return ((::System::Boolean(*)(::PVOID, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO___C__DISPLAYCLASS45_0__ADDMESHASSETS_B__0_OFFSET))(this, m);
	}
};
