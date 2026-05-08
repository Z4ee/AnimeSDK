#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Enum_3_8ADCB380438C5EA9.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_5AC47B2D919D8407.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class AdvancedCollisionConfigData; }

#define CLASS_1_975E45085A3C002F_METHOD_1_421D01B3D9AAD573_OFFSET UNITYSDK_OFFSET(0x10FAF420)
#define CLASS_1_975E45085A3C002F_METHOD_1_544EB4FCBB61AD17_OFFSET UNITYSDK_OFFSET(0x10FAFC60)
#define CLASS_1_975E45085A3C002F_METHOD_1_726479441D50D4C5_OFFSET UNITYSDK_OFFSET(0x10FAF540)
#define CLASS_1_975E45085A3C002F_METHOD_1_753447C3FC478CC0_OFFSET UNITYSDK_OFFSET(0x10FAEDA0)
#define CLASS_1_975E45085A3C002F_METHOD_1_8A5656E952965203_OFFSET UNITYSDK_OFFSET(0x10FADE00)
#define CLASS_1_975E45085A3C002F_METHOD_1_8B5D6D6A6F722396_OFFSET UNITYSDK_OFFSET(0x10FAF530)
#define CLASS_1_975E45085A3C002F_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x10FAFB30)
#define CLASS_1_975E45085A3C002F_METHOD_1_BE06DEE3D78E2A97_OFFSET UNITYSDK_OFFSET(0x10FAE3B0)
#define CLASS_1_975E45085A3C002F_METHOD_1_E5D7DA6AD4D9CD9B_OFFSET UNITYSDK_OFFSET(0x10FAE770)
#define CLASS_1_975E45085A3C002F__CTOR_OFFSET UNITYSDK_OFFSET(0x10FADDF0)

inline static constexpr unsigned int Class_1_975E45085A3C002F_TypeDefinitionIndex = 57996;

class Class_1_975E45085A3C002F : public ::System::Object
{
public:
	// static const ::System::Single Field_1_3; // 0x0
	::System::Single Field_1_2; // 0x10
	::System::Single Field_1_0; // 0x14
	::UnityEngine::RaycastHit Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_8A5656E952965203(::System::Single a1, ::UnityEngine::RaycastHit& a2, ::System::Single& a3, ::System::Single& a4, ::UnityEngine::RaycastHit& a5, ::System::Single a6, ::MoleMole::AdvancedCollisionConfigData*& a7)
	{
		return ((::System::Void(*)(::System::Single, ::UnityEngine::RaycastHit&, ::System::Single&, ::System::Single&, ::UnityEngine::RaycastHit&, ::System::Single, ::MoleMole::AdvancedCollisionConfigData*&))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_8A5656E952965203_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Single Method_1_BE06DEE3D78E2A97(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::MoleMole::AdvancedCollisionConfigData*& a4, ::UnityEngine::RaycastHit& a5)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::MoleMole::AdvancedCollisionConfigData*&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_BE06DEE3D78E2A97_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_E5D7DA6AD4D9CD9B(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_E5D7DA6AD4D9CD9B_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_1_421D01B3D9AAD573(::System::Single a1, ::System::Single a2, ::Enum_3_8ADCB380438C5EA9 a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::Enum_3_8ADCB380438C5EA9))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_421D01B3D9AAD573_OFFSET))(a1, a2, a3);
	}

	::MoleMole::AdvancedCollisionConfigData* Method_1_753447C3FC478CC0()
	{
		return ((::MoleMole::AdvancedCollisionConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_753447C3FC478CC0_OFFSET))(this);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_8B5D6D6A6F722396(::System::Single a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_8B5D6D6A6F722396_OFFSET))(a1);
	}

	static ::PipelineCamera::WorldBasicCameraData Method_1_726479441D50D4C5(::PipelineCamera::WorldBasicCameraData a1, ::System::Single a2, ::System::Single a3, ::Struct_2_5AC47B2D919D8407& a4, ::MoleMole::AdvancedCollisionConfigData* a5)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraData, ::System::Single, ::System::Single, ::Struct_2_5AC47B2D919D8407&, ::MoleMole::AdvancedCollisionConfigData*))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_726479441D50D4C5_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_A8F6F688241E6DBC_OFFSET))();
	}

	static ::System::Single Method_1_544EB4FCBB61AD17(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::MoleMole::AdvancedCollisionConfigData*& a7, ::Enum_3_8ADCB380438C5EA9 a8)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::AdvancedCollisionConfigData*&, ::Enum_3_8ADCB380438C5EA9))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_544EB4FCBB61AD17_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}
};
