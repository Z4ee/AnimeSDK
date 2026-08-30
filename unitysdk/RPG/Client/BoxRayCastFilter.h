#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_784BFD9F40F46C59;

#define RPG_CLIENT_BOXRAYCASTFILTER_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1A107880)
#define RPG_CLIENT_BOXRAYCASTFILTER_DUMPTOLIST_OFFSET UNITYSDK_OFFSET(0x1A107500)
#define RPG_CLIENT_BOXRAYCASTFILTER_FORCEREBUILDHULL_OFFSET UNITYSDK_OFFSET(0x1A107D50)
#define RPG_CLIENT_BOXRAYCASTFILTER_GETVECTOR3_OFFSET UNITYSDK_OFFSET(0x1A107C80)
#define RPG_CLIENT_BOXRAYCASTFILTER_GET_HULLVALID_OFFSET UNITYSDK_OFFSET(0x1A1071A0)
#define RPG_CLIENT_BOXRAYCASTFILTER_ISHIT_OFFSET UNITYSDK_OFFSET(0x1A1077C0)
#define RPG_CLIENT_BOXRAYCASTFILTER_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x1A107610)
#define RPG_CLIENT_BOXRAYCASTFILTER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1A1079E0)
#define RPG_CLIENT_BOXRAYCASTFILTER_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1A107830)
#define RPG_CLIENT_BOXRAYCASTFILTER_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1A107DA0)
#define RPG_CLIENT_BOXRAYCASTFILTER_PREPARE_OFFSET UNITYSDK_OFFSET(0x1A107220)
#define RPG_CLIENT_BOXRAYCASTFILTER_PRINT_OFFSET UNITYSDK_OFFSET(0x1A107A30)
#define RPG_CLIENT_BOXRAYCASTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A107EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxRayCastFilter_TypeDefinitionIndex = 72437;

	class BoxRayCastFilter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* tmpPoints; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* points; // 0x20
		::Class_2_784BFD9F40F46C59<::UnityEngine::Vector2>* hull; // 0x28
		::System::Boolean Isrebulding; // 0x30
		::UnityEngine::Vector3 hitPos; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXRAYCASTFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HullValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXRAYCASTFILTER_GET_HULLVALID_OFFSET))(this);
		}

		::System::Void Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXRAYCASTFILTER_PREPARE_OFFSET))(this);
		}

		::System::Void DumpToList(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXRAYCASTFILTER_DUMPTOLIST_OFFSET))(this, a1);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXRAYCASTFILTER_ISRAYCASTLOCATIONVALID_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsHit(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXRAYCASTFILTER_ISHIT_OFFSET))(this, a1);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXRAYCASTFILTER_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXRAYCASTFILTER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void Print()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXRAYCASTFILTER_PRINT_OFFSET))(this);
		}

		::System::Void DrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXRAYCASTFILTER_DRAWGIZMOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetVector3(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXRAYCASTFILTER_GETVECTOR3_OFFSET))(this, a1);
		}

		::System::Void ForceRebuildHull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXRAYCASTFILTER_FORCEREBUILDHULL_OFFSET))(this);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXRAYCASTFILTER_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}
	};
}
