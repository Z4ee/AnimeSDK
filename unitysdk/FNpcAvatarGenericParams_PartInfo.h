#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color32.h"

#define FNPCAVATARGENERICPARAMS_PARTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1946B010)

inline static constexpr unsigned int FNpcAvatarGenericParams_PartInfo_TypeDefinitionIndex = 84438;

class FNpcAvatarGenericParams_PartInfo : public ::System::Object
{
public:
	::Il2CppArray<::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::UnityEngine::Color32>>*>* OverridePropertyColorsArray; // 0x10
	::Il2CppArray<::System::Int32>* logicTags; // 0x18
	::Il2CppArray<::Foundation::AssetPath>* OverrideMaterialPathArray; // 0x20
	::System::Int32 PartId; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPCAVATARGENERICPARAMS_PARTINFO__CTOR_OFFSET))(this);
	}
};
