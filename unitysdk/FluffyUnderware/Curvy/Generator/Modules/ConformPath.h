#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy::Generator { class CGData; }
namespace FluffyUnderware::Curvy::Generator { class CGDataRequestParameter; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGPath; }
namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_CONFORM_1_OFFSET UNITYSDK_OFFSET(0x1E672200)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_CONFORM_OFFSET UNITYSDK_OFFSET(0x1E6721A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1E671AE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_GET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0x1E671C80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_GET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E671B90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1E671BE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_GET_PATHISCLOSED_OFFSET UNITYSDK_OFFSET(0x1E671E60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_GET_WARP_OFFSET UNITYSDK_OFFSET(0x1E671C30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E671CD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_ONSLOTDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x1E671FB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_RESET_OFFSET UNITYSDK_OFFSET(0x1E671D00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1E671B00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_SET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0x1E671C90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_SET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E671BA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1E671BF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_SET_WARP_OFFSET UNITYSDK_OFFSET(0x1E671C40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6726E0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int ConformPath_TypeDefinitionIndex = 38991;

	class ConformPath : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		// static const ::System::Int32 DefaultMaxDistance = 0x64; // 0x0
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InPath; // 0xB8
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutPath; // 0xC0
		::UnityEngine::Vector3 m_Direction; // 0xC8
		::System::Single m_MaxDistance; // 0xD4
		::System::Single m_Offset; // 0xD8
		::System::Boolean m_Warp; // 0xDC
		::UnityEngine::LayerMask m_LayerMask; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Direction()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_Direction(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_SET_DIRECTION_OFFSET))(this, value);
		}

		::System::Single get_MaxDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_GET_MAXDISTANCE_OFFSET))(this);
		}

		::System::Void set_MaxDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_SET_MAXDISTANCE_OFFSET))(this, value);
		}

		::System::Single get_Offset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_SET_OFFSET_OFFSET))(this, value);
		}

		::System::Boolean get_Warp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_GET_WARP_OFFSET))(this);
		}

		::System::Void set_Warp(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_SET_WARP_OFFSET))(this, value);
		}

		::UnityEngine::LayerMask get_LayerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_GET_LAYERMASK_OFFSET))(this);
		}

		::System::Void set_LayerMask(::UnityEngine::LayerMask value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_SET_LAYERMASK_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_RESET_OFFSET))(this);
		}

		::System::Boolean get_PathIsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_GET_PATHISCLOSED_OFFSET))(this);
		}

		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>* OnSlotDataRequest(::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* requestedBy, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* requestedSlot, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>* requests)
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_ONSLOTDATAREQUEST_OFFSET))(this, requestedBy, requestedSlot, requests);
		}

		static ::System::Void Conform(::FluffyUnderware::Curvy::Generator::CGPath* path, ::UnityEngine::Transform* pathTransform, ::UnityEngine::LayerMask layers, ::UnityEngine::Vector3 projectionDirection, ::System::Single offset, ::System::Single rayLength, ::System::Boolean warp)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Generator::CGPath*, ::UnityEngine::Transform*, ::UnityEngine::LayerMask, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_CONFORM_OFFSET))(path, pathTransform, layers, projectionDirection, offset, rayLength, warp);
		}

		static ::FluffyUnderware::Curvy::Generator::CGPath* Conform_1(::UnityEngine::Transform* pathTransform, ::FluffyUnderware::Curvy::Generator::CGPath* path, ::UnityEngine::LayerMask layers, ::UnityEngine::Vector3 projectionDirection, ::System::Single offset, ::System::Single rayLength, ::System::Boolean warp)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGPath*(*)(::UnityEngine::Transform*, ::FluffyUnderware::Curvy::Generator::CGPath*, ::UnityEngine::LayerMask, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CONFORMPATH_CONFORM_1_OFFSET))(pathTransform, path, layers, projectionDirection, offset, rayLength, warp);
		}
	};
}
