#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AnimStatic_TagGroup.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class CameraModelSphereData; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraAvatarPrepareData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Config { class PipelineCameraAvatarConfigData; }
namespace System { class String; }
namespace UnityEngine { class Camera; }

#define CLASS_1_2DA53C4F96A33B0E_METHOD_1_10867B69EFBCA83E_1_OFFSET UNITYSDK_OFFSET(0x178298E0)
#define CLASS_1_2DA53C4F96A33B0E_METHOD_1_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0x17827510)
#define CLASS_1_2DA53C4F96A33B0E_METHOD_1_10BF263B62555F04_OFFSET UNITYSDK_OFFSET(0x17829090)
#define CLASS_1_2DA53C4F96A33B0E_METHOD_1_1BA8941224D5436E_OFFSET UNITYSDK_OFFSET(0x17827610)
#define CLASS_1_2DA53C4F96A33B0E_METHOD_1_32E236168AEB38DD_OFFSET UNITYSDK_OFFSET(0x17827380)
#define CLASS_1_2DA53C4F96A33B0E_METHOD_1_353B0C4D431FD281_OFFSET UNITYSDK_OFFSET(0x17828C70)
#define CLASS_1_2DA53C4F96A33B0E_METHOD_1_54C4999AD8BA51B0_OFFSET UNITYSDK_OFFSET(0x17828FF0)
#define CLASS_1_2DA53C4F96A33B0E_METHOD_1_566335D98C3D7ED1_OFFSET UNITYSDK_OFFSET(0x17829250)
#define CLASS_1_2DA53C4F96A33B0E_METHOD_1_669B5253727A0C76_OFFSET UNITYSDK_OFFSET(0x17827BE0)
#define CLASS_1_2DA53C4F96A33B0E_METHOD_1_9BB5C8947208F07A_OFFSET UNITYSDK_OFFSET(0x17829A30)
#define CLASS_1_2DA53C4F96A33B0E_METHOD_1_B0CBC70B04A37121_OFFSET UNITYSDK_OFFSET(0x17828500)
#define CLASS_1_2DA53C4F96A33B0E_METHOD_1_D029320EEF906ECC_OFFSET UNITYSDK_OFFSET(0x178293E0)
#define CLASS_1_2DA53C4F96A33B0E_METHOD_1_D16F593483818798_OFFSET UNITYSDK_OFFSET(0x17828920)
#define CLASS_1_2DA53C4F96A33B0E_METHOD_1_D239698B2179BA62_OFFSET UNITYSDK_OFFSET(0x17828D70)
#define CLASS_1_2DA53C4F96A33B0E_METHOD_1_E92A01088E653B07_OFFSET UNITYSDK_OFFSET(0x17827F10)
#define CLASS_1_2DA53C4F96A33B0E_METHOD_1_F84A07D89A8F09CE_OFFSET UNITYSDK_OFFSET(0x17829BA0)
#define CLASS_1_2DA53C4F96A33B0E__CTOR_OFFSET UNITYSDK_OFFSET(0x17827370)

inline static constexpr unsigned int Class_1_2DA53C4F96A33B0E_TypeDefinitionIndex = 85959;

class Class_1_2DA53C4F96A33B0E : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::Single Field_1_11; // 0x0
	// static const ::System::Single Field_1_10; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_1_32E236168AEB38DD(::UnityEngine::Quaternion a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E_METHOD_1_32E236168AEB38DD_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_10867B69EFBCA83E(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E_METHOD_1_10867B69EFBCA83E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1BA8941224D5436E(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E_METHOD_1_1BA8941224D5436E_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Boolean Method_1_E92A01088E653B07(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::System::Single& a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Single&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E_METHOD_1_E92A01088E653B07_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Single Method_1_D16F593483818798(::UnityEngine::RaycastHit& a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::UnityEngine::RaycastHit&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E_METHOD_1_D16F593483818798_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_353B0C4D431FD281(::MoleMole::Cameras::CameraDataAccessor* a1, ::MoleMole::AnimStatic_TagGroup a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Cameras::CameraDataAccessor*, ::MoleMole::AnimStatic_TagGroup))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E_METHOD_1_353B0C4D431FD281_OFFSET))(a1, a2);
	}

	::UnityEngine::Vector3 Method_1_D239698B2179BA62(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector3& a7)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E_METHOD_1_D239698B2179BA62_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::UnityEngine::Vector2 Method_1_54C4999AD8BA51B0(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E_METHOD_1_54C4999AD8BA51B0_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_B0CBC70B04A37121(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Single& a5, ::Il2CppArray<::UnityEngine::Vector3>* a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32, ::System::Single&, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E_METHOD_1_B0CBC70B04A37121_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_10BF263B62555F04(::UnityEngine::Camera* a1, ::System::Single a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::System::Single, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E_METHOD_1_10BF263B62555F04_OFFSET))(a1, a2, a3, a4);
	}

	::System::Single Method_1_566335D98C3D7ED1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single& a7)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E_METHOD_1_566335D98C3D7ED1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::UnityEngine::Vector3 Method_1_D029320EEF906ECC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E_METHOD_1_D029320EEF906ECC_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_669B5253727A0C76(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::Il2CppArray<::UnityEngine::Vector3>* a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E_METHOD_1_669B5253727A0C76_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector3 Method_1_10867B69EFBCA83E_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E_METHOD_1_10867B69EFBCA83E_1_OFFSET))(a1);
	}

	static ::MoleMole::CameraModelSphereData* Method_1_9BB5C8947208F07A(::MoleMole::Config::PipelineCameraAvatarConfigData* a1, ::MoleMole::CameraModuleAvatarDataConfigExt* a2, ::System::String* a3)
	{
		return ((::MoleMole::CameraModelSphereData*(*)(::MoleMole::Config::PipelineCameraAvatarConfigData*, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E_METHOD_1_9BB5C8947208F07A_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_F84A07D89A8F09CE(::MoleMole::Cameras::CameraAvatarPrepareData* a1, ::MoleMole::Config::InlevelCameraState a2)
	{
		return ((::System::Single(*)(::MoleMole::Cameras::CameraAvatarPrepareData*, ::MoleMole::Config::InlevelCameraState))((::PBYTE)hIl2Cpp + CLASS_1_2DA53C4F96A33B0E_METHOD_1_F84A07D89A8F09CE_OFFSET))(a1, a2);
	}
};
