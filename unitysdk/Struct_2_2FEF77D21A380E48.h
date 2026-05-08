#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/Struct_2_5AC47B2D919D8407.h"
#include "unitysdk/Struct_2_66C8C229A7C86FCA.h"
#include "unitysdk/Struct_2_B8984AF1CBDAAA93.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define STRUCT_2_2FEF77D21A380E48_METHOD_2_00A8546149321E4F_OFFSET UNITYSDK_OFFSET(0x5DFC70)
#define STRUCT_2_2FEF77D21A380E48_METHOD_2_1428CC265AA1C570_OFFSET UNITYSDK_OFFSET(0x5DFCC0)
#define STRUCT_2_2FEF77D21A380E48_METHOD_2_1B609003A2DB539A_OFFSET UNITYSDK_OFFSET(0xE5184F0)
#define STRUCT_2_2FEF77D21A380E48_METHOD_2_67B7955FD5047F12_OFFSET UNITYSDK_OFFSET(0x5DFCF0)
#define STRUCT_2_2FEF77D21A380E48_METHOD_2_78B5997CF97811BE_OFFSET UNITYSDK_OFFSET(0x5DFEE0)
#define STRUCT_2_2FEF77D21A380E48_METHOD_2_80DA8E86EFCC2FF1_OFFSET UNITYSDK_OFFSET(0x5DFC80)
#define STRUCT_2_2FEF77D21A380E48_METHOD_2_81F969B0AB89816D_OFFSET UNITYSDK_OFFSET(0x5DFC30)
#define STRUCT_2_2FEF77D21A380E48_METHOD_2_895E6BF2EDCD95D0_OFFSET UNITYSDK_OFFSET(0xE518430)
#define STRUCT_2_2FEF77D21A380E48_METHOD_2_D1E9962DB2ABE4AB_OFFSET UNITYSDK_OFFSET(0x485B70)

inline static constexpr unsigned int Struct_2_2FEF77D21A380E48_TypeDefinitionIndex = 82940;

struct alignas(8) Struct_2_2FEF77D21A380E48
{
	::Struct_2_66C8C229A7C86FCA Field_2_0; // 0x10
	::Foundation::Variable_2<::PipelineCamera::FinalCameraData, ::Struct_2_B8984AF1CBDAAA93> Field_2_1; // 0x118
	::Struct_2_5AC47B2D919D8407 Field_2_2; // 0x150

	::System::Void Method_2_81F969B0AB89816D(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_2FEF77D21A380E48_METHOD_2_81F969B0AB89816D_OFFSET))(this, a1, a2);
	}

	/*
	::System::Void Method_2_D1E9962DB2ABE4AB(::UnityEngine::LayerMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + STRUCT_2_2FEF77D21A380E48_METHOD_2_D1E9962DB2ABE4AB_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_00A8546149321E4F(::PipelineCamera::WorldBasicCameraData& a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + STRUCT_2_2FEF77D21A380E48_METHOD_2_00A8546149321E4F_OFFSET))(this, a1);
	}
	*/

	::System::Void Method_2_80DA8E86EFCC2FF1(::System::Func_2<::Struct_2_B8984AF1CBDAAA93, ::PipelineCamera::FinalCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::Struct_2_B8984AF1CBDAAA93, ::PipelineCamera::FinalCameraData>*))((::PBYTE)hIl2Cpp + STRUCT_2_2FEF77D21A380E48_METHOD_2_80DA8E86EFCC2FF1_OFFSET))(this, a1);
	}

	/*
	::System::Void Method_2_1428CC265AA1C570(::System::Func_1<::UnityEngine::Vector3>* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_2FEF77D21A380E48_METHOD_2_1428CC265AA1C570_OFFSET))(this, a1, a2, a3);
	}
	*/

	static ::Struct_2_2FEF77D21A380E48 Method_2_895E6BF2EDCD95D0()
	{
		return ((::Struct_2_2FEF77D21A380E48(*)())((::PBYTE)hIl2Cpp + STRUCT_2_2FEF77D21A380E48_METHOD_2_895E6BF2EDCD95D0_OFFSET))();
	}

	/*
	::System::Void Method_2_67B7955FD5047F12(::System::Func_2<::Struct_2_4E049E2562254C08, ::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::Struct_2_4E049E2562254C08, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + STRUCT_2_2FEF77D21A380E48_METHOD_2_67B7955FD5047F12_OFFSET))(this, a1);
	}
	*/

	static ::System::Single Method_2_1B609003A2DB539A()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + STRUCT_2_2FEF77D21A380E48_METHOD_2_1B609003A2DB539A_OFFSET))();
	}

	/*
	::PipelineCamera::WorldBasicCameraData Method_2_78B5997CF97811BE(::System::Single a1, ::PipelineCamera::WorldBasicCameraData a2)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + STRUCT_2_2FEF77D21A380E48_METHOD_2_78B5997CF97811BE_OFFSET))(this, a1, a2);
	}
	*/
};
