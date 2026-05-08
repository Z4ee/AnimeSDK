#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/MeshListToParticle_Enum_3_9E760EB3D6954C84.h"
#include "unitysdk/Struct_2_984AA94FB23486F9_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_GETMESHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12373D80)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_GETSCATTERPOINTS_OFFSET UNITYSDK_OFFSET(0x12373D30)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_METHOD_5_3E7B7DB0EDF962BA_OFFSET UNITYSDK_OFFSET(0x12371780)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_METHOD_5_45138DD0E82F085A_OFFSET UNITYSDK_OFFSET(0x12373080)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_METHOD_5_4DF6B380BB12E231_OFFSET UNITYSDK_OFFSET(0x12371970)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_METHOD_5_AAE2380A4AD9C102_OFFSET UNITYSDK_OFFSET(0x12373500)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12373DC0)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x12373E00)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_PROCESSMESH_OFFSET UNITYSDK_OFFSET(0x12371550)
#define MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x12373F40)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MeshListToParticle_TypeDefinitionIndex = 49988;

	class MeshListToParticle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 numberOfPoints; // 0x18
		::MoleMole::Timeline::MeshListToParticle_Enum_3_9E760EB3D6954C84 meshType; // 0x1C
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* meshObjects; // 0x20
		::UnityEngine::Camera* meshCamera; // 0x28
		::System::Single pointSize; // 0x30
		::System::Boolean showPoints; // 0x34
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* Field_5_6; // 0x38
		::UnityEngine::Transform* Field_5_7; // 0x40
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Vector3>*>* Field_5_8; // 0x48
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* Field_5_9; // 0x50
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>* Field_5_10; // 0x58
		::System::Collections::Generic::List_1<::System::Single>* Field_5_11; // 0x60
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Vector3>*>* Field_5_12; // 0x68
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Vector3>*>* Field_5_13; // 0x70
		::System::Boolean Field_5_14; // 0x78
		::System::Single Field_5_15; // 0x7C
		::System::Collections::Generic::List_1<::System::Boolean>* Field_5_16; // 0x80
		::System::Single Field_5_17; // 0x88
		::System::UInt32 Field_5_18; // 0x8C
		::Il2CppArray<::Struct_2_984AA94FB23486F9_1>* meshPoints; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE__CTOR_OFFSET))(this);
		}

		::System::Boolean processMesh(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_PROCESSMESH_OFFSET))(this, a1);
		}

		::Il2CppArray<::Struct_2_984AA94FB23486F9_1>* GetScatterPoints()
		{
			return ((::Il2CppArray<::Struct_2_984AA94FB23486F9_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_GETSCATTERPOINTS_OFFSET))(this);
		}

		::UnityEngine::Transform* GetMeshTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_GETMESHTRANSFORM_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void Method_5_AAE2380A4AD9C102(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_METHOD_5_AAE2380A4AD9C102_OFFSET))(this, a1);
		}

		::System::Void Method_5_3E7B7DB0EDF962BA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_METHOD_5_3E7B7DB0EDF962BA_OFFSET))(this);
		}

		::System::Boolean Method_5_4DF6B380BB12E231(::System::Single a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_METHOD_5_4DF6B380BB12E231_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_45138DD0E82F085A(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHLISTTOPARTICLE_METHOD_5_45138DD0E82F085A_OFFSET))(this, a1);
		}
	};
}
