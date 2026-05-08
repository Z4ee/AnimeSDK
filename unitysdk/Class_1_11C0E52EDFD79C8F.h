#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_B8984AF1CBDAAA93.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_11C0E52EDFD79C8F_METHOD_1_3872EA1290A5E19D_OFFSET UNITYSDK_OFFSET(0xF234960)
#define CLASS_1_11C0E52EDFD79C8F_METHOD_1_707C200E5DFA31A2_OFFSET UNITYSDK_OFFSET(0xF234BA0)
#define CLASS_1_11C0E52EDFD79C8F_METHOD_1_C1A878B029AA0ECF_OFFSET UNITYSDK_OFFSET(0xF234F10)
#define CLASS_1_11C0E52EDFD79C8F_METHOD_1_C2B529E7EE9A1FBF_OFFSET UNITYSDK_OFFSET(0xF2340C0)

inline static constexpr unsigned int Class_1_11C0E52EDFD79C8F_TypeDefinitionIndex = 74608;

class Class_1_11C0E52EDFD79C8F : public ::System::Object
{
public:
	static ::PipelineCamera::FinalCameraData Method_1_C2B529E7EE9A1FBF(::PipelineCamera::WorldBasicCameraData a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5)
	{
		return ((::PipelineCamera::FinalCameraData(*)(::PipelineCamera::WorldBasicCameraData, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_11C0E52EDFD79C8F_METHOD_1_C2B529E7EE9A1FBF_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_3872EA1290A5E19D(::UnityEngine::Collider* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::UnityEngine::Collider*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_11C0E52EDFD79C8F_METHOD_1_3872EA1290A5E19D_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_2<::System::Boolean, ::System::String*> Method_1_707C200E5DFA31A2(::System::UInt32 a1, ::Nap::NapECS::EcsWorld* a2, ::System::Func_1<::UnityEngine::Vector3>*& a3, ::System::Single& a4, ::System::Single& a5)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::String*>(*)(::System::UInt32, ::Nap::NapECS::EcsWorld*, ::System::Func_1<::UnityEngine::Vector3>*&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_11C0E52EDFD79C8F_METHOD_1_707C200E5DFA31A2_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Func_2<::Struct_2_B8984AF1CBDAAA93, ::PipelineCamera::FinalCameraData>* Method_1_C1A878B029AA0ECF()
	{
		return ((::System::Func_2<::Struct_2_B8984AF1CBDAAA93, ::PipelineCamera::FinalCameraData>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_11C0E52EDFD79C8F_METHOD_1_C1A878B029AA0ECF_OFFSET))();
	}
};
