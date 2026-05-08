#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDeltaData.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace System { template <typename T> class Func_1; }

#define STRUCT_2_FC8D9EFDEDD88792_METHOD_2_7A86137D066BDD7E_OFFSET UNITYSDK_OFFSET(0xFC31F90)
#define STRUCT_2_FC8D9EFDEDD88792_METHOD_2_E4254673D05762A3_OFFSET UNITYSDK_OFFSET(0x6B93B0)
#define STRUCT_2_FC8D9EFDEDD88792__CTOR_OFFSET UNITYSDK_OFFSET(0x6B9370)

inline static constexpr unsigned int Struct_2_FC8D9EFDEDD88792_TypeDefinitionIndex = 54437;

struct alignas(8) Struct_2_FC8D9EFDEDD88792
{
	::PipelineCamera::WorldBasicCameraDeltaData Field_2_0; // 0x10
	::PipelineCamera::TimeBasedAlphaGenerator* Field_2_1; // 0x48
	::System::Boolean Field_2_2; // 0x50
	::System::Func_1<::System::Single>* Field_2_3; // 0x58
	::System::Single Field_2_4; // 0x60

	::System::Void _ctor(::PipelineCamera::WorldBasicCameraDeltaData& a1, ::System::Func_1<::System::Single>* a2, ::PipelineCamera::TimeBasedAlphaGenerator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraDeltaData&, ::System::Func_1<::System::Single>*, ::PipelineCamera::TimeBasedAlphaGenerator*))((::PBYTE)hIl2Cpp + STRUCT_2_FC8D9EFDEDD88792__CTOR_OFFSET))(this, a1, a2, a3);
	}

	/*
	static ::System::Nullable_1<::Struct_2_FC8D9EFDEDD88792> Method_2_7A86137D066BDD7E(::System::Single a1, ::Struct_2_455336A079B58DD3& a2, ::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>& a3, ::PipelineCamera::WorldBasicCameraData& a4)
	{
		return ((::System::Nullable_1<::Struct_2_FC8D9EFDEDD88792>(*)(::System::Single, ::Struct_2_455336A079B58DD3&, ::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>&, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + STRUCT_2_FC8D9EFDEDD88792_METHOD_2_7A86137D066BDD7E_OFFSET))(a1, a2, a3, a4);
	}
	*/

	/*
	::System::Nullable_1<::Struct_2_FC8D9EFDEDD88792> Method_2_E4254673D05762A3(::System::Single a1, ::PipelineCamera::WorldBasicCameraData& a2, ::PipelineCamera::WorldBasicCameraData& a3)
	{
		return ((::System::Nullable_1<::Struct_2_FC8D9EFDEDD88792>(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + STRUCT_2_FC8D9EFDEDD88792_METHOD_2_E4254673D05762A3_OFFSET))(this, a1, a2, a3);
	}
	*/
};
