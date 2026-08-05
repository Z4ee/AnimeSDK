#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"

namespace FluffyUnderware::Curvy::Generator { class CGBounds; }
namespace FluffyUnderware::Curvy::Generator { class CGBoundsGroup; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1F498290)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F498130)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F4982F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_GET_BOUNDSGROUP_OFFSET UNITYSDK_OFFSET(0x1F498090)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_GET_GROUPDEPTH_OFFSET UNITYSDK_OFFSET(0x1F4980B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_GET_ITEMBOUNDS_OFFSET UNITYSDK_OFFSET(0x1F4980C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_GET_ITEMINDICES_OFFSET UNITYSDK_OFFSET(0x1F4980A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_GET_SPACEAFTER_OFFSET UNITYSDK_OFFSET(0x1F4980E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_GET_SPACEBEFORE_OFFSET UNITYSDK_OFFSET(0x1F4980D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4980F0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int BuildVolumeSpots_EndGroupData_TypeDefinitionIndex = 39600;

	class BuildVolumeSpots_EndGroupData : public ::System::Object
	{
	public:
		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGBounds*>* _ItemBounds_k__BackingField; // 0x10
		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32> _ItemIndices_k__BackingField; // 0x18
		::FluffyUnderware::Curvy::Generator::CGBoundsGroup* _BoundsGroup_k__BackingField; // 0x28
		::System::Single _GroupDepth_k__BackingField; // 0x30
		::System::Boolean disposed; // 0x34
		::System::Single _SpaceBefore_k__BackingField; // 0x38
		::System::Single _SpaceAfter_k__BackingField; // 0x3C

		::System::Void _ctor(::FluffyUnderware::Curvy::Generator::CGBoundsGroup* boundsGroup, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32> itemIndices, ::System::Single groupDepth, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGBounds*>* itemBounds, ::System::Single spaceBefore, ::System::Single spaceAfter)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGBoundsGroup*, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>, ::System::Single, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGBounds*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA__CTOR_OFFSET))(this, boundsGroup, itemIndices, groupDepth, itemBounds, spaceBefore, spaceAfter);
		}

		::FluffyUnderware::Curvy::Generator::CGBoundsGroup* get_BoundsGroup()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGBoundsGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_GET_BOUNDSGROUP_OFFSET))(this);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32> get_ItemIndices()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_GET_ITEMINDICES_OFFSET))(this);
		}

		::System::Single get_GroupDepth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_GET_GROUPDEPTH_OFFSET))(this);
		}

		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGBounds*>* get_ItemBounds()
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGBounds*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_GET_ITEMBOUNDS_OFFSET))(this);
		}

		::System::Single get_SpaceBefore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_GET_SPACEBEFORE_OFFSET))(this);
		}

		::System::Single get_SpaceAfter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_GET_SPACEAFTER_OFFSET))(this);
		}

		::System::Boolean Dispose(::System::Boolean disposing)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_DISPOSE_1_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ENDGROUPDATA_FINALIZE_OFFSET))(this);
		}
	};
}
