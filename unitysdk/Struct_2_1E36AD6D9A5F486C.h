#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/Struct_2_231BC944D2991258.h"
#include "unitysdk/Struct_2_6E1B724B14572104_2.h"
#include "unitysdk/Struct_2_BDACDF5A33E990DF.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LookAtTargetConstraint; }
namespace UnityChan { class SpringManager; }

#define STRUCT_2_1E36AD6D9A5F486C_METHOD_2_17594FCE34D1C493_OFFSET UNITYSDK_OFFSET(0xD0A00)
#define STRUCT_2_1E36AD6D9A5F486C_METHOD_2_3497DC80363F75B5_OFFSET UNITYSDK_OFFSET(0xD0A40)
#define STRUCT_2_1E36AD6D9A5F486C_METHOD_2_9ED920BA288AD875_OFFSET UNITYSDK_OFFSET(0xD0A10)

inline static constexpr unsigned int Struct_2_1E36AD6D9A5F486C_TypeDefinitionIndex = 63153;

struct alignas(8) Struct_2_1E36AD6D9A5F486C
{
	::System::Boolean Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x14
	::UnityEngine::Vector3 Field_2_2; // 0x20
	::Struct_2_231BC944D2991258 Field_2_3; // 0x30
	::Struct_2_6E1B724B14572104_2 Field_2_4; // 0x1E0
	::Struct_2_BDACDF5A33E990DF Field_2_5; // 0x1F0
	::RPG::Client::LookAtTargetConstraint* Field_2_6; // 0x210
	::RootMotion::IKJob::IKTransformRef Field_2_7; // 0x218
	::System::Single Field_2_8; // 0x228
	::System::Single Field_2_9; // 0x22C
	::System::Single Field_2_10; // 0x230
	::System::Single Field_2_11; // 0x234
	::System::Single Field_2_12; // 0x238
	::System::Boolean Field_2_13; // 0x23C
	::UnityChan::SpringManager* Field_2_14; // 0x240
	::System::Single Field_2_15; // 0x248
	::System::Boolean Field_2_16; // 0x24C
	::System::Boolean Field_2_17; // 0x24D

	::System::Boolean Method_2_17594FCE34D1C493(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_1E36AD6D9A5F486C_METHOD_2_17594FCE34D1C493_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_9ED920BA288AD875(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_1E36AD6D9A5F486C_METHOD_2_9ED920BA288AD875_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3497DC80363F75B5(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_1E36AD6D9A5F486C_METHOD_2_3497DC80363F75B5_OFFSET))(this, a1, a2);
	}
};
