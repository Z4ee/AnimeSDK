#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras { class CameraTrackSetting; }
namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define STRUCT_2_89669EF743AD9ACD_METHOD_2_4B2801D2080295DD_OFFSET UNITYSDK_OFFSET(0x12A26170)
#define STRUCT_2_89669EF743AD9ACD_METHOD_2_965ED8AB2FD8CF1F_OFFSET UNITYSDK_OFFSET(0x753830)
#define STRUCT_2_89669EF743AD9ACD_METHOD_2_FE921119461BFEE8_OFFSET UNITYSDK_OFFSET(0x12A25D10)
#define STRUCT_2_89669EF743AD9ACD__CTOR_OFFSET UNITYSDK_OFFSET(0x753770)

inline static constexpr unsigned int Struct_2_89669EF743AD9ACD_TypeDefinitionIndex = 61376;

struct alignas(8) Struct_2_89669EF743AD9ACD
{
	::MoleMole::Cameras::CameraTrackSetting* Field_2_0; // 0x10
	::PipelineCamera::TimeBasedAlphaGenerator* Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x20
	::System::Func_1<::System::Single>* Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x30

	::System::Void _ctor(::MoleMole::Cameras::CameraTrackSetting* a1, ::System::Func_1<::System::Single>* a2, ::PipelineCamera::TimeBasedAlphaGenerator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackSetting*, ::System::Func_1<::System::Single>*, ::PipelineCamera::TimeBasedAlphaGenerator*))((::PBYTE)hIl2Cpp + STRUCT_2_89669EF743AD9ACD__CTOR_OFFSET))(this, a1, a2, a3);
	}

	/*
	static ::System::Nullable_1<::Struct_2_89669EF743AD9ACD> Method_2_FE921119461BFEE8(::MoleMole::Cameras::CameraTrackSetting* a1, ::Struct_2_455336A079B58DD3& a2)
	{
		return ((::System::Nullable_1<::Struct_2_89669EF743AD9ACD>(*)(::MoleMole::Cameras::CameraTrackSetting*, ::Struct_2_455336A079B58DD3&))((::PBYTE)hIl2Cpp + STRUCT_2_89669EF743AD9ACD_METHOD_2_FE921119461BFEE8_OFFSET))(a1, a2);
	}
	*/

	/*
	::System::Nullable_1<::Struct_2_89669EF743AD9ACD> Method_2_965ED8AB2FD8CF1F(::System::Single a1, ::MoleMole::Cameras::CameraTrackSetting*& a2, ::MoleMole::Cameras::CameraTrackSetting*& a3)
	{
		return ((::System::Nullable_1<::Struct_2_89669EF743AD9ACD>(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraTrackSetting*&, ::MoleMole::Cameras::CameraTrackSetting*&))((::PBYTE)hIl2Cpp + STRUCT_2_89669EF743AD9ACD_METHOD_2_965ED8AB2FD8CF1F_OFFSET))(this, a1, a2, a3);
	}
	*/

	/*
	static ::System::String* Method_2_4B2801D2080295DD(::MoleMole::CameraOrbit& a1)
	{
		return ((::System::String*(*)(::MoleMole::CameraOrbit&))((::PBYTE)hIl2Cpp + STRUCT_2_89669EF743AD9ACD_METHOD_2_4B2801D2080295DD_OFFSET))(a1);
	}
	*/
};
