#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SlicePlane.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }

#define RPG_CLIENT_PLANESLICE_METHOD_5_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x1BD1E3C0)
#define RPG_CLIENT_PLANESLICE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1BD21640)
#define RPG_CLIENT_PLANESLICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD218C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlaneSlice_TypeDefinitionIndex = 70662;

	class PlaneSlice : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Material* Mat; // 0x18
		::RPG::Client::SlicePlane Plane; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* SliceTargets; // 0x38
		::System::Boolean ShowGizmos; // 0x40
		::System::Single GizmosSize; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_2566AD459572DFC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_METHOD_5_2566AD459572DFC3_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_ONDRAWGIZMOS_OFFSET))(this);
		}
	};
}
