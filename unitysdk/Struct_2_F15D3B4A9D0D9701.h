#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityChan { class SpringManager; }

inline static constexpr unsigned int Struct_2_F15D3B4A9D0D9701_TypeDefinitionIndex = 65419;

struct alignas(8) Struct_2_F15D3B4A9D0D9701
{
	::System::Boolean Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::UnityChan::SpringManager* Field_2_2; // 0x18
	::RootMotion::IKJob::IKTransformRef Field_2_3; // 0x20
	::Il2CppArray<::RootMotion::IKJob::IKTransformRef>* Field_2_4; // 0x30
	::Il2CppArray<::RootMotion::IKJob::IKTransformRef>* Field_2_5; // 0x38
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_6; // 0x40
};
