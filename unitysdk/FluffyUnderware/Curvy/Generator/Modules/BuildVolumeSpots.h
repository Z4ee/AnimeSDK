#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyRepeatingOrderEnum.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGSpot.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/Modules/BuildVolumeSpots_EditorData.h"
#include "unitysdk/FluffyUnderware/DevTools/FloatRegion.h"
#include "unitysdk/FluffyUnderware/DevTools/IntRegion.h"
#include "unitysdk/FluffyUnderware/DevTools/RegionOptions_1.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArrayList_1.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy::Generator { class CGBounds; }
namespace FluffyUnderware::Curvy::Generator { class CGBoundsGroup; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGPath; }
namespace FluffyUnderware::Curvy::Generator { class CGSpots; }
namespace FluffyUnderware::DevTools { template <typename T> class WeightedRandom_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GUIContent; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ADDGROUPITEMS_1_OFFSET UNITYSDK_OFFSET(0x1EE66470)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ADDGROUPITEMS_OFFSET UNITYSDK_OFFSET(0x1EE65B30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ADDGROUP_OFFSET UNITYSDK_OFFSET(0x1EE634D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EE63610)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GETGROUPDEPTH_OFFSET UNITYSDK_OFFSET(0x1EE66210)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GETGROUPITEMINDICES_OFFSET UNITYSDK_OFFSET(0x1EE65E80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GETREGIONNEXTVALUE_OFFSET UNITYSDK_OFFSET(0x1EE661C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GETSPOT_OFFSET UNITYSDK_OFFSET(0x1EE66BD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GETTRS630_OFFSET UNITYSDK_OFFSET(0x1EE67470)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GETTRS_OFFSET UNITYSDK_OFFSET(0x1EE67A80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_BOUNDSINDICES_OFFSET UNITYSDK_OFFSET(0x1EE62F50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_BOUNDSNAMES_OFFSET UNITYSDK_OFFSET(0x1EE62E30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1EE63040)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_CROSSBASE_OFFSET UNITYSDK_OFFSET(0x1EE62B20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_CROSSCURVE_OFFSET UNITYSDK_OFFSET(0x1EE62BD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_FIRSTREPEATING_OFFSET UNITYSDK_OFFSET(0x1EE62C90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_FITEND_OFFSET UNITYSDK_OFFSET(0x1EE62DC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_GROUPCOUNT_OFFSET UNITYSDK_OFFSET(0x1EE62E10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_GROUPS_OFFSET UNITYSDK_OFFSET(0x1EE62C20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_LASTGROUPINDEX_OFFSET UNITYSDK_OFFSET(0x1EE62D10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_LASTREPEATING_OFFSET UNITYSDK_OFFSET(0x1EE62D40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_RANGEOPTIONS_OFFSET UNITYSDK_OFFSET(0x1EE63060)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x1EE62950)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_REPEATINGGROUPSOPTIONS_OFFSET UNITYSDK_OFFSET(0x1EE630D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_REPEATINGORDER_OFFSET UNITYSDK_OFFSET(0x1EE62C40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_SHOWFITEND_OFFSET UNITYSDK_OFFSET(0x1EE67EC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1EE62A80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_USEBUGGEDRNG_OFFSET UNITYSDK_OFFSET(0x1EE62AD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_USEVOLUME_OFFSET UNITYSDK_OFFSET(0x1EE62A30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ISINPUTAVOLUME_OFFSET UNITYSDK_OFFSET(0x1EE63050)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EE67F90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EE67F80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EE63160)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1EE635A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_PREPARE_OFFSET UNITYSDK_OFFSET(0x1EE656E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_REFRESH_OFFSET UNITYSDK_OFFSET(0x1EE63700)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_REMOVEGROUP_OFFSET UNITYSDK_OFFSET(0x1EE66B60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_RESETONENABLE_OFFSET UNITYSDK_OFFSET(0x1EE67EF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_RESET_OFFSET UNITYSDK_OFFSET(0x1EE63190)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_CROSSBASE_OFFSET UNITYSDK_OFFSET(0x1EE62B30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_CROSSCURVE_OFFSET UNITYSDK_OFFSET(0x1EE62BE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_FIRSTREPEATING_OFFSET UNITYSDK_OFFSET(0x1EE62CA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_FITEND_OFFSET UNITYSDK_OFFSET(0x1EE62DD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_GROUPS_OFFSET UNITYSDK_OFFSET(0x1EE62C30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_LASTREPEATING_OFFSET UNITYSDK_OFFSET(0x1EE62D50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_RANGE_OFFSET UNITYSDK_OFFSET(0x1EE62970)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_REPEATINGORDER_OFFSET UNITYSDK_OFFSET(0x1EE62C50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1EE62A90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_USEBUGGEDRNG_OFFSET UNITYSDK_OFFSET(0x1EE62AE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_USEVOLUME_OFFSET UNITYSDK_OFFSET(0x1EE62A40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE627B0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int BuildVolumeSpots_TypeDefinitionIndex = 39596;

	class BuildVolumeSpots : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		// static const ::System::Int32 MinCrossBase = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 MaxCrossBase = 0x1; // 0x0
		// static const ::System::Int32 MinRange = 0x0; // 0x0
		// static const ::System::Int32 MaxRange = 0x1; // 0x0
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InPath; // 0xB8
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InBounds; // 0xC0
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutSpots; // 0xC8
		::System::Boolean m_WasUpgraded; // 0xD0
		::FluffyUnderware::DevTools::FloatRegion m_Range; // 0xD4
		::System::Boolean m_UseVolume; // 0xE0
		::System::Single m_CrossBase; // 0xE4
		::UnityEngine::AnimationCurve* m_CrossCurve; // 0xE8
		::System::Boolean m_Simulate; // 0xF0
		::System::Boolean m_UseBuggedRNG; // 0xF1
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGBoundsGroup*>* m_Groups; // 0xF8
		::FluffyUnderware::DevTools::IntRegion m_RepeatingGroups; // 0x100
		::FluffyUnderware::Curvy::CurvyRepeatingOrderEnum m_RepeatingOrder; // 0x10C
		::System::Boolean m_FitEnd; // 0x110
		::FluffyUnderware::Curvy::Generator::CGSpots* SimulatedSpots; // 0x118
		::FluffyUnderware::Curvy::Generator::Modules::BuildVolumeSpots_EditorData editorData; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::DevTools::FloatRegion get_Range()
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_RANGE_OFFSET))(this);
		}

		::System::Void set_Range(::FluffyUnderware::DevTools::FloatRegion value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_RANGE_OFFSET))(this, value);
		}

		::System::Boolean get_UseVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_USEVOLUME_OFFSET))(this);
		}

		::System::Void set_UseVolume(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_USEVOLUME_OFFSET))(this, value);
		}

		::System::Boolean get_Simulate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_SIMULATE_OFFSET))(this);
		}

		::System::Void set_Simulate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_SIMULATE_OFFSET))(this, value);
		}

		::System::Boolean get_UseBuggedRng()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_USEBUGGEDRNG_OFFSET))(this);
		}

		::System::Void set_UseBuggedRng(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_USEBUGGEDRNG_OFFSET))(this, value);
		}

		::System::Single get_CrossBase()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_CROSSBASE_OFFSET))(this);
		}

		::System::Void set_CrossBase(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_CROSSBASE_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCurve* get_CrossCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_CROSSCURVE_OFFSET))(this);
		}

		::System::Void set_CrossCurve(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_CROSSCURVE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGBoundsGroup*>* get_Groups()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGBoundsGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_GROUPS_OFFSET))(this);
		}

		::System::Void set_Groups(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGBoundsGroup*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGBoundsGroup*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_GROUPS_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::CurvyRepeatingOrderEnum get_RepeatingOrder()
		{
			return ((::FluffyUnderware::Curvy::CurvyRepeatingOrderEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_REPEATINGORDER_OFFSET))(this);
		}

		::System::Void set_RepeatingOrder(::FluffyUnderware::Curvy::CurvyRepeatingOrderEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyRepeatingOrderEnum))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_REPEATINGORDER_OFFSET))(this, value);
		}

		::System::Int32 get_FirstRepeating()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_FIRSTREPEATING_OFFSET))(this);
		}

		::System::Void set_FirstRepeating(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_FIRSTREPEATING_OFFSET))(this, value);
		}

		::System::Int32 get_LastRepeating()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_LASTREPEATING_OFFSET))(this);
		}

		::System::Void set_LastRepeating(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_LASTREPEATING_OFFSET))(this, value);
		}

		::System::Boolean get_FitEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_FITEND_OFFSET))(this);
		}

		::System::Void set_FitEnd(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_SET_FITEND_OFFSET))(this, value);
		}

		::System::Int32 get_GroupCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_GROUPCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::GUIContent*>* get_BoundsNames()
		{
			return ((::Il2CppArray<::UnityEngine::GUIContent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_BOUNDSNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_BoundsIndices()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_BOUNDSINDICES_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean IsInputAVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ISINPUTAVOLUME_OFFSET))(this);
		}

		::System::Int32 get_LastGroupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_LASTGROUPINDEX_OFFSET))(this);
		}

		::FluffyUnderware::DevTools::RegionOptions_1<::System::Single> get_RangeOptions()
		{
			return ((::FluffyUnderware::DevTools::RegionOptions_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_RANGEOPTIONS_OFFSET))(this);
		}

		::FluffyUnderware::DevTools::RegionOptions_1<::System::Int32> get_RepeatingGroupsOptions()
		{
			return ((::FluffyUnderware::DevTools::RegionOptions_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_REPEATINGGROUPSOPTIONS_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_RESET_OFFSET))(this);
		}

		::System::Void OnStateChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ONSTATECHANGE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_CLEAR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_REFRESH_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::CGBoundsGroup* AddGroup(::System::String* name)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGBoundsGroup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ADDGROUP_OFFSET))(this, name);
		}

		::System::Void RemoveGroup(::FluffyUnderware::Curvy::Generator::CGBoundsGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGBoundsGroup*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_REMOVEGROUP_OFFSET))(this, group);
		}

		static ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32> GetGroupItemIndices(::FluffyUnderware::Curvy::Generator::CGBoundsGroup* boundsGroup, ::FluffyUnderware::DevTools::WeightedRandom_1<::System::Int32>* groupItemBag)
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>(*)(::FluffyUnderware::Curvy::Generator::CGBoundsGroup*, ::FluffyUnderware::DevTools::WeightedRandom_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GETGROUPITEMINDICES_OFFSET))(boundsGroup, groupItemBag);
		}

		static ::System::Single GetGroupDepth(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGBounds*>* bounds, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32> groupItemIndices, ::System::Single spaceBefore, ::System::Single spaceAfter, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGBounds*>*& itemsBounds)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGBounds*>*, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>, ::System::Single, ::System::Single, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGBounds*>*&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GETGROUPDEPTH_OFFSET))(bounds, groupItemIndices, spaceBefore, spaceAfter, itemsBounds);
		}

		::System::Boolean AddGroupItems(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGBounds*>* bounds, ::FluffyUnderware::Curvy::Generator::CGPath* path, ::System::Int32 groupIndex, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::FluffyUnderware::Curvy::Generator::CGSpot>& spots, ::System::Single remainingLength, ::System::Single startDistance, ::System::Single& currentDistance, ::System::Boolean& failedAddingAllItems, ::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::Generator::CGBoundsGroup*, ::FluffyUnderware::DevTools::WeightedRandom_1<::System::Int32>*>* itemsBagDictionary, ::System::Int32 MaxSpotsCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGBounds*>*, ::FluffyUnderware::Curvy::Generator::CGPath*, ::System::Int32, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::FluffyUnderware::Curvy::Generator::CGSpot>&, ::System::Single, ::System::Single, ::System::Single&, ::System::Boolean&, ::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::Generator::CGBoundsGroup*, ::FluffyUnderware::DevTools::WeightedRandom_1<::System::Int32>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ADDGROUPITEMS_OFFSET))(this, bounds, path, groupIndex, spots, remainingLength, startDistance, currentDistance, failedAddingAllItems, itemsBagDictionary, MaxSpotsCount);
		}

		::System::Void AddGroupItems_1(::FluffyUnderware::Curvy::Generator::CGPath* path, ::FluffyUnderware::Curvy::Generator::CGBoundsGroup* group, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::FluffyUnderware::Curvy::Generator::CGSpot>& spots, ::System::Single remainingLength, ::System::Single startDistance, ::System::Single& currentDistance, ::System::Boolean& failedAddingAllItems, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32> itemIndices, ::System::Single groupDepth, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGBounds*>* itemBounds, ::System::Single spaceBefore, ::System::Single spaceAfter)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGPath*, ::FluffyUnderware::Curvy::Generator::CGBoundsGroup*, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::FluffyUnderware::Curvy::Generator::CGSpot>&, ::System::Single, ::System::Single, ::System::Single&, ::System::Boolean&, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>, ::System::Single, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGBounds*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ADDGROUPITEMS_1_OFFSET))(this, path, group, spots, remainingLength, startDistance, currentDistance, failedAddingAllItems, itemIndices, groupDepth, itemBounds, spaceBefore, spaceAfter);
		}

		::FluffyUnderware::Curvy::Generator::CGSpot GetSpot(::FluffyUnderware::Curvy::Generator::CGPath* path, ::System::Int32 itemID, ::FluffyUnderware::Curvy::Generator::CGBoundsGroup* boundsGroup, ::FluffyUnderware::Curvy::Generator::CGBounds* bounds, ::System::Single currentDistance, ::System::Single startDistance)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGSpot(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGPath*, ::System::Int32, ::FluffyUnderware::Curvy::Generator::CGBoundsGroup*, ::FluffyUnderware::Curvy::Generator::CGBounds*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GETSPOT_OFFSET))(this, path, itemID, boundsGroup, bounds, currentDistance, startDistance);
		}

		static ::System::Single GetRegionNextValue(::FluffyUnderware::DevTools::FloatRegion floatRegion)
		{
			return ((::System::Single(*)(::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GETREGIONNEXTVALUE_OFFSET))(floatRegion);
		}

		::System::Void GetTRS(::FluffyUnderware::Curvy::Generator::CGBoundsGroup* boundsGroup, ::UnityEngine::Vector3 tangent, ::UnityEngine::Vector3 up, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& translation, ::UnityEngine::Vector3& scale)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGBoundsGroup*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GETTRS_OFFSET))(this, boundsGroup, tangent, up, rotation, translation, scale);
		}

		::System::Void GetTRS630(::FluffyUnderware::Curvy::Generator::CGBoundsGroup* boundsGroup, ::UnityEngine::Vector3 tangent, ::UnityEngine::Vector3 up, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& translation, ::UnityEngine::Vector3& scale)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGBoundsGroup*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GETTRS630_OFFSET))(this, boundsGroup, tangent, up, rotation, translation, scale);
		}

		::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::Generator::CGBoundsGroup*, ::FluffyUnderware::DevTools::WeightedRandom_1<::System::Int32>*>* Prepare(::FluffyUnderware::DevTools::WeightedRandom_1<::System::Int32>*& groupBag)
		{
			return ((::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::Generator::CGBoundsGroup*, ::FluffyUnderware::DevTools::WeightedRandom_1<::System::Int32>*>*(*)(::PVOID, ::FluffyUnderware::DevTools::WeightedRandom_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_PREPARE_OFFSET))(this, groupBag);
		}

		::System::Boolean get_ShowFitEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_GET_SHOWFITEND_OFFSET))(this);
		}

		::System::Void ResetOnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_RESETONENABLE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
