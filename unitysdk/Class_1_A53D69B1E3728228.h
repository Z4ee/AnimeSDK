#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_625;
namespace System { class String; }

#define CLASS_1_A53D69B1E3728228_METHOD_1_003DB6C3792138A8_OFFSET UNITYSDK_OFFSET(0x17A634D0)
#define CLASS_1_A53D69B1E3728228_METHOD_1_40E8FAE3E5C1965D_OFFSET UNITYSDK_OFFSET(0x17A630F0)
#define CLASS_1_A53D69B1E3728228_METHOD_1_50B65AD355AF23FE_OFFSET UNITYSDK_OFFSET(0x17A63A80)
#define CLASS_1_A53D69B1E3728228_METHOD_1_815343E2E4B2C384_OFFSET UNITYSDK_OFFSET(0x17A63D50)
#define CLASS_1_A53D69B1E3728228_METHOD_1_ECA105CA81B6B39D_1_OFFSET UNITYSDK_OFFSET(0x17A62FF0)
#define CLASS_1_A53D69B1E3728228_METHOD_1_ECA105CA81B6B39D_2_OFFSET UNITYSDK_OFFSET(0x17A63980)
#define CLASS_1_A53D69B1E3728228_METHOD_1_ECA105CA81B6B39D_OFFSET UNITYSDK_OFFSET(0x17A62EF0)

inline static constexpr unsigned int Class_1_A53D69B1E3728228_TypeDefinitionIndex = 64266;

class Class_1_A53D69B1E3728228 : public ::System::Object
{
public:
	static ::System::String* Method_1_ECA105CA81B6B39D(::UnityEngine::Vector3& a1)
	{
		return ((::System::String*(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_A53D69B1E3728228_METHOD_1_ECA105CA81B6B39D_OFFSET))(a1);
	}

	static ::System::String* Method_1_ECA105CA81B6B39D_1(::UnityEngine::Vector3& a1)
	{
		return ((::System::String*(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_A53D69B1E3728228_METHOD_1_ECA105CA81B6B39D_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_40E8FAE3E5C1965D(::Class_0_16E4307DCC419505_625* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_625*))((::PBYTE)hIl2Cpp + CLASS_1_A53D69B1E3728228_METHOD_1_40E8FAE3E5C1965D_OFFSET))(a1);
	}

	static ::Cinemachine::CameraState Method_1_003DB6C3792138A8(::Cinemachine::CameraState& a1, ::PipelineCamera::WorldBasicCameraData& a2)
	{
		return ((::Cinemachine::CameraState(*)(::Cinemachine::CameraState&, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + CLASS_1_A53D69B1E3728228_METHOD_1_003DB6C3792138A8_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_ECA105CA81B6B39D_2(::UnityEngine::Vector3& a1)
	{
		return ((::System::String*(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_A53D69B1E3728228_METHOD_1_ECA105CA81B6B39D_2_OFFSET))(a1);
	}

	static ::PipelineCamera::WorldBasicCameraData Method_1_50B65AD355AF23FE(::Cinemachine::CameraState& a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_1_A53D69B1E3728228_METHOD_1_50B65AD355AF23FE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_815343E2E4B2C384(::Class_0_16E4307DCC419505_625* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_625*))((::PBYTE)hIl2Cpp + CLASS_1_A53D69B1E3728228_METHOD_1_815343E2E4B2C384_OFFSET))(a1);
	}
};
