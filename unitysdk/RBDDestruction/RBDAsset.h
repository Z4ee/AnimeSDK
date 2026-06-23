#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RBDDestruction { class FragmentData; }
namespace RBDDestruction { class GroupData; }
namespace RBDDestruction { class SimulationConfig; }
namespace RBDDestruction { class VisualEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class TextAsset; }

#define RBDDESTRUCTION_RBDASSET_CLEARJSONDATA_OFFSET UNITYSDK_OFFSET(0x1BDA6270)
#define RBDDESTRUCTION_RBDASSET_GETTOTALGROUPS_OFFSET UNITYSDK_OFFSET(0x1BDA5A10)
#define RBDDESTRUCTION_RBDASSET_READJSONDATA_OFFSET UNITYSDK_OFFSET(0x1BDA5E00)
#define RBDDESTRUCTION_RBDASSET_UPDATEGROUPFRAGMENTCOUNTS_OFFSET UNITYSDK_OFFSET(0x1BDA5B30)
#define RBDDESTRUCTION_RBDASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDA62C0)

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDAsset_TypeDefinitionIndex = 27382;

	class RBDAsset : public ::System::Object
	{
	public:
		::RBDDestruction::SimulationConfig* simulationConfig; // 0x10
		::RBDDestruction::VisualEffectConfig* visualEffectConfig; // 0x18
		::RBDDestruction::GroupData* defaultGroup; // 0x20
		::System::Collections::Generic::List_1<::RBDDestruction::GroupData*>* extraGroups; // 0x28
		::UnityEngine::Mesh* crackAsset; // 0x30
		::UnityEngine::Material* crackMaterial; // 0x38
		::UnityEngine::TextAsset* fragmentDataFile; // 0x40
		::Il2CppArray<::RBDDestruction::FragmentData*>* fragmentData; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDASSET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RBDDestruction::GroupData*>* GetTotalGroups()
		{
			return ((::System::Collections::Generic::List_1<::RBDDestruction::GroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDASSET_GETTOTALGROUPS_OFFSET))(this);
		}

		::System::Void UpdateGroupFragmentCounts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDASSET_UPDATEGROUPFRAGMENTCOUNTS_OFFSET))(this);
		}

		::System::Void ReadJsonData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDASSET_READJSONDATA_OFFSET))(this);
		}

		::System::Void ClearJsonData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDASSET_CLEARJSONDATA_OFFSET))(this);
		}
	};
}
