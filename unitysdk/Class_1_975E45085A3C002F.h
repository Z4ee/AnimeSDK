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

#define CLASS_1_975E45085A3C002F_METHOD_1_0A9C8DA4C998FBDD_OFFSET UNITYSDK_OFFSET(0x1069AEE0)
#define CLASS_1_975E45085A3C002F_METHOD_1_2663CDBAAF09AABA_OFFSET UNITYSDK_OFFSET(0x1069C4D0)
#define CLASS_1_975E45085A3C002F_METHOD_1_421D01B3D9AAD573_OFFSET UNITYSDK_OFFSET(0x1069BAA0)
#define CLASS_1_975E45085A3C002F_METHOD_1_544EB4FCBB61AD17_OFFSET UNITYSDK_OFFSET(0x1069BB80)
#define CLASS_1_975E45085A3C002F_METHOD_1_753447C3FC478CC0_OFFSET UNITYSDK_OFFSET(0x1069B9D0)
#define CLASS_1_975E45085A3C002F_METHOD_1_8B5D6D6A6F722396_OFFSET UNITYSDK_OFFSET(0x1069C4C0)
#define CLASS_1_975E45085A3C002F_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x1069CDA0)
#define CLASS_1_975E45085A3C002F_METHOD_1_CE957550AC9C82D9_OFFSET UNITYSDK_OFFSET(0x1069CED0)
#define CLASS_1_975E45085A3C002F_METHOD_1_E19AFAAFBB7A3CBF_OFFSET UNITYSDK_OFFSET(0x1069C800)
#define CLASS_1_975E45085A3C002F__CTOR_OFFSET UNITYSDK_OFFSET(0x1069AED0)

inline static constexpr unsigned int Class_1_975E45085A3C002F_TypeDefinitionIndex = 91092;

class Class_1_975E45085A3C002F : public ::System::Object
{
public:
	// static const ::System::Single Field_1_5; // 0x0
	::System::Single Field_1_0; // 0x10
	::UnityEngine::RaycastHit Field_1_7; // 0x14
	::System::Single Field_1_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F__CTOR_OFFSET))(this);
	}

	static ::PipelineCamera::WorldBasicCameraData Method_1_0A9C8DA4C998FBDD(::PipelineCamera::WorldBasicCameraData a1, ::System::Single a2, ::System::Single a3, ::Struct_2_5AC47B2D919D8407& a4, ::MoleMole::AdvancedCollisionConfigData* a5)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraData, ::System::Single, ::System::Single, ::Struct_2_5AC47B2D919D8407&, ::MoleMole::AdvancedCollisionConfigData*))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_0A9C8DA4C998FBDD_OFFSET))(a1, a2, a3, a4, a5);
	}

	::MoleMole::AdvancedCollisionConfigData* Method_1_753447C3FC478CC0()
	{
		return ((::MoleMole::AdvancedCollisionConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_753447C3FC478CC0_OFFSET))(this);
	}

	static ::System::Single Method_1_421D01B3D9AAD573(::System::Single a1, ::System::Single a2, ::Enum_3_8ADCB380438C5EA9 a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::Enum_3_8ADCB380438C5EA9))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_421D01B3D9AAD573_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_544EB4FCBB61AD17(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::MoleMole::AdvancedCollisionConfigData*& a7, ::Enum_3_8ADCB380438C5EA9 a8)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::AdvancedCollisionConfigData*&, ::Enum_3_8ADCB380438C5EA9))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_544EB4FCBB61AD17_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Single Method_1_2663CDBAAF09AABA(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::MoleMole::AdvancedCollisionConfigData*& a4, ::UnityEngine::RaycastHit& a5)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::MoleMole::AdvancedCollisionConfigData*&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_2663CDBAAF09AABA_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_E19AFAAFBB7A3CBF(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_E19AFAAFBB7A3CBF_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_A8F6F688241E6DBC_OFFSET))();
	}

	static ::System::Void Method_1_CE957550AC9C82D9(::System::Single a1, ::UnityEngine::RaycastHit& a2, ::System::Single& a3, ::System::Single& a4, ::UnityEngine::RaycastHit& a5, ::System::Single a6, ::MoleMole::AdvancedCollisionConfigData*& a7)
	{
		return ((::System::Void(*)(::System::Single, ::UnityEngine::RaycastHit&, ::System::Single&, ::System::Single&, ::UnityEngine::RaycastHit&, ::System::Single, ::MoleMole::AdvancedCollisionConfigData*&))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_CE957550AC9C82D9_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_8B5D6D6A6F722396(::System::Single a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_975E45085A3C002F_METHOD_1_8B5D6D6A6F722396_OFFSET))(a1);
	}
};
