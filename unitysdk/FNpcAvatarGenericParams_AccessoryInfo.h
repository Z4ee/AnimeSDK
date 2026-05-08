#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

inline static constexpr unsigned int FNpcAvatarGenericParams_AccessoryInfo_TypeDefinitionIndex = 55679;

struct alignas(8) FNpcAvatarGenericParams_AccessoryInfo
{
	::System::String* AccessoryKey; // 0x10
	::System::Boolean bMix; // 0x18
	::System::Int32 SlotNameHash; // 0x1C
	::System::Int32 AccessoryId; // 0x20
	::System::Int32 SceneObjectId; // 0x24
	::System::String* SeqFrameKey; // 0x28
	::System::Boolean OverrideDefaultSlotOffset; // 0x30
	::UnityEngine::Vector3 OffsetPosition; // 0x34
	::UnityEngine::Quaternion OffsetRotation; // 0x40
	::System::Boolean OverrideMaterials; // 0x50
	::Il2CppArray<::Foundation::AssetPath>* OverrideMaterialPathList; // 0x58
	::Il2CppArray<::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::UnityEngine::Color32>>*>* OverridePropertyColorsArray; // 0x60
	::Il2CppArray<::System::Int32>* AnimIDList; // 0x68
};
