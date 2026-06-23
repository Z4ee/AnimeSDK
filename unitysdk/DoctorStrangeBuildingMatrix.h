#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DoctorStrangeBuildingMatrix_RendererInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Shader; }

#define DOCTORSTRANGEBUILDINGMATRIX_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17B226C0)
#define DOCTORSTRANGEBUILDINGMATRIX_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17B221C0)
#define DOCTORSTRANGEBUILDINGMATRIX_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17B22810)
#define DOCTORSTRANGEBUILDINGMATRIX_UPDATECLIPPLANE_OFFSET UNITYSDK_OFFSET(0x17B22870)
#define DOCTORSTRANGEBUILDINGMATRIX__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B22DC0)
#define DOCTORSTRANGEBUILDINGMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x17B22CE0)

inline static constexpr unsigned int DoctorStrangeBuildingMatrix_TypeDefinitionIndex = 55340;

class DoctorStrangeBuildingMatrix : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet__RotateMin()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoctorStrangeBuildingMatrix_TypeDefinitionIndex)->GetStaticField(0xE930);
	}
	static ::System::Int32* StaticGet__CopyIndex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoctorStrangeBuildingMatrix_TypeDefinitionIndex)->GetStaticField(0xE934);
	}
	static ::System::Int32* StaticGet__RotateMax()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoctorStrangeBuildingMatrix_TypeDefinitionIndex)->GetStaticField(0xE938);
	}
	static ::System::Int32* StaticGet__RotateAroundSpeed()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoctorStrangeBuildingMatrix_TypeDefinitionIndex)->GetStaticField(0xE93C);
	}
	static ::System::Int32* StaticGet__CopyCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoctorStrangeBuildingMatrix_TypeDefinitionIndex)->GetStaticField(0xE940);
	}
	static ::System::Int32* StaticGet__ClipPlaneOffset()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoctorStrangeBuildingMatrix_TypeDefinitionIndex)->GetStaticField(0xE944);
	}
	// static const ::System::String* shaderPath; // 0x0
	::UnityEngine::GameObject* copyTarget; // 0x18
	::System::Int32 copyCount; // 0x20
	::System::Single rotationSpeedX; // 0x24
	::System::Single rotationSpeedY; // 0x28
	::System::Single rotationSpeedZ; // 0x2C
	::UnityEngine::Vector2 rotationLimitX; // 0x30
	::UnityEngine::Vector2 rotationLimitY; // 0x38
	::UnityEngine::Vector2 rotationLimitZ; // 0x40
	::System::Boolean clipOffsetLoop; // 0x48
	::System::Single clipOffsetSpeed; // 0x4C
	::UnityEngine::Vector2 clipOffsetRange; // 0x50
	::System::Collections::Generic::List_1<::DoctorStrangeBuildingMatrix_RendererInfo>* rendererInfos; // 0x58
	::UnityEngine::MaterialPropertyBlock* mpb; // 0x60
	::System::Single clipPlaneOffset; // 0x68
	::UnityEngine::Shader* buildingMatrixShader; // 0x70
	::System::Single lastPlaneOffset; // 0x78
	::System::Boolean finishRegister; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX_ONUPDATE_OFFSET))(this);
	}

	::System::Void UpdateClipPlane()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX_UPDATECLIPPLANE_OFFSET))(this);
	}
};
