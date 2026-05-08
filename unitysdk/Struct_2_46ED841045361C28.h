#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras { class CameraMiscSetting; }
namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace System { template <typename T> class Func_1; }

#define STRUCT_2_46ED841045361C28_METHOD_2_75098065C229FA1A_OFFSET UNITYSDK_OFFSET(0x5DF640)
#define STRUCT_2_46ED841045361C28_METHOD_2_AE783234D688F12D_OFFSET UNITYSDK_OFFSET(0xE4DECA0)
#define STRUCT_2_46ED841045361C28__CTOR_OFFSET UNITYSDK_OFFSET(0x5DF630)

inline static constexpr unsigned int Struct_2_46ED841045361C28_TypeDefinitionIndex = 61098;

struct alignas(8) Struct_2_46ED841045361C28
{
	::MoleMole::Cameras::CameraMiscSetting* Field_2_0; // 0x10
	::PipelineCamera::TimeBasedAlphaGenerator* Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x20
	::System::Func_1<::System::Single>* Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x30

	::System::Void _ctor(::MoleMole::Cameras::CameraMiscSetting* a1, ::System::Func_1<::System::Single>* a2, ::PipelineCamera::TimeBasedAlphaGenerator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraMiscSetting*, ::System::Func_1<::System::Single>*, ::PipelineCamera::TimeBasedAlphaGenerator*))((::PBYTE)hIl2Cpp + STRUCT_2_46ED841045361C28__CTOR_OFFSET))(this, a1, a2, a3);
	}

	/*
	static ::System::Nullable_1<::Struct_2_46ED841045361C28> Method_2_AE783234D688F12D(::MoleMole::Cameras::CameraMiscSetting* a1, ::Struct_2_455336A079B58DD3& a2)
	{
		return ((::System::Nullable_1<::Struct_2_46ED841045361C28>(*)(::MoleMole::Cameras::CameraMiscSetting*, ::Struct_2_455336A079B58DD3&))((::PBYTE)hIl2Cpp + STRUCT_2_46ED841045361C28_METHOD_2_AE783234D688F12D_OFFSET))(a1, a2);
	}
	*/

	/*
	::System::Nullable_1<::Struct_2_46ED841045361C28> Method_2_75098065C229FA1A(::System::Single a1, ::MoleMole::Cameras::CameraMiscSetting*& a2, ::MoleMole::Cameras::CameraMiscSetting*& a3)
	{
		return ((::System::Nullable_1<::Struct_2_46ED841045361C28>(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraMiscSetting*&, ::MoleMole::Cameras::CameraMiscSetting*&))((::PBYTE)hIl2Cpp + STRUCT_2_46ED841045361C28_METHOD_2_75098065C229FA1A_OFFSET))(this, a1, a2, a3);
	}
	*/
};
