#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityChan { class SpringManager; }

inline static constexpr unsigned int Struct_2_F15D3B4A9D0D9701_TypeDefinitionIndex = 68433;

struct alignas(8) Struct_2_F15D3B4A9D0D9701
{
	::System::Boolean EFAIIMPOEJH; // 0x10
	::System::Int32 GFBAKMBHAGO; // 0x14
	::UnityChan::SpringManager* LKGHPDODGDI; // 0x18
	::RootMotion::IKJob::IKTransformRef NDEADLMCHDE; // 0x20
	::Il2CppArray<::RootMotion::IKJob::IKTransformRef>* BKELDFGBPIE; // 0x30
	::Il2CppArray<::RootMotion::IKJob::IKTransformRef>* JMHAJGLPBGH; // 0x38
	::Il2CppArray<::UnityEngine::Vector3>* FLPMDDEKPCO; // 0x40
};
